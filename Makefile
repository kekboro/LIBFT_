# COMPILATION
CC			:=	@gcc
CFLAGS		:=	-Wall -Wextra -Werror

# VARIABLES
INCLUDES	:=	/includes
SRCS		:=	/srcs

# FILES
OBJS		:=	$(addprefix srcs/, ${SRCS:.c=.o})

# RULES
%.o:		%.c
	${CC} ${CFLAGS} -c -I.${INCLUDES} $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	${CC} ${CFLAGS} $^ -o $@

all:		${NAME}

clean:
	@rm -f ${OBJS}
	
fclean:
	@rm -f ${NAME} ${OBJS}

re:			fclean all

.PHONY:		all clean fclean re