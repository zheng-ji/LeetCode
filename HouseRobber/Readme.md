##答题感悟##

* 这是一条DP的题目，求数组中不相邻的最大和

* Dp[i] 表示到达i索引的时候得到的最大和，得到的动规方程是

```c
Dp[i] = max(Dp[i-1], max(Dp[i-2] + nums[i]))
```

* 初始化Dp[0], Dp[1]

```
Dp[0] = nums[0]
Dp[1] = max(num[0], nums[1])
```

* 最终返回Dp[i], 也就是最后一个元素
