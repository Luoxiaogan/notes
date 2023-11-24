# 2

+ 依据特征(features)进行预测(prediction)

## 基本框架

+ Input

> Domain Set $\mathcal{X}$：样本的特征
> Label Set $\mathcal{Y}$：(已知的)预测结果
> Training Data $S=\mathcal{X} \times \mathcal{Y}$：一个样本的特征和已知结果一一对应

+ Output

> Classifier $h: \mathcal{X} \to \mathcal{Y} $， $h=A(S)$

+ Data-generation model

> $\mathcal{X}$的选取，依赖于概率分布$\mathcal{D}$
> 对于取定的$x_i$，有label function $f, f(x_i)=y_i$
> 希望去拟合$f$

+ Measure of success

> error of  classifier：根据分布$\mathcal{D}$生成$x_i$，已知$y_i$，那么$h(x_i)\neq y_i$的概率就定义成失败几率

> 给定样本$\mathcal{X}$，事件$A\in \mathcal{X}$，那么随机选取$\mathcal{D}$中一个点，落在$A$中的概率记为$\mathcal{D}(A)$
> $\pi : \mathcal{X} \to \{0,1\}, A=\{x\in \mathcal{X}|\pi(x)=1\},\mathcal{D}(A)=\mathbb{P}_{\mathcal{D}\sim x}(\pi(x))$

> **true error** of $h$：$\mathcal{L}_{\mathcal{D},f}(h):=\mathbb{P}_{\mathcal{D}\sim x}(h(x)\neq f(x))$

> 实际上不知道$\mathcal{D}$和$f$，所以true error很多时候是不知道的

> **empirical error**：$L_{S}(h)=\frac{|\{i \in [m], h(x_i)\neq y_i\}|}{m}$

+ 最终目的：**empirical risk minimization (ERMB)**
