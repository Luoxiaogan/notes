# 5a-Part1 作业

---

+ $n$阶循环群$G$，自同态环$End(G)\cong G\cong \mathbb{Z}_n$
+ 交换群$\mathbb{Z}_n\oplus \mathbb{Z}_n$，自同态环$End(\mathbb{Z}_n\oplus \mathbb{Z}_n)\cong M_2(\mathbb{Z}_n)$

---

+ $a$在环$R$中幂零，那么$(1-a)$可逆

> $(1-a)(1+a+...+a^{m-1})=1$

---

+ 四元数体(除环)$H$的中心$Z(H)=\{aE|a\in \mathbb{R}\}$

---

+ 环$\mathbb{Z}_n$中，$(k,n)\neq 1 \iff$ $\overline{k}$在$\mathbb{Z}_n$中是零因子

>环$\mathbb{Z}_n$中，$\overline{k}$是幂零元$\Rightarrow \overline {k}$不是可逆元$\iff \overline{k}$是零因子$\iff (k,n)\neq 1$

>$\overline{k}$幂零$\iff \exists m \in \mathbb{N}_+, n \mid k^m$ $\iff k \mid n$ 且$k$ 含有$n$的所有素因子

> 例子：$\mathbb{Z}_{200}, 200=2^35^2$，那么，幂零元有$\overline{10},\overline{20},\overline{80},\overline{50},\overline{100},\overline{200}$

---

3.找一个交换环$R$，使得$x^2=1$在其中有4个解。进一步，找一个交换环$R$，使得$x^2=1$在其中有无穷个解

+ $\mathbb{Z}_8$，四个解
+ $\oplus_{i=1}^{\infty} \mathbb{Z}_{p_i}, p_i$是从$2$开始的递增的素数，无穷个解

---

考虑一个更加一般的问题：$x^2=1$在$\mathbb{Z}_n$中解的个数

$n=\Pi_{i=1}^s p_i^{v_i}$，根据中国剩余定理，问题等价于
$$x^2=1 (\mod p_i^{e_i}),i=1,..,s$$
故考虑：
$$x^2\equiv 1 (\mod p^v)$$
首先，$x=1,-1$是所有$p$的解，所以至少有两个解
并有下列结果：

+ $p \geq 3$, only 2 solutions
+ $p=2, v\geq 3$, 4 solutions
+ $p=2, v=2$, 2 solutions
+ $p=2, v=1$, 1 solution, because $1=-1$

to comfirm the first statement, consider $x^2\equiv 1 (\mod p^v), p\geq 3$, we have $(p^v,x-1)\neq1, (p^v, x+1)\neq1$, so $x-1 \mid p^v, x+1 \mid p^v$, so $x=1,-1$

each combination of solutions modulo the prime-powers will uniquely determine a solution mod $n$

> $w(n)$是$n$的不同素因子的个数
> + $n$是奇数，解的个数是$2^{w(n)}$
> + $n$是偶数，$v \geq 3$，解的个数是$2^{w(n)+1}$ 
> + $n$是偶数，$v =2$，解的个数是$2^{w(n)}$ 
> + $n$是偶数，$v =1$，解的个数是$2^{w(n)-1}$ 

---