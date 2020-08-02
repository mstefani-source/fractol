/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:58:23 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 18:09:35 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_mlx	*mlx;

	if (argc != 2)
	{
		write(1, "Need one parameter\n", 19);
		return (0);
	}
	mlx = (t_mlx*)malloc(sizeof(t_mlx));
	mlx->wnd = ft_init_window();
	ft_catch_order(mlx);
	ft_draw_fractal(mlx);
	mlx_loop(mlx->wnd->ptr);
	return (0);
}
