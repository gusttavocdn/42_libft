#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <stdbool.h>

// CONSTANTS

#define BUFFER_SIZE 4096
#define NULL_BYTE 1
#define TRUE 1
#define FALSE 0
#define HEX_SIZE 16
#define HEX_LOWER "0123456789abcdef"

// Char Functions

/**
 * @brief This functions verify if a char is character from a-z or A-Z
 * @return Returns 1 if a char is character from a-z or A-Z or 0 otherwise
 */
int ft_isalpha(int c);

/**
 * @brief This functions verify if a char is a digit from 0-9
 * @return Returns 1 if a char is character from 0-9 or 0 otherwise
 */
int ft_isdigit(int c);

/**
 * @brief This functions verify if a char is alphanumeric
 * @return Returns 1 if a char is alphanumeric or 0 otherwise
 */
int ft_isalnum(int c);

/**
 * @brief This functions verify if a char is ascii
 * @return Returns 1 if a char is ascii or 0 otherwise
 */
int ft_isascii(int c);

/**ato
 * @brief This functions verify if a char is printable
 * @return Returns 1 if a char is printable or 0 otherwise
 */
int ft_isprint(int c);

/**
 * @brief This functions converts a upper case character
 * to lower case
 * @param c character to be convert
 * @return Returns the converted char
 */
int ft_toupper(int c);

/**
 * @brief This functions converts a lower case character
 * to upper case
 * @param c character to be convert
 * @return Returns the converted char
 */
int ft_tolower(int c);

/**
 * @brief This functions verify if a char is a space
*/
int ft_isspace(int c);

/**
 * @brief This function verify if a char is upper case
 */
int ft_isupper(int c);

/**
 * @brief This function verify if a char is lower case
 */
int ft_islower(int c);


// String Functions

/**
 * @brief Calculate the length of a string.
 * @return The length of the string. Don't count the null terminator.
 */
size_t ft_strlen(const char *s);

/**
 * @brief Concatenate two strings and return the size of the result.
 * The concatenation is always null terminated.
 * @param dst The buffer where the final concatenation will be stored
 * @param src The string to concatenate
 * @param size The size of the buffer.
 * @return The size buffer has to be to store the concatenation,
 *	without count the NULL terminator
 */
size_t ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief This functions copy a string from a src to a dst buffer.
 *
 * @param dst The buffer where the string will be copied
 * @param src The source string that will be copied
 * @param size The buffer size to store the string. Tale the '\0'
 * in consideration in the size.
 * @return Return the length of the string that is tried to be copied.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief This functions scan an string searching for a substring at n bytes
 *
 * @param big The string to scan
 * @param little The string to search for in the big
 * @param len The n bytes where to searching for the substring
 * @return Returns a pointer to the start of the substring at the string.
 * @return NULL if the substring is not found. Returns the original string if
 * we pass an empty substring
 */
char *ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief This functions founds an c character in a string.
 *
 * @param s The string to search
 * @param c The char to search for in the string
 * @return Returns a pointer to the character if found.
 * @return Returns NULL if not found.
 * @return If c == '\0' returns a pointer to the end of the string.
 */
char *ft_strchr(const char *str, int c);

/**
 * @brief This functions founds the last occurrence of an c character in a
 * string.
 *
 * @param str The string to search
 * @param c The character to search for in the string
 * @return Returns a pointer to the last occurrence
 * of the character if found.
 *  Returns NULL if not found.
 * If c == '\0' returns a pointer to the end of the string.
 */
char *ft_strrchr(const char *str, int c);

/**
 * @brief Compares two strings and returns the result for s1 - s2
 *
 * @param s1 The first string to compare
 * @param s2 The second string
 * @param n Says until we want to compare the two strings
 * @return The result of the comparison
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief This functions returns a pointer to a copy of a
 * string passed as argument
 * @param s The string to be copied
 * @return Returns a pointer to the new string.
 * Returns NULL if insufficient memory is available
 */
char *ft_strdup(const char *s);

// Functions from <stdlib.h> library

/**
 * @brief This functions allocates with calloc
 * and returns a substring from the string 's'
 * @param s The base string to create a substring from.
 * @param start The start index of the substring
 * @param len The max length of the substring
 * @return Returns the substring or NULL if fails.
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief This functions allocates and returns a new string
 * which is the concatenation of s1 and s2
 * @return Returns the new string or NULL if fails
 */
char *ft_strjoin(char const *s1, char const *s2);

/**
 * @brief This functions returns a new string with chars
 * specified in set removed from the start and end of the string
 *
 * @param s1 String to be trimmed.
 * @param set Chars to trim from the string
 * @return Returns the new string or NULL if malloc fails.
 */
char *ft_strtrim(char const *s1, char const *set);

/**
 * @brief Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive application of "F"
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of "F"
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief This function applies the function "f" on each character of
 * the string passed as argument, passing its index as first
 * argument. Each character is passed by address to "f"
 * to be modified if necessary
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each character
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief This function returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end with a NULL pointer.
 *
 * @param s The string to be split
 * @param c	he delimiter character.
 * @return The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char **ft_split(char const *s, char c);

// Memory Functions

/**
 * @brief This function gets two string pointers swap the locations and free the old pointer.
 * @param old_pointer The pointer to the old string
 * @param new_string The new string to be swapped
 */
void ft_swap_str_pointers(char **old_pointer, char *new_string);

/**
 * @brief This function erases some memory area. The area to be
 * deleted is passed as n bytes. The area will be filled with NULL (0)
 * @param s The area to be erased
 * @param n The number of bytes to be erased
 */
void ft_bzero(void *s, size_t n);

/**
 * @brief This functions allocate an amount of memory and initialize
 * with 0.
 * @param nmemb The quantity of elements to allocate
 * @param size The size of each individual element
 * @return Returns a pointer to the allocated memory.
 * If fails, returns NULL.
 */
void *ft_calloc(size_t nmemb, size_t size);

/**
 * @brief This functions fill the n bytes of memory area with C char
 * @param s The memory area that will be filled
 * @param c The char to fill the memory with.
 * @param n The number of bytes to fill
 */
void *ft_memset(void *s, int c, size_t n);

/**
 * @brief This function copy a memory area to other memory area.
 * Don't use if the memory area might overlap.
 * In this case, use memmove instead.
 * @param dest dest area to receive the copy
 * @param src source area to copy
 * @param n n bytes that will be copied to dest
 * @return returns a void pointer to dest.
 */
void *ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief This function copies n bytes from memory area src to dest.
 * The memory area may overlap.
 *
 * @param dest Memory area dest for the copied bytes.
 * @param src Memory area to copy from.
 * @param n N bytes to copy.
 * @return Returns a void pointer to dest
 */
void *ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief This functions scans until n bytes of a memory area searching for
 * The first instance of c
 * @param str Memory area to looking from
 * @param c Byte to looking for
 * @param n Until bytes we will scan
 * @return Returns a void pointer to the first instance of c or NULL if
 * doesn't found.
 */
void *ft_memchr(const void *str, int c, size_t n);

/**
 * @brief This function compares two memory area until n bytes
 */
int ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief This function swaps two memory areas
 * @param a First memory area
 * @param b Second memory area
 * @param size Size of each memory area
 */
void ft_swap(void *a, void *b, size_t size);

// Function to handle numbers and strings conversion

/**
 * @brief This function converts a string in a number that
 * can be stored in a int variable.
 */
int ft_atoi(const char *s);

/**
 * @brief This functions returns a string representing the integer received
 * as argument. Negative numbers are handled.
 *
 * @param n The integer to convert
 * @return The string representing the integer. NULL if malloc fails.
 */
char *ft_itoa(int n);

/**
 * @brief This function converts a string in a number that
 * can be stored in a int variable.
 * @param str The string to be converted.
 * @param base The base where the string representing a number
 * is written.
 * @return The number converted. If the base is invalid,
 * the function returns 0.
*/
int ft_atoi_base(char *str, char *base);

/**
 * @brief This function converts a number in a string
 * that represents the number in the given base.
 * @param number The number to be converted.
 * @param base  the base
 * @return A pointer allocated with malloc to a string
 * address representing the number in the given base.
*/
char *ft_itoa_base(long int number, char *base);

/**
* @brief this function calculates how many digits is necessary
		* to represent a number in a given base.
* @param number the number
* @param base_len the base length
*/
int ft_calc_nbr_digits(long int number, int base_len);

/**
 * @brief This function converts a string in a base to another base.
 * @param nbr The string to be converted.
 * @param base_from The initial base.
 * @param base_to The base to be converted.
 * @return A pointer allocated with malloc to a string
 * address representing the number in the given base.
*/
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

/**
 * @brief This function returns the absolute value of a number.
 * @param number The number to be converted.
 * @return The absolute value of the number.
*/
int ft_abs(int number);

/**
 * @brief This function converts a number in a string
 * @param number The number to be converted.
 * @param base the base
 * @return A pointer allocated with malloc to a string
 */
char *ft_itoa_base_u(unsigned long number, char *base);

// Input and Output Functions

/**
 * @brief Outputs the char "c" to the given file descriptor
 *
 * @param c The char to output
 * @param fd the file descriptor on which to write
 */
ssize_t ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string "s" to the given file descriptor
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
ssize_t ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the integer "n" to the given fd
 *
 * @param n The number to output
 * @param fd The file descriptor on which to write
 */
ssize_t ft_putnbr_fd(long int n, int fd);

/**
 * @brief Outputs the integer "nbr" to the given fd
 * using the given "base" as the base for the conversion.
*/

ssize_t ft_putnbr_base(long int nbr, char *base, int fd);

/**
 	@brief Reads a line from a file descriptor.
	@param fd File descriptor.
	@return A pointer to the line read from the file descriptor.
	@details This functions is capable of handle multiple fd at once.
*/
char *ft_gnl(int fd);

/**
 * @brief Outputs the unsigned integer "n" to the given fd
 * @param n The number to output
 * @param fd The file descriptor on which to write
 * @return The number of bytes written
*/
ssize_t ft_putnbr_unsigned_fd(unsigned int n, int fd);

/**
 * @brief Outputs a memory address to the given fd
 * @param number The memory address to output
 * @param fd The file descriptor on which to write
 */
ssize_t ft_putmem_fd(unsigned long number, int fd);


#endif //FT_LIBFT_H
