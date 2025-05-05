/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 15:09:31 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 15:09:31 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if ((digit >= 48 && digit <= 57))
	{
		return (1);
	}
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", isdigit('5'));
}*/