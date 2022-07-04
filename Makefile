# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 15:58:19 by parnaldo          #+#    #+#              #
#    Updated: 2022/07/04 19:09:45 by parnaldo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=libftprintf.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c
ARC = ar -qs

SRCS	= ft_printf.c \
	  ft_itoa.c \
	  ft_printfdec.c \
	  ft_printfutils.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft/

.c.o:
	$(CC) $(FLAGS) -I $(LIBFT) $< -o $(<:.C=.o)

$(NAME): $(OBJS)
	cd $(LIBFT) && make && cp libft.a ../$(NAME)
	$(ARC) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)
		cd $(LIBFT) && make fclean
fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)
