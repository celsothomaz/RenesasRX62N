/*
 * sw_task.h
 *
 *  Created on: 03/05/2013
 *      Author: celso
 */

#ifndef SW_TASK_H_
#define SW_TASK_H_

/* Standard demo includes. */
#include "flash.h"
#include "IntQueue.h"
#include "BlockQ.h"
#include "integer.h"
#include "blocktim.h"
#include "semtest.h"
#include "PollQ.h"
#include "GenQTest.h"
#include "QPeek.h"
#include "recmutex.h"
#include "flop.h"


void sw_task_glcd (void *pvParameters);

#endif /* SW_TASK_H_ */
