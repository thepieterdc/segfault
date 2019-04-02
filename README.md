# segfault
C application that segfaults randomly

## Usage
```
./segfault seconds_before_segfault
```

Replace `seconds_before_segfault` by an integer, indicating the number of seconds to sleep before segfaulting. This argument is optional, if no argument is provided, the application will segfault immediately after starting. The following example will cause a segfault after 5 seconds:

```
./segfault 5
```