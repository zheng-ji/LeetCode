##答题感悟##

* 经典的动态规划问题,得出的方程式

```
fn = f(n-1) + f(n-2);
```
* 起初如下写法会超时

```c
int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return climbStairs(n-1) + climbStairs(n-2);
}

```

* 于是我们用上了打表，让数据不重复计算，写入vector,待下次使用

```c
int climbStairs(int n) {
    vector<int> res(n+1);
    res[0] = 1;
    res[1] = 1;

    for (int i = 2; i <= n; i++) {
        res[i] = res[i-1] + res[i-2];
    }
    return res[n];
}
```
