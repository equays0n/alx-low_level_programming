#include "main.h"
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int flag, count, i;

    flag = 0;
    count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            count++;
        }
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL if fail
 */
char **strtow(char *str)
{
    char **array, *temp;
    int i, k = 0, len = 0, words, c = 0, start, end;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = count_words(str);
    if (words == 0)
        return (NULL);

    array = (char **) malloc((words + 1) * sizeof(char *));
    if (array == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        len++;

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                temp = (char *) malloc((c + 1) * sizeof(char));
                if (temp == NULL)
                    return (NULL);
                while (start < end)
                    *temp++ = str[start++];
                *temp = '\0';
                array[k] = temp - c;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }

    array[k] = NULL;

    return (array);
}
