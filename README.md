*This project has been created as part of the 42 curriculum by [Seu Login aqui].*

# Push_swap

## Description
O projeto **Push_swap** é um desafio algorítmico estruturado onde o objetivo é ordenar um conjunto de números inteiros em uma stack, utilizando uma segunda stack auxiliar e um conjunto limitado de instruções. O foco principal é a **proficiência em C** e a aplicação de algoritmos de ordenação, buscando a sequência mais curta de movimentos (menor complexidade) para atingir o estado ordenado.

## Instructions

### Compilação
Para compilar o programa, utilize o Makefile incluído na raiz do repositório. O Makefile utiliza as flags obrigatórias `-Wall -Wextra -Werror`.

```bash
make
```

### Execução
O programa recebe uma lista de inteiros como argumento. O primeiro argumento será colocado no topo da stack **a**.

```bash
./push_swap 4 67 3 87 23
```

### Verificação (Checker)
Para verificar se a saída do seu programa realmente ordena os números, utilize o `checker_OS` (disponível na intranet da 42):

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```

## Resources
*   **Documentação Oficial:** Subject do projeto Push_swap (v10).
*   **Algoritmos de Ordenação:** Pesquisas sobre complexidade e algoritmos para pequenas e grandes quantidades de dados.

### Uso de IA
Neste projeto, a Inteligência Artificial foi utilizada como uma ferramenta de suporte técnico e pedagógico das seguintes formas:

1.  **Refinamento de Lógica de Movimentos:** Auxílio na distinção técnica entre movimentos de rotação (`ra`) e rotação reversa (`rra`), garantindo que o comportamento dos ponteiros em uma lista duplamente encadeada estivesse correto.
2.  **Validação de Segurança:** Explicação e implementação de travas de segurança essenciais (como a verificação de stacks vazias ou com apenas um elemento: `if (!stack || !*stack || !(*stack)->next)`) para prevenir *segmentation faults* e garantir conformidade com as "Common Instructions" do projeto.
3.  **Depuração de Ambiente e Formatação:** Suporte na resolução de erros de execução no terminal (como o `exec format error`) e na identificação de falhas de formatação nas instruções impressas (garantindo que cada comando fosse seguido apenas por um `\n`), permitindo a validação correta pelo programa `checker`.
4.  **Interpretação do Subject:** Esclarecimento de regras específicas, como a obrigatoriedade de certas funções externas (`exit`) e as exigências do Makefile.

---

### Observações sobre este README:
*   **Login:** Não esqueça de substituir `[Seu Login aqui]` pelo seu login da 42 na primeira linha (ela deve obrigatoriamente estar em itálico).
*   **Seções Adicionais:** Você pode adicionar uma seção de "Technical Choices" (Escolhas Técnicas) se quiser explicar qual algoritmo de ordenação escolheu (ex: Radix, Turk Algorithm, etc.).
*   **Citações:** No arquivo final `.md`, você pode remover os números entre colchetes (ex:), pois eles servem apenas para indicar que a informação veio diretamente do seu material de referência.