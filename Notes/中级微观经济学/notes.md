# Lecture8 Profit Maximization & Cost Minimization Problem

## 归纳总结

### 利润最大化问题

+ 最优化问题
$$\max_{x_1,x_2} \; py-w_1x_1-w_2x_2, \; s.t.\; y=f(x_1,x_2)$$

+ 一阶条件
$$pMP_1=w_1,pMP_2=w_2$$

+ 解(input demand, output supply)
$$x_1=x_1(p,w_1,w_2)$$
$$x_2=x_2(p,w_1,w_2)$$
$$y=y(p,w_1,w_2)$$

### 成本最小化问题

+ 最优化问题
$$\min_{x_1,x_2} w_1x_1+w_2x_2, \;s.t. \; \overline{y}=f(x_1,x_2)$$

+ 一阶条件
$$\frac{w_1}{w_2}=\frac{MP_1}{MP_2}=TSR_{12}$$

+ 解(conditional input demand)
$$x_1=x_1(y,w_1,w_2)$$
$$x_2=x_2(y,w_1,w_2)$$

## 利润最大化(Profit Maximization)

+ 基本方法：

> 直接方法：有约束的最优化问题
> 间接方法：给定产量最小化成本

### 1.完全竞争市场上的利润最大化

#### 基本定义

+ **价格接受者(price taker)**：市场很大很稳定很有竞争性，从而单个企业的变化对整个市场影响不大，并不是price maker

> 生产要素和产出的价格都是固定的

+ **完全竞争市场/竞争性市场(competitive markets)**：市场中所有的公司都是价格接受者

> 参与到竞争性市场中的公司称为**竞争性公司(competitive firms)**

#### 利润

+ 利润$\pi=py-\sum_{i=1}^n w_ix_i$

> output的价格$p$，input的价格$(w_1,...,w_n)$都是固定的
> 收益(revenue)：$R=py$
> 总成本(total cost)：$\sum_{i=1}^n w_ix_i$

+ 成本需要包含机会成本(opportunity cost)

> 如果你自己开工厂，那么你自己的劳动(labor)也需要计算进成本中，而自己的劳动的价格就是如果你在就业市场上就业所获得最大工资的价格

> 假定你已经有土地了，而不是真的要去借你的土地，机会成本就是你的土地被用来干别的所能达到的最大收益

### 2.完全竞争市场上的短期的利润最大化(Short-Run Profit Maximization)

#### 理论分析

+ 投入的$x_2$固定
+ 故有最优化问题：$\max_{x_1} \;\;pf(x_1,\overline{x_2})-w_1x_1-w_2\overline{x_2}$
+ 这里的**约束条件(生产函数)** 其实已经被带入了：$y=f(x_1,\overline{x_2})$
+ 最原始的优化问题是：$\max_{x_1} \;\;py-w_1x_1-w_2\overline{x_2}$，$s.t. \;y=f(x_1,\overline{x_2})$

> 单变量，直接求导等于零
> 一阶条件：$pMP_1(x_1^{*},\overline{x_2})=w_1$

+ 经济学理解：边际收益=边际成本

> 边际收益(marginal revenue)：$MR=pMP_1(x_1^{*},\overline{x_2})$，雇佣一单位生产要素的最大产出$MP_1(x_1^{*},\overline{x_2})$乘上价格$p$，就是边际收益

> 边际成本(marginal cost)：$MC=w_1$

+ 应用(静态分析)

> $pMP_1(x_1,\overline{x_2})>w_1$：可以雇佣更多的$x_1$，$x_1$变大，$MP_1(x_1,\overline{x_2})$变小，趋于等式
> $pMP_1(x_1,\overline{x_2})<w_1$：可以解雇一些的$x_1$，$x_1$变小，$MP_1(x_1,\overline{x_2})$变大，趋于等式

> 用到了**边际产出递减**

#### 画图分析

+ 优化问题：$\max_{x_1} \;\;py-w_1x_1-w_2\overline{x_2}$，$s.t. \;y=f(x_1,\overline{x_2})$
+ 画图，由于$x_2$是常数，因此可以画$x_1$在横轴，(output)$y$在纵轴的投入-产出图像

> 约束：$y=f(x_1,\overline{x_2})$
> **等利润线(isoprofit line)** ：$\pi$取定，$\pi=py-w_1x_1-w_2\overline{x_2}$，故有$y=\frac{\pi}{p}+\frac{w_1}{p}x_1+\frac{w_2}{p}\overline{x_2}$为等利润线

> $y=\frac{\pi}{p}+\frac{w_1}{p}x_1+\frac{w_2}{p}\overline{x_2}$
> 改变$\pi$，使得$y=\frac{\pi}{p}+\frac{w_1}{p}x_1+\frac{w_2}{p}\overline{x_2}$与$y=f(x_1,\overline{x_2})$相切，得到$x_1^*$

> 切点条件：$\frac{w_1}{p}=MP_{1}(x_1,\overline{x_2})$

#### 应用

+ ***(要素需求)***：**$w_1$上升**，$y=\frac{\pi}{p}+\frac{w_1}{p}x_1+\frac{w_2}{p}\overline{x_2}$斜率更高，故而切点横轴更小，**$x_1^*$变小**，纵轴截距变小，故**利润$\pi$变小**

> $w_1 \uparrow \Rightarrow x_1^* \downarrow,y \downarrow, \pi \downarrow$
> 原材料价格上升，导致生产投入更少，产出更少，利润更少

+ ***(产品供应)***：**$p$下降**，$y=\frac{\pi}{p}+\frac{w_1}{p}x_1+\frac{w_2}{p}\overline{x_2}$斜率更高，故而切点横轴更小，**生产投入$x_1^*$变小**，**产出$y$变小**，截距$\frac{\pi}{p}+\frac{w_2}{p}\overline{x_2}$变小，故而**利润$\pi$变小**

> $p \downarrow \Rightarrow x_1^* \downarrow, y\downarrow$
> 产品的价格$p$下降，导致生产投入减少，产出减少

> **原材料价格上升或者产品价格下降，都会导致投入降低，产出降低**

+ $w_2$上升，斜率不会改变，所以切点不变，最优的等利润线不变，故而截距$\frac{\pi}{p}+\frac{w_2}{p}\overline{x_2}$不变，利润$\pi$变小

### 3.完全竞争市场上的长期的利润最大化(Long-Run Profit Maximization)

+ 优化问题：

> $\max_{x_1,x_2} \; py-w_1x_1-w_2x_2, \; s.t.\; y=f(x_1,x_2)$
> $\max_{x_1,x_2} \; pf(x_1,x_2)-w_1x_1-w_2x_2$

+ 拉格朗日乘子法暴算即可
+ 注：

> 长期的情况下，最终最大化的经济利润一定为0，但会计利润不一定是0
> **短期**的情况下，**经济利润可能是负的**
> 规模报酬递增的情况会和完全竞争市场矛盾的！这两者不能同时存在（或者只在某个阶段可以共存），否则达成均衡的时候只会有有限数量的大企业，此时的 p 是会随着市场变动而变动的

## 成本最小化(Cost minimization problem v.s.Profit Maximization)

### 基本步骤

+ 成本最小化是利润最大化的**必要条件**

+ 利润最大化问题$\max_{x_1,x_2} \; py-w_1x_1-w_2x_2, \; s.t.\; y=f(x_1,x_2)$的拆分：

> 1.对于每一个取定的产出$y$，进行成本最小化分析
> 2.对于每一个$y$，计算利润最大化的成本投入

### 成本最小化

#### 理论结果

+ 最优化问题：
$$\min_{x_1,x_2} w_1x_1+w_2x_2, \;s.t. \; \overline{y}=f(x_1,x_2)$$

+ 求解：
$$\frac{w_1}{w_2}=\frac{MP_1}{MP_2}=TSR_{12}$$

+ 经济学理解：生产要素价格之比=技术替代率

> 若$\frac{w_1}{w_2}>TSR_{12}$，那么减少一单位$x_1$投入，增加$TSR_{12}$投入，总产量不变，成本变化$w_2\cdot TSR_{12}-w_1<0$，故不是成本最小点

+ 画图理解：等成本线(移动)斜率=等产量线(约束，不懂)斜率

> 等成本线：$w_1x_1+w_2x_2=C$
> 等产量线：$\overline{y}=f(x_1,x_2)$

![[Pasted image 20231125035202.png]]

+ **注意此处的约束和目标跟效用处对偶的无差异曲线位置对换了，此处约束是曲线，目标函数是直线**！

+ 最终的解是$w_1,w_2,y$的函数：$x_1(w_1,w_2,y),x_2(w_1,w_2,y)$

> conditional factor demand functions (**有条件的要素需求函数**)
> derived factor demands (**派生的要素需求**)

#### 例子

+ 检验：一般来说，$x_1$应该与$w_1$负相关(价格上升，买的更少了)，与$w_2$正相关(替代效应)

##### Cobb-Douglas Technology

+ $f(x_1,x_2)=x_1^ax_2^b$

+ $\frac{w_1}{w_2}=TSR_{12}=\frac{ax_2}{bx_1}$且$c(y)=x_1w_1+x_2w_2$

##### 完全互补(Perfect Complements)