# Firmware Components

Details of firmware project.
| Files				| Description						                                                    |
|:------------------------------|:--------------------------------------------------------------------------|
| NUCLEO-WL55JC1-Templates	    | Folder containing template projects for NUCLEO-WL55JC1 development board and drivers (BSP) for new end device project creation.  |
| STM32 LoRaWAN Gateway         | Configurations of LoRaWAN gateway                                         |

Typical LoRaWAN infrastruture is composed by end devices, LoRaWAN gateways, LoRaWAN network server and application server. Following, relevant stuff:
- Uplink (data from end device to LoRaWAN network server) is forwarded by all the gateways registered in the network. 
- Downlink (data from LoRaWAN network server to end device) is forwarded by one gateway to the desired end device. The gateway is chosen by the LoRaWAN network server.
- End devices implemented with NUCLEO-WL55JC1 support A, B and C LoRaWAN device classes. 
- LoRaWAN network server: to build a LoRaWAN infrastruture all the gateways and end devices must be resgistered to the Gotthard private LoRaWAN network.
- Ideally, software team should create a Gotthard docker-based server anbd provide server address.