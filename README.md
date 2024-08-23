# Z4_E85_E86_retrofit_Alpine_i905D-F
This project is meant to document the retrofit of the Alpine_i905D-F stereo in a Z4 E85 E86 with existing CID

## The Display
The Alpine kit is provided with a 9 inches display with touchscreen in its casing, the provided display does not fit in the orignal outer case of the Z4 E85 CID, therefore, I'm using a 8 inches display sourced on Aliexpress

After a 3D scan of the outer case of the CID, I designed 3D parts while trying to keep the original shapes of the CID. See images

This involves the dissasembly of the 9 inches display in the Alpine kit to retreive the control PCB. Below are the parts needed for this first point

- 8 inches display: C080EAN01.0 (Same manufacturer and resolution as the 9 inches display)
- Alpine kit: https://www.alpine-electronics.fr/p/Products/freestyle-9-inch-navigation-system/i905d-f
- CID (Central information display) BMW Z4 E85/E86 part number: 65509169175
- 40 pins extension PCB (see PCBs)
- 3D printed parts (see STLs)
- The touchscreen function of the screen has not been addressed (need to do some reverse engineering to make it work with a smaller touchscreen)

## Stereo Fascia
Same as the above, the original part has been scanned and designed a custom fascia for the Alpine stereo buttons and the Gauge.S implementation (https://github.com/handmade0octopus/gauge.s-sorek.uk)

See images, this part has been printed in SLS but can be printed in FDM if splited in the middle

## PCB extension 26 Pins from the instrument cluster
This PCB with its soldered parts allows me to run the Gauge S and grab the T15 and T30 (Ignition Signal and Permanent 12V) from the car to power the other PCB meant to control the stepper motor

## PCB stepper motor control
This PCB with an Arduino Uno and a stepper driver A4988, mimics the original behavior
- Ignition ON = Opens the display
- Ignition OFF = Closes the display
- Original buttons to control the display have not been implemented yet

## To do list
- A working Touchscreen
- Improve the pivot mecanism (too much play and uses a belt from the motor to be driven)
- Reduce the noise of the stepper motor (nema 17 with a 10:1 gearbox)
- Add support for the original buttons
- Documentation (Complete BOM, how to print and assemble)


## Video of the current status in the car

[![Watch the video](https://img.youtube.com/vi/eJ5ha1z3iYY/maxresdefault.jpg)](https://youtu.be/eJ5ha1z3iYY)
