# Chapter 1

This is the first chapter of the book. The code compiled is a hello world program in C language.

## Create the project

1.Create a new project in the folder `chapter_1`

2.Add a new file `hello.c` in a folder called src with the following content:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

```

3.Add another folder called include for any header files you may need.

## Compile the project

To compile the project, run the following command:

```bash
Cmake build
```

this will produce an output that will looks something like this

```bash
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /Users/sudofr/Documents/Projects/Coding/the_c_programming_language/build
```

4.Move to the build directory, where the Makefile is located:

```bash
cd build
``` 

5.Run the following command to compile the project:

```bash
make
```

6.This produces the executable file `hello` in the build directory. The name of the executable is same as what was suggested by the Cmake *add_executable* command. Run the following command to execute the program:

```bash
./hello
``` 

7.The output will be:

```bash
Hello, World!
```

8.The project is now compiled and executed successfully.

## Conclusion

Although this is a simple program, it is a good starting point for learning C programming. The next chapter will cover more advanced topics.

We have successfully compiled and executed the hello world program in C language. We used Cmake to generate the Makefile and then compiled the project using the Makefile. The output of the program was `Hello, World!`. Going the trouble of setting up the project and compiling it will help you understand the basics of C programming and how to compile a project using Cmake and Makefile.

&copy; 2025 The Short Epoch LLC. All rights reserved.
