# Trabalho 3 - 775. Global and Local Inversions
# Miguel Muller da Rosa
## 25100780
---

Parte do codigo foi dado em aula pelo professor

---

You are given an integer array nums of length n which represents a permutation of all the integers in the range [0, n - 1].

The number of global inversions is the number of the different pairs (i, j) where:

0 <= i < j < n
nums[i] > nums[j]
The number of local inversions is the number of indices i where:

0 <= i < n - 1
nums[i] > nums[i + 1]
Return true if the number of global inversions is equal to the number of local inversions.

Example 1:

Input: nums = [1,0,2]
Output: true
Explanation: There is 1 global inversion and 1 local inversion.
Example 2:

Input: nums = [1,2,0]
Output: false
Explanation: There are 2 global inversions and 1 local inversion.
 

Constraints:

n == nums.length
1 <= n <= 105
0 <= nums[i] < n
All the integers of nums are unique.
nums is a permutation of all the numbers in the range [0, n - 1].
---

Acredito que o algoritmo implementado no código seja O(n log n) devido ao uso da árvore AVL para inserir e contar os elementos. Ou seja, para cada elemento do array, o código insere o valor na árvore e conta quantos valores já inseridos são maiores que ele, e como a árvore é balanceada, cada uma dessas duas operações desce apenas pela altura da árvore, que é log n, o que resulta em uma complexidade quase-linear. Já a memória, a complexidade é O(n) pois o código cria um nó na árvore para cada elemento do array, além de algumas variáveis auxiliares que não dependem do tamanho do input.