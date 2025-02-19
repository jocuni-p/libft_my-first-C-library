# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 16:15:05 by jocuni-p          #+#    #+#              #
#    Updated: 2025/02/19 12:28:33 by jocuni-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#===============COLORS================#

DEF_COLOR 	=	\033[0;39m
RED			=	\033[38;5;197m
YELLOW		=	\033[38;5;190m
DARK_GREEN 	=	\033[1m\033[38;2;75;179;82m

#===============COMMANDS===============#

CC = cc
CFLAGS = -Wall -Werror -Wextra -I. -fPIC
#Muchos sistemas modernos (como Linux) generan ejecutables con PIE para mejorar 
#la seguridad, -fPIC es necesario para que las bibliotecas estáticas (.a) y 
#dinámicas (.so) sean compatibles con PIE. Sin -fPIC, los archivos objeto 
#contienen referencias de direcciones absolutas, lo que impide su uso en 
#ejecutables PIE.
NAME = libft.a
LIB = ar -rcs
#'ar' es una utilitat per crear i mantenir grups d'arxius combinats en un sol
#arxu i l'usarem  per crear la llibreria
#'r' la reeemplasara si existeix ja i la creara si no existeix
#'c' fa que es silencii el missatge de la creacio de ar
#'s' escriu un index d'arxius objecte a dins per el seu control intern

#===========================FILES=========================#

SRC_LIBFT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  		ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c\
	  		ft_strncmp.c ft_atoi.c ft_memset.c ft_bzero.c ft_memchr.c\
	  		ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strnstr.c\
	  		ft_calloc.c ft_strdup.c ft_strlcat.c ft_substr.c ft_strjoin.c\
	  		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	  		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\
			ft_p_malloc.c ft_putnbr.c ft_strcmp.c ft_atol.c
#arxius source que utilitzarem per crear el programa
#no inclou el .h perque el llegeix sense compilar-lo

#ft_printf files
FILES_FTPRINTF = ft_printf.c put_c.c put_hex.c put_i.c put_p.c put_s.c put_u.c sel_fmt.c

#ft_printf directory name
DIR_FTPRINTF = ft_printf/

#ft_printf files path
SRC_FTPRINTF = $(addprefix $(DIR_FTPRINTF), $(FILES_FTPRINTF))

#gnl files
FILES_GNL = get_next_line_bonus.c get_next_line_utils_bonus.c

#gnl directory name
DIR_GNL = get_next_line/

#gnl files path
SRC_GNL = $(addprefix $(DIR_GNL), $(FILES_GNL))

#whole source files
SRC = $(SRC_LIBFT) $(SRC_FTPRINTF) $(SRC_GNL)

DIR_OBJ = temp/

OBJ = $(addprefix $(DIR_OBJ), $(SRC:.c=.o))
#aqui detallem nom dels objects
#genera una llista de noms d'arxius .o a partir de la lista de noms .c

DEPS=$(OBJ:.o=.d) 

#=============================RULES============================#

all: temp $(NAME)
#al fer make la primera regla que trova es la que executa, sino s'especifica
#una altre

temp:
	@mkdir -p $(DIR_OBJ)
	
norm: 
	norminette

-include $(DEPS)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)
	@echo "$(DARK_GREEN)LIBFT COMPILED SUCCESSFULLY $(DEF_COLOR)"
#usem 'ar' per crear una llibreria
#si volguessim crear un programa seria 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
#compara les dates de modificacio de de NAME i de OBJ, si NAME es 
#posterior NO ho torna a compilar'

$(DIR_OBJ)%.o : %.c  Makefile
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -MMD -MP $< -o $@
#crea els .o a partir dels .c i de la libft.h
#amb cc crea els arxius de codi objecte (-c).
#La var automatica $< agafa el nom del .c (src) i $@ el dona al .o (target)

clean:
	@rm -fr $(DIR_OBJ) $(DEPS)
#borra els arxius creats .o i els .d
# amb -f ignorem els arxius que no existeixen, borrats ja previament
# amb r borra de forma recursiva

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW) DELETED ALL LIBFT OBJ + libft.a $(DEF_COLOR)"
#fa un 'make clean' seguit d'un 'make all' borrant el binari executable

re: fclean all

.PHONY: clean fclean re all norm
#amb el PHONY TARGET (falso objetivo) avisem al make que aquests no son arxius
#que hagi de generar sino instruccions/reglas
