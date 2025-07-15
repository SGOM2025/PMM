# 📦 Problema da Mochila Múltipla (Multiple Knapsack Problem - MKP)

Este projeto implementa algoritmos para resolver o **Problema da Mochila Múltipla (MKP)**, uma extensão do problema clássico da mochila, onde múltiplas mochilas estão disponíveis e cada item pode ser colocado em no máximo uma delas. O objetivo é maximizar o valor total dos itens selecionados, respeitando as capacidades das mochilas.

---

## 📐 Definição do Problema

Dado:
- Um conjunto de `n` itens
- Cada item `i` possui:
  - Valor `v[i]`
  - Peso `w[i]`
- Um conjunto de `m` mochilas
  - Cada mochila `j` possui capacidade `C[j]`

Objetivo:
- Alocar itens às mochilas **sem exceder suas capacidades**
- **Maximizar o valor total** dos itens alocados
- Cada item pode ser colocado em **no máximo uma mochila**

---

## 📁 Formato das Instâncias

Cada instância do problema segue o seguinte formato:

```txt
n m
v[0] v[1] ... v[n-1]       # valores dos itens
w[0] w[1] ... w[n-1]       # pesos dos itens
C[0] C[1] ... C[m-1]       # capacidades das mochilas
```

### Exemplo (`pmm1.txt`):

```
4 2
10 7 6 9
5 3 4 8
10 5
```

- 4 itens e 2 mochilas
- Valores: 10, 7, 6, 9
- Pesos: 5, 3, 4, 8
- Capacidades: 10 e 5

---

## 📦 Instâncias disponíveis

- `pmm1.txt` – Pequena (n=4, m=2)
- `pmm2.txt` – Média (n=50, m=5)
- `pmm3.txt` – Grande (n=500, m=50)

---

## 📊 Resultados Obtidos

Os resultados da execução estão no arquivo `opt - Copia.txt` e incluem:

| Instância   | Valor Total | Tempo (s) | Gap (%) | Memória (MB) |
|-------------|-------------|-----------|---------|--------------|
| pmm1.txt    | 23          | 0.03      | 0.00%   | —            |
| pmm2.txt    | 25,397      | 2.01      | 0.00%   | —            |
| pmm3.txt    | 224,292     | 6566.58   | 0.04%   | 51,602.88    |

---

## ⚙️ Execução

Se o programa estiver implementado em C++:

```bash
g++ mochila_multipla.cpp -o mkp
./mkp pmm1.txt
```

Ou em Python:

```bash
python3 mochila_multipla.py pmm1.txt
```

---

## 🚀 Possíveis Técnicas Utilizadas

- Heurísticas gulosas
- Busca local e vizinhança
- Programação inteira (com resolvedores como Gurobi/CPLEX)
- Algoritmos híbridos

---

## 👨‍🏫 Sobre

Projeto acadêmico desenvolvido para a disciplina de **Pesquisa Operacional / Métodos de Otimização**  
**Universidade Federal do Espírito Santo (UFES)**  
**Departamento de Computação**

---