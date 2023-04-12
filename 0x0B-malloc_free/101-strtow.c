#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str != '\0')
			count++;
		while (*str != ' ' && *str != '\0')
			str++;
	}

	return (count);
}

/**
 * get_word_length - gets the length of a word
 * @str: input string
 *
 * Return: length of word
 */
int get_word_length(char *str)
{
	int length = 0;

	while (*str != ' ' && *str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * free_words - frees memory allocated for words array
 * @words: words array
 * @count: number of words
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		free(words[i]);
	}
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	char **words;
	int i, j, count, length;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (*str == ' ')
			str++;
		length = get_word_length(str);
		words[i] = malloc(sizeof(char) * (length + 1));
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}
		for (j = 0; j < length; j++)
		{
			words[i][j] = *str;
			str++;
		}
		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}
