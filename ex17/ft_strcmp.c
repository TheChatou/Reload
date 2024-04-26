/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:38:46 by fcoullou          #+#    #+#             */
/*   Updated: 2023/10/31 15:04:55 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "ouioui";
	s2 = "ouinon";
	s3 = "5d";
	s4 = "";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s4, s1));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s2, s2));
	printf("%d\n", ft_strcmp(s3, s2));
} */
