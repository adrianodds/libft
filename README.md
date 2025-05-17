# 🧠 Libft – A Library Worthy of C

## 📚 Descrição

Este projeto consiste em reimplementar várias funções da biblioteca padrão da linguagem C, além de outras funções utilitárias úteis para o desenvolvimento de projetos futuros. A proposta é desenvolver uma biblioteca pessoal — a famosa **Libft** — com foco em manipulação de strings, memória, listas encadeadas e outros elementos fundamentais da linguagem C.

### Porque quem nunca reimplementou `strlcat()` na unha, nunca viveu a dor e a glória da 42.

## 🛠️ Funcionalidades

A `libft.a` inclui:

### Funções da libc
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`
- `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`
- ...e outros clássicos da libc.

### Funções adicionais
- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

### Manipulação de listas encadeadas
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Sim, até listas encadeadas. Porque C não tem `std::vector`, mas tem você.

## 🏗️ Estrutura do Projeto

Verdade! Para mostrar o código Markdown **sem que ele seja renderizado** aqui, preciso “escapar” as crases ou usar outra formatação.

Vou mostrar direitinho como escrever no seu README.md para que apareça a árvore de pastas com a formatação correta.

---

### Para o seu README.md, copie exatamente este trecho:

\`\`\`
libft/
├── ft\_*.c
├── ft\_*.h
├── libft.h
└── Makefile
\`\`\`

(*sem as barras invertidas* — aqui elas só estão para mostrar o código! No seu arquivo, não coloque as barras invertidas\*)

---

### Ou seja, no seu README.md escreva:

```markdown
```

libft/
├── ft\_*.c
├── ft\_*.h
├── libft.h
└── Makefile

```
```

---

### Explicação

* As três crases ` ``` ` abrem e fecham o bloco de código.
* Tudo dentro desse bloco aparece exatamente como você escreveu, com espaços e símbolos preservados.
* Assim o GitHub exibe a estrutura da pasta formatada.

---

Se quiser, posso montar um arquivo README.md completo com isso já formatado pra você! Quer?


## 🔧 Compilação
```markdown
- Compile a biblioteca com: `make`

- Para limpar os arquivos objeto: `make clean`

- Para limpar tudo (incluindo libft.a): `make fclean`

- Para recompilar do zero: `make re`
```
## Autor

Adriano Silva

## Licença

Este projeto segue as normas da 42: ou seja, pode usar, pode copiar, só não plagie no intra. 😉
