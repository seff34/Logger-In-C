#ifndef __LOG__CONTROLLER
#define __LOG__CONTROLLER

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <fcntl.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
#include <dirent.h> 

#define IS_SUCCESS(__rc__) (((int32_t)__rc__) >= 0)
#define IS_FAIL(__rc__) (((int32_t)__rc__) < 0)

#define SUCCESS 0 
#define FAIL -1 

typedef enum
{
    ERROR   = 0,
    WARNING = 1,
    INFO    = 2, 
    DEBUG   = 3, 
}logLevel_t; 
extern logLevel_t logLevel; 

/**
 * @brief Logger by stdout
 * @param [in] selectLogLevel Log Level
 * @param [in] format Printf Format
 * @param  ... Argumans
 */
void logger(logLevel_t selectLogLevel, const char *format,...);

/**
 * @brief Logger by file
 * @param [in] selectLogLevel Log Level
 * @param [in] format Printf Format
 * @param  ... Argumans
 */
void flogger(logLevel_t selectLogLevel, const char *format,...);


#endif