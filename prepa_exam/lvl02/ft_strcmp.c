/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:39:13 by skasmi            #+#    #+#             */
/*   Updated: 2022/06/01 17:05:30 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  **ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1 - s2);
}
#include <stdio.h>
int main()
{
	int a = 0;
	
	a = ft_strcmp("a", "c");
	printf("%d", a);
}