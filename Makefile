NAME	= libft.a
SRCS	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

BONUS_SRC	= ft_lstnew_bonus.c\
			  ft_lstadd_front_bonus.c\
			  ft_lstsize_bonus.c\
			  ft_lstlast_bonus.c\
			  ft_lstadd_back_bonus.c\
			  ft_lstdelone_bonus.c\
			  ft_lstclear_bonus.c\
			  ft_lstiter_bonus.c\
			  ft_lstmap_bonus.c

HDRS	= libft.h
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}
BONUS	= ${BONUS_SRC:.c=.o}
RM		= rm -f

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

%.o:		%.c ${HDRS}
			${CC} ${CFLAGS} -c $< ${addprefix -include , ${HDRS}} -o ${<:.c=.o}

all:		${NAME}

bonus:		${OBJS} ${HDRS} ${BONUS}
			ar rc ${NAME} ${OBJS} ${BONUS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS} ${BONUS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re bonus

