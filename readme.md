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

- <strong>ft_isalpha</strong> - Verifica se determinado caractere é alfabético.

- <strong>ft_isdigit</strong> - checa se é um digito (0 a 9).

- <strong>ft_isalnum</strong> - checa se é um caractere alfanumérico.

- <strong>ft_isascii</strong> - checa se é um caractere que faz parte da tabela ASCII tradicional.

- <strong>ft_isprint</strong> - checa se é um caractere printável.

- <strong>ft_toupper</strong> - converte o caractere para maiúsculo.

- <strong>ft_tolower</strong> - converte o caractere para minúsculo.

## Funções da biblioteca <string.h>

- **ft_memset** - Enche o bloco de memória com um mesmo byte.

- **ft_strlen** - Calcula o tamanho de uma string.

- **ft_bzero** - Preenche uma string com zero.

- **ft_memcpy** - Copia uma área de memória.

- **ft_memmove** - Copia uma área de memória.

-**ft_strlcpy** - Copia uma string para um tamanho especificado.

- **ft_strlcat** - Concatena uma string para um um tamanho especificado.

- **ft_strchr** - Localiza a primeira ocorrência de um caractere em uma string.

- **ft_strrch**r - Localiza a última ocorrência de um caractere em uma string.

- **ft_strncmp**- Compara duas strings.

- **ft_memchr** - Checa um bloco de memória em busca de um caractere.

- **ft_memcmp** - Compara blocos de memória.

- **ft_strnstr** - Cocaliza uma substring dentro de uma string.

- **ft_strdup** - Cria uma duplicata da string passada como parâmetro.

## Funções da biblioteca <stdlib.h>

- **ft_atoi** - Converte uma string para um inteiro.

- **ft_calloc** - Alloca memória e seta o valor de todos os bytes para 0.

## Funções exclusivas do projeto

- **ft_substr** - Retorna uma substring de uma string.

- **ft_strjoin** - Retorna uma string que é a junção das duas strings passadas como parâmetro.

- **ft_strtrim** - Corta o início e fim de uma string quando achada a sequência de caracteres passada.

- **ft_split** -Separa uma string em várias substrings delimitadas por um caractere.

- **ft_itoa** - Converte um número em string.

- **ft_strmapi** - aplica uma função em uma string e retorna uma nova string modifica.

- **ft_striteri** - Aplica uma função em cada char de uma string.

- **ft_putchar_fd** - Escreve um caractere em um fd

- **ft_putstr_fd** - Escreve uma string em um fd.

- **ft_putendl_fd** - Escreve uma string seguida por uma quebra de linha em um fd.

- **ft_putnbr_fd** - Escreve um número em um file descriptor.

## Funções para manusear Linked Lists

- **ft_lstnew** - Cria um novo elemento para uma lista.

- **ft_lstadd_front** - Adiciona um elemento no início de uma lista.

- **ft_lstsize** - Conta o número de elementos em uma lista.

- **ft_lstlast** - Retorna o último elemento de uma lista.

- **ft_lstadd_back** - Adiciona um elemento ao fim de uma lista.

- **ft_lstclear** - Deleta e da free em uma lista.

- **ft_lstiter** - Aplica uma função a cada elemento de uma lista.

- **ft_lstmap** - Aplica uma função a cada elemento de uma lista e retorna uma uma nova lista com as aplicações.

<h1 align="center"><strong>Principais Conceitos Aprendidos</strong></h2>

- Criação de algoritmos.
- Estrutura de dados (Linked Lists)
- Fundamentos da linguagem C
- Manipulação de Strings
- Gerenciamento de memória
- Manipulação de ponteiros.
