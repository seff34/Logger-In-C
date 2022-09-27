#include "logger.h"

logLevel_t logLevel;

// ./logController 3 >> output.txt 2>> error.txt
// ./logController 3 >> output.txt 2>&1
// ./logController 3 2>>error.txt  1>>output.txt 2>&1    

int main(int argc, char **argv)
{
    if ( argc != 2 )
    {
        logger(ERROR,"%s <DEBUG LEVEL 0-3>\n",argv[0]);
        return EXIT_FAILURE;
    }
    logLevel = atoi(argv[1]);

    flogger(ERROR,"test %d\n",logLevel); 
    flogger(WARNING,"test %d\n",logLevel);   
    flogger(INFO,"test %d\n",logLevel);  
    flogger(DEBUG,"test %d\n",logLevel);   

    logger(ERROR,"test %d\n",logLevel);   
    logger(WARNING,"test %d\n",logLevel);   
    logger(INFO,"test %d\n",logLevel);   
    logger(DEBUG,"test %d\n",logLevel); 

    return EXIT_SUCCESS;
}