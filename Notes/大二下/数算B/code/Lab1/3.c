/* #include <stdio.h>

int numbers(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else {
        return numbers(n-1)+numbers(n-2);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    int a;
    for(int i=0;i<T;i++)
    {
        scanf("%d",&a);
        printf("%d\n",numbers(a));
    }
} */

/* #include <stdio.h>
int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int first = 1, second = 2, third;
    for (int i = 3; i <= n; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}

int main() {
    int T, n;
    scanf("%d", &T); 
    while (T--) {
        scanf("%d", &n); 
        printf("%d\n", climbStairs(n));
    }
    return 0;
} */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float heights[n];
    int dp[n], maxLength = 0;

    // 输入同学们的身高
    for (int i = 0; i < n; i++) {
        scanf("%f", &heights[i]);
    }

    // 初始化dp数组
    for (int i = 0; i < n; i++) {
        dp[i] = 1; // 每个同学单独成为一个子队列
    }

    // 动态规划计算最长子队列
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (heights[j] >= heights[i]) {
                dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
            }
        }
        maxLength = maxLength > dp[i] ? maxLength : dp[i];
    }

    // 输出结果
    printf("%d\n", maxLength);

    return 0;
}

