# High Power Control

## Tyler Brady & Mike Guiliano

## Background
In some cases, high power is required within a system. This is one thing when the device only requires high power and no control over said high power, however,
when dealing with a control system and high power a problem can arise. Take for example the MSP430 devices which can only supply around 3.3V
and a varying current that tends around the milliAmps. In order to control a system that requires high power with a device that cannot supply said high power
require some form of a buffered switch, such as a relay or a mosfet. One problem with a switch of these forms is that by adding in a extra step,
extra time must be taken for each of these switches to toggle. As a result this section of the lab will be dedicated to testing the difference in time
in these high power control methods.

## Usage
In this section of the lab two different circuits were used. Circuit one revolves around using a relay switch.
In this circuit the G2553 had its PWM output tied to a NMOS gate which controlled the relay's inductor's connection to ground.
Essentally this allows the MSP430 to drive a strong enough signal to switch the relay on and off without killing the MSP430 with the high current 
required to power the relay. Then the speed at which the relay could flip on and off was determined by increasing the frequency of the square wave
toggling the device. The frequency found to produce a square wave which was no longer useable was around 30Hz.
A similar setup was done for the secound except this time with no relay, and instead only a NMOS. It was found that a NMOS has a much
high breakdown speed at around 260KHz. The code used to toggle the 

## Devices
* MSP430G2553
This project was done only on the G2553 because of the issue of high power. In order to avoid any possible problems
of frying the board, the G2553 was used so that a fried chip could be replaced easily.

## Circuits
![Relay Circuit](lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/High Power Control/RelayCircuit.PNG)
![Mosfet Circuit](lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/High Power Control/NMOS_Circuit.PNG)
## Scopes
![Relay 1Hz](lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/High Power Control/Relay.png)
![Relay XXXHz]()
![Mosfet 1Hz](lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/High Power Control/scope_Mosfet.png)
![Mosfet 260KHz](lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/High Power Control/scope_mofet_max.png)