/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_BAR_H
#define _MOCK_BAR_H

#include "bar.h"
#include "CException.h"

void mock_bar_Init(void);
void mock_bar_Destroy(void);
void mock_bar_Verify(void);




#define tf_ExpectAndReturn(cmock_retval) tf_CMockExpectAndReturn(__LINE__, cmock_retval)
void tf_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define tf_ExpectAndThrow(cmock_to_throw) tf_CMockExpectAndThrow(__LINE__, cmock_to_throw)
void tf_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, CEXCEPTION_T cmock_to_throw);

#endif
