#ifdef __cplusplus
extern "C"{
#endif
#ifndef __CUSTOM_GPIO_MNEMONICS_H__
#define __CUSTOM_GPIO_MNEMONICS_H__

#define GPIOA_BASE_ADDR 			0x48000000
#define GPIOB_BASE_ADDR				0x48000400
#define GPIOC_BASE_ADDR				0x48000800
#define GPIOD_BASE_ADDR				0x48000C00
#define GPIOE_BASE_ADDR				0x48001000
#define GPIOF_BASE_ADDR				0x48001400

#define GPIO_MODER_ADDR_OFFSET		0x00
#define GPIO_OTYPER_ADDR_OFFSET		0x04
#define GPIO_OSPEEDR_ADDR_OFFSET	0x08
#define GPIO_PUPDR_ADDR_OFFSET		0x0C
#define GPIO_IDR_ADDR_OFFSET		0x1C
#define GPIO_ODR_ADDR_OFFSET		0x14
#define GPIO_BSRR_ADDR_OFFSET		0x18
#define GPIO_LCKR_ADDR_OFFSET		0x1C
#define GPIO_AFRL_ADDR_OFFSET		0x20
#define GPIO_AFRH_ADDR_OFFSET		0x24
#define GPIO_BRR_ADDR_OFFSET		0x28

#define GPIOA_MODER_ADDR			(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)
#define GPIOB_MODER_ADDR			(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)
#define GPIOC_MODER_ADDR			(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)
#define GPIOD_MODER_ADDR			(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)
#define GPIOE_MODER_ADDR			(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)
#define GPIOF_MODER_ADDR			(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_MODER_ADDR_OFFSET)

#define GPIOA_OTYPER_ADDR			(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)
#define GPIOB_OTYPER_ADDR			(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)
#define GPIOC_OTYPER_ADDR			(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)
#define GPIOD_OTYPER_ADDR			(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)
#define GPIOE_OTYPER_ADDR			(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)
#define GPIOF_OTYPER_ADDR			(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_OTYPER_ADDR_OFFSET)

#define GPIOA_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)
#define GPIOB_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)
#define GPIOC_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)
#define GPIOD_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)
#define GPIOE_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)
#define GPIOF_OSPEEDR_ADDR			(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_OSPEEDR_ADDR_OFFSET)

#define GPIOA_PUPDR_ADDR			(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)
#define GPIOB_PUPDR_ADDR			(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)
#define GPIOC_PUPDR_ADDR			(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)
#define GPIOD_PUPDR_ADDR			(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)
#define GPIOE_PUPDR_ADDR			(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)
#define GPIOF_PUPDR_ADDR			(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_PUPDR_ADDR_OFFSET)

#define GPIOA_IDR_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)
#define GPIOB_IDR_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)
#define GPIOC_IDR_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)
#define GPIOD_IDR_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)
#define GPIOE_IDR_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)
#define GPIOF_IDR_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_IDR_ADDR_OFFSET)

#define GPIOA_ODR_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)
#define GPIOB_ODR_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)
#define GPIOC_ODR_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)
#define GPIOD_ODR_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)
#define GPIOE_ODR_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)
#define GPIOF_ODR_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_ODR_ADDR_OFFSET)

#define GPIOA_BSRR_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)
#define GPIOB_BSRR_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)
#define GPIOC_BSRR_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)
#define GPIOD_BSRR_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)
#define GPIOE_BSRR_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)
#define GPIOF_BSRR_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_BSRR_ADDR_OFFSET)

//only gpioa and b have lckr reeg
#define GPIOA_LCKR_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_LCKR_ADDR_OFFSET)
#define GPIOB_LCKR_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_LCKR_ADDR_OFFSET)

#define GPIOA_AFRL_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)
#define GPIOB_AFRL_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)
#define GPIOC_AFRL_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)
#define GPIOD_AFRL_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)
#define GPIOE_AFRL_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)
#define GPIOF_AFRL_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_AFRL_ADDR_OFFSET)

#define GPIOA_AFRH_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)
#define GPIOB_AFRH_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)
#define GPIOC_AFRH_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)
#define GPIOD_AFRH_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)
#define GPIOE_AFRH_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)
#define GPIOF_AFRH_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_AFRH_ADDR_OFFSET)

#define GPIOA_BRR_ADDR				(volatile uint32_t*)(GPIOA_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)
#define GPIOB_BRR_ADDR				(volatile uint32_t*)(GPIOB_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)
#define GPIOC_BRR_ADDR				(volatile uint32_t*)(GPIOC_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)
#define GPIOD_BRR_ADDR				(volatile uint32_t*)(GPIOD_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)
#define GPIOE_BRR_ADDR				(volatile uint32_t*)(GPIOE_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)
#define GPIOF_BRR_ADDR				(volatile uint32_t*)(GPIOF_BASE_ADDR + GPIO_BRR_ADDR_OFFSET)

#define GPIOA_MODER					*GPIOA_MODER_ADDR
#define GPIOB_MODER					*GPIOB_MODER_ADDR
#define GPIOC_MODER					*GPIOC_MODER_ADDR
#define GPIOD_MODER					*GPIOD_MODER_ADDR
#define GPIOE_MODER					*GPIOE_MODER_ADDR
#define GPIOF_MODER					*GPIOF_MODER_ADDR

#define GPIOA_OTYPER				*GPIOA_OTYPER_ADDR
#define GPIOB_OTYPER				*GPIOB_OTYPER_ADDR
#define GPIOC_OTYPER				*GPIOC_OTYPER_ADDR
#define GPIOD_OTYPER				*GPIOD_OTYPER_ADDR
#define GPIOE_OTYPER				*GPIOE_OTYPER_ADDR
#define GPIOF_OTYPER				*GPIOF_OTYPER_ADDR

#define GPIOA_OSPEEDR				*GPIOA_OSPEEDR_ADDR
#define GPIOB_OSPEEDR				*GPIOB_OSPEEDR_ADDR
#define GPIOC_OSPEEDR				*GPIOC_OSPEEDR_ADDR
#define GPIOD_OSPEEDR				*GPIOD_OSPEEDR_ADDR
#define GPIOE_OSPEEDR				*GPIOE_OSPEEDR_ADDR
#define GPIOF_OSPEEDR				*GPIOF_OSPEEDR_ADDR

#define GPIOA_PUPDR					*GPIOA_PUPDR_ADDR
#define GPIOB_PUPDR					*GPIOB_PUPDR_ADDR
#define GPIOC_PUPDR					*GPIOC_PUPDR_ADDR
#define GPIOD_PUPDR					*GPIOD_PUPDR_ADDR
#define GPIOE_PUPDR					*GPIOE_PUPDR_ADDR
#define GPIOF_PUPDR					*GPIOF_PUPDR_ADDR

#define GPIOA_IDR					*GPIOA_IDR_ADDR
#define GPIOB_IDR					*GPIOB_IDR_ADDR
#define GPIOC_IDR					*GPIOC_IDR_ADDR
#define GPIOD_IDR					*GPIOD_IDR_ADDR
#define GPIOE_IDR					*GPIOE_IDR_ADDR
#define GPIOF_IDR					*GPIOF_IDR_ADDR

#define GPIOA_ODR					*GPIOA_ODR_ADDR
#define GPIOB_ODR					*GPIOB_ODR_ADDR
#define GPIOC_ODR					*GPIOC_ODR_ADDR
#define GPIOD_ODR					*GPIOD_ODR_ADDR
#define GPIOE_ODR					*GPIOE_ODR_ADDR
#define GPIOF_ODR					*GPIOF_ODR_ADDR

#define GPIOA_BSRR					*GPIOA_BSRR_ADDR
#define GPIOB_BSRR					*GPIOB_BSRR_ADDR
#define GPIOC_BSRR					*GPIOC_BSRR_ADDR
#define GPIOD_BSRR					*GPIOD_BSRR_ADDR
#define GPIOE_BSRR					*GPIOE_BSRR_ADDR
#define GPIOF_BSRR					*GPIOF_BSRR_ADDR

#define GPIOA_LCKR					*GPIOA_LCKR_ADDR
#define GPIOB_LCKR					*GPIOB_LCKR_ADDR

#define GPIOA_AFRL					*GPIOA_AFRL_ADDR
#define GPIOB_AFRL					*GPIOB_AFRL_ADDR
#define GPIOC_AFRL					*GPIOC_AFRL_ADDR
#define GPIOD_AFRL					*GPIOD_AFRL_ADDR
#define GPIOE_AFRL					*GPIOE_AFRL_ADDR
#define GPIOF_AFRL					*GPIOF_AFRL_ADDR

#define GPIOA_AFRH					*GPIOA_AFRH_ADDR
#define GPIOB_AFRH					*GPIOB_AFRH_ADDR
#define GPIOC_AFRH					*GPIOC_AFRH_ADDR
#define GPIOD_AFRH					*GPIOD_AFRH_ADDR
#define GPIOE_AFRH					*GPIOE_AFRH_ADDR
#define GPIOF_AFRH					*GPIOF_AFRH_ADDR

#define GPIOA_BRR					*GPIOA_BRR_ADDR
#define GPIOB_BRR					*GPIOB_BRR_ADDR
#define GPIOC_BRR					*GPIOC_BRR_ADDR
#define GPIOD_BRR					*GPIOD_BRR_ADDR
#define GPIOE_BRR					*GPIOE_BRR_ADDR
#define GPIOF_BRR					*GPIOF_BRR_ADDR

#define PIN_0						0x00
#define PIN_1						0x02
#define PIN_2						0x04
#define PIN_3						0x06
#define PIN_4						0x08
#define PIN_5						0x0A
#define PIN_6						0x0C
#define PIN_7						0x0E
#define PIN_8						0x10
#define PIN_9						0x12
#define PIN_10						0x14
#define PIN_11						0x16
#define PIN_12						0x18
#define PIN_13						0x1A
#define PIN_14						0x1C
#define PIN_15						0x1E

#endif
#ifdef __cplusplus
}
#endif
