/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:52:00 by fcoullou          #+#    #+#             */
/*   Updated: 2023/10/31 12:06:04 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	d;

	if (n < 0)
	{
		d = 'N';
		ft_putchar(d);
	}
	else
	{
		d = 'P';
		ft_putchar(d);
	}
}

/*int	main(void)
{	
	ft_is_negative(0);
	return (0);
}*/
