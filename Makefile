CLIENT = client

SERVER = server

SRCS_CLIENT =  ft_client.c \

SRCS_SERVER = ft_server.c \

SRCS_PRINTF = ft_printf.c \
			  ft_puthexa.c \
			  ft_putnbr.c \
			  ft_putpointer.c \
			  ft_putstr.c \
			  ft_putunsigned.c

FLAGS = -Wall -Wextra -Werror \

$(CLIENT):
	@ gcc $(FLAGS) $(SRCS_CLIENT) $(SRCS_PRINTF) -o client
	@ echo "Compiling client"

$(SERVER):
	@ gcc $(FLAGS) $(SRCS_SERVER) $(SRCS_PRINTF) -o server
	@ echo "Compiling server"

$(PRINTF):

all : $(SERVER) $(CLIENT)

clean_client :
	@ rm -rf client
	@ echo "Deleting client"

clean_server :
	@ rm -rf server
	@ echo "Deleting server"

fclean : clean
	@ rm -rf server
	@ rm -rf client
	@ echo "Deleting binaries"

re : fclean all

.PHONY : all clean fclean re
