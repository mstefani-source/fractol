/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 20:58:07 by skale             #+#    #+#             */
/*   Updated: 2020/07/30 18:14:36 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int		ft_mouse_move(int x, int y, t_mlx *mlx)
{
	if (mlx->st_mouse.is_pressed && INSIDE(x, y))
	{
		write (1,"right bottom pressed\n", 21);
	}
	write (1,"mouse moved\n", 21);
	return (0);
}

int		ft_mouse_pressed(int butm, int x, int y, t_mlx *mlx)
{
	if (butm == 5 && INSIDE(x, y))
	{
		if (mlx->wnd->absy < 1 && mlx->wnd->absx < 2)
		{
			mlx->wnd->startx += x;
			mlx->wnd->startx += y;
		}
	}
	if (butm == 4 && INSIDE(x, y))
	{
		if (mlx->wnd->absy > 0 && mlx->wnd->absx > 0)
		{
			mlx->wnd->startx -= x;
			mlx->wnd->startx -= y;
		}
	}
	ft_draw_fractal(mlx);
	return (0);
}
