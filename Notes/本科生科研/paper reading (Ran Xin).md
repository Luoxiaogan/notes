> Contribution

1. By choosing a sufficiently small constant step-size $\alpha$, $\mathcal{S-AB}$ algorithm converges linearly to a neighborhood of the global minimizer.
2. Provide explicit expression of the appropriate norms, under which the row- and column-stochatic weight matrixes contract.

> Reviewing

1. **Gradient Tracking** method has been proposed where the local gradient at each agent is replaced by the estimate of the global gradient. This method rely on separate iterations for eigenvector estimation that may impede the convergence.

> Notations

For a primitive, row-stochatic matrix $A$, we have $A\mathbb{1}_{n}=\mathbb{1}_{n}$, $\pi_{l}^TA=\pi_{l}^T$, $\pi_{l}^T\mathbb{1}_{n}=1$. And $A_{\infty}=\lim_{ n \to \infty }A_{n}=\mathbb{1}_{n}\pi_{l}^T$. Similarly, for a primitive, column-stochatic matrix $B$, we have $\mathbb{1}_{n}^TB=\mathbb{1}_{n}^T$, $B\pi_{r}=\pi_{r}$, $\pi_{r}^T\mathbb{1}_{n}=1$. And $B_{\infty}=\pi_{r}\mathbb{1}_{n}^T$.
+ $A_{\infty}=\mathbb{1}_{n}\pi_{l}^T$
+ $B_{\infty}=\pi_{r}\mathbb{1}_{n}^T$

> $\mathcal{S-AB}$ Algorithm

For each agent:
$$
\begin{align}
\mathbf{x}^{(k+1)}_{i} &= \sum^{n}_{j=1}a_{ij}\mathbf{x}^{(k)}_{j}-\alpha \mathbf{y}^{(k)}_{i} \\
\mathbf{y}^{(k+1)}_{i}&=\sum_{j=1}^n b_{ij}\mathbf{y}^{(k)}_{j} +\mathbf{g}_{i}(\mathbf{x}^{(k+1)}_{i},\xi_{i}^{(k+1)})-\mathbf{g}_{i}(\mathbf{x}^{(k)}_{i},\xi_{i}^{(k)})
\end{align}
$$
Where $A=(a_{ij})$ is row-stochatic, and $B=(b_{ij})$ is column-stochatic.

The aggregated form:
$$
\begin{align}
\mathbf{x}^{(k+1)} &= \mathcal{A}\mathbf{x}^{(k)}-\alpha \mathbf{y}^{(k)} \\
\mathbf{y}^{(k+1)} &= \mathcal{B}\mathbf{y}^{(k)} + \mathbf{g}(\mathbf{x}^{(k+1)},\mathbf{\xi}^{(k+1)})-\mathbf{g}(\mathbf{x}^{(k)},\mathbf{\xi}^{(k)})
\end{align}
$$
Where 
$$
\mathbf{x}^{(k)} \triangleq \begin{bmatrix}
\mathbf{x}^{(k)}_{1}   \\
\vdots \\
\mathbf{x}^{(k)}_{n}
\end{bmatrix},\mathbf{y}^{(k)} \triangleq \begin{bmatrix}
\mathbf{y}^{(k)}_{1}   \\
\vdots \\
\mathbf{y}^{(k)}_{n}
\end{bmatrix},\mathbf{g}^{(k)}(\mathbf{x}^{(k)},\mathbf{\xi}^{(k)}) \triangleq \begin{bmatrix}
\mathbf{g}^{(k)}_{1}(\mathbf{x}^{(k)}_{1},\mathbf{\xi}^{(k)}_{1})  \\
\vdots \\
\mathbf{g}^{(k)}_{n}(\mathbf{x}^{(k)}_{n},\mathbf{\xi}^{(k)}_{n})
\end{bmatrix}
$$

> Auxiliary Results

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


>[!lemma|1] Contract norms
>$$\begin{align}
||  A\mathbf{x}-A_{\infty}\mathbf{x} || _{\pi_{l}} &\leq \sigma_{A}||  \mathbf{x}-A_{\infty}\mathbf{x} ||  _{\pi_{l}} \\
||  B\mathbf{x}-B_{\infty}\mathbf{x} || _{\pi_{r}} &\leq \sigma_{B}||  \mathbf{x}-B_{\infty}\mathbf{x} ||  _{\pi_{r}} 
\end{align}$$
> with $\sigma_{A} \triangleq||  | A-A_{\infty}| | |_{\pi_{l}}<1$ and $\sigma_{B} \triangleq||  | B-B_{\infty}| | |_{\pi_{r}}<1$ .

First, we have $(A\mathbf{x}-A_{\infty}\mathbf{x})A_{\infty}\mathbf{x}=0$, so $A\mathbf{x}-A_{\infty}\mathbf{x}=(A-A_{\infty})(\mathbf{x}-A_{\infty}\mathbf{x})$. This leads to:
$$
|||  A\mathbf{x}-A_{\infty}\mathbf{x} |||_{\pi_{l}}\leq  |||  A-A_{\infty} |||  _{\pi_{l}} ||  \mathbf{x}-A_{\infty} \mathbf{x}||  _{\pi_{l}}
$$

By the definition of matrix norms, we have:
$$
|||  A - A_{{\infty}}  |||  _{{\pi_{l}}}= | ||\text{diag}(\sqrt{ \pi_{l} }) (A-A_{\infty}) \text{diag}(\sqrt{ \pi_{l} }) ^{-1} | ||  _{2} = \sqrt{ \lambda_{\max}(J) }
$$

Where $J=\text{diag}(\sqrt{ \pi_{l} }) ^{-1}(A-A_{\infty})^T \text{diag}(\pi_{l} )(A-A_{\infty})\text{diag}(\sqrt{ \pi_{l} })^{-1}$.

So we need to show that $\sigma_{A}=\sqrt{ \lambda_{\max}(J) }<1$.




