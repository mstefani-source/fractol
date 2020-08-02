/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:19:48 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 17:49:04 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_c;

	last_c = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_c = (char*)s;
		s++;
	}
	if (last_c)
		return (last_c);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
