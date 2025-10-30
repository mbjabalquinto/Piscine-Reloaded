/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:19:28 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/10/30 11:20:41 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	c;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				c = 0;
				while (argv[i][c] != '\0' || argv[j][c] != '\0')
				{
					if ((unsigned char)argv[i][c] - (unsigned char)argv[j][c] > 0)
					{
						temp = argv[i];
						argv[i] = argv[j];
						argv[j] = temp;
						break;
					}
					c++;
				}
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
