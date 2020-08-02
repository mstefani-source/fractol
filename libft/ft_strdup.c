/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:01:59 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 17:41:29 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sp;
	int		len;

	sp = (char*)s1;
	len = ft_strlen(sp);
	sp = (char*)malloc(sizeof(char) * (len + 1));
	if (sp == 0)
		return (0);
	sp = ft_strcpy(sp, s1);
	return (sp);
}
