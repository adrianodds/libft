/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-18 17:38:43 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-18 17:38:43 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char d)
{
	int	i;
	int	w;
	int	words;

	i = 0;
	w = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != d && !w)
		{
			w = 1;
			words = words + 1;
		}
		else if (s[i] == d && w)
			w = 0;
		i++;
	}
	return (words);
}

static char	**free_all(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	index[3];

	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result || !s)
		return (NULL);
	ft_bzero(index, sizeof(index));
	while (s[index[0]])
	{
		if (s[index[0]] != c)
		{
			index[1] = index[0];
			while (s[index[1]] && s[index[1]] != c)
				index[1]++;
			result[index[2]] = ft_substr(s, index[0], index[1] - index[0]);
			if (!result[index[2]])
				return (free_all(result, index[2]));
			index[2]++;
			index[0] = index[1];
		}
		else
			index[0]++;
	}
	result[index[2]] = NULL;
	return (result);
}
/* int	main(void)
{
	char **split = ft_split(" semper congue, euismod non, mi.", 'i');
	int	i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}

} */