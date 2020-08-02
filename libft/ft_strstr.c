/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:46:40 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 17:49:52 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *hs;
	char *nd;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		hs = (char *)haystack;
		nd = (char *)needle;
		while (*nd && *hs == *nd)
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
