/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 15:10:28 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 15:10:28 by adduarte         ###   ########.fr       */
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

/*int main(void)
{
	printf("%d\n", ft_isalpha("aa"));
}*/