/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:24:07 by fcoullou          #+#    #+#             */
/*   Updated: 2023/10/31 12:06:10 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 26)
	{
		c = 'a' + i;
		ft_putchar(c);
		i++;
	}
}

/*int	main(void)
{	
	ft_print_alphabet();
	return (0);
}*/
