# BullIso

A replacement Board for the Bully, incorporating an ISO-Enter.
You can find the original bully [here](https://www.cbkbd.com/product/bully)
Yet another link to the project: [link](https://github.com/zhol0777/bully-files)

made by ScatteredDrifter ~Evelyn

---

Measurements for the pcb were taken from the available plate-files. 

---

![image of built iso by Elia](/material/images/bullIso_built_elia.jpg)
Image by Elia, whom I designed this for.

## Current Status :
- prototypes produced and tested 
- working as intended

## Features : 
- Rp2040 with EEPROM 
- qmk / vial compatible 
- optional pinouts(3) for further tinkering / features
- daughterboard-Support 
- support for mx-switches 
- production files ready for JLCPCB

## Layout : 
All available layouts are to be seen in the following image: 

![image of available keyboard layouts](/material/images/keyboard-layout.png)

---

## Firmware ::
pre-compiled file for vial can be found in the **"/firmware"** section.
To enter the bootloader - which is necessary in order to flash a new firmware - press the button next to the encoder on the back of the pcb and plug-it into your keyboard while keeping the button pressed. It should show up as a regular usb-stick in your file explorer now and you can drag the .uf2 onto this usb-stick. Once done it will restart and use your newly flashed firmware!


## Building your own ::

On the verge to build this keyboard your own?
For building one yourself you require the following:
- this pcb
- a unified daughterboard ( the old version with Jst-connectors)
- the correct case 
- tadpole mounds ( just like for the original pcb)

### Getting PCBs ::
I've ordered my prototypes at **JLCPCB** because they are easy work with and I've had my previous projects manufactured there. This is not an advertisement neither do I enforce the use of this vendor's service. 

As of now the gerber-, BOM-, and Position-files are tailored towards the use with **JLCPCB**. 
All of them can be found in the following directory: 
- `production/assembly` for both BOM and Positions 
- `production/gerber` for the gerber files 


I usually use JLCPCB for my prototypes, the procedure should be fairly similiar for other manufacturers however, and they require the bulliso_pcb_gerber.zip, which can be found in **/production** and for assembly of all SMD-components also their positions (pcb-bottom-pos.csv) and the BOM (BOM_pcb.csv) all of which can be found in the **/production/assembly** directory.
