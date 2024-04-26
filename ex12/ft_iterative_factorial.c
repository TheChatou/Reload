/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:40:39 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/03 23:07:46 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rslt;

	rslt = 1;
	i = 1;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	while (i - 1 != nb)
	{
		rslt *= i;
		i++;
	}
	return (rslt);
}

/* int	main(void)
{
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(28));
	printf("%d\n", ft_iterative_factorial(4));
} */
