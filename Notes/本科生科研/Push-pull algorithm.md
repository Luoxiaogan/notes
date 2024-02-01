---
~
---
> Notations

First we have primitive row-stochastic matrix $A$, primitive column-stochastic matrix $B$ satisfying $\pi_l^T A=\pi_l^T$, $A \mathbb{1}_n = \mathbb{1}_n$, $\mathbb{1}_{n}^TB=B$, $B\pi_{r}=\pi_{r}$. Here $\pi_{l}$, $\pi_{r}$ is the Perron vector whose sum is $1$.

We have the push-pull algorithm:
$$
\begin{align}
\mathbf{x}^{(k+1)} &= A\mathbf{x}^{(k)} - \alpha \mathbf{y}^{(k)} \\
\mathbf{y}^{(k+1)} &= B\mathbf{y}^{(k)} + \mathbf{g}^{(k+1)} -\mathbf{g}^{(k)}
\end{align}
$$
Where $\mathbf{g}^{(k)}=(g^{(k)}_{1},\dots,g^{(k)}_{n})^T=(\nabla f_{1}(x^{(k)}_{1}),\dots,\nabla f_{n}(x^{(k)}_{n}))^T$, $\mathbf{y}^{(0)}=\mathbf{g}^{(0)}$. 

And we define $\mathbf{w}^{(k)} = \mathbb{1}_{n}\pi_{l}^T\mathbf{x}^{(k)},\bar{y}=\frac{1}{n}\mathbb{1}_{n}^T\mathbf{y},v_{B}^{(k)}=B^k\mathbb{1}_{n},J^{(k)}=\frac{1}{n}v_{B}^{(k+1)}\mathbb{1}_{n}^T,c^({k})=\pi_{l}^Tv_{B}^{(k)}$.

We use each component of $\mathbf{y}^{(k)}$ to track the average gradient, and each component of $\mathbf{x}^{(k)}$ to seek the optimal point.

Each node pulls the information from its in-neighbor to update the paremeter $\mathbf{x}^{(k)}$, forming the row-stochatic matrix $A$. Then each node pushs the information to its out-neighbor, so each node recives information from the other. Since each node evaluates $\lvert  \mathcal{N}_i^{out} \rvert$ to make sure the sum of weights is $1$, we have column-stochastic matrix $B$.

+ Inner products
$$
\begin{align}
\langle \mathbf{x}, \mathbf{y} \rangle _{\pi_{l}} &\triangleq \mathbf{x}^T \text{diag}(\pi_{l})\mathbf{y}, \\
\langle \mathbf{x}, \mathbf{y} \rangle _{{\pi}_{r}}&\triangleq\mathbf{x}^T \text{diag}(\pi_{l})^{-1}\mathbf{y}
\end{align}
$$

+ Norms
$$
\begin{align}
||  \mathbf{x} ||  _{\pi_{l}} &\triangleq \sqrt{ [\pi_{l}]_{1}x_{1}^2+\dots+ [\pi_{l}]_{n}x_{n}^2 }=||  \text{diag}(\sqrt{ \pi_{l} }) \mathbf{x} ||_{2}   \\
||  \mathbf{x} ||  _{\pi_{r}} &\triangleq \sqrt{ \frac{x_{1}^2}{[\pi_{r}]_{1}}+\dots+\frac{x_{n}^2 }{ [\pi_{r}]_{n}}}=||  \text{diag}(\sqrt{ \pi_{r} })^{-1} \mathbf{x} ||_{2}  
\end{align}
$$

+ Marix norms
$$
\begin{align}
| ||  X ||  |_{\pi_{l}} &\triangleq | ||\text{diag}(\sqrt{ \pi_{l} }) X \text{diag}(\sqrt{ \pi_{l} }) ^{-1} | ||  _{2} \\
| ||  X ||  |_{\pi_{r}} &\triangleq | ||\text{diag}(\sqrt{ \pi_{r} })  ^{-1} X \text{diag}(\sqrt{ \pi_{r} })| ||  _{2}
\end{align}
$$


> Consensus Error Part

Left multiply $\mathbb{1}_{n}\pi_{l}^T$ on both side, we have:
$$
\mathbf{w}^{(k+1)} = \mathbf{w}^{(k)} - \alpha \mathbb{1}_{n}\pi_{l}^T\mathbf{y}^{(k)}
$$
Note that $A\mathbf{x}-\mathbf{w}=A\mathbf{x}-\mathbb{1}_{n}\pi_{l}^T\mathbf{x}=A\mathbf{x}-A_{\infty}\mathbf{x}=(A-A_{\infty})(\mathbf{x}-A_{\infty}\mathbf{x})=(A-\mathbb{1}_{n}\pi_{l}^T)(\mathbf{x}-\mathbf{w})$

Then we unfold the iteration:
$$
\begin{align}
\mathbf{x}^{(k+1)} - \mathbf{w}^{(k+1)} &=(A\mathbf{x}^{(k)} - \alpha \mathbf{y}^{(k)})-(\mathbf{w}^{(k)} - \alpha \mathbb{1}_{n}\pi_{l}^T\mathbf{y}^{(k)}) \\
&= A\mathbf{x}^{(k)}-\mathbf{w}^{(k)}-\alpha \mathbf{y}^{(k)}+\alpha \mathbb{1}_{n}\pi_{l}^T\mathbf{y}^{(k)} \\
& = A\mathbf{x}^{(k)}-\mathbf{w}^{(k)} -\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k)} \\
 & = (A- \mathbf{1}_{n}\pi _{l}^T)(\mathbf{x}^{(k)} - \mathbf{w}^{(k)} )-\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k)} 
\end{align}
$$
Then:
$$
\begin{align}
\mathbf{x}^{(k+1)} - \mathbf{w}^{(k+1)} &=(A- \mathbf{1}_{n}\pi _{l}^T)(\mathbf{x}^{(k)} - \mathbf{w}^{(k)} )-\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k)}  \\
 & = (A- \mathbf{1}_{n}\pi _{l}^T)[(A- \mathbf{1}_{n}\pi _{l}^T)(\mathbf{x}^{(k-1)} - \mathbf{w}^{(k-1)} )-\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k-1)} ]-\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k)}  \\
 & = (A- \mathbf{1}_{n}\pi _{l}^T)^2(\mathbf{x}^{(k-1)} - \mathbf{w}^{(k-1)} )-\alpha (A- \mathbf{1}_{n}\pi _{l}^T)(I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k-1)} -\alpha (I_{n}-\mathbb{1}_{n}\pi_{l}^T) \mathbf{y}^{(k)}  \\
 & = \dots \\
 & =(A- \mathbf{1}_{n}\pi _{l}^T)^{k+1}(\mathbf{x}^{(0)}-\mathbf{w}^{(0)})-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)\mathbf{y}^{(k-i)}
\end{align}
$$
Since $\mathbf{x}^{(0)}=\mathbf{w}^{(0)}$ ( why? ), we have:
$$
\mathbf{x}^{(k+1)} - \mathbf{w}^{(k+1)} =-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)\mathbf{y}^{(k-i)}
$$
Using gradient tracking, we have:
$$
\begin{align}
\mathbf{x}^{(k+1)} - \mathbf{w}^{(k+1)} &=-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)\mathbf{y}^{(k-i)} \\
 & =-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)(\mathbf{y}^{(k-i)}-J^{(k-i)}\mathbf{y}^{(k-i)})-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)J^{(k-i)}\mathbf{y}^{(k-i)}  
\end{align}
$$
The first term is easy to control, considering the second term, and note that $\bar{y}=\bar{g}$, we have:
$$
\begin{align}
&-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)J^{(k-i)}\mathbf{y}^{(k-i)}   \\
=&-\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T) (\frac{1}{n} v_{B}^{(k-i+1)}\mathbb{1}_{n}^T)\mathbf{y}^{(k-i)} \\
=& -\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)  v_{B}^{(k-i+1)}\bar{y}^{(k-i)}  \\
=& -\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(v_{B}^{(k-i+1)}-\mathbb{1}_{n}\pi_{l}^Tv_{B}^{(k-i+1)})\bar{y}^{(k-i)}  \\
=& -\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(v_{B}^{(k-i+1)}-c^{(k-i+1)}\mathbb{1}_{n})\bar{y}^{(k-i)}  \\
=& -\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(v_{B}^{(k-i+1)}-c^{(k-i+1)}\mathbb{1}_{n})\bar{g}^{(k-i)} 
\end{align}
$$

So let's consider the norm of consensus error:
$$
\begin{align}
||  \mathbf{x}^{k+1}-\mathbf{w} ^{(k+1)}||_{\pi_{{l}}}&=  ||  \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)\mathbf{y}^{(k-i)} ||  _{\pi_{l}} \\
& = ||  \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)(\mathbf{y}^{(k-i)}-J^{(k-i)}\mathbf{y}^{(k-i)})+\alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)J^{(k-i)}\mathbf{y}^{(k-i)}   || _{\pi_{{l}}}  \\
& \leq  ||  \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)(\mathbf{y}^{(k-i)}-J^{(k-i)}\mathbf{y}^{(k-i)}) ||_{\pi_{{l}}}+ || \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)J^{(k-i)}\mathbf{y}^{(k-i)}     ||  _{\pi_{{l}}}   \\
& = ||  \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(I_{n}-\mathbb{1}_{n}\pi_{l}^T)(\mathbf{y}^{(k-i)}-J^{(k-i)}\mathbf{y}^{(k-i)}) ||_{\pi_{{l}}}+ || \alpha \sum^{k}_{i=0}(A- \mathbf{1}_{n}\pi _{l}^T)^i(v_{B}^{(k-i+1)}-c^{(k-i+1)}\mathbb{1}_{n})\bar{g}^{(k-i)}     ||  _{\pi_{{l}}}  
\end{align} 
$$

> Gradient Tracking Part

Left multiply $\frac{1}{n}\mathbb{1}_{n}^T$ on both side, we have:
$$
\bar{y}^{(k+1)} = \bar{y}^{(k)} + \bar{g}^{(k+1)} -\bar{g}^{(k)}
$$
Since $\bar{y}^{(0)}=\bar{g}^{(0)}$, we have $\bar{y}^{(k)}=\bar{g}^{(k)}$. This means the average of $y^{(k)}$ is exactly tracking the global sum of gradients $\bar{\mathbf{g}}^{(k)}=\frac{1}{n}\sum_{i=1}^n \nabla f_{i}(x_{i}^{(k)})$. It will be fantastic if $\mathbf{x}^{(k+1)}=A\mathbf{x}^{(k)}-\alpha \bar{\mathbf{y}}^{(k)}$, because this nearly reduces to gradient decent. However, the model parameters are updated with $\mathbf{y}^{(k)}$ instead of $\bar{\mathbf{y}}^{(k)}$. This is a gap and the error of $\mathbf{y}^{(k)}-\alpha  \bar{\mathbf{y}}^{(k)}$ should be considered. 

Firstly, we have the lemma:

>[!lemma|1]
> $$\begin{align}
|| &\mathbf{y}^{(k-i)}-J^{(k-i)}\mathbf{y}^{(k-i)} ||_{\pi}^2   = \sum_{i=0}^k ||  (B^{(k-i+1)}-J^{(k+1)})(\mathbf{g}^{(i+1)}-\mathbf{g}^{(i)}) ||_{\pi}^2 \\
+&2\sum_{i=0}^k  \langle  (B^{(k-i+1)}-J^{(k+1)})(\mathbf{y}^{(i)}-J^{(i)}\mathbf{y}^{(i)}),(B^{(k-i+1)}-J^{(k+1)})(\mathbf{g}^{(i+1)}-\mathbf{g}^{(i)})\rangle _{\pi}
\end{align}$$

To bound the first part, we have the following lemma:








