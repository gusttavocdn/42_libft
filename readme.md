<h1 align="center"><strong>LIBFT - @42SP</strong></h1>

<p align="center">Esse projeto é sobre desenvolver uma biblioteca estatica em C. Contem minha propria implementação de diversas funções da standard lib do C.</p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> </p>
 <p align="center">Nota: <strong>122/100</strong> ✔️ </p>

<h2 align="center"><strong>Oque é a Libft?</strong></h2>

Esse é o primeiro projeto do curriculo da 42. Consiste em recriar diversas funções padrão
da linguagem para serem usadas durante o desenvolvimento du curso, visto que não podemos
usar as originais. Essa é uma biblioteca vive e novas funções podem ser adicionadas a ela
aumentando suas funcionalidades.

<h1 align="center"><strong>Funções</strong></h1>

## Funções da biblioteca <ctype.h>

- <strong>[`ft_isalpha`](ft_atoi.c)</strong> - Verifica se determinado caractere é alfabético.

- <strong>[`ft_isdigit`](ft_isdigit.c)</strong> - checa se é um digito (0 a 9).

- <strong>[`ft_isalnum`](ft_isalnum.c)</strong> - checa se é um caractere alfanumérico.

- <strong>[`ft_isascii`](ft_isascii.c)</strong> - checa se é um caractere que faz parte da tabela ASCII tradicional.

- <strong>[`ft_isprint`](ft_isprint.c)</strong> - checa se é um caractere printável.

- <strong>[`ft_tolower`](ft_tolower.c)</strong> - converte o caractere para maiúsculo.

- <strong>[`ft_toupper`](ft_toupper.c)</strong> - converte o caractere para minúsculo.

## Funções da biblioteca <string.h>

- **[`ft_memset`](ft_memset.c)** - Enche o bloco de memória com um mesmo byte.

- **[`ft_strlen`](ft_strlen.c)** - Calcula o tamanho de uma string.

- **[`ft_bzero`](ft_bzero.c)** - Preenche uma string com zero.

- **[`ft_memcpy`](ft_memcpy.c)** - Copia uma área de memória.

- **[`ft_memmove`](ft_memmove.c)** - Copia uma área de memória.

- **[`ft_strlcpy`](ft_strlcpy.c)** - Copia uma string para um tamanho especificado.

- **[`ft_strlcat`](ft_strlcat.c)** - Concatena uma string para um um tamanho especificado.

- **[`ft_strchr`](ft_strchr.c)** - Localiza a primeira ocorrência de um caractere em uma string.

- **[`ft_strrchr`](ft_strrchr.c)** - Localiza a última ocorrência de um caractere em uma string.

- **[`ft_strnrcmp`](ft_strncmp.c)**- Compara duas strings.

- **[`ft_memchr`](ft_memchr.c)** - Checa um bloco de memória em busca de um caractere.

- **[`ft_memcmp`](ft_memcmp.c)** - Compara blocos de memória.

- **[`ft_strnstr`](ft_strnstr.c)** - Localiza uma substring em uma string.

- **[`ft_strdup`](ft_strdup.c)** - Cria uma duplicata da string passada como parâmetro.

## Funções da biblioteca <stdlib.h>

- **[`ft_atoi`](ft_atoi.c)** - Converte uma string para um inteiro.

- **[`ft_calloc`](ft_calloc.c)** - Alloca memória e seta o valor de todos os bytes para 0.

## Funções exclusivas do projeto

- **[`ft_substr`](ft_substr.c)** - Retorna uma substring de uma string.

- **[`ft_strjoin`](ft_strjoin.c)** - Retorna uma string que é a junção das duas strings passadas como parâmetro.

- **[`ft_strtrim`](ft_strtrim.c)** - Corta o início e fim de uma string quando achada a sequência de caracteres
  passada.

- **[`ft_split`](ft_split.c)** -Separa uma string em várias substrings delimitadas por um caractere.

- **[`ft_itoa`](ft_itoa.c)** - Converte um número em string.

- **[`ft_strmapi`](ft_strmapi.c)** - aplica uma função em uma string e retorna uma nova string modifica.

- **[`ft_striteri`](ft_striteri.c)** - Aplica uma função em cada char de uma string.

- **[`ft_putchar_fd`](ft_putchar_fd.c)** - Escreve um caractere em um fd

- **[`ft_putstr_fd`](ft_putstr_fd.c)** - Escreve uma string em um fd.

- **[`ft_putendl_fd`](ft_putendl_fd.c)** - Escreve uma string seguida por uma quebra de linha em um fd.

- **[`ft_putnbr_fd`](ft_putnbr_fd.c)** - Escreve um número em um file descriptor.

[//]: # (## Funções para manusear Linked Lists)

[//]: # ()

[//]: # (- **ft_lstnew** - Cria um novo elemento para uma lista.)

[//]: # ()

[//]: # (- **ft_lstadd_front** - Adiciona um elemento no início de uma lista.)

[//]: # ()

[//]: # (- **ft_lstsize** - Conta o número de elementos em uma lista.)

[//]: # ()

[//]: # (- **ft_lstlast** - Retorna o último elemento de uma lista.)

[//]: # ()

[//]: # (- **ft_lstadd_back** - Adiciona um elemento ao fim de uma lista.)

[//]: # ()

[//]: # (- **ft_lstclear** - Deleta e da free em uma lista.)

[//]: # ()

[//]: # (- **ft_lstiter** - Aplica uma função a cada elemento de uma lista.)

[//]: # ()

[//]: # (- **ft_lstmap** - Aplica uma função a cada elemento de uma lista e retorna uma uma nova lista com as aplicações.)

[//]: # (## Funções Extras)

[//]: # ()

[//]: # (- **get_next_line** - Função que le um arquivo uma linha por vez.)

[//]: # (- **ft_ftprintf** - Função que exibe uma string formatada na tela.)

[//]: # (- **ft_put_unsigned_fd** - Exibe um unsigned int em um fd.)

[//]: # (- **ft_print_hex_nbr** - Exibe um numero em hexadecimal no stdout.)

[//]: # (- **ft_print_hex_memory** - Exibe um ponto de memoria em hexadecimal na tela.)

<h2 align="center"><strong>Principais Conceitos Aprendidos</strong></h2>

- Criação de algoritmos.
- Estrutura de dados (Linked Lists)
- Fundamentos da linguagem C
- Manipulação de Strings
- Gerenciamento de memória
- Manipulação de ponteiros.
