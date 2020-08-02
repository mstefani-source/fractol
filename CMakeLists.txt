cmake_minimum_required(VERSION 3.16)
project(fractol C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(/usr/local/include)

add_executable(fractol
        libft/ft_abs.c
        libft/ft_atoi.c
        libft/ft_atoi_base.c
        libft/ft_bzero.c
        libft/ft_factorial.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isdigit.c
        libft/ft_islower.c
        libft/ft_ispace.c
        libft/ft_isprint.c
        libft/ft_isupper.c
        libft/ft_itoa.c
        libft/ft_join_and_free.c
        libft/ft_leni.c
        libft/ft_lstadd.c
        libft/ft_lstdel.c
        libft/ft_lstdelone.c
        libft/ft_lstiter.c
        libft/ft_lstmap.c
        libft/ft_lstnew.c
        libft/ft_memalloc.c
        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memdel.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_overlong.c
        libft/ft_putchar.c
        libft/ft_putchar_fd.c
        libft/ft_putendl.c
        libft/ft_putendl_fd.c
        libft/ft_putnbr.c
        libft/ft_putnbr_fd.c
        libft/ft_putstr.c
        libft/ft_putstr_fd.c
        libft/ft_sqrt.c
        libft/ft_strcat.c
        libft/ft_strchr.c
        libft/ft_strclr.c
        libft/ft_strcmp.c
        libft/ft_strcpy.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strequ.c
        libft/ft_striter.c
        libft/ft_striteri.c
        libft/ft_strjoin.c
        libft/ft_strlcat.c
        libft/ft_strlen.c
        libft/ft_strmap.c
        libft/ft_strmapi.c
        libft/ft_strncat.c
        libft/ft_strncmp.c
        libft/ft_strncpy.c
        libft/ft_strnequ.c
        libft/ft_strnew.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_strsplit.c
        libft/ft_strstr.c
        libft/ft_strsub.c
        libft/ft_strtrim.c
        libft/ft_tolower.c
        libft/ft_toupper.c
        src/ft_catch_order.c
        src/ft_init.c
        src/ft_key_win.c
        src/ft_mouse.c
        fractol.c
        fractol.h
        keys.h
        libft.h
        src/ft_draw_fractal.c
        src/ft_put_pixel.c)

target_link_libraries(fractol
        LINK_PUBLIC ${CMAKE_SOURCE_DIR}/libft/libft.a
        LINK_PUBLIC /usr/local/lib/libmlx.a "-framework OpenGL" "-framework AppKit")
