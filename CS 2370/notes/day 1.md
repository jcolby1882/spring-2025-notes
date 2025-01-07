# Day 1 notes

### Important syntax

#### #include

allows to import external code

#### iostream

The library that allows for input and output in the code

```c++
#include <iostream>
```

#### int main()

int main is the main function it expects to return an integer

``` c++
int main(){}
```

#### std::cout

std refers to the standard.
cout stands for console out. It prints to the console

#### endl

used to end the line of a program

```c++
std::cout << "hello world" << endl;
```

#### std::cin

cin stands for console input. It takes an input from a console

#### int xxxx

int defines a variable as as an integer and xxxx is the name of the variable

```c++
int xxxx;
std::cin >> xxxx;
```

#### print variables with std::cout

```c++
std::cout << "the value of xxxx is: " << xxxx << endl;
```

#### Full program

```c++
#include <iostream>

int main(){
  int xxxx
  std::cout << "Hello World" << endl;
  std::cin >> xxxx;
  std::cout << "The value of xxxx is: " << xxxx << endl;
}
```
