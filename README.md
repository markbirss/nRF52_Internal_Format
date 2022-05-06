
Internal Format of Adafruit Internal File System of nRF52 based devices

![Screenshot_20220506_225929](Screenshot_20220506_225929.png)




Convert the resulting hex file to uf2
./uf2conv.py Meshtastic_nRF52_factory_erase.ino.hex -c -f 0xADA52840; cp flash.uf2 Meshtastic_nRF52_factory_erase.uf2
