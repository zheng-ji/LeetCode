##答题感悟##

* 对余数等于０的要特别对待，比如26

```c
int r = n % 26;
n /= 26;
if (r == 0) {
    str += 'Z';
    n--;
}
```

* 字符可以直接相加

