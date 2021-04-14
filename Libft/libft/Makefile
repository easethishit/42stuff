# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 19:07:42 by elmartin          #+#    #+#              #
#    Updated: 2021/04/14 19:55:56 by elmartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c	\
	  ft_bzero.c	\
	  ft_idigit.c	\
	  ft_isalnum.c	\
	  ft_isalpha.c	\
	  ft_isascii.c	\
	  ft_isprint.c	\
	  ft_memccpy.c	\
	  ft_memchr.c	\
	  ft_memcmp.c	\
	  ft_memcpy.c	\
	  ft_memmove.c	\
	  ft_memset.c	\
	  ft_strchr.c	\
	  ft_strlcat.c	\
	  ft_strlcpy.c	\
	  ft_strlen.c	\
	  ft_strncmp.c	\
	  ft_strnstr.c	\
	  ft_strrchr.c	\
	  ft_tolower.c	\
	  ft_toupper.c	\

OBJS	= ${SRCS:.c=.o}

RM	= rm -rf
	
CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

${NAME}:
	${CC} ${CFLAGS} ${SRCS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
