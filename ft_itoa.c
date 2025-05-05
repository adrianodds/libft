/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-19 14:04:41 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-19 14:04:41 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_int(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = n * -1;
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*index;
	int		l;

	l = count_int(n);
	index = (char *)malloc(l + 1);
	if (!index)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(index, "-2147483648", l + 1);
		return (index);
	}
	index[l--] = 0;
	if (n < 0)
	{
		n = n * -1;
		index[0] = '-';
	}
	index[l] = n + '0';
	while (n)
	{
		index[l--] = (n % 10) + '0';
		n = n / 10;
	}
	return (index);
}
/*
If you pass a 0, the index[l] = n + '0'; \
ensure that zero is returned since in the \
10 conversion condition it does so while \
is greater than zero.
 int	main(void)
{
	printf("%s\n", ft_itoa(-15489565));
} */