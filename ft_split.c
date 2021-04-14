/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_splitt.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/14 12:43:46 by bsomers       #+#    #+#                 */
/*   Updated: 2021/04/14 14:56:33 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
    int		i;
    int		split;
	int		a;
	int		arrn;
	int		ls;
    char    **array;

    i = 0;
	split = 0;
	a = 0;
	arrn = 0;
	ls = /*ft_ */strlen(s);

	if (s == NULL)
		return (NULL)
	array = malloc(sizeof(char *) * ls);
    while (s[i] != '\0')
    {
        if (s[i] == c)
		{
			if (a == 0)
				array[a] = malloc(i - split);
			else if (a > 0)
				array[a] = malloc(i - split - 1);
        	if (!array[a])
        	{
           		while(a > -1)
				{
					free(array);
					a--;
				}
         	  	return NULL;
       		 }
			split = i;
			a++;
		}
		i++;
    }
	array[a] = malloc(i - split + 1);
	if (!array[a])
        	{
           		while(a > -1)
				{
					free(array);
					a--;
				}
         	  	return NULL;
       		 }

    if (i == ls && split == 0)  //wat als c al op 0e locatie zit?
        return((char **)s);
    i = 0;
	a = 0;
	while (s[i] != '\0')
    {

		if (s[i] == c)
		{
			a++;
			arrn = 0;
			i++;
		}
        array[a][arrn] = s[i];
		i++;
		arrn++;
		
	}
    array[a][arrn] = '\0';
    return(array);
}

int        main(void)
{
    int i = 0;
    char c = 'b';
    char **s;
        
    s = ft_split("hahabhuhub", c);
    while (i < 20)
    {
        printf("string %d : %s\n", i, s[i]);
        i++;
    }
    return (0);
}
