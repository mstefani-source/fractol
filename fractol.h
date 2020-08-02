/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 20:29:42 by mstefani          #+#    #+#             */
/*   												  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_FRACTOL_H
# define FRACTOL_FRACTOL_H
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <zconf.h>
# include "libft.h"
# include <math.h>
# include "keys.h"
# define WX 800
# define WY 400
# define RED 0xff0000
# define BACKGROUND 0x222222
# define COLOR_DEFAULT_MIN 0x00FF00
# define COLOR_DEFAULT_MAX 0xFF0000
# define COLOR_DEFAULT_MID 0x964B00
# define INSIDE(x, y) ((x > 0 && y > 0 && x < WX && y < WY) ? 1 : 0)
# define STEP(a, b) ((a < b) ? 1 : -1)
# define STEPZ 5

typedef struct		s_mouse
{
	int				is_pressed;
}					t_mouse;

typedef struct		s_dot
{
	double 			x;
	double			y;
}					t_dot;

typedef struct		s_wnd
{
	void			*ptr;
	void			*wnd;
	void			*img;
	char			*data_addr;
	int				bit_per_pixel;
	int				size_line;
	int				endian;
	double 			absx;
	double 			absy;
	double 			stepx;
	double 			stepy;
	double			startx;
	double			finishx;
	double			starty;
	double 			finishy;
}					t_wnd;

typedef struct		s_mlx
{
	t_wnd			*wnd;
	t_mouse			st_mouse;
}					t_mlx;

void				ft_set_fractol(t_mlx *mlx);
//int					ft_mouse_move(int x, int y, t_mlx *mlx);
//int					ft_mouse_release(int buttom, int x, int y, t_mlx *mlx);
int					ft_mouse_pressed(int buttom, int x, int y, t_mlx *mlx);
//void				ft_put_pixel(int x, int y, int color, int aliasing, t_wnd *wnd);
int					rgb_to_int(int red, int green, int blue);
void 				ft_draw_fractal(t_mlx *mlx);
int					ft_key_win(int key, t_mlx *mlx);
void				ft_catch_order(t_mlx *mlx);
t_wnd				*ft_init_window(void);
t_dot				*dot_init();

#endif
