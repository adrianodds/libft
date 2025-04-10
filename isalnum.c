/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 15:32:18 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 15:32:18 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <ctype.h>
//#include <stdio.h>
int	ft_isalpha(int caracter)
{
	if ((caracter >= 65 && caracter <= 90) || (caracter >= 97
			&& caracter <= 122))
	{
		return (1);
	}
	return (0);
}

int	ft_isdigit(int digit)
{
	if ((digit >= 48 && digit <= 57))
	{
		return (1);
	}
	return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isalnum(','));
}*/