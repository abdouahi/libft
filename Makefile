# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 10:49:18 by abdouahi          #+#    #+#              #
#    Updated: 2024/10/31 12:59:13 by abdouahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c\
ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memmove.c ft_memset.c\
ft_strchr.c ft_strdup.c ft_strlcat.c\
ft_strlcpy.c ft_strncmp.c ft_strnstr.c\
ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_strlen.c ft_isalnum.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c\
ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	
fclean : clean
	$(RM) $(NAME)
	
re : fclean all

