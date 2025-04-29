# ESPHome Configuration for the LOHAS RGBW and CW/WW Smart Lights

UPDATE: LOHAS has updated the RGBW bulb to use PWM now and includes a fifth channel of warm white.  You know you have the new bulb by the RX/TX pads are missing under the diffuser and the ESP module is sticking up in between the LED board.  You will need to use the RGB+CCT YAML for ESPHome for these.  

The LOHAS LED Bulbs utilize dual channels of warm white and cool white LEDs on the MY9231/MY9291 LED drivers.  We show in ESPHome how to solve this issue with template.  All of the sample configurations used in the video can be found at the GitHub link below.  The Anoop bulb is a dual channel PWM light shown in Tasmota.  We also show how to easily configure the device using the new copy and paste templates of Tasmota.

Video Demostration and Setup - https://www.youtube.com/watch?v=fTb6n6flJIw

### Lights
[LOHAS Color](https://amzn.to/2M9Dzqh)  
[LOHAS CW/WW LED](https://amzn.to/2U8L1Vm)   
[LOHAS 100w Equiv](https://amzn.to/2OhNNaJ) 

[Anoopsyche CW/WW LED](https://amzn.to/2VLE790)  
[Amazon US Link](https://amzn.to/2DDNYI4)

LOHAS ESPHome Configurations and CopyChan component are located in this GitHub Repo.

[Home Assistant Sample MQTT Configurations](https://github.com/digiblur/Sonoff-Tasmota/wiki/Smart-Bulbs)

Tuya Convert Process 2.0 - https://www.youtube.com/watch?v=dyUyewiKpRA
