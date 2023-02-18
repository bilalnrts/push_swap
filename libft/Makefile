# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: binurtas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 15:30:50 by binurtas          #+#    #+#              #
#    Updated: 2022/10/13 15:30:54 by binurtas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strchr.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			get_next_line.c get_next_line_utils.c 

OBJS		= $(SRCS:.c=.o)

BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus
