/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/17 17:08:52 by bsomers       #+#    #+#                 */
/*   Updated: 2021/04/07 16:17:32 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// static int	check_s(char s, char c)
// {
// 	if (s == c)
// 			return (1);
// 	return (0);
// }

//  https://stackoverflow.com/questions/7631054/how-to-return-an-array-of-strings-in-c

char **ft_split(char const *s, char c)
{
    int    i;
    int    split;
    int splitv;
    int ls;
    char    **array;

    ls = /*ft_*/strlen(s);
    i = 0;
    split = 0;
    while (s[split] != '\0' && s[split] != c)
        {split++;}
    if (split == 0)  //wat als c al op 0e locatie zit?
        return((char **)s);
    splitv = split;
    array = malloc(sizeof(char *) * ls);
    if (!array)
        return NULL;
    i = 0;
    
        array[0] = malloc(split + 1);
        if (!array[i])
        {
            free(array);
            return NULL;
        }
        array[1] = malloc(ls - split + 1);
        if (!array[i])
        {
            free(array);
            return NULL;
        }
    
    // s1 = malloc(sizeof(char) * (split + 1));
    // l_s2 = /* ft_*/strlen(s) - split;
    // s2 = malloc(sizeof(char) * (l_s2 + 1));
    i = 0;
    while (i <= split)
    {
        array[0][i] = s[i];
        i++;
    }
    i = 0;
    while (i < (ls - splitv))
    {
        array[1][i] = s[split];
        i++;
        split++;
    }
    array [1][i] = '\0';
    return(array);
}

int        main(void)
{
    int i = 0;
    char c = 'b';
    char **s;
        
    s = ft_split("halleuchens bhaha", c);
    while (i < 2)
    {
        printf("string %d : %s\n", i, s[i]);
        i++;
    }
    return (0);
}
