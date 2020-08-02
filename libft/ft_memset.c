/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:25:21 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 17:31:04 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	ch;

	ch = (unsigned char)c;
	f = (unsigned char*)b;
	i = 0;
	while (i - len)
	{
		f[i] = ch;
		i++;
	}
	return (b);
}
