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

### FFT
In the FFT that can be found in the scopes section, the effects of the low pass filter can be seen on the output.
The sweep down as the frequency increases shows that only the lower frequencies are making it through the filter, and the
remaining high frequencies are beening sorted out.

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
### Low Pass Filter
![Low Pass Filter](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/LowPassFilter.png)
### R2R DAC
![R2R DAC](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/R2R_DAC.png)

## Scopes
### R2R Ladder Output
![R2R Ladder Output](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder1.png)
### R2R Ladder Output w/ 680k Load
![R2R Ladder Output w/ 680k Load](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder-680k.png)
### R2R Ladder Output w/ 1M Load
![R2R Ladder Output w/ 1M Load](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/r2r-ladder-1M.png)
### R2R Ladder Triangle w/ 470k
![R2R Ladder Triangle w/ 470k](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/triangle470k1.png)
### R2R Ladder Triangle w/ 1M
![R2R Ladder Triangle w/ 1M](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/triangle1meg1.png)
### Triangle FFT
![Triangle FFT](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/trianglefft1.png)
### Triangle FFT w/ 1M
![Triangle FFT w/ 1M](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/trianglefft2.png)
### Low pass filter FFT
![Low pass filter FFT](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Precision%20Control/lpffft.png)

