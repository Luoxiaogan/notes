# 半期复习ppt

## 3a

### 群作用

#### 左乘作用与Cayley定理

+ $H \lhd G, A$是$H$关于$G$的左陪集的集合，$G$左乘作用于$A$，有群作用$\phi: G \to A, \forall g \in G, \phi(g)(aH)=gaH$
+ $Stab(aH)=\{g\in G| gaH=aH\}=aHa^{-1}$
+ $Ker(\phi)=\{g \in G|\forall a \in G , gaH=aH\}= \bigcap_{a \in G}aHa^{-1}\unlhd G$
+ $Ker(\phi)=\bigcap_{a \in G}aHa^{-1} \subset \bigcap_{a\in H} aHa^{-1} =H$，故$Ker(\phi) \lhd H$

$\forall N \unlhd G$，且$N \lhd H$，有$\forall a\in G, N=aNa^{-1} \lhd aHa^{-1}$，$N=\bigcap_{a\in G} aNa^{-1} \lhd \bigcap_{a \in G}aHa^{-1} =Ker(\phi)$，**故$Ker(\phi)$是包含于$H$的最大的$G$的正规子群**

> （**Cayley's Theorem**）令$H=\{e\}$，故$Ker(\phi)=\{e\}, G \cong \phi(G) \in S_{G}$

#### 小结论3

+ 有限群$G$，$|G|=n$的最小素因子为$p$，那么**若存在**$H \lhd G, [G:H]=p$，则$H \unlhd G$
+ 有限群$G$，$|G|=2m$，$m$是奇数，那么指数为$2$的子群$H$必存在，且$H \unlhd G$
+ $n \geq 2, n \neq 6, Aut(S_n)=Inn(S_n)\cong S_n$
+ $n=6, [Aut(S_6):Inn(S_6)]=2$
+ $S_3 \cong D_3 \cong Aut(\mathbb{Z}_2 \times \mathbb{Z}_2)$是最小的非交换群

### 陪集

+ $K \lhd H \lhd G$，则$[G:K]=[G:H][H:K]$
+ $K,H \lhd G$，则$|HK||H\cap K|=|H||K|$

## 4a

### 直积

+ $a,b$交换，$o(a),o(b)$互素，那么$o(ab)=o(a)o(b)$
+ 两个循环群的直积是循环群当且仅当它们的阶互素

**中国剩余定理**：$(m,n)=1$，则$x\equiv a(\mod m), x\equiv b(\mod n)$有解，解$x\equiv y(\mod xy)$

+ $(m,n)=1, \exist u,v $，使得$um+vn=1$，自然有$(u,n)=1,(v,m)=1$，故$x=avn+bum$
+ **群直积的子群的形式**：有限群$G_1,G_2$阶互素，那么$\forall K \lhd G_1 \times G_2, K=H_1 \times H_2, H_i \lhd G_i$

> 证明：
> $H_1=\varphi_1(K),H_2=\varphi_2(K), K \subset H_1 \times H_2$
> $\forall a \in H_1, \exist b \in H_2 ,(a,b) \in K$，$o(a)=m, o(b)=n, (n,m)=1$，故$\exist r,s$，使得$(a,b)^r=(a,e_2)\in K, (a,b)^s=(e_1,b)\in K$，故$H_1 \times H_2 \subset K, K=H_1 \times H_2$

+ 若$G_1,G_2$的阶不互素，那么直积的子群不一定可以表示成子群的直积的形式

> 反例：$V_4 \cong \mathbb{Z}_2 \times \mathbb{Z}_2$

#### 半直积

+ $H \rtimes_{\varphi} K$，$(x,y)(u,v)=(x\varphi_y(u),yv)$，$\varphi_y(u)=yuy^{-1}$

#### 小结论1

+ $p^2$阶群一定交换（因为$G/Z(G)$循环），分类结果只有$\mathbb{Z}_p$和$\mathbb{Z}_p \times \mathbb{Z}_p$
+ $U(p_1^{e_1} \cdot \cdot \cdot p_k^{e_k})  \cong U(p_1^{e_1}) \times  \cdot \cdot \cdot \times U(p_k^{e_k})$
+ $U_{2^m}\cong \mathbb{Z}_{2^{m-2}}\times \mathbb{Z}_2, U(p^m)\cong \mathbb{Z}_{\varphi(p^m)}, \varphi(p^m)=p^{m-1}(p-1)$，$p$为奇素数
+ $A_4$的lattice
+ $D_{2n} \cong \mathbb{Z}_n \rtimes_{\varphi} \mathbb{Z}_2$，$\varphi: \langle x \rangle \cong\mathbb{Z}_2 \to Aut(\mathbb{Z}_n)\cong Aut(\langle y \rangle), \varphi_x(y)=xyx^{-1}=y^{-1}$
+ $S_n \cong A_n \rtimes \langle (12) \rangle$

### Sylow 定理

#### 内容

+ $|G|=p^rm, p \nmid m$，那么$G$中$p^i$阶子群必定存在$i=0,...,r$

> $p$整除$  |G| $，那么$G$中必定存在$p$阶元素

+ $p^i$阶群必然在某一个$Sylow-p$子群中

> 任意两个$Sylow-p$相互共轭

+ $n_p \mid m, n_p \equiv 1 (\mod p)$

#### 小结论2

+ 素数$p,q$，有$pq, p^2q$阶群不是单群
+ （Burnside）$p^aq^b$阶群可解，从而不是单群
+ $p$为奇素数，那么$2p$阶群的分类只有$\mathbb{Z}_{2p}$和$D_{2p}$
+ $4$阶群：$\mathbb{Z}_4, \mathbb{Z}_2 \times \mathbb{Z}_2 \cong V_4 \cong D_4$
+ 最小的有限非交换单群同构于$A_5$
+ $p$群不是单群，除非$|G|=p$，，$p$为素数
+ $2m$阶群不是单群，$m$为奇数（指数为2的子群必然存在，故有非平凡正规子群）

#### 大结论1

+ $|G|=60$，$G$是单群，那么$G \cong A_5$
+ $pq$阶群的分类

> $p=q$，是交换群，$\mathbb{Z}_p$和$\mathbb{Z}_p \times \mathbb{Z}_p$
> $p<q, p \nmid q-1$, 是交换群，$\mathbb{Z}_p \times \mathbb{Z}_{q} \cong \mathbb{Z}_{pq}$
> $p<q, p \mid q-1$，是交换群，$\mathbb{Z}_p \times \mathbb{Z}_{q} \cong \mathbb{Z}_{pq}$，或者是非交换群，$\mathbb{Z}_q \rtimes_{\varphi} \mathbb{Z}_{p}$是唯一的$pq$阶非交换群

#### 对应定理

+ $\varphi : H \to K, Ker(\varphi)=N, H/N \cong K$
+ $\forall x\in H , \langle x \rangle := Q\lhd H, N \unlhd H, QN\lhd H$
+ $QN/N \cong Q/ (Q \cap N) \cong \langle \varphi(x) \rangle$
+ 故有$o(\varphi(x))\mid o(x)$

#### $n$阶群循环的充要条件(暂时不知道怎么证明右推左，先记住吧，考试可以使用)

+ $n$阶群循环$\iff$ $(n, \varphi(n))=1$
+ 必要条件

> $|G|$的素因子分解，每个素数的指数小于等于一
> $|G|$的素因子分解，不能存在素数$p,q$，使得$p \mid q-1$

### 有限交换群的结构

#### 一般方法

+ 初等因子和不变因子$\Rightarrow$完全分类有限交换群
