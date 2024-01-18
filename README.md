
### Adafruit Internal File System Format of nRF52 based devices

Download the pre-compiled generated uf2 

Meshtastic_nRF52_factory_erase.uf2

MD5SUM

6f634aed38d276039b89ac6214de7108

or


### Compile with Arduino selecting a Adafruit nRF52 Board eg Nordic nRF82540 DK

![Screenshot_20220506_225929](Screenshot_20220506_225929.png)

### Find the created hex file in your temp folder e.g (under Linux)

```
find /tmp -name Meshtastic_nRF52_factory_erase.ino.hex
```

### Convert the hex file to uf2
______________________________________
```
./uf2conv.py Meshtastic_nRF52_factory_erase.ino.hex -c -f 0xADA52840 -o Meshtastic_nRF52_factory_erase.uf2
```

### Usage

### Open a terminal and connect tio to your nRF52 device
```
tio /dev/ttyACM0
```


### Download the uf2 file and copy it to your nRF52 device

double press the reset button to connect to the the uf2 volume

your nRF52 device will automatically reboot and show the screen below

![image](https://github.com/markbirss/nRF52_Internal_Format/assets/22388007/fe540422-bb41-4eb3-b803-63393b04e147)


Press any key to continue to format your nRF52 device

![image](https://github.com/markbirss/nRF52_Internal_Format/assets/22388007/a40eb2de-6c6d-4166-a4d1-5103668022f0)





