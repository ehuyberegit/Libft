# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 11:00:19 by ehuybere          #+#    #+#              #
#    Updated: 2025/04/15 11:23:35 by ehuybere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of your library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files - you'll need to list all your functions here
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c \
       ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c

# Object files (automatically generated from source files)
OBJS = $(SRCS:.c=.o)

# Bonus source files (only if you're doing the bonus part)
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
             ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
             ft_lstmap.c

# Bonus object files
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Default rule: build the library
all: $(NAME)

# Rule to build the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile .c files into .o files
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Rule to clean everything (object files and the library)
fclean: clean
	rm -f $(NAME)

# Rule to rebuild everything
re: fclean all

# Rule to add bonus functions to the library
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Rule to create a shared library (needed for the unit tests)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

# Declare the rules as phony (not associated with files)
.PHONY: all clean fclean re bonus