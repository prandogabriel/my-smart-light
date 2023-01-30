# Dev Duck

![duck](https://github.com/macl-spindance/devduck/blob/main/hardware/duck-on.jpg?raw=true)

It's a duck. It connects to AWS. It lights up on command for 10 seconds. 

## Instructions

Checkout the `devduck` branch.

Change directories to `examples/mqtt/tls_mutual_auth`

In the AWS IoT console, create a thing and generate a certificate. 

Download and place the following files in the certs folder.

```
├── certs
│   ├── client.crt
│   ├── client.key
│   └── root_cert_auth.pem
```

Set Up esp-idf tools

```source ~/[PATH TO ESP-IDF]/esp-idf/export.sh```

Connect the ESP32 module and find the serial port

```ls /dev/cu.usb*```

Set the target

```idf.py set-target esp32```


Configure the example. **Set the lambda URL**

```idf.py menuconfig```

Build 

```idf.py build```

Flash
```idf.py -p PORT [-b BAUD] flash```

Monitor the serial port

```idf.py -p PORT monitor```


# ESP-AWS-IoT

- Please refer to https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html for setting up ESP-IDF
- This framework supports multiple ways to securely store the PKI credentials.
  - The default method is to use PKI credentials which are embedded in the binary, using the certs from the `certs/` in every example. 
  - For using Secure Element (ATECC608A), you will need to use [esp-cryptoauthlib](https://github.com/espressif/esp-cryptoauthlib#how-to-use-esp-cryptoauthlib-with-esp-idf).
  - For using Digial Signature Peripheral (Available on the ESP32-C3, ESP32-S2 and ESP32-S3), you will need to use [esp_secure_cert_mgr](https://github.com/espressif/esp_secure_cert_mgr).
