import time
import paho.mqtt.client as mqtt_client
import random
import serial

def get_connection(port):
    ser = serial.Serial(port,timeout=1)
    return ser

def send(ser,message, mesg_len):
    ser.write(message)
    time.sleep(0.1)
    if mesg_len != 0:
        data = ser.readline()
        result = data.decode()
        result = result.strip()
        return (result)

ser = get_connection("COM5")

broker="broker.emqx.io"

def on_message(client, userdata, message):
    data = str(message.payload.decode("utf-8"))
    val = float(data)
    if (val > float(50)):
        send(ser, 'd'.encode(), 0)
    else:
        send(ser, 'u'.encode(), 0)
    print("received message =", data)

client= mqtt_client.Client("isu100123")
client.on_message=on_message

print("Connecting to broker",broker)
client.connect(broker)
client.loop_start()
print("Subcribing")
client.subscribe("esp8266/state")
time.sleep(1800)
client.disconnect()
client.loop_stop()