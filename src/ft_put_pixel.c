/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:05:52 by mstefani          #+#    #+#             */
/*   Updated: 2020/02/27 17:05:57 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int			rgb_to_int(int red, int green, int blue)
{
	int		r;
	int		g;
	int		b;

	r = red & 0xFF;
	g = green & 0xFF;
	b = blue & 0xFF;
	return (r << 16 | g << 8 | b);
}

void	ft_put_pixel(int x, int y, int color, int aliasing, t_wnd *wnd)
{
	int i;

	if (x >= 0 && x < WX && y >= 0 && y < WY)
	{
		i = x * wnd->bit_per_pixel / 8 + wnd->size_line * y;
		wnd->data_addr[i + 0] = (color) & 0xFF;
		wnd->data_addr[i + 1] = (color >> 8) & 0xFF;
		wnd->data_addr[i + 2] = (color >> 16) & 0xFF;
		wnd->data_addr[i + 3] = aliasing;
	}
}
