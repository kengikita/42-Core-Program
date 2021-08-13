NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f 
AR = ar rcs
RL = ranlib
SRC	=	ft_atoi.c			ft_bzero.c			ft_calloc.c		\
		ft_isalnum.c		ft_isalpha.c		ft_isascii.c 	\
		ft_isdigit.c 		ft_isprint.c		ft_toupper.c 	\
		ft_itoa.c			ft_memchr.c			ft_tolower.c	\
		ft_memcmp.c			ft_memcpy.c			ft_memmove.c	\
		ft_memset.c			ft_putchar_fd.c		ft_putendl_fd.c	\
		ft_putnbr_fd.c		ft_putstring_fd.c	ft_split.c		\
		ft_strchr.c			ft_strdup.c			ft_strjoin.c	\
		ft_strlcat.c		ft_strlcpy.c		ft_strlen.c		\
		ft_strmapi.c		ft_strncmp.c		ft_strnstr.c	\
		ft_strrchr.c		ft_strtrim.c		ft_substr.c		ft_striteri.c
OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@ echo Generating Standard $(NAME)..
	@ $(AR) $(NAME) $(OBJ)
	@ $(RL) $(NAME)

.c.o: 
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@ echo Removing Object Files
	@ $(RM) $(OBJ)

fclean: clean
	@ echo Removing $(NAME)
	@ $(RM) $(NAME)

re: fclean all