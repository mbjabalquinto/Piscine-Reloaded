/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:19:28 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/10/30 13:07:18 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char ***argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((*argv)[i][j] != '\0')
		{
			ft_putchar((*argv)[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_params(char **str1, char **str2)
{
	int		i;
	char	*temp;

	i = 0;
	while ((*str1)[i] != '\0' || (*str2)[i] != '\0')
	{
		if ((unsigned char)(*str1)[i] - (unsigned char)(*str2)[i] > 0)
		{
			temp = *str1;
			*str1 = *str2;
			*str2 = temp;
			break ;
		}
		else if ((unsigned char)(*str1)[i] - (unsigned char)(*str2)[i] < 0)
			break ;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				ft_sort_params(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
	ft_print_params(argc, &argv);
	return (0);
}
