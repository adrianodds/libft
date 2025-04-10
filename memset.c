/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 16:48:41 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 16:48:41 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	int				i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (i != num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char str[50] = "Adriano";
	printf("%s\n", ft_memset(str, 'Y', sizeof(str)));
}*/