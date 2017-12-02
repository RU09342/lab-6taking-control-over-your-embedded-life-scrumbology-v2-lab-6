# Precision Control

## Tyler Brady & Mike Guiliano

## PWM 2
For this section of the lab the code only runs on the 5529. In this section of the lab UART was used as a method
of input into the MSP device to change the PWM speed. By entering a value in hex through realterm, the PWM signal 
could be actively set during run time. The output of the PWM was then run through an active lowpass filter as seen 
below in the circuits section. This is done so that only the carrier frequency of the PWM signal may pass, producing
a DC signal of the averaged of the signal. This is important in regards to translating a digital signal into an analog one.

### Connections
In this code the PWM output is tied to P1.2, while TXD is P3.3 and RXD is P3.4. The output of the PWM can then be connected
to the low pass circuit, and the device can be communcated with over Realterm.

## R2R DAC
The main idea behind an R2R ladder is that it can take in digital binary values, and then using a set up of resistors
such as the one seen below in the circuits section converting the digital values into a analog signal. This process was
done using a incrementing output. By outputting across P6.0 to P6.6 and P2.7 each of the pins acts as a binary bit within
the 8 bit byte. Once the byte hits 255, the byte resets to 0. Each of these pins is then connected to one of the legs of the
R2R ladder producing a triangle function.

### FFT
In the case of the FFT data found, it can be seen below that by adding in a loading effect of 1M ohm the lower frequencies
even out to be similar to all other frequencies.

### Connections
Each of the 8 pins is connected starting from P6.0 to the left most leg, all the way to P2.7 at the rightmost leg.
Then using the supplied code the user can generate a triangle wave.

## Bill Of Materials
* 1k Resistor x 7
* 2k Resistor x 9
* 10k Resistor x 2
* 270k Resistor x 1
* 470k Resistor x 1
* 680k Resistor x 1
* 820k Resistor x 1
* 1M Resistor x 1
* LM324 x 1
* 100nF Capacitor x 1

## Circuits
Low Pass Filter
![Low Pass Filter](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/LowPassFilter.png)
R2R DAC
![R2R DAC](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/R2R_DAC.png)

## Scopes
R2R Ladder Output
![R2R Ladder Output](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder1.png)
R2R Ladder Output w/ 680k Load
![R2R Ladder Output w/ 680k Load](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder-680k.png)
R2R Ladder Output w/ 1M Load
![R2R Ladder Output w/ 1M Load](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder-1M.png)
R2R Ladder Triangle w/ 470k
![R2R Ladder Triangle w/ 470k](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/triangle470k1.png)
R2R Ladder Triangle w/ 1M
![R2R Ladder Triangle w/ 1M](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/triangle1meg1.png)
Triangle FFT
![Triangle FFT](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/trianglefft1.png)
Triangle FFT w/ 1M
![Triangle FFT w/ 1M](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/trianglefft2.png)
Low pass filter FFT
![Low pass filter FFT](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/lpffft.png)

## AUTHORS NOTES DELETE WHEN DONE
[NEEDS THE DELIVERABLE PARTS FOR SCREENSHOTS!! DELETE THIS WHEN FINISHED]
[* Along with what was asked in each of the parts above, for each implementation, you need to generate at least one
 triangle wave from your microntroller. This can be done by simply incrementing and decrementing values that are 
being sent to your circuit. You need to measure the output of each one of these along with taking the FFT on the 
scope of each one. The span on the FFT will need to go from 1kHz to about 50kHz if possible. 
You then need to compare the integrity of each signal by analyzing the difference in frequency components.

The README for this part is going to be mainly about the results of your measurement along with information on the 
implementation. You need to also talk about how you generated the triangle wave, but do not give me a 
dissertation on it. Since this is going to be talking about hardware, you need to place in the README a Bill Of 
Materials listing all hardware used as well as link to a Digikey cart which contains the parts needed in the 
right quantity. You do not need to include things like your F5529 or the breadboard or wires.]
* The above conditions need to be set, and a good read over needs to be done. Also some light fluffing could be
useful as well.