# Lecture7-Technology

## Technology(生产技术)

### 1.基本概念

+ inputs：**(factors of production)生产要素**

> **(labor:L)劳动力**
> 熟练劳动力(skilled labor)(高中文凭及以上)，非熟练劳动力(unskilled labor)
> **(physical capital:K)有型资本**：设备，土地等
> **(intangibles)无形资本**：知识，专利，数据

### 2.生产函数

#### 生产函数的定义和例子

+ **technology（生产技术）**

> 由**production function(生产函数)** 表征
> $n$中不同生产要素的投入$(x_1,...,x_n)$，产出一种产品
> 生产函数：$f: \mathbb{R}^n_+\to \mathbb{R}_+$，$f(x_1,...,x_n)$指的是**最大可能产出（尽可能最大化产出）**

+ 如果一种input($x$轴)，一种output($y$轴)，可以画**input-output图**，可以画出生产函数
+ 两种input，一种output，可以画**等产量线(isoquant curves)**

> 等产量线：给定output的数量，**恰好能生产出这么多**output的**input$(x_1,x_2)$组合**的集合组成的线

+ 与无差异曲线的不同点：

> 约束条件是technology
> 等产量线之间是基数关系(实打实的数量)，无差异曲线是序数关系(相对大小)

+ 等产量线的例子：

> 与消费者理论基本完全平行
> **完全互补**：$f(x_1,x_2)=\min\{x_1,x_2\}$
> **完全替代**：$f(x_1,x_2)=x_1+x_2$

+ **Cobb-Dauglas**

> $f(x_1,x_2)=Ax_1^ax_2^b$
> 不可进行单调变化，因为是**确定的值**，而不是序数关系
> $A$：**全要素生产率**(要素中性的参数)(total factor productivity)：生产技术进步，管理技术进步，$A$会变大
> $a,b$：**要素密集度**（不同生产要素对于产出的贡献）

#### 生产函数的假设

+ **单调性**：投入增加$\Rightarrow$展出增加（不减）

> **free disposable（免费处置）**：多余的生产要素可以丢掉，不会造成负面影响
> We say a technology is monotonic (单调的技术) if its production function is increasing
> 生产函数不存在类似于厌恶品的东西

+ **凸性**：相对于极端，平均更好

### 3.边际产出(Marginal Product)

+ $MP_i(x_1,x_2)=\frac{\partial f(x_1,x_2)}{\partial x_i}$

> $MP_i(x_1,x_2)$的经济学含义：**固定另一种投入不变**，多投入一单位$x_i$，可以得到的产出的增加的数目

#### 边际产出递减

> 边际产出递减（在某些阶段）：$\frac{\partial MP_i(x_1,x_2)}{\partial x_i}=f_{i,i} <0$
> 投入加大，产出会加大，但是增加同样的投入，产出的增大会越来越小
> 原因：teamwork (团队协作) and specialization（专业化）

> 应用：

> 人口红利：农村人口到城市，城市工业化开始，人口到工业区可以增加城市工业化的边际产出，而不减少农业的边际产出。（会出现拐点）因为在农村的边际贡献量是很少的(**剩余劳动力，伪就业**)。

> 农业的人越来越少，边际产出会越来越高，理论上会和制造业的边际产出趋同

> 耕地红线：**给定耕地不变的情况下**有**边际产出递减**，再**减少耕地**又有更多的农业人口转出，产出粮食更少了。

> 马尔萨斯陷阱：新产出的人口带来的边际产出是递减的，但是人口的消耗量不变，也就相当于越来越多的人只吃饭不干活，从而随着人的增长，一定会发生大饥荒。（但是条件是不满足的：**保持边际产出递减**，**其他的投入应当是不变的**，**当代农业的“资本”的数量是在不断增加的，技术也在进步($A$变大了)**）（因此：一定要检查定理的**前提条件**是否存在）

### 4.(边际)技术替代率(Technical Rate of Substitution)

+ $TRS_{12}=\frac{MP_1(x_1,x_2)}{MP_2(x_1,x_2)}$

> 保持产出水平不变，每增加**一单位$x_1$的投入**，可以减少**多少单位的$x_2$的投入**
> 等产量线的斜率

#### (边际)技术替代率递减

+ 技术替代率($TRS$)递减：斜率越来越平

> 解释：伴随着 $x1$ 增加， $MP_1$ 在减少，而$x2$在同步减少，$MP_2$ 会增加，整体来看就是 $TRS_{12}$ 在递减

+ 需要与**边际产出递减**相区分
+ **两种要素**都满足**边际产出递减**$\Rightarrow$**技术替代率递减**

### 5.规模报酬(Return to Scale)

+ **同时改变所有投入的生产要素**，并且改变比例相同

> **(CRS)规模报酬不变**(constant returns to scale)：$f(tx_1,tx_2)=tf(x_1,x_2),\forall (x_1,x_2), t>1$

> **(IRS)规模报酬递增**(increasing returns to scale)：$f(tx_1,tx_2)>tf(x_1,x_2),\forall (x_1,x_2), t>1$
> (初期投入 or 专业化分工)（此处并购会带来更好的产出）
> 例子：重工业，电气，电网，通信
> 初期投入很高；大型机器设备；规模效应

> **(DRS)规模报酬递减**(decreasing returns to scale)：$f(tx_1,tx_2)<tf(x_1,x_2),\forall (x_1,x_2), t>1$
> （后期投入）（与其有一个大厂，不如拆成很多小厂子）
> 协调管理的损耗；

> Note that a **technology** can exhibit different **kinds of returns to scale** at **different levels of production**
> 同一个技术，不同生产阶段，规模报酬的类型可能不同

+ **规模报酬决定了不同等产量线的间距**

> 以**input的固定倍数**来画等产量线，实际距离由规模报酬决定

### 6.长期和短期(Long Run and Short Run)

+ the levels of **some inputs** can be **easily changed in a short-period of time,** while the levels of **other inputs** can **only be changed after a long while**
+ 通俗来讲，你的厂子和土地短期处理不了，但是长期来看可以当作被卖掉了。短期这笔投入收不回来，是不能懂的，长期任何要素都可以变动

> 固定要素(fixed factor)：设备厂房
> 可变要素(variable factor)：劳动力，中间投入(半成品)
> 准固定要素/准可变要素：电力(搭建电路)，开工之前需要投入，但是开工之后生产越多，使用越多

+ 所以在Long Run意义下，是没有固定要素的
