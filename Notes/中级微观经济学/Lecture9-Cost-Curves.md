# Cost Curves

## Lecture9 Cost Curves

### 平均成本(Average Cost)

+ 成本$c=c(y)$是产出的函数(当然也与$w_1,w_2$有关)，有如下拆分

> 不变成本(fixed cost) $F\equiv c(0)$
> 可变成本(variable cost) $c_v(y)=c(y)-c(0)$

+ 平均成本函数(Average cost function)：$AC(y)=\frac{c(y)}{y}$
+ 平均可变成本函数(Average variable cost function)：$AVC(y)=\frac{c_v(y)}{y}$
+ 平均不变成本函数(Average fixed cost function)：$AFC(y)=\frac{c(0)}{y}$

![[Pasted image 20231125052109.png]]

> $AFC(y)=\frac{c(0)}{y}, y \uparrow \Rightarrow AFC(y) \downarrow$
> $AVC(y)=\frac{c_v(y)}{y}$，不确定，但$y$充分大的时候，一定会有边际产出递减，从而边际成本上升，$AVC(y)$上升

> 初期可能实现边际产出递增，因为专业化。后期递减，是因为承载能力有限

### 边际成本

+ $MC(y)=c^{\prime}(y)=c^{\prime}_{v}(y)$

### 边际成本曲线与平均成本曲线(MC Curves v.s. AC Curves)

+ 1.边际成本与平均可变成本在产出$y=0$时相同

> 故而$MC$与$AVC$交点在$y$轴(实际上空心点，因为$AVC(0)=0$)

$$
MC(0)=c^{\prime}(0)=\lim_{\Delta y \to 0^+}\frac{c(\Delta y)-c(0)}{\Delta y}=\lim_{\Delta y \to 0^+}\frac{c_v(\Delta y)}{\Delta y}=AVC(0^+)
$$

> 离散情况下理解，也就是生产第一单位的时候的边际产出刚好就是平均产出（因为只生产了一单位）

+ 2.若$AVC(y)$在$(\underline{y},\overline{y})$递减，那么必有：

$$
MC(y)\leq AVC(y), \forall y \in (\underline{y},\overline{y})
$$

> 直观理解：平均值变小，必然是每次加入的**边际值小于之前的平均值**
> $AVC(y)$这一段递减，说明此时的成本（边际成本）一定会低于平均（边际小于平均，那么平均递减；大于平均，平均递增）

> 数学理解：

$$
\frac{\partial AVC}{\partial y}=\frac{\partial \frac{c_v(y)}{y}}{\partial y}=\frac{MC(y)}{y}-\frac{c_v(y)}{y^2}=\frac{1}{y}(MC(y)-AVC(y))
$$

+ 推论：

> $AC=AFC+AVC$下降，那么$MC$必然在$AVC$下方(当然也在$AC$下方)
> $AC=AFC+AVC$上升，那么$MC$必然在$AC$上方(当然也在$AVC$上方)

![[Pasted image 20231125054557.png]]

> $AVC$最低点是$AVC$与$MC$交点
> $AC$最低点是$AC$与$MC$交点

> $AVC$ 和 $AC$ 的间距是$AFC$，会越来越小

### 边际成本与总可变成本(Marginal Cost v.s. Variable Costs)

+ 总可变成本就是边际成本的积分

![[Pasted image 20231125061701.png]]

### 例子

+ $c(y)=y^2+1$
+ $c_v(y)=y^2, c_f(y)=1$
+ $AVC(y)=y,AFC(y)=\frac{1}{y},AC(y)=y+\frac{1}{y}$

![[Pasted image 20231125062037.png]]

### 长期与短期的成本曲线(Long-run v.s. Short-run Cost Curves)

+ 长期情况下，$c_f(y)=0$
+ 1.长期成本是短期成本再对于投入做一次成本最小化(下包络线)

$$
c_{long}(y,w_1,w_2)=\min_{x_2} c_{short}(x_2;y,w_1,w_2) \Rightarrow c(y)=c_s(x_2^{*}(y),y)
$$

+ 2.**长期平均成本**是**短期平均成本**再对于投入做一次成本最小化(下包络线)

$$
LAC(y)=\frac{c(y)}{y}=\frac{\min_{x_2} c_{s}(x_2,y)}{y}=\min_{x_2} \frac{c_s(x_2,y)}{y}=\min_{x_2} SAC(y,x_2)
$$

![[Pasted image 20231125063415.png]]

> 每条线都是**短期平均成本**(代表不同的$x_2$的投入)
> 长期最优的成本曲线就是它们的下包络线

![[Pasted image 20231125063736.png]]

![[Pasted image 20231125064859.png]]

> 短期成本线与长期成本线的交点**一般不是**短期成本线的最低点
> 切点不一定是平均成本曲线的最低点，只是在固定的 $y$ 的时候，所有曲线之中最低的一条线$l$而不一定是这条线 $l$的最低点。 (下包络线和曲线的切点不一定是最低点)

+ 短期平均成本线是$U$型的原因：可变的要素的边际产出先递增(专业化)后递减(承载能力有限)
+ 长期平均成本线是$U$型的原因：规模报酬先递增(专业化分工)后递减(管理复杂，内耗，管理冗余)

> 规模报酬是影响**规模经济**的原因之一(不会考)

### 长期边际成本曲线与短期边际成本曲线

![[Pasted image 20231125065015.png]]

+ 图片理解：

> 每条$MC$都与$AC$交于$AC$最低点

> + $LAC$与$SAC_i$的切点对应的$y$，刚好对应$SMC_i$与$LMC$的交点的$y$
> + 也可以反过来说：$SMC_i$与$LMC$的交点对应的$y$，搞好对应了$LAC$与$SAC_i$的切点所对应的$y$

+ 数学计算：

长期成本$c(y)=c_s(y,x_2(y))$，关于$y$偏导：

$$
MC(y)=\frac{\partial c(y)}{ \partial y}=\frac{\partial c_s(y,x_2(y))}{\partial y}+ \frac{\partial c_s(y,x_2(y))}{\partial x_2} x_2^{\prime}(y)
$$

由于$c(y)=c_s(y,x_2(y))$与$x_2$无关，因此：

$$
\frac{\partial c_s(y,x_2(y))}{\partial x_2}=0
$$

故有：

$$
MC(y)=\frac{\partial c_s(y,x_2(y))}{\partial y}=SMC(y,x_2(y))
$$

+ 经济学理解：边际成本$MC$在产出$y$处的取值等于短期边际成本$SMC$在产出$y$固定的情况下短期边际成本最小化($SAC$最小值：$SAC$交于$SMC$)时得到的$x_2^*=x_2(y)$带入后得到的取值

![[2a201d6ac5e757f946d08d2b5c71273.jpg]]

+ 图片理解：

> 边际成本线，无论$LMC,SMC$，都是倾斜向上的(因为产出$y$充分大的时候，边际产出递减，边际成本递增)

> $SMC$最终会高于$LMC$的理解：
>
> + 1.因为$SMC$与$SAC$交于$SAC$最低点，$LMC$与$LAC$交于$LAC$，而$SAC$高于$LAC$，且在某一点相切，因此$SMC$最终会高于$LMC$
> + 2.在$SAC$与$LAC$的切点的左边，$SAC>LAC$，切点处$SAC=LAC$，因此，在这个区间上$SMC<LMC$；在$SAC$与$LAC$的切点的右边，$SAC>LAC$，切点处$SAC=LAC$，因此，在这个区间上$SMC>LMC$
