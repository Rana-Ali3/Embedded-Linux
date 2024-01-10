# TASK4 README:

### Why we use static library on avr than dynamic library?

Because if these reasons:

1)We can take it to another computer without fear of missing libraries since the executable has its own copy.

2)They are faster in execution because the functions are within the executable we don't have to look for them

3)If we change a static library, the executables are not affected.

4)They are very effective in small programs