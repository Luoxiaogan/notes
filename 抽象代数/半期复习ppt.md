# 半期复习ppt

## 4a

### 直积

+ $a,b$交换，$o(a),o(b)$互素，那么$o(ab)=o(a)o(b)$
+ 两个循环群的直积是循环群当且仅当它们的阶互素

**中国剩余定理**：$(m,n)=1$，则$x\equiv a(\mod m), x\equiv b(\mod n)$有解，解$x\equiv y(\mod xy)$

+ $(m,n)=1, \exist u,v $，使得$um+vn=1$，自然有$(u,n)=1,(v,m)=1$，故$x=avn+bum$
+ **群直积的子群的形式**：有限群$G_1,G_2$阶互素，那么$\forall K \lhd G_1 \times G_2, K=H_1 \times H_2, H_i \lhd G_i$

> 证明：
> $H_1=\phi_1(K),H_2=\phi_2(K), K \subset H_1 \times H_2$
> $\forall a \in H_1, \exist b \in H_2 ,(a,b) \in K$，$o(a)=m, o(b)=n, (n,m)=1$，故$\exist r,s$，使得$(a,b)^r=(a,e_2)\in K, (a,b)^s=(e_1,b)\in K$，故$H_1 \times H_2 \subset K, K=H_1 \times H_2$

+ 若$G_1,G_2$的阶不互素，那么直积的子群不一定可以表示成子群的直积的形式

> 反例：$V_4 \cong \mathbb{Z}_2 \times \mathbb{Z}_2$

#### 半直积

+ $H \rtimes_{\phi} K$，$(x,y)(u,v)=(x\phi_y(u),yv)$，$\phi_y(u)=yuy^{-1}$

#### 小结论1

+ $p^2$阶群一定交换（因为$G/Z(G)$循环），分类结果只有$\mathbb{Z}_p$和$\mathbb{Z}_p \times \mathbb{Z}_p$

+ $U(p_1^{e_1} \cdot \cdot \cdot p_k^{e_k})  \cong U(p_1^{e_1}) \times  \cdot \cdot \cdot \times U(p_k^{e_k})$

+ $U_{2^m}\cong \mathbb{Z}_{2^{m-2}}\times \mathbb{Z}_2, U(p^m)\cong \mathbb{Z}_{\phi(p^m)}, \phi(p^m)=p^{m-1}(p-1)$，$p$为奇素数

+ $A_4$的lattice

+ $D_{2n} \cong \mathbb{Z}_n \rtimes_{\phi} \mathbb{Z}_2$，$\phi: \langle x \rangle \cong\mathbb{Z}_2 \to Aut(\mathbb{Z}_n)\cong Aut(\langle y \rangle), \phi_x(y)=xyx^{-1}=y^{-1}$

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

+ $4$阶群：$\mathbb{Z}_4, \mathbb{Z}_2 \times \mathbb{Z}_2 \cong V_4, D_4$

+ 最小的有限非交换单群同构于$A_5$

+ $p$群不是单群，除非$|G|=p$，，$p$为素数

+ $2m$阶群不是单群，$m$为奇数（指数为2的子群必然存在，故有非平凡正规子群）

#### 大结论1

+ $|G|=60$，$G$是单群，那么$G \cong A_5$

+ $pq$阶群的分类

> $p=q$，是交换群，$\mathbb{Z}_p$和$\mathbb{Z}_p \times \mathbb{Z}_p$
> $p<q, p \nmid q-1$, 是交换群，$\mathbb{Z}_p \times \mathbb{Z}_{q} \cong \mathbb{Z}_{pq}$
> $p<q, p \mid q-1$，是交换群，$\mathbb{Z}_p \times \mathbb{Z}_{q} \cong \mathbb{Z}_{pq}$，或者是非交换群，$\mathbb{Z}_q \rtimes_{\phi} \mathbb{Z}_{p}$是唯一的$pq$阶非交换群

#### 对应定理

+ $\phi : H \to K, Ker(\phi)=N, H/N \cong K$

+ $\forall x\in H , \langle x \rangle := Q\lhd H, N \unlhd H, QN\lhd H$

+ $QN/N \cong Q/ (Q \cap N) \cong \langle \phi(x) \rangle$

+ 故有$o(\phi(x))\mid o(x)$
