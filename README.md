# Car Heater Monitoring Embedded System

## In Action

### LED Actuator that indicates the status of the heater and presence of the driver

#### LED glows when both the heater is ON and the driver is seated
![ON](simulation/bothON.png)

#### LED doesn't glow when 

##### The heater is OFF and the driver is not seated
![OFF](simulation/bothOFF.png)

##### Either the heater is not ON or the driver is not present

![OFF1](simulation/sw1ON.png)
![OFF2](simulation/sw2ON.png)

#### Different frequencies of PWM waves generated depending on the input received by the temperature sensor

##### 20&C - 20% duty cycle
![CRO20](20CRO.png)
![RAM20](20RAM.png)

##### 25&C - 40% duty cycle
![CRO40](40CRO.png)
![RAM40](40RAM.png)

##### 29&C - 70% duty cycle
![CRO20](70CRO.png)
![RAM20](70RAM.png)

##### 20&C - 20% duty cycle
![CRO95](90CRO.png)
![RAM95](90RAM.png)

#### Serial Output that prints the current temperature values
![UARTOP](UARTOP.png)

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/CodeQuality.yml)|[![Cppcheck](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/Compile.yml/badge.svg)](https://github.com/jayavaidy/EmbeddedC_Proj/actions/workflows/Compile.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/643b7ca2b2dc4daba1e700c216bb87d9)](https://app.codacy.com/gh/jayavaidy/EmbeddedC_Proj/dashboard)|


