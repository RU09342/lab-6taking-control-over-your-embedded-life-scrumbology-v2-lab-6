# Open Loop Control

## Tyler Brady & Mike Guiliano

## Background
An open loop system is a system in which an input is given, but no feed back comes back. This means the system cannot
adjust for any outside forces, as the only information it has is what it is initally given by the user. For this specific
section of the lab, the main focus is on creating a system that can adjust a fan speed so that data can be gathered on the
effects of the fan speed on the temperature of a voltage regulator. 

## Board Choice
The 5529 was the chosen board for this setup, as the code was already created to send values through UART and that was
all that was needed within this open loop system.

## The system
The system itself was created using a collection of smaller subsystems. Overall the entire circuit contains a total of
three seperate circuits that boil down to being the regulator circuit, the fan control, and the temperature sensor.
The first of the three subcircuits is the regulator, this circuit consists of a voltage regulator and a power resistor.
The main purpose of this circuit is to drive enough current through the power resistor to be able to heat it to high
temperatures quickly, but also without destroying the device. This was done using a 100 Ohm / 5W power resistor and 
approximately 19V. This allowed the regulator to heat up quickly, but still be cooled by the fan. The secound circuit
consisted of the fan control. This circuit is similar to those used in the high power section, using a simple mosfet
to control the fan's connection to ground by the output of the PWM from the 5529. The final segment of the circuit consisted
of the temperature sensor, which used the LM35 temperature regulator attached to the metal plate of the voltage regulator
to change an input voltage and give readings to an attached DMM. By combining the three circuits, as well as the code from
the precision control,  the PWM of the fan was changable on the fly, and various measurements of the effect of different PWM
speeds on temperature could be taken.

## Data
In the data collection steps, data was taken at 10C intervals rather than the specified 5C intervals due to little changes at each of
the steps in addition to taking data for three different systems. The Data was taken using different input voltages to the fan and the voltage regulator,
as well as different distances. Overall three different data sets were taken to find a more optimal setup for closing the loop later on.

### 20V Across Fan and Regulator
| PWM           | Temperature C°|
| ------------- | ------------- |
| 0%            | 174.83°C      |
| 10%           | 85.4°C        |
| 20%           | 76.94°C       |
| 30%           | 72.51°C       |
| 40%           | 68.48°C       |
| 50%           | 66.06°C       |
| 60%           | 63.65°C       |
| 70%           | 61.23°C       |
| 80%           | 58.81°C       |
| 90%           | 58.01°C       |
| 100%          | 58.01°C       |


### 18V Across Fan and Regulator w/ Paperclip heatsink
|	18V w/ Paperclip        |         19V w/ Paperclip      |
|-------------------------------|-------------------------------|
| PWM           | Temperature C°| PWM           | Temperature C°|
| ------------- | ------------- | ------------- | ------------- |
| 0%            | 81.37°C       | 0%            | 88.62°C       |
| 10%           | 48.98°C       | 10%           | 49.14°C       |
| 20%           | 45.92°C       | 20%           | 45.92°C       |
| 30%           | 43.50°C       | 30%           | 43.50°C       |
| 40%           | 41.89°C       | 40%           | 41.89°C       |
| 50%           | 40.28°C       | 50%           | 40.28°C       |
| 60%           | 38.26°C       | 60%           | 38.51°C       |
| 70%           | 37.06°C       | 70%           | 37.25°C       |
| 80%           | 36.25°C       | 80%           | 36.25°C       |
| 90%           | 36.09°C       | 90%           | 35.44°C       |
| 100%          | 35.77°C       | 100%          | 35.44°C       |


### 19V Across Fan and Regulator w/ Paperclip heatsink
| PWM           | Temperature C°|
| ------------- | ------------- |
| 0%            | 88.62°C       |
| 10%           | 49.14°C       |
| 20%           | 45.92°C       |
| 30%           | 43.50°C       |
| 40%           | 41.89°C       |
| 50%           | 40.28°C       |
| 60%           | 38.51°C       |
| 70%           | 37.25°C       |
| 80%           | 36.25°C       |
| 90%           | 35.44°C       |
| 100%          | 35.44°C       |

In the end the data set chosen was the final one. This was the data set with the best deviation in temperatures, allowing the system to climb to 90°C and hold stable at 35°C.

## Equation control
By using the data found in testing different fan PWM values, an equation was found that once implemented to the system could take a °C value and convert it into a PWM value to attempt to hold the value stable.
The equations were solved in segments 

## Usage
While this system may not be the most practical, due to the heavy limitations of the effects of the outside world, 
this system is extreamly useful when gathering data to better understand a connected systems affects on the temperature
of the voltage regulator. Allowing for useful information to be gathered to finally close the loop to the system. In order to
connect the system correctly, the schematics below show each of the subcircuit setups. When connecting the board, the PWM pin
specified in the code is connected to the gate of the NMOS, while the UART cables are connected to their corresponding pins also 
documented in the code file. No other connections to the board are needed as the DMM will handle temperature readings. The 
connection for the DMM consists of connecting the positive connection to the output of the LM35, and the negative to ground.

## Circuit
### Open Loop Circuit
![Open Loop Circuit](https://github.com/RU09342/lab-6taking-control-over-your-embedded-life-scrumbology-v2-lab-6/blob/master/Open%20Loop%20Systems/OpenloopSchematic.PNG)

## Data Graphs
### 20V 
![20V]()
### 18V w/ paperclip
![18V]()
### 19V w/ paperclip
![19V]()

## AUTHORS NOTES DELETE WHEN FINISHED
* This still needs the circuit schematics and a good read over for any bad grammer, or poor structure.
Also feel free to add anything you think might be good!
* Also WE NEED THE DATA FROM KEVIN! He has all of the temperature data in an excel sheet. Can be added as a table
though im not sure how to do this, or simply a screenshot like in the previous sections.
*Needs graphs of the temperature!