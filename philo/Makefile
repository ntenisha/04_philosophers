# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntenisha <ntenisha@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 16:53:18 by ntenisha          #+#    #+#              #
#    Updated: 2022/06/26 04:50:09 by ntenisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo

SRCS		=	ph_create_philo.c \
				ph_destroy_pthread_and_mutex.c  \
				ph_monitor.c  \
				ph_parser_philo.c  \
				philo.c  \
				utils.c \

OBJS		=	${SRCS:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

%.o: %.c	Makefile philo.h
			$(CC) $(CFLAGS) -Iincludes -c $< -o $@

$(NAME):	$(OBJS)
			@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean 
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re