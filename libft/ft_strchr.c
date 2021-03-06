/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zszeredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 13:32:10 by zszeredi          #+#    #+#             */
/*   Updated: 2019/06/16 12:00:02 by zszeredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;

	c2 = (char)c;
	while (*s != c2)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char*)s);
}
