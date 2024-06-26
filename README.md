# NAVIGATION CONTROL SYSTEM - TEST BOARD 
STM32 based flight controller for unmanned drone aircraft. <br />
Created mainly for testing and learning to write firmware. 

I am simultaneously designing a newer version of this controller: branch NAVC_V2. 

## Board
![SYSTEM_KONTROLI_LOTU](https://github.com/aiwachow/DRONE-NAVC-V1-STM32-KICAD/assets/92248273/a846c828-3ee0-4a3a-bc49-8de660e7ef3f)
## Used software: 
![kicadlogo](https://github.com/aiwachow/Micromouse_Hardware/assets/92248273/8c590a70-78c1-4293-bc5e-02a7723171ed) ![stm32cubeideLOGO](https://github.com/aiwachow/Micromouse_Hardware/assets/92248273/35800445-a62c-46c4-b7a9-888d3d31070a)![pythonLOGO](https://github.com/aiwachow/DRONE-NAVC-V1/assets/92248273/dc3bb750-6075-4345-9e61-6819855540be)






## Visualization 
I also made basic 3D attitude visualization in Python. 
![dronPitch](https://github.com/aiwachow/DRONE-NAVC-V1-STM32-KICAD/assets/92248273/4db01ff6-65dd-46d6-b48b-31732e3748ea)

![dronRoll](https://github.com/aiwachow/DRONE-NAVC-V1-STM32-KICAD/assets/92248273/389c8570-1078-4b80-856b-33aead92614f)
### Some theory behind attitude estimation in Polish 
[Attitude_Estimation_Theory_Adam_Iwachów.pdf](https://github.com/aiwachow/DRONE-NAVC-V1/files/14794682/Attitude_Estimation_Theory_Adam_Iwachow.pdf)

## Issues 
Pcb has been manufactured and tested. However this design isn't perfect. the main issues are: <br />
- PCB is quite too large, 
- selected microcontroller is difficult to access and was finally changed to STM32L4 .
