/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:53:04 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/15 16:33:04 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void *calloc(size_t nitems, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(nitems * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}
