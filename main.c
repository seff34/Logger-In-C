#include "logger.h"

logLevel_t logLevel;

int main(int argc, char **argv)
{
    if ( argc != 2 )
    {
        printf("Parameter Error < Debug Level 0 - 3 >\n");
        return EXIT_FAILURE;
    }
    logLevel = atoi(argv[1]);

    flogger(ERROR,"test %d",logLevel); 
    flogger(WARNING,"test %d",logLevel);   
    flogger(INFO,"test %d",logLevel);  
    flogger(DEBUG,"test %d",logLevel);   

    logger(ERROR,"test %d",logLevel);   
    logger(WARNING,"test %d",logLevel);   
    logger(INFO,"test %d",logLevel);   
    logger(DEBUG,"test %d",logLevel); 

    return EXIT_SUCCESS;
}