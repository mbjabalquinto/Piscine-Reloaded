/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:42:14 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/10/29 13:22:28 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	result;

	num = 1;
	result = 1;
	if (nb <= 0)
		return (0);
	while (result < nb)
	{
		result = num * num;
		if (result == nb)
			return (num);
		num++;
	}
	return (0);
}
