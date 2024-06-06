/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        OSAF405V2
#define MANUFACTURER_ID   OSA

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_ACRO_TRAINER
#define USE_BARO
#define USE_BARO_BMP280
#define USE_DSHOT
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_GPS
#define USE_GPS_PLUS_CODES
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_LED_STRIP
#define USE_MAX7456
#define USE_OSD
#define USE_OSD_SD
#define USE_PINIO
#define USE_SERIALRX
#define USE_SERIALRX_SBUS
#define USE_VTX

#define BEEPER_PIN PC15
#define MOTOR1_PIN PB6
#define MOTOR2_PIN PB7
#define MOTOR3_PIN PB0
#define MOTOR4_PIN PB1
#define MOTOR5_PIN PC8
#define MOTOR6_PIN PC9
#define MOTOR7_PIN PB10
#define MOTOR8_PIN PA15
#define RX_PPM_PIN PA3
#define RX_PWM1_PIN PB15
#define LED_STRIP_PIN PA8
#define UART1_TX_PIN PA9
#define UART2_TX_PIN PA2
#define UART3_TX_PIN PC10
#define UART4_TX_PIN PA0
#define UART6_TX_PIN PC6
#define UART1_RX_PIN PA10
#define UART2_RX_PIN PA3
#define UART3_RX_PIN PC11
#define UART4_RX_PIN PA1
#define UART5_RX_PIN PD2
#define UART6_RX_PIN PC7
#define I2C1_SCL_PIN PB8
#define I2C1_SDA_PIN PB9
#define LED0_PIN PC13
#define SPI1_SCK_PIN PA5
#define SPI2_SCK_PIN PB13
#define SPI3_SCK_PIN PB3
#define SPI1_SDI_PIN PA6
#define SPI2_SDI_PIN PC2
#define SPI3_SDI_PIN PB4
#define SPI1_SDO_PIN PA7
#define SPI2_SDO_PIN PC3
#define SPI3_SDO_PIN PB5
#define CAMERA_CONTROL_PIN PB14
#define ADC_VBAT_PIN PC0
#define ADC_RSSI_PIN PC5
#define ADC_CURR_PIN PC1
#define FLASH_CS_PIN PC14
#define PINIO1_PIN PB11
#define PINIO2_PIN PB2
#define PINIO3_PIN PC12
#define MAX7456_SPI_CS_PIN PB12
#define GYRO_1_EXTI_PIN PC4
#define GYRO_1_CS_PIN PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB6,  1,  0) \
    TIMER_PIN_MAP( 1, PB7,  1,  0) \
    TIMER_PIN_MAP( 2, PB0,  2,  0) \
    TIMER_PIN_MAP( 3, PB1,  2,  0) \
    TIMER_PIN_MAP( 4, PC8,  2,  0) \
    TIMER_PIN_MAP( 5, PC9,  2,  0) \
    TIMER_PIN_MAP( 6, PB10, 1,  0) \
    TIMER_PIN_MAP( 7, PA15, 1,  0) \
    TIMER_PIN_MAP( 8, PB15, 3, -1) \
    TIMER_PIN_MAP( 9, PB14, 3, -1) \
    TIMER_PIN_MAP(10, PA8,  1,  0) \
    TIMER_PIN_MAP(11, PA3,  3, -1)

// dma SPI_MOSI 3 0 # SPI_MOSI 3: DMA1 Stream 5 Channel 0
#define SPI2_TX_DMA_OPT 0
#define ADC1_DMA_OPT 0

#define MAG_I2C_INSTANCE (I2CDEV_1)
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BLACKBOX_DEVICE BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE 130
#define BEEPER_INVERTED
#define FLASH_SPI_INSTANCE SPI3
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI2
#define DASHBOARD_I2C_INSTANCE (I2CDEV_1)
#define PINIO1_CONFIG 1
#define PINIO2_CONFIG 129
#define PINIO3_CONFIG 1
#define PINIO1_BOX 40
#define PINIO2_BOX 41
#define PINIO3_BOX 42
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_1_ALIGN_YAW 900

#define SERIALRX_UART SERIAL_PORT_USART2
#define MSP_UART SERIAL_PORT_UART4
#define ESC_SENSOR_UART SERIAL_PORT_UART5


