
# Logger in C

Logger by File or Stdout with C Standard Libs.




## API Functions

#### Log Level Structure
```c
typedef enum
{
    ERROR   = 0,
    WARNING = 1,
    INFO    = 2, 
    DEBUG   = 3, 
}logLevel_t; 
```

#### Logger by Stdout
```c
void logger(logLevel_t selectLogLevel, const char *format,...);
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `selectLogLevel` | `logLevel_t` | Log Level Selection|
| `format` | `const char *` | Print Format|
| `...` |`all type`   | Print Data|

#### Logger by Stdout
```c
void flogger(logLevel_t selectLogLevel, const char *format,...);
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `selectLogLevel` | `logLevel_t` | Log Level Selection|
| `format` | `const char *` | Print Format|
| `...` |`all type`   | Print Data|

#### Example Code
```c
#include "logController.h"

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
```


## Download Code

Clone Project

```bash
  git clone https://github.com/seff34/Logger-In-C
```


  
