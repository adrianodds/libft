/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 19:05:31 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 19:05:31 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
void	*ft_memcpy(void *dest, const void *str, unsigned int num)
{
	int				i;
	unsigned char	*p;
	unsigned char	*d;

	p = dest;
	d = str;
	i = 0;
	while (i != num)
	{
		p[i] = d[i];
		i++;
	}
}
/*
int	main(void)
{
	char dest[50];
	char str[] = "Adriano";
	ft_memcpy(dest, str, 9);
	//memcpy(dest, str, 9);
	printf("%s\n", dest);
}*/