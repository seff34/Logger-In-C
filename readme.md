
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

#### Set Log Level
```c
void setLogLevel(logLevel_t LOG_LEVEL);
```
| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `LOG_LEVEL` | `logLevel_t` | Set Log Level|


#### Logger by Stdout
```c
void logger(logLevel_t selectLogLevel, const char *format,...);
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `selectLogLevel` | `logLevel_t` | Log Level Selection|
| `format` | `const char *` | Print Format|
| `...` |`all type`   | Print Data|

#### Logger by File( yyyy_mm_dd_App.log )
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
#include "logger.h"

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
```


## Download Code

Clone Project

```bash
  git clone https://github.com/seff34/Logger-In-C
```


  
