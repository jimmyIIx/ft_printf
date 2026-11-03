# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 15:49:45 by nippolit          #+#    #+#              #
#    Updated: 2024/05/17 18:53:21 by nippolit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	    = 	libftprintf.a

INCLUDE	    =	-I./includes

CC	 	    = 	gcc

FOLDER_SRC	= ./sources

CFLAGS	    =  -Wall -Wextra -Werror

CCF		    =	${CC} ${CFLAGS}

SRCS 	=	$(addprefix ${FOLDER_SRC}/, main.c		\
			process/process_d.c						\
			process/process_i.c						\
			process/process_c.c						\
			process/process_s.c						\
			process/process_u.c						\
			process/process_p.c						\
			process/process_x.c						\
			process/process_xx.c					\
			output/output_nbr.c						\
			output/output_char.c					\
			output/output_str.c						\
			output/convert_exa.c					\
)

OBJS    =	${SRCS:.c=.o}


all : ${NAME}

${NAME} : ${OBJS}
		ar -rsc ${NAME} ${OBJS}

%.o : %.c
		${CCF} ${INCLUDE} -c $< -o $@
		@printf "$(MSG_BCOLOR_WARNING)compilation: $< !$(TERM_CONTROL_RESET)\n"

clean  : 
		rm -f ${OBJS}
		@printf "$(MSG_BCOLOR_FAILURE)clean: $< !$(TERM_CONTROL_RESET)\n"

fclean : clean
		rm -f ${NAME}

re     : fclean all

.PHONY : all clean fclean re




# >>>>>>>>>> MESSAGES COLORS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

 MSG_BCOLOR_FAILURE		:=	\001\e[1;31m\002 # Rouge gras
 MSG_BCOLOR_LOGGING		:=	\001\e[1;37m\002 # Blanc gras
 MSG_BCOLOR_SUCCESS		:=	\001\e[1;32m\002 # Vert  gras
 MSG_BCOLOR_WARNING		:=	\001\e[1;33m\002 # Jaune gras

# >>>>>>>>>> TERMINAL <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

 TERM_CONTROL_CLEAR		:=	\001\e[1;1H\e[2J\002
 TERM_CONTROL_RESET		:=	\001\e[0m\002



