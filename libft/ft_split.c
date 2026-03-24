/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmensso <akmensso@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:09:32 by akmensso          #+#    #+#             */
/*   Updated: 2026/03/24 21:59:08 by akmensso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (ft_substr(s, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			tab[i++] = get_word(s, c);
			free(tab);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
/*
int main(void)
{
	char **split = ft_split("Salut comment ca va", ' ');
	int i = 0;

	while (split[i])
	{
		printf("mot[%d] = %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
}*/
