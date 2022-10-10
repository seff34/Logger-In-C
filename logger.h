#ifndef __LOGGER__H
#define __LOGGER__H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

#define DEBUGGER

typedef enum
{
	ASSERT  = 0,
    ERROR   = 1,
    WARNING = 2,
    INFO    = 3,
    DEBUG    = 4,
}logLevel_t;

/**
 * @brief  Set Debug Level
 * @param  [in] LOG_LEVEL ( ASSERT-ERROR-WARNING-INFO-DEBUG )
 */
void setLogLevel(logLevel_t logLevel);

#define debugAssert(...) 	debug_printf(ASSERT ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugError(...) 	debug_printf(ERROR  ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugWarning(...) 	debug_printf(WARNING,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugInfo(...) 	    debug_printf(INFO   ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugf(...) 	    debug_printf(DEBUG  ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)

/**
 * @brief Logger by stdout
 * @param [in] selectLogLevel Log Level
 * @param [in] format Printf Format
 * @param  ... Argumans
 */
int debug_printf(logLevel_t logLevel,const char* function, const char* file, const int line, const char *format,...);


#endif
