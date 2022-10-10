#include "logger.h"

// ./logController 3 >> output.txt 2>> error.txt
// ./logController 3 >> output.txt 2>&1
// ./logController 3 2>>error.txt  1>>output.txt 2>&1    

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    setLogLevel(DEBUG);

    debugError("ERROR TEST\n"); 
    debugWarning("WARNING TEST\n");   
    debugInfo("INFO TEST\n");  
    debugf("test \n");   

    return EXIT_SUCCESS;
}
