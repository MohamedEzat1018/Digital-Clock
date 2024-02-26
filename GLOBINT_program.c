/*
 * GLOBINT_program.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Mohamed Ezzat
 */
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "GLOBINT_private.h"
#include "GLOBINT_config.h"
#include "GLOBINT_interface.h"



void GLOBINT_voidEnable(void)
{
	/* Enable Global Interrupt */
	SET_BIT(SREG_REG , GLOB_INT);
}

void GLOBINT_voidDisable(void)
{
	/* Disable Global Interrupt */
	CLR_BIT(SREG_REG ,GLOB_INT );
}

