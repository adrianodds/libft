/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-17 14:23:32 by adduarte          #+#    #+#             */
/*   Updated: 2025-04-17 14:23:32 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*arr;

	if (size != 0 && nmemb > ((size_t) - 1) / size)
		return (NULL);
	arr = (size_t *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
/*
int	main(void)
{
	int *arr = (int *)ft_calloc(10, sizeof(int));
	if (arr == NULL) {
		printf("Falha ao alocar memória.\n");
		return (1);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}*/