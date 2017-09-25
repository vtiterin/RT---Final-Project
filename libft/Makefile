# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 14:24:19 by oshudria          #+#    #+#              #
#    Updated: 2017/07/07 21:24:37 by oshudria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I./includes/

SRC_LIBC = 	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c

SRC_ADDITIONAL = ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

SRC_BONUS = ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c

SRC_GNL = get_next_line.c

SRC_OTHER = ft_strrev.c \
			ft_atoi_base.c \
			ft_tabdel.c \
			ft_tablen.c \
			ft_isnumber.c \
			ft_maxcomdiv.c \
			ft_atof.c \
			ft_swap_double.c \
			ft_link_from_str.c \

OBJ_DIR = obj

OBJ_LIBC = $(addprefix $(OBJ_DIR)/, $(SRC_LIBC:.c=.o))
OBJ_ADD = $(addprefix $(OBJ_DIR)/, $(SRC_ADDITIONAL:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(SRC_BONUS:.c=.o))
OBJ_GNL = $(addprefix $(OBJ_DIR)/, $(SRC_GNL:.c=.o))
OBJ_OTHER = $(addprefix $(OBJ_DIR)/, $(SRC_OTHER:.c=.o))

COLOR_NONE = \033[0m
COLOR_YELLOW = \033[33m
COLOR_MAGENTA = \033[35m

all: $(NAME)

$(NAME): $(OBJ_LIBC) $(OBJ_ADD) $(OBJ_BONUS) $(OBJ_GNL) $(OBJ_OTHER)
	@$(AR) -rcs $(NAME) $(OBJ_LIBC) $(OBJ_ADD) $(OBJ_BONUS) $(OBJ_GNL) $(OBJ_OTHER)
	@echo "$(COLOR_YELLOW)Libft succesfully compiled.$(COLOR_NONE)"

$(OBJ_DIR)/%.o : ./libc/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(OBJ_DIR)/%.o : ./additional/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(OBJ_DIR)/%.o : ./bonus/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(OBJ_DIR)/%.o : ./get_next_line/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(OBJ_DIR)/%.o : ./other/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(COLOR_MAGENTA)Libft clean done.$(COLOR_NONE)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR_MAGENTA)Libft fclean done.$(COLOR_NONE)"

re: fclean all
