/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:34:10 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/10/30 17:16:13 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_strcpy(char *src, char *target)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*target;

	len = ft_strlen(src);
	target = malloc(len + 1 * sizeof(char));
	if (target == NULL)
		return (0);
	ft_strcpy(src, target);
	return (target);
}
