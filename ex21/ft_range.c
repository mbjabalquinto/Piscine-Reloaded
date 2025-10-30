/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:21:56 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/10/30 17:43:19 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/* #include <stdio.h> */

int	*ft_range(int min, int max)
{
	int	*x;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	x = malloc((max - min) * sizeof(int));
	if (x == NULL)
		return (NULL);
	while (min < max)
	{
		x[i] = min;
		min++;
		i++;
	}
	return (x);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	int *x = ft_range(0, 10000000);
	while(i < 10000000)
	{
		printf("%d", x[i]);
		i++;
	}
}*/
