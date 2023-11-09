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
