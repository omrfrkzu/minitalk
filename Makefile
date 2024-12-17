NAME	= minitalk
SERVER	= server
CLIENT	= client
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): server.c
	$(CC) $(CFLAGS) -o server server.c

$(CLIENT): client.c
	$(CC) $(CFLAGS) -o client client.c

all: $(NAME)

clean:
	$(RM) $(SERVER) $(CLIENT) server client

fclean: clean

re: fclean all

.PHONY: all clean fclean re
