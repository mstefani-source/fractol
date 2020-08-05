/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veryfy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:19:06 by mstefani          #+#    #+#             */
/*   Updated: 2020/07/30 17:19:02 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

/*void		ft_set_fractol(t_mlx *mlx)
{
	if (!(mlx->map = map_init()))
		exit(1);
	if (!(mlx->dot = dot_init()))
		exit(2);
	if (!(mlx->camera = camera_init()))
		exit(3);
}*/

t_wnd		*ft_init_window(void)
{
	t_wnd	*wnd;

	if (!(wnd = (t_wnd*)ft_memalloc(sizeof(t_wnd))))
		exit(2);
	if (!(wnd->ptr = mlx_init()))
		exit(1);
	if (!(wnd->wnd = mlx_new_window(wnd->ptr, WX, WY, "MyFractol")))
		exit(1);
	if (!(wnd->img = mlx_new_image(wnd->ptr, WX, WY)))
		exit(1);
	wnd->data_addr = mlx_get_data_addr(wnd->img, &wnd->bit_per_pixel, &wnd->size_line, &wnd->endian);
	wnd->startx = -2;
	wnd->finishx = 2;
	wnd->starty = 1;
	wnd->finishy = -1;
	wnd->len_x = wnd->finishx - wnd->startx;
	wnd->len_y = wnd->starty - wnd->finishy;
	return (wnd);
}
