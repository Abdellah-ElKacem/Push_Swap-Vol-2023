/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_tool.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:27:07 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 17:45:26 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	unsigned int	count;
	int				yes;

	count = 0;
	yes = 1;
	while (*s)
	{
		if (*s == c)
			yes = 1;
		if (*s != c && yes == 1)
		{
			yes = 0;
			count++;
		}
		s++;
	}
	return (count);
}

static	int	ft_count_char(char const *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	unsigned int	count;
	unsigned int	start;

	if (!s)
		return (0);
	i = 0;
	start = 0;
	count = ft_count_word(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = 0;
	while (i < count)
	{
		while (s[start] && s[start] == c)
			start++;
		str[i] = ft_substr(s, start, ft_count_char(s + start, c));
		if (!str[i])
			return (ft_free(str));
		i++;
		start = start + ft_count_char(s + start, c);
	}
	return (str);
}
