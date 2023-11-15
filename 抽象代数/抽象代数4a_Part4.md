## 抽象代数4a-Part4

1.群$G$，$N \unlhd G,N \cap G^{\prime}=\{e\}$，证明$N \lhd Z(G)$

+ 从$N \unlhd G$到$N \lhd Z(G)$需要任意元素对$N$做共轭的时候保证$N$中每个元素不变，而共轭的形式恰好与换位子的形式只差一点

> $\forall g \in G,\forall n_1 \in N,\exist n_2 \in N, gn_1g^{-1}n_1^{-1}=n_2n_1^{-1} \in \cap G^{\prime}=\{e\},n_1=n_2, N \lhd Z(G)$

+ 要证明$N \lhd G$，有两个思路：
  1.$G$对$N$做共轭群作用，证明每个轨道长度为一，即$N$中每个元素在所有共轭作用下不动
  2.寻找与换位子群的关系

2.关于可解群的重要性质

+ 1. $N \unlhd G$，$G/N$，$N$均可解，那么$G$可解
+ 2. 书写规范：$(G/N)^{\prime}=G^{\prime}N/N=\{gN:g \in G^{\prime}\}$

**3.一些重要的小结论**

+ $G/Z(G)$循环，则$G$交换
+ $p^2$阶群一定是交换群
+ $p$群的中心一定不是平凡的,$Z(G)\neq \{e\}$
+ $N/C$定理：$H \lhd G, N_G(H)/C_G(H)\cong W \lhd Aut(H)$，只需要$H$是$G$的子群即可
+ $n\geq 3, Z(S_n)=\{e\}$
+ $Aut(S_n)\cong S_n , \forall n \geq 2, n\neq 6$
+ $n \geq 3, (S_n)^{\prime}=A_n$

4.$n \geq 2, S_n$一定不会是某个群的换位子群，也就是说，不存在$G,G^{\prime}\cong S_n, \forall n\geq 2$

+ $\forall n \geq 2 , n\neq 6$，有统一的证明方法：

> 反证法，设存在$G$，使得$G^{\prime}\cong S_n$，那么由于$G^{\prime} \unlhd G$，故$N_G(G^{\prime})=G$，设$C=C_G(G^{\prime})$，有$G/C \cong W \lhd Aut(G^{\prime})\cong Aut(S_n)\cong S_n$。故$(G/C)^{\prime} =G^{\prime}C/C \cong G^{\prime}/(G^{\prime} \cap C) \lhd (S_n)^{\prime}=A_n$，但$G^{\prime} \cap C=G^{\prime} \cap C_G(G^{\prime})=Z(G^{\prime})=Z(S_n)=\{e\}$，故$G^{\prime}/(G^{\prime} \cap C) \cong G^{\prime} \cong S_n \lhd (S_n)^{\prime}$，矛盾

+ $n=6$的情况，**留待后来做**

5.$n \geq 5$，$(A_n)^{\prime}=A_n$

+ 当然可以由$n \geq 5$，$A_n$是非交换单群易得
+ 也可以证明存在一个$3-$轮换是换位子，再由共轭作用后仍为换位子，得到所有的$3-$轮换都是换位子，再由$\forall n \geq 3, A_n$可由$3-$轮换生成，故$A_n \lhd (A_n)^{\prime} \lhd A_n$，故$A_n = (A_n)^{\prime}$
+ 由于$n \geq 5$，$\exist i,j,k,s,t$互不相同，有$(ijk)(ist)(ijk)^{-1}(ist)^{-1}=(jst)(its)=(ijs)$，故所有的$3-$轮换都是换位子，得证
+ 这种由$3-$轮换生成换位子的方法需要记住

6.需要非常熟悉$S_n$，$D_{n}$（$D_{2n}$）的结构，包括简单的群结构$S_4$,$A_4$，中心，换位子群，正规子群，共轭类等

+ $(D_n)^{\prime}=<r^{2}>=<r>$，$n$是奇数；$(D_n)^{\prime}=<r^{2}>\neq <r>$，$n$是偶数
