/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 19:35:17 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 19:35:17 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	*ft_memmove(void *dest, const void *str, unsigned int num)
{
	int				i;
	unsigned char	*p;
	unsigned char	*d;
	unsigned char	*e;

	ft_memcpy (e, str, num);
	p = dest;
	d = str;
	i = 0;
	while (i != num)
	{
		p[i] = e[i];
		i++;
	}
}
/*
int	main(void)
{
	char dest[50];
	char str[] = "abcde";
	ft_memmove(str+1, str, 3);
	//memmove(str+1, str, 0);
	printf("%s\n", str);
}*/