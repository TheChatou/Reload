/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:31:17 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/03 22:27:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/* int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;
	int	size;

	i = 0;
	min = -6;
	max = 10;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	min = -3;
	max = 10;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	write(1, "\n", 1);
} */
