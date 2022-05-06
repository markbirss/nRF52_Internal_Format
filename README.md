
### Internal Format of Adafruit Internal File System of nRF52 based devices

### Compile with Arduino selecting a Adafruit nRF52 Board eg Nordic nRF72540 DK

![Screenshot_20220506_225929](Screenshot_20220506_225929.png)

### Find the created hex file in your temp folder e.g (under Linux)

```
find /tmp -name Meshtastic_nRF52_factory_erase.ino.hex
```

#Convert the resulting hex file to uf2
______________________________________
```
./uf2conv.py Meshtastic_nRF52_factory_erase.ino.hex -c -f 0xADA52840; cp flash.uf2 Meshtastic_nRF52_factory_erase.uf2
```
