# Lecture6: Market Demand and Choice Under Uncertainty

## Market Demand

### 市场需求

+ 如果所有消费者的偏好是相同(**identical**)且同位(**homothetic**)的，那么收入分配对于群体的总需求是不影响的
+ 同位偏好：从原点出发的每一条射线与无差异曲线交点的斜率相同
+ 消费者代表(representative consumer)：$X^{k}(p,m_1,...,m_n)=X^{k}(p,M)$

> 计算方法：需求曲线水平加总（**相同价格水平**，需求加总，需求曲线得把价格$p$放在$y$轴）

### 弹性

+ 变化率$/$变化率
+ Income elasticity of demand（需求的收入弹性）：$\frac{\Delta D/D}{\Delta m/m}$，主语在分子！
+ Own-price elasticity of demand（需求的自身价格弹性）：$\frac{(D(p+\Delta p)-D(p))/D}{\Delta p/p}$，但$p$取定之后，弹性应该与$\Delta p$无关，所以取极限，有$\epsilon_{q,p}=\frac{p}{D(p)}D^{\prime}(p)$（点弹性）
+ 考虑$|\epsilon_{q,p}|$，可以度量弹性的大小（针对的是**某一个点的弹性**）。
  $|\epsilon_{q,p}|>1$富有弹性(elastic)
  $|\epsilon_{q,p}|=1$单位弹性(unit elastic)
  $|\epsilon_{q,p}|<1$缺乏弹性(inelastic)
+ 一般来说，**价格越高，弹性（绝对值）越大**。

> 以线性的需求曲线$D(p)=a-bp$为例：
> $|\epsilon_{q,p}|=\frac{bp}{a-bp}$
>需求曲线的斜率是常数，弹性并不是常数
> 需要**会作图**

#### 例子：固定弹性需求(constant elasticity demand)

+ $D(p)=Ap^{\epsilon}, A>0,\epsilon<0$
+ $\epsilon_{q,p}=\frac{p}{Ap^{\epsilon}}(\epsilon Ap^{\epsilon-1})=\epsilon<0$

### Revenue(收益) and $\epsilon_{q,p}$

+ 卖家的收益：$R(p)=pD(p)$
+ $\frac{dR}{dp}=D(p)+pD^{\prime}(p)=D(p)(1+\epsilon_{q,p})=D(p)(1-|\epsilon_{q,p}|)$（因为$\epsilon_{q,p}$一般来说是负的）
+ 故而有如下分类讨论：

> $|\epsilon_{q,p}|=1$，单位弹性，价格变化不改变收益
> $|\epsilon_{q,p}|>1$，富有弹性，价格变高，收益变低（直观上来说，弹性大，价格变高，很多人都不买了，所以收益变低）
> $|\epsilon_{q,p}|<1$，缺乏弹性，价格变高，收益变高（弹性小，价格变高，很多人还是回去买，收益变高）

+ 推论（弹性的应用）：

> 希望利润在最大化的厂商，定价一定不会在缺乏弹性的部分。因为利润$\pi=pD(p)-TC$，如果在缺乏弹性的部分，那么$p$升高，$pD(p)$升高，价格升高，生产减少，总成本$TC$降低，$\pi$变大，所以，可以让$p$更高，弹性变大

> 罢工希望通过减少产量来降低老板的收入，但某些行业有可能由于产量下降导致价格上升，老板收入反而上涨

> 政府希望提高税率来增加总税收，但税率提高让商品价格上升，某些商品有可能卖的太少，反而导致总税收下降

#### Marginal Revenue Curves(边际收益曲线)

+ 留待补充

#### 影响弹性的因素

+ 核心：弹性取决于是否容易找到替代品

> 苹果比水果的弹性大
> 时间越长，替代品越容易找到，弹性越小
> 支出占收入比例越大，弹性越大

## Choice Under Uncertainty

### 基本概念

+ 度量不确定性：随机变量，期望

+ 随机变量的分布$(p_1,...,p_n)$

+ **Lottery**（随机选择）：$p_1  \circ c_1+...+p_n \circ c_n$

### Expected Utility（期望效用）

+ expected untility function:

> $u$：冯诺伊曼效用函数
$v$：伯努利效用函数

+ $u(p_1  \circ c_1+...+p_n \circ c_n)=p_1v(c_1)+...+p_nv(c_n)$

> 直观上，lottery（随机选择）的效用=每个可能选择的效用的期望（效用的期望）
期望效用=效用的期望
$u(L)=E(v(c))$

### 面对风险的态度 (Attitude towards risk)

+ 前提：certainty情况下的效用首先要与lottery情况下的期望效用相同

>$v$是凸函数(convex)，则风险偏好(Risk loving)
>$v$是凹函数(concave)，则风险规避(Risk aversion)
>$v$是线性函数(linear)，则风险中性(Risk neutral)

+ 证明：

>不妨令lottery为：$0.5 \circ (c-c^{\prime})+ 0.5 \circ (c+c^{\prime})$
>certainty情况下：财富为$c$，效用为$v(c)$
>采用lottery情况下：期望效用为：$0.5v(c-c^{\prime})+0.5v(c+c^{\prime})$
>比较$v(c)$与$0.5v(c-c^{\prime})+0.5v(c+c^{\prime})$

>$v$是凸函数(convex)，$v(c)<0.5v(c-c^{\prime})+0.5v(c+c^{\prime})$，风险偏好
>$v$是凹函数(convex)，$v(c)>0.5v(c-c^{\prime})+0.5v(c+c^{\prime})$，风险规避

+ **需要会画图**：utility在$y$轴，wealth在$x$轴

### 确定性等值(Certainty Equivalent)与风险溢价(Risk Premuim)

+ 确定性等值：certainty情况下效用要与lottery情况下期望效用相同需要多少wealth?

>$v(CE)=p_1v(c_1)+(1-p_1)v(c_2)$

+ 风险溢价：真实的wealth减去CE（别记错了，**真实的减去虚假的**）

>$RP=[p_1c_1+(1-p_1)c_2]-CE$
