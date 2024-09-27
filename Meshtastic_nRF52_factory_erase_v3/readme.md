# Meshtastic NRF52 Factory Erase
## Version 3

### Check SoftDevice Version as follows:
Double press "reset" and confirm which SoftDevice your nRF52 device is running by viewing contents of **INFO_UF2.TXT**

e.g
````
UF2 Bootloader 0.4.2 lib/nrfx (v2.0.0) lib/tinyusb (0.10.1-293-gaf8e5a90) lib/uf2 (remotes/origin/configupdate-9-gadbb8c7)
Model: WisBlock RAK4631 Board
Board-ID: WisBlock-RAK4631-Board
Date: Dec  1 2021
SoftDevice: S140 6.1.1   <----------------------------------------------------------------  THIS IS YOUR SoftDevice

UF2 Bootloader 0.4.3
Model: WisBlock RAK4631 Board
Board-ID: WisBlock-RAK4631-Board
Date: May 20 2023
Ver: 0.4.3
SoftDevice: S140 6.1.1   <----------------------------------------------------------------  THIS IS YOUR SoftDevice
````

### Use the appropriate Meshtastic_nRF52_factory_erase uf2 file

Meshtastic_nRF52_factory_erase_v3_S140_6.1.1.uf2 for devices with SoftDevice: S140 6.1.1 MD5SUM a7d97d344d411d79bc45d21555f968c4

[Link] - https://github.com/markbirss/nRF52_Internal_Format/raw/refs/heads/main/Meshtastic_nRF52_factory_erase_v3/S140_6.1.1/Meshtastic_nRF52_factory_erase_v3_S140_6.1.1.uf2

Meshtastic_nRF52_factory_erase_v3_S140_7.3.0.uf2 for devices with SoftDevice: S140 7.3.0 MD5SUM d864c57b83efad923b8274f92dc22a00

[Link] - https://github.com/markbirss/nRF52_Internal_Format/raw/refs/heads/main/Meshtastic_nRF52_factory_erase_v3/S140_7.3.0/Meshtastic_nRF52_factory_erase_v3_S140_7.3.0.uf2

[Note] -  The nrf52_factory_erase port has now been added to the meshtastic github as a plaftformio project
