/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-10 16:30:44 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-10 16:30:44 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <ctype.h>
#include <stdio.h>*/
int	ft_strlen(const char *text)
{
	int	count;

	count = 0;
	if (text == 0)
		return (0);
	while (text[count])
		count++;
	return (count);
}

/*int main(void)
{
	printf("%d\n", ft_strlen(NULL));
}*/