//*****************************************************************************
//
//! \file main.c
//! \brief Example main.
//! \version 1.0
//! \date 9/1/2011
//! \author CooCox
//! \copy
//!
//! Copyright (c) 2009-2011 CooCox.  All rights reserved.
//
//*****************************************************************************
#include "uc1701.h"
#include "xhw_ints.h"
#include "xhw_nvic.h"
#include "xhw_memmap.h"
#include "xhw_types.h"
#include "xdebug.h"
#include "xcore.h"
#include "xsysctl.h"
#include "xhw_sysctl.h"
#include "xhw_gpio.h"
#include "xgpio.h"
#include "xhw_uart.h"
#include "xuart.h"

extern void UC1701DispalyExample(void);

int main(void)
{     
    UC1701DispalyExample();

    while(1);
};
