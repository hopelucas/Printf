/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:07:19 by hlucas            #+#    #+#             */
/*   Updated: 2021/11/30 16:07:19 by hlucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*t1;
	unsigned const char		*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	if (t1 == NULL && t2 == NULL)
		return (0);
	while (n)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
		n--;
	}
	return (0);
}
