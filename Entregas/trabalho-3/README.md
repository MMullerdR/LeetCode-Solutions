# Trabalho 3 - 775. Global and Local Inversions
# Miguel Muller da Rosa
## 25100780
---

Parte do codigo foi dado em aula pelo professor

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

Acredito que o algoritmo implementado no codigo seja O(n^2) devido ao uso de loops aninhados para percorrer o array. Ou seja, para cada elemento do array, o codigo precisa verificar todo o restante e se necessário (caso nao tenha encontrado até chegar ao fim dele) percorrer do inicio até a posição do elemento, o que resulta em uma complexidade quadrática. Já a memoria, a complexidade é O(n) pois o codigo utiliza um array de mesmo tamanho do input para armazenar os resultados, além de algumas variáveis auxiliares que nao dependem do tamanho do input. 