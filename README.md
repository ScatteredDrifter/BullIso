# BullIso
replacement Board for the Bully, Featuring ISO-Enter


## Status :
- prototypes produced and tested 
- working as intended

## Features : 
- Rp2040 with EEPROM 
- qmk / vial compatible 
- optional pinouts(3) for further adjustments 
- daughterboard-Support 
- MX-Switches 
- production files ready for JLCPCB

## Layout : 
All available layouts are to be seen in the following image: 

![image of available keyboard layouts](/image/keyboard-layout.png)

---

## Firmware ::
pre-compiled file for vial can be found in the **"/firmware"** section.
To enter the bootloader - which is necessary in order to flash a new firmware - press the button next to the encoder on the back of the pcb and plug-it into your keyboard while keeping the button pressed. It should show up as a regular usb-stick in your file explorer now and you can drag the .utf onto this usb-stick. Once done it will restart and use your newly flashed firmware!


## Building your own ::

On the verge to build this keyboard your own?
Below you can find a little guideline on what is required and how to obtain everything:

### Getting PCBs ::
in the directory **production** you can find both the gerber and POS-Files required for assembly.
I usually use JLCPCB for my prototypes, the procedure should be fairly similiar for other manufacturers however, and they require the gerber_buran_pcb.zip and for assembly of all SMD-components also their positions (buran-pos-bottom.csv) and the BOM (buran-BOM.csv) all of which can be found in the **production/assembly** directory.