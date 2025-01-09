# Day 2 notes
## learning objectives
* Define "Algorithm" in your own words
* Explain the linear search algorithm in your own words
* Explain the binary
* Explain the jump search algorithm
* Define/Describe 'Big-O' notation & how it is used in algorithm selection

## Linear Search Algorithm
| 7 | 12 | 98 | 5 | 14 | 18| 1 | 21 |
 | - | -------------- | -------------- |-------------|--|--|--|--|
 | $\frac{1}{N}$ | $\frac{1}{N}$ | $\frac{1}{N}$ | $\frac{1}{N}$| $\frac{1}{N}$ | $\frac{1}{N}$ | $\frac{1}{N}$ | $\frac{1}{N}$
  

Imagine you have N number of items how many checks would there be to find a number

#### Best: one comparison | BigO notation: 1
#### Avg: $\frac{N+1}{2}$ comparisons | BigO notation: O(n)
#### Worst: N number of comparisons | BigO notation: N

$\frac{1}{N} * \sum^{N}_{1}$

$\frac{1}{N} * \frac{(N+1)}{2} * N = \frac{N+1}{2}$

BigO$(\frac{n+1}{2})$

O(n)


## Binary Search Algorithm

For a binary search algorithm to work it must be sorted

| 1 | 5 | 7 | 14 | 17 | 18 | 21 | 98 |
|---|---|---|----|----|----|----|----|

V? 

* set index = (max + min)/2 (int div)
* compare V to value at index

```python
    if V > value:
      set min = index + 1
    elif v < value:
      set max = index - 1
    else:
      return true
```
