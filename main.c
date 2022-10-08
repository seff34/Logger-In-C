#include "logger.h"

// ./logController 3 >> output.txt 2>> error.txt
// ./logController 3 >> output.txt 2>&1
// ./logController 3 2>>error.txt  1>>output.txt 2>&1    

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    setLogLevel(DEBUG);

    logger(ERROR  ,"ERROR TEST\n"); 
    logger(WARNING,"WARNING TEST\n");   
    logger(INFO   ,"INFO TEST\n");  
    logger(DEBUG  ,"test \n");   

    flogger(ERROR  ,"ERROR TEST\n"); 
    flogger(WARNING,"WARNING TEST\n");   
    flogger(INFO   ,"INFO TEST\n");  
    flogger(DEBUG  ,"test \n");   

    return EXIT_SUCCESS;
}