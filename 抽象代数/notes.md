## 抽象代数4a-Part3

1.$Lagrange$定理的逆对有限交换群成立.

+ 有限交换群$G$根据群的阶的素因子分解$|G|=p_1^{e_1}\cdot\cdot\cdot p_s^{e_s} $，有关于$Sylow_p$子群的分解
+ 进而分解有限交换$p$群，有限$p$群被分解为循环群的直积
+ 进而可以利用循环群的逆-$Lagrange$定理：循环群$P$的阶的任意因子的阶的子群存在且唯一

2.有限交换$p$群$G$，正整数$n \nmid p$，证明：$\forall a \in G, x^n=a$在$G$中有解.

+ $G$分解为初等因子组的直积，$x,a\in G$，故可以拆分为只讨论一个分量中的命题，即在循环$p$群中讨论
+ $|G|=p^m=p^{e_1}\cdot\cdot\cdot p^{e_s} , e_1\geq ... \geq e_s,  G=P_1 \times \cdot\cdot\cdot \times P_s , |P_i|=p^{e_i}$，$x=(x_1,...,x_i),a=(a_1,...,a_i)$，归结于证明$\forall a_i \in P_i, x_i^n=a_i$在$P_i$中有解
+ 故讨论循环$p$群$P_i=<b>,o(b)=p^{e_i},a_i=p^{t_i},x_i=p^{j_i},x_i^n=p^{nj_i}=p^{t_i}$，故$nj_i\equiv t_i (\mod p^{e_i})$
+ 由于$(p,n)=1$，故$(n,p^{e_i})=1$，故$n \in \mathbb{Z}_{p^{e_i}}^*,\exist v \in \mathbb{Z}_{p^{e_i}},s.t. \;vn=nv=e$，$j_i\equiv vt_i(\mod p^{e_i})$
+ 故这样的$x_i^j$存在，有解

> 常用技术：要证明某一个同余方程有解，要考虑某一元素是否可逆，即有没有原根

5.一个群可以被写成有限交换$p$群的直和$\Rightarrow$一个群可以被分解为循环群的直和$\Rightarrow$交换群

7.$Aut(\mathbb{Z}_2 \times \mathbb{Z}_2)=GL_2(\mathbb{F}_2)\cong S_3$

+ $Aut(\times_{i=1}^s \mathbb{Z}_p)=GL_s(\mathbb{F}_p)$
+ $|GL_s(\mathbb{F}_p)|=(p^s-1)(p^s-p)(p^s-p^2)\cdot\cdot\cdot (p^s-p^{s-1})$

> 欧拉函数$\phi$的计算性质
> $\phi(n=p_1^{e_1}\cdot\cdot\cdot p_s^{e_s})=\Pi_{i=1}^s \phi(p_i^{e_i})=\Pi_{i=1}^sp_i^{e_i-1}(p_i-1)=\Pi_{p_i \mid n}p_i^{e_i-1}(p_i-1)=n\Pi_{p \mid n} (1-\frac{1}{p})$

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
+ $p$群的中心一定不是trivial的,$Z(G)\neq \{e\}$
+ $N/C$定理：$H \lhd G, N_G(H)/C_G(H)\cong W \lhd Aut(H)$，只需要$H$是$G$的正规子群即可
+ $n\geq 3, Z(S_n)=\{e\}$
+ $Aut(S_n)\cong S_n , \forall n \geq 2, n\neq 6$
+ $n \geq 3, (S_n)^{\prime}=A_n$

4.$n \geq 2, S_n$一定不会是某个群的换位子群，也就是说，不存在$G,G^{\prime}\cong S_n, \forall n\geq 2$
+ $\forall n \geq 2 , n\neq 6$，有统一的证明方法：
> 反证法，设存在$G$，使得$G^{\prime}\cong S_n$，那么由于$G^{\prime} \unlhd G$，故$N_G(G^{\prime})=G$，设$C=C_G(G^{\prime})$，有$G/C \cong W \lhd Aut(G^{\prime})\cong Aut(S_n)\cong S_n$。故$(G/C)^{\prime} =G^{\prime}C/C \cong G^{\prime}/(G^{\prime} \cap C) \lhd (S_n)^{\prime}=A_n$，但$G^{\prime} \cap C=G^{\prime} \cap C_G(G^{\prime})=Z(G^{\prime})=Z(S_n)=\{e\}$，故$G^{\prime}/(G^{\prime} \cap C) \cong G^{\prime} \cong S_n \lhd (S_n)^{\prime}$，矛盾



> 
+
+
+
+
+
+
+
+
