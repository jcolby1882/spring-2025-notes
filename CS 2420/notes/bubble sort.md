# Day 3 notes

## objectives

- describe bubble sort algorithm
- Identify the big-O efficiency
- Describe the requirements of Project 3

## Bubble Sort

### unordered list

 | 69 | 145 | 70 | 12 | 99 | 1500 | 14 | 2 |
 | -- | --- | -- | -- | -- | ---- | -- | - |
 | 69 | 70  |145 | 12 | 99 | 1500 | 14 | 2 |
 | 69 | 70  | 12 |145 | 99 | 1500 | 14 | 2 |
 | 69 | 12  | 70 |145 | 99 | 1500 | 14 | 2 |
 | 12 | 69  | 70 | 145 | 99 | 1500 | 14 | 2 |

 Bubble sort will go through each item, determine if the value in front of it is larger and swap the two values if it is
 .

#### Sudo code

``` python

set index = 1
while(index < lenght):
    if val@ i < val@ i-1:
      swap
    else
      break
  index++
```

#### Worst case equation

$(N-1)*(N/2)$

$\frac{N^2}{2} - \frac{N}{2}$

Big-O: $N^2$

#### Average case

$\frac{N^2}{4} - \frac{N}{4}$

Big-O: $N^2$
