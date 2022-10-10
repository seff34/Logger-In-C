
# Logger in C

Logger by File or Stdout with C Standard Libs.

## API Functions

#### Log Level Structure
```c
typedef enum
{
	ASSERT  = 0,
    ERROR   = 1,
    WARNING = 2,
    INFO    = 3,
    DEBUG   = 4,
}logLevel_t;
```

#### Set Log Level
```c
void setLogLevel(logLevel_t logLevel);
```
| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `logLevel` | `logLevel_t` | Set Log Level|


#### Logger by Stdout
```c
#define debugAssert(...) 	debug_printf(ASSERT ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugError(...) 	debug_printf(ERROR  ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugWarning(...) 	debug_printf(WARNING,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugInfo(...) 	    debug_printf(INFO   ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
#define debugf(...) 	    debug_printf(DEBUG  ,__FUNCTION__,__FILE__,__LINE__,__VA_ARGS__)
```
| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `selectLogLevel` | `logLevel_t` | Log Level Selection|
| `format` | `const char *` | Print Format|
| `...` |`all type`   | Print Data|


## Download Code

Clone Project

```bash
  git clone https://github.com/seff34/Logger-In-C
```


  
