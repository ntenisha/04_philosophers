# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 06:37:01 by ntenisha          #+#    #+#              #
#    Updated: 2022/07/01 21:13:49 by ntenisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_B		=	philo_bonus

SRCS_BONUS	=	ph_create_philo_bonus.c \
				ph_do_action_bonus.c \
				ph_parser_philo_bonus.c \
				philo_bonus.c \
				utils.c

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

%.o: %.c	Makefile philo_bonus.h
			$(CC) $(CFLAGS) -Iincludes -c $< -o $@

$(NAME_B):	$(OBJS_BONUS)
			@ $(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_B) 

all:		$(NAME_B)

bonus:		all

clean:		
			$(RM) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME_B)

re:			fclean all

.PHONY:		all clean fclean re bonus