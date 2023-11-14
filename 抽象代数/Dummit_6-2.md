## Dummit 6.2

### Remarks

1.有限$p$群$G$不是单群，除非$|G|=p$（$p$阶循环群）
证明：

> 有限$p$群$G$的中心$Z(G)\neq \{e\}$，若假设$G$是单群，那么$G=Z(G)$，故$G$交换；由有限交换群$G$的反Lagrange定理成立，$|G|=p^\alpha, \alpha \geq 2$，故$G$有$p$阶子群，由交换性可知为正规子群，与单性矛盾，故不是单群

2.有些阶的群不是单群，但是这个非平凡的正规子群不一定是$Sylow$子群

## Some Techniques

### 1.数元素个数

+ 适用于$Sylow-p$子群的阶刚好是$p$的情况，因为这个时候不同的$Sylow-p$子群的交是$\{e\}$
+ $G$中$p$阶元素的个数为$n_p(p-1)$
+ 通过计算所需要的元素个数的总数，与$|G|$比较，可以导出某个$n_p=1$，从而$G$不是单群
+ 从大的素因子开始计算

### 2.利用index小的子群

+ 假设群$G$是单群
+ 若$H \lhd G, [G:H]=k$，那么$G$左乘作用于$G$关于$H$的左陪集集合可以诱导群作用，故而有同态$\phi : G \to S(\{aH: a\in G\})\cong S_k$，而$Ker(\phi) \unlhd G, Ker(\phi) \neq G , Ker(\phi)=\{e\}, G \cong \phi(G) \lhd S_k$，故$G$**嵌入**$S_k$中
+ 由Lagrange，$|G| \mid k!$
+ **因此，取从$1$开始逐步变大，第一个使得$|G| \mid k$的$k$作为记录，那么$G$不存在index比$k$小的子群**
+ 导出矛盾的地方：$N_G(P)$有$n_p=[G:N_G(P)]$，故一般是假设$G$是单群，得出$n_p$的取值，然后和$k$比较，发现比$k$要小，矛盾（没有用到$N_G(P) \unlhd G$）

### 3.置换表示（作嵌入）

+ 适用于$G$的$Sylow-p$子群(要求为$p$阶群)也是$S_k$的$Sylow-p$子群的情况
+ $n_p(G)=[G:N_G(P)], n_p(S_k)=[G:N_{S_k}(P)]$
+ $S_k$中$p-$轮换的数目为$A_k^p/p$，$n_p(S_k)=\frac{A_p^k}{p(p-1)},|N_{S_k}(P)|=|S_k|/n_p(S_k)=\frac{k!p(p-1)}{A_p^k}$
+ 而$N_G(P) \lhd N_{S_k}(P)$，有$|N_G(P)| $整除$ |N_{S_k}(P)|$，从这里可以导出矛盾

> 更进一步：$G$可以嵌入$A_k$中，这种操作对于**偶数阶的群$G$有效**（例如：336）

+ 如果群$G$没有指数为$2$的子群（因此为正规子群），那么$G \lhd S_k \Rightarrow G \lhd A_k$

> 证明：$G$不在$A_k$中，那么由于$A_k \lhd GA_k, A_k \neq GA_k$，$GA_k=S_k$，故$[S_k:A_k]=[GA_k:A_k]=[G:G\cap A_k]$，故$G$有指数为2的子群$G\cap A_k$
>
> + 一个更简单的情况是在进行反证法的时候，假设$G$是单群，故而没有非平凡正规子群，故而$G\cap A_k=G, G \lhd A_k$

+ 实际上，$G$的素数$p$阶$Sylow-p$子群，只要$p \neq 2$，那么就一定是奇数，故$p-$轮换必然是偶置换，在$A_k$中，**那么有$N_{S_k}(P)$不完全在$A_k$中**，那么$|N_{S_k}(p)|=2|N_{A_k}(P)|$，因此可以让条件更为严苛，更有可能导出矛盾

### 4.从不同素数的$p$子群中找矛盾

+ $G$有$q$阶$Sylow-q$子群$Q$，若$p \mid |N_G(Q)|$，那么由Cauchy's Theorem，$N_G(Q)$中存在$p$阶子群$P$，$\forall g \in P, gQg^{-1}=Q$
+ $\forall g_1,g_2 \in P, h_1,h_2 \in Q, g_1h_1h_2^{-1}g_2^{-1}=g_1h_1g_1^{-1}g_1h_2^{-1}g_2^{-1}=h_3g_1h_2^{-1}g_2^{-1}=h_3g_1h_2^{-1}g_1^{-1}g_1g_2^{-1}=h_3h_4g_1g_2^{-1} \in PQ $ ,故$PQ \lhd G$
+ **$pq$阶群，若$p \nmid q-1, q>p$，那么$PQ$是交换群，从而有$PQ \lhd N_G(P) $，故而$Q\lhd N_G(P)$，$q $整除$ |N_G(P)|$**
+ 从而可以推出$N_G(P)=G \Rightarrow P \unlhd G$或者与**利用index小的子群**矛盾

> $P \lhd N_G(Q)$，$PQ$是交换群，证明$PQ \lhd N_G(P)$
> 证明：


### 5.考察$Sylow$子群的交的正规化子
+ 对于$Sylow-p$子群的阶不是$p$的时候，不同$Sylow-p$子群的交就不一定是单位元了
+ $P,R \in Syl_p(G), P\cap R \neq \{e\},P\neq R$，设$P_0=P\cap R$，那么$P_0 \lhd P,P_0 \lhd R$，故$ P_0 \lhd N_P(P_0), P_0 \lhd N_R(P_0)$
+ 可以尝试由$N_G(P_0)$的指数$[G:N_G(P_0)]$足够小来导出矛盾
+ 特殊情况，$|P|=|Q|=p^{\alpha}, \alpha \geq 2, |P \cap Q|=p^{\alpha-1}$，那么由$[P:P\cap Q]=p$可知，$(P\cap Q) \unlhd P$，同理$(P\cap Q) \unlhd Q$，故有$P_0=P\cap Q, N_P(P_0)=P,N_Q(P_0)=Q$，故$N=N_G(P_0)$包含$P,Q$，$|N|=p^{\alpha}k,(k,p)=1$
> 有限群$G$，若$n_p\neq 1 (\mod p^2)$，那么存在两个交非单位的$Sylow-p$子群
证明：
> + $P\in Syl_p(G)$，$P$共轭作用于$Syl_p(G)$，划分轨道，每个轨道$|O_R|=[P:Stb(R)], Stb(R)=\{g\in P | gRg^{-1}=R\}=N_G(R)\cap P$，故$|O_R|=[P:N_G(R)\cap P]$
> + 若$p^2$整除$[P:R\cap P]$，那么$s上$