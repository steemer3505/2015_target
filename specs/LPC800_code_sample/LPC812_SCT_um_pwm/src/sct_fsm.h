#ifndef __SCT_FSM_H__
#define __SCT_FSM_H__

/* Generated by fzmparser version 2.2 --- DO NOT EDIT! */

#include "sct_user.h"

extern void sct_fsm_init (void);

/* macros for defining the mapping between IRQ and events */
#define SCT_IRQ_EVENT_IRQ_state1 (0)
#define SCT_IRQ_EVENT_IRQ_state0 (3)

/* Input assignments */
#define SCT_INPUT_SCT_input0 (0)

/* Output assignments (and their defaults if specified) */
#define SCT_OUTPUT_LED_green (0)
#define SCT_OUTPUTPRELOAD_LED_green (1)
#define SCT_OUTPUT_LED_red (1)
#define SCT_OUTPUTPRELOAD_LED_red (1)
#define SCT_OUTPUT_LED_yellow (2)
#define SCT_OUTPUTPRELOAD_LED_yellow (1)


/* Match register reload macro definitions */
#define reload_match_cycle(value) LPC_SCT->MATCHREL[0].U = value;
#define reload_match_green_OFF(value) LPC_SCT->MATCHREL[1].U = value;
#define reload_match_green_ON(value) LPC_SCT->MATCHREL[2].U = value;
#define reload_match_red_OFF(value) LPC_SCT->MATCHREL[3].U = value;
#define reload_match_red_ON(value) LPC_SCT->MATCHREL[4].U = value;

#endif
