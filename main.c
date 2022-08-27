#include "logger.h"

logLevel_t logLevel;

// ./logController 3 >> output.txt 2>> error.txt
// ./logController 3 >> output.txt 2>&1
// ./logController 3 2>>error.txt  1>>output.txt 2>&1    

int main(int argc, char **argv)
{
    (void)argc;
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