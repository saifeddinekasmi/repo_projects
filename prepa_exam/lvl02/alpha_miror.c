/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_miror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:20:38 by skasmi            #+#    #+#             */
/*   Updated: 2022/06/01 19:04:47 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 'Z' && av[1][i] >= 'A')
				av[1][i] = 'M' - (av[1][i] - 'N');
			if (av[1][i] <= 'z' && av[1][i] >= 'a')
				av[1][i] = 'm' - (av[1][i] - 'n');
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}


//atoi
//inter