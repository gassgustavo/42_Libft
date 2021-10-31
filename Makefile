# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 16:35:31 by gmoraes-          #+#    #+#              #
#    Updated: 2021/10/06 09:46:43 by gmoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# STATIC LIBRARY
NAME = libft.a

# MANDATORY SOURCE FILES
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
		ft_strchr.c ft_strrchr.c ft_strdup.c ft_strnstr.c \
		ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_itoa.c ft_split.c

# MANDATORY OBJECT FILES
OBJ = $(SRCS:.c=.o)

# BONUS SOURCE FILES
B_SRCS = ft_lstnew.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

# BONUS OBJECT FILES
B_OBJ = $(B_SRCS:.c=.o)

# COMPILER
CC = gcc

# FLAGS
FLAGS = -Wall -Werror -Wextra

# REMOVE
RM = rm -f

# MAKE STATIC LIBRARY
MKLIB = ar -rcs

# DEFAULT EXECUTION
all: $(SRCS) $(OBJ) $(NAME)

# STATIC LIBRARY EXECUTION
$(NAME): $(OBJ)
	$(MKLIB) $(NAME) $(OBJ)

# ADD BONUS TO STATIC LIBRARY
bonus: $(B_OBJ)
	$(MKLIB) $(NAME) $(B_OBJ)

# CLEAN OBJECT FILES
clean:
	$(RM) $(OBJ)

# CLEAN OBJECT FILES AND STATIC LIBRARY
fclean:
	$(RM) $(OBJ) $(NAME)

# CLEAN AND RECOMPILE 
re:
	make clean
	make all

.PHONY: all clean fclean re bonus