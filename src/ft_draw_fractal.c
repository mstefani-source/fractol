/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_fractal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:58:23 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 18:09:35 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

t_dot 	ft_add(t_dot c1, t_dot c2)
{
	return ((t_dot){c1.x + c2.x, c1.y + c2.y});
}

t_dot	ft_quadro(t_dot c1)
{
	t_dot res;

	res.x = c1.x * c1.x - c1.y * c1.y;
	res.y = 2 * c1.x * c1.y;
	return (res);
}

int 	ft_inside(t_dot dot)
{
	double lim;

	lim = 2.0;
	if (dot.x < lim && dot.x > -lim && dot.y < lim && dot.y > -lim)
		return (1);
	return (0);
}

int		ft_test(t_dot dot)
{
	t_dot 	cp;
	int		iter = 0;

	cp.x = 0;
	cp.y = 0;
	while (iter < 100 && ft_inside(cp))
	{
		cp = ft_add(ft_quadro(cp), dot);
		iter++;
	}
	if (ft_inside(cp))
		return(BACKGROUND);
	else if (iter > 0 && iter < 50)
		return(rgb_to_int(10,0+ (2 * iter) ,0 + 3 * iter));
	else
		return(rgb_to_int(50+ (1 * iter),0 + (2 * iter) ,50 + 2 * iter));
}

static void		draw(t_wnd *wnd)
{
	int			*image;
	int			i;
	double		x;
	double		y;

	i = 0;
	x = wnd->startx;
	y = wnd->starty;
	wnd->absx =	wnd->finishx - wnd->startx;
	wnd->absy = wnd->starty - wnd->finishy;
	wnd->stepx = wnd->absx / WX;
	wnd->stepy = wnd->absy / WY;
	image = (int *)(wnd->data_addr);
	while (i < (WY * WX))
	{
		if (i % WX == 0 && i != 0)
		{
			y = y - wnd->stepy;
			x = wnd->startx;
		}
		else
			x = x + wnd->stepx;
		image[i] = ft_test((t_dot){x, y});
		i++;
	}
}

void 	ft_draw_fractal(t_mlx *mlx)
{
	draw(mlx->wnd);
	mlx_put_image_to_window(mlx->wnd->ptr, mlx->wnd->wnd, mlx->wnd->img, 0, 0);
}
