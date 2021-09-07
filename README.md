# Tuya IoTOS Embedded Mcu Demo Wifi Ble stm32_bh1750_wb3s

[English](./README.md) | [中文](./README_zh.md)

## Introduction  

This Demo uses the Tuya smart cloud platform, Tuya smart APP, BH1750and IoTOS Embedded MCU SDK to realize a illuminance acquisition.

The implemented features include:

+ Illuminance Acquisition


## Quick start  

### Compile & Burn
+ Download Tuya IoTOS Embeded Code
+ Execute the Project.uvprojx file
+ Click Compile in the software and complete the download


### File introduction 

```
├── Core
   ├── Src
       │   ├── main.c
       │   ├── gpio.c
       │   ├── i2c.c
       │   ├── usart.c
       │   ├── stm32l4xx_it.c
       │   ├── stm32l4xx_hal_msp.c
       │   ├── BH1750.c
       │   ├── connect_wifi.c
       │   ├── delay.c
    ├── Inc
       │   ├── main.h
       │   ├── gpio.h
       │   ├── i2c.h
       │   ├── usart.h
       │   ├── stm32l4xx_it.h
       │   ├── stm32l4xx_hal_conf.h
       │   ├── BH1750.h
       │   ├── connect_wifi.h
       │   ├── delay.h 
├── Drivers
   ├── CMSIS
        ├── Device
           ├──ST
              ├──STM32L4xx
        ├── Include              
   ├── STM32L4xx_HAL_Driver
        ├── Inc
        ├── Src
└── mcu_sdk
    ├── mcu_api.c
    ├── mcu_api.h
    ├── protocol.c
    ├── protocol.h
    ├── system.c
    ├── system.h
    └── wifi.h
```



### Demo entry

Entry file：main.c

Important functions：main()

+ Initialize and configure MCU USART,IIC,BH1750sensor, etc. All events are polled and judged in while(1)。




### DataPoint related

+ DP point processing: mcu_dp_value_update()

| function name | unsigned char mcu_dp_value_update(unsigned char dpid,unsigned long value) |
| ------------- | ------------------------------------------------------------ |
| dpid          | DP ID number                                                 |
| value         | DP data                                                      |
| Return        | SUCCESS: Success ERROR: Failure                              |



### I/O List  

|    BH1750    |  USART1  | USART2  |
| :----------: | :------: | :-----: |
| PB6 I2C1_SCL | PA9 TXD  | PA2 TXD |
| PB7 I2C1_SDA | PA10 RXD | PA3 RXD |



## Related Documents

  Tuya Demo Center: https://developer.tuya.com/demo



## Technical Support

  You can get support for Tuya by using the following methods:

- Developer Center: https://developer.tuya.com
- Help Center: https://support.tuya.com/help
- Technical Support Work Order Center: [https://service.console.tuya.com](https://service.console.tuya.com/) 

