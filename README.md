# C-SimpleStackLibrary
Hi I created this simple stack library using linked lists. I also included a demo to see how it works.

### Usage
The usage is simple, compile the source code with the Makefile and run the program passing as arguments the content of the Demo.txt file.
```shell
$ make -C Source/
$ ./Main $(< Demo.txt)
```
The code will iterate over all the arguments and if it finds a number it will push it to the stack but if a hyphen is founded it will pop the last element of the stack.
