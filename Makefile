NAME = fractol

SRC = fractol.c \
	src/ft_init.c \
	src/ft_key_win.c \
	src/ft_catch_order.c \
	src/ft_mouse.c \
	src/ft_put_pixel.c

INCLUDES = /usr/local/include

LIBOBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
GLFLAGS = -lm -lmlx -framework OpenGL -framework AppKit

$(NAME): $(LIBOBJ)
		make -C ./libft
		gcc $(CFLAGS) $(LIBOBJ) -L./libft -I $(INCLUDES) $(GLFLAGS) -lft -o $(NAME)
%.o:%.c fractol.h keys.h
		gcc -MD -c $<  -o $@

all: $(NAME)


clean:
	make -C ./libft clean
	-rm -rf $(LIBOBJ)
	-rm -f src/*.d
	-rm -f libft/*.d
	-rm -f *.d

fclean: clean
	make -C ./libft fclean
	-rm -f $(NAME)
	-rm -f src/*.d
	-rm -f libft/*.d
	-rm -f *.d

re: fclean all
