/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:05:57 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/12 15:55:24 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "Hello World!";
	printf("%s\n", strchr(s, 'W'));
	return (0);
}
*/