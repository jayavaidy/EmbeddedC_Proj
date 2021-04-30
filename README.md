# Car Heater Monitoring Embedded System

## In Action

### LED Actuator that indicates the status of the heater and presence of the driver

#### LED glows when both the heater is ON and the driver is seated
![ON](src/simulation/bothON.png)

#### LED doesn't glow when 

##### The heater is OFF and the driver is not seated
![OFF](src/simulation/bothOFF.png)

##### Either the heater is not ON or the driver is not present

![OFF1](src/simulation/sw1ON.png)
![OFF2](src/simulation/sw2ON.png)

#### Different frequencies of PWM waves generated depending on the input received by the temperature sensor

##### 20&C - 20% duty cycle
![CRO20](src/20CRO.png)
![RAM20](src/20RAM.png)

##### 25&C - 40% duty cycle
![CRO40](src/40CRO.png)
![RAM40](src/40RAM.png)

##### 29&C - 70% duty cycle
![CRO20](src/70CRO.png)
![RAM20](src/70RAM.png)

##### 20&C - 20% duty cycle
![CRO95](src/90CRO.png)
![RAM95](src/90RAM.png)

#### Serial Output that prints the current temperature values
![UARTOP](src/UARTOP.png)

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/CodeQuality.yml)|[![Cppcheck](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/Compile.yml/badge.svg)](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/Compile.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/643b7ca2b2dc4daba1e700c216bb87d9)](https://app.codacy.com/gh/jayavaidy/EmbeddedC_Proj/dashboard)|


