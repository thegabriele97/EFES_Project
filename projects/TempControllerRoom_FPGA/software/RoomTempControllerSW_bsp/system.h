/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'core0' in SOPC Builder design 'soc'
 * SOPC Builder design path: C:/Users/gabri/OneDrive/Desktop/EFES_Project/projects/TempControllerRoom_FPGA/soc.sopcinfo
 *
 * Generated: Sat Dec 26 13:06:58 CET 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x04000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1b
#define ALT_CPU_NAME "core0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x04000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x04000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1b
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x04000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/uart_0"
#define ALT_STDERR_BASE 0x10000020
#define ALT_STDERR_DEV uart_0
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/uart_0"
#define ALT_STDIN_BASE 0x10000020
#define ALT_STDIN_DEV uart_0
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/uart_0"
#define ALT_STDOUT_BASE 0x10000020
#define ALT_STDOUT_DEV uart_0
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "soc"


/*
 * gpio_0 configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_0 altera_avalon_pio
#define GPIO_0_BASE 0x10000040
#define GPIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_0_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_0_CAPTURE 0
#define GPIO_0_DATA_WIDTH 4
#define GPIO_0_DO_TEST_BENCH_WIRING 0
#define GPIO_0_DRIVEN_SIM_VALUE 0
#define GPIO_0_EDGE_TYPE "NONE"
#define GPIO_0_FREQ 50000000
#define GPIO_0_HAS_IN 0
#define GPIO_0_HAS_OUT 0
#define GPIO_0_HAS_TRI 1
#define GPIO_0_IRQ -1
#define GPIO_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_0_IRQ_TYPE "NONE"
#define GPIO_0_NAME "/dev/gpio_0"
#define GPIO_0_RESET_VALUE 0
#define GPIO_0_SPAN 32
#define GPIO_0_TYPE "altera_avalon_pio"


/*
 * gpio_1_adc configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_1_adc altera_avalon_pio
#define GPIO_1_ADC_BASE 0x10000060
#define GPIO_1_ADC_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_1_ADC_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_1_ADC_CAPTURE 0
#define GPIO_1_ADC_DATA_WIDTH 10
#define GPIO_1_ADC_DO_TEST_BENCH_WIRING 0
#define GPIO_1_ADC_DRIVEN_SIM_VALUE 0
#define GPIO_1_ADC_EDGE_TYPE "NONE"
#define GPIO_1_ADC_FREQ 50000000
#define GPIO_1_ADC_HAS_IN 1
#define GPIO_1_ADC_HAS_OUT 1
#define GPIO_1_ADC_HAS_TRI 0
#define GPIO_1_ADC_IRQ -1
#define GPIO_1_ADC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_1_ADC_IRQ_TYPE "NONE"
#define GPIO_1_ADC_NAME "/dev/gpio_1_adc"
#define GPIO_1_ADC_RESET_VALUE 0
#define GPIO_1_ADC_SPAN 32
#define GPIO_1_ADC_TYPE "altera_avalon_pio"


/*
 * gpio_2_pwm0_main configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_2_pwm0_main altera_avalon_pio
#define GPIO_2_PWM0_MAIN_BASE 0x10000080
#define GPIO_2_PWM0_MAIN_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_2_PWM0_MAIN_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_2_PWM0_MAIN_CAPTURE 0
#define GPIO_2_PWM0_MAIN_DATA_WIDTH 14
#define GPIO_2_PWM0_MAIN_DO_TEST_BENCH_WIRING 0
#define GPIO_2_PWM0_MAIN_DRIVEN_SIM_VALUE 0
#define GPIO_2_PWM0_MAIN_EDGE_TYPE "NONE"
#define GPIO_2_PWM0_MAIN_FREQ 50000000
#define GPIO_2_PWM0_MAIN_HAS_IN 1
#define GPIO_2_PWM0_MAIN_HAS_OUT 1
#define GPIO_2_PWM0_MAIN_HAS_TRI 0
#define GPIO_2_PWM0_MAIN_IRQ -1
#define GPIO_2_PWM0_MAIN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_2_PWM0_MAIN_IRQ_TYPE "NONE"
#define GPIO_2_PWM0_MAIN_NAME "/dev/gpio_2_pwm0_main"
#define GPIO_2_PWM0_MAIN_RESET_VALUE 0
#define GPIO_2_PWM0_MAIN_SPAN 32
#define GPIO_2_PWM0_MAIN_TYPE "altera_avalon_pio"


/*
 * gpio_2_pwm0_prescaler configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_2_pwm0_prescaler altera_avalon_pio
#define GPIO_2_PWM0_PRESCALER_BASE 0x100000a0
#define GPIO_2_PWM0_PRESCALER_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_2_PWM0_PRESCALER_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_2_PWM0_PRESCALER_CAPTURE 0
#define GPIO_2_PWM0_PRESCALER_DATA_WIDTH 32
#define GPIO_2_PWM0_PRESCALER_DO_TEST_BENCH_WIRING 0
#define GPIO_2_PWM0_PRESCALER_DRIVEN_SIM_VALUE 0
#define GPIO_2_PWM0_PRESCALER_EDGE_TYPE "NONE"
#define GPIO_2_PWM0_PRESCALER_FREQ 50000000
#define GPIO_2_PWM0_PRESCALER_HAS_IN 0
#define GPIO_2_PWM0_PRESCALER_HAS_OUT 1
#define GPIO_2_PWM0_PRESCALER_HAS_TRI 0
#define GPIO_2_PWM0_PRESCALER_IRQ -1
#define GPIO_2_PWM0_PRESCALER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_2_PWM0_PRESCALER_IRQ_TYPE "NONE"
#define GPIO_2_PWM0_PRESCALER_NAME "/dev/gpio_2_pwm0_prescaler"
#define GPIO_2_PWM0_PRESCALER_RESET_VALUE 0
#define GPIO_2_PWM0_PRESCALER_SPAN 32
#define GPIO_2_PWM0_PRESCALER_TYPE "altera_avalon_pio"


/*
 * gpio_2_pwm1_main configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_2_pwm1_main altera_avalon_pio
#define GPIO_2_PWM1_MAIN_BASE 0x100000c0
#define GPIO_2_PWM1_MAIN_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_2_PWM1_MAIN_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_2_PWM1_MAIN_CAPTURE 0
#define GPIO_2_PWM1_MAIN_DATA_WIDTH 14
#define GPIO_2_PWM1_MAIN_DO_TEST_BENCH_WIRING 0
#define GPIO_2_PWM1_MAIN_DRIVEN_SIM_VALUE 0
#define GPIO_2_PWM1_MAIN_EDGE_TYPE "NONE"
#define GPIO_2_PWM1_MAIN_FREQ 50000000
#define GPIO_2_PWM1_MAIN_HAS_IN 1
#define GPIO_2_PWM1_MAIN_HAS_OUT 1
#define GPIO_2_PWM1_MAIN_HAS_TRI 0
#define GPIO_2_PWM1_MAIN_IRQ -1
#define GPIO_2_PWM1_MAIN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_2_PWM1_MAIN_IRQ_TYPE "NONE"
#define GPIO_2_PWM1_MAIN_NAME "/dev/gpio_2_pwm1_main"
#define GPIO_2_PWM1_MAIN_RESET_VALUE 0
#define GPIO_2_PWM1_MAIN_SPAN 32
#define GPIO_2_PWM1_MAIN_TYPE "altera_avalon_pio"


/*
 * gpio_2_pwm1_prescaler configuration
 *
 */

#define ALT_MODULE_CLASS_gpio_2_pwm1_prescaler altera_avalon_pio
#define GPIO_2_PWM1_PRESCALER_BASE 0x100000e0
#define GPIO_2_PWM1_PRESCALER_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_2_PWM1_PRESCALER_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO_2_PWM1_PRESCALER_CAPTURE 0
#define GPIO_2_PWM1_PRESCALER_DATA_WIDTH 32
#define GPIO_2_PWM1_PRESCALER_DO_TEST_BENCH_WIRING 0
#define GPIO_2_PWM1_PRESCALER_DRIVEN_SIM_VALUE 0
#define GPIO_2_PWM1_PRESCALER_EDGE_TYPE "NONE"
#define GPIO_2_PWM1_PRESCALER_FREQ 50000000
#define GPIO_2_PWM1_PRESCALER_HAS_IN 0
#define GPIO_2_PWM1_PRESCALER_HAS_OUT 1
#define GPIO_2_PWM1_PRESCALER_HAS_TRI 0
#define GPIO_2_PWM1_PRESCALER_IRQ -1
#define GPIO_2_PWM1_PRESCALER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_2_PWM1_PRESCALER_IRQ_TYPE "NONE"
#define GPIO_2_PWM1_PRESCALER_NAME "/dev/gpio_2_pwm1_prescaler"
#define GPIO_2_PWM1_PRESCALER_RESET_VALUE 0
#define GPIO_2_PWM1_PRESCALER_SPAN 32
#define GPIO_2_PWM1_PRESCALER_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK TIMER_0


/*
 * sdram_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_controller_0 altera_avalon_new_sdram_controller
#define SDRAM_CONTROLLER_0_BASE 0x4000000
#define SDRAM_CONTROLLER_0_CAS_LATENCY 3
#define SDRAM_CONTROLLER_0_CONTENTS_INFO
#define SDRAM_CONTROLLER_0_INIT_NOP_DELAY 0.0
#define SDRAM_CONTROLLER_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_CONTROLLER_0_IRQ -1
#define SDRAM_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_CONTROLLER_0_IS_INITIALIZED 1
#define SDRAM_CONTROLLER_0_NAME "/dev/sdram_controller_0"
#define SDRAM_CONTROLLER_0_POWERUP_DELAY 100.0
#define SDRAM_CONTROLLER_0_REFRESH_PERIOD 15.625
#define SDRAM_CONTROLLER_0_REGISTER_DATA_IN 1
#define SDRAM_CONTROLLER_0_SDRAM_ADDR_WIDTH 0x16
#define SDRAM_CONTROLLER_0_SDRAM_BANK_WIDTH 2
#define SDRAM_CONTROLLER_0_SDRAM_COL_WIDTH 8
#define SDRAM_CONTROLLER_0_SDRAM_DATA_WIDTH 16
#define SDRAM_CONTROLLER_0_SDRAM_NUM_BANKS 4
#define SDRAM_CONTROLLER_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_CONTROLLER_0_SDRAM_ROW_WIDTH 12
#define SDRAM_CONTROLLER_0_SHARED_DATA 0
#define SDRAM_CONTROLLER_0_SIM_MODEL_BASE 0
#define SDRAM_CONTROLLER_0_SPAN 8388608
#define SDRAM_CONTROLLER_0_STARVATION_INDICATOR 0
#define SDRAM_CONTROLLER_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_CONTROLLER_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_CONTROLLER_0_T_AC 5.5
#define SDRAM_CONTROLLER_0_T_MRD 3
#define SDRAM_CONTROLLER_0_T_RCD 20.0
#define SDRAM_CONTROLLER_0_T_RFC 70.0
#define SDRAM_CONTROLLER_0_T_RP 20.0
#define SDRAM_CONTROLLER_0_T_WR 14.0


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x10000000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x10000020
#define UART_0_BAUD 4800
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 0
#define UART_0_FREQ 50000000
#define UART_0_IRQ 1
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */