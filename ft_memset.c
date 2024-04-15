/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:53:34 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/11 15:54:33 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pstr;

	pstr = str;
	while (n > 0)
	{
		*pstr = (unsigned char)c;
		pstr++;
		n--;
	}
	return (str);
}
