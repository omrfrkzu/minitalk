NAME	= minitalk
SERVER	= server
CLIENT	= client
SERVER_BONUS = bonus/server_bonus
CLIENT_BONUS = bonus/client_bonus
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(NAME)

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): server.c minitalk.h
	$(CC) $(CFLAGS) -o server server.c

$(CLIENT): client.c minitalk.h
	$(CC) $(CFLAGS) -o client client.c

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

bonus/server_bonus: bonus/server_bonus.c bonus/minitalk_bonus.h
	$(CC) $(CFLAGS) -o bonus/server_bonus bonus/server_bonus.c

bonus/client_bonus: bonus/client_bonus.c bonus/minitalk_bonus.h
	$(CC) $(CFLAGS) -o bonus/client_bonus bonus/client_bonus.c

clean:
	$(RM) $(SERVER) $(CLIENT) bonus/server_bonus bonus/client_bonus

fclean: clean

re: fclean all

.PHONY: all $(NAME) clean fclean re bonus
