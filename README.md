# VacuumSensorDesign
A Vacuum Sesnor Design for Automotive applications
I'm too lazy to really write too much here. Basically in my search for telemtry from older cars for tuning and diagnostic purposes, I needed a manifold Vacuum Sensor that can be connected to SBC/MCU. Looking in the marketplace for equiv sensors there are few. and even looking in catalogs for raw sensors for this application there wasn't much in the way of vacuum sensors. the only equiv i found was the https://www.glowshiftdirect.com/vacuum-gauges/ looking at this one after i spent months searching for something i could build myself. shows that i basically picked the same sensor but from honeywell instead of NXP. Plus side for the honeywell sensor is that it doesn't require special housing and mechaincal design to mount the board and have a good seal to the sensor so it can go into a generic enclosure. 

Basic specs
1. Read a vacuum signal from +/- 30psi (+/- 206KPa)
2. Output an protected MCU ADC value (0-4.5v ~2.5v for zero reading ie at atmospheric pressure)  
5. With some Re-calibration and tweaks this design should work for 3.3 ADC inputs 
6. Run on car voltages (12 volt neg ground) 
7. ability to be re-caled in the field if need be

