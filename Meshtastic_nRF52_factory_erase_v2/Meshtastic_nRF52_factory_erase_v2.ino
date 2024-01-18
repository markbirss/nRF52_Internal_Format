/*********************************************************************
 This is an example for our nRF52 based Bluefruit LE modules

 Pick one up today in the adafruit shop!

 Adafruit invests time and resources providing this open source code,
 please support Adafruit and open-source hardware by purchasing
 products from Adafruit!

 MIT license, check LICENSE for more information
 All text above, and the splash screen below must be included in
 any redistribution
*********************************************************************/

#include <Adafruit_LittleFS.h>
#include <InternalFileSystem.h>
#include <Adafruit_TinyUSB.h> // for Serial

using namespace Adafruit_LittleFS_Namespace;

void enterDfuMode()
{
    enterUf2Dfu();
}

// the setup function runs once when you press reset or power the board
void setup() 
{
  Serial.begin(115200);
  while ( !Serial ) delay(10);   // for nrf52840 with native usb

  Serial.println();
  Serial.println();
  Serial.println("Meshtastic nRF52 Factory Restore v2 18 Jan 2024 - by Mark Birss");
  Serial.println();

  // Wait for user input to run.
  Serial.println("Press any key continue to erase and factory restore your nRF52");
  while ( !Serial.available() ) delay(1);
  Serial.println();
  Serial.println();

  // Initialize Internal File System
  InternalFS.begin();

  Serial.print("Formating ... ");
  delay(1); // for message appear on monitor

  // Format 
  InternalFS.format();

  Serial.println("Done, rebooting device to DFU mode");
  //TinyUSB_Port_EnterDFU();
  enterDfuMode();
}

// the loop function runs over and over again forever
void loop() 
{
  // nothing to do
}
