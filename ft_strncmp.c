/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:52:09 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/09 15:02:41 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *str1, char *str2, int n)
{
	while((*str1 || *str2) && n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return 0;
}
