/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:50:45 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/16 16:51:00 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (sign * result);
}

static void	send_signal(pid_t id, char message)
{
	int		i;
	char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (message >> i) & 1;
		if (bit == 1)
			kill(id, SIGUSR1); 
		else
			kill(id, SIGUSR2); 
		usleep(50); 
		i--;
	}
}

int	main(int argc, char *argv[])
{
	pid_t	server_id;

	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		for (int i = 0; argv[2][i] != '\0'; i++)
			send_signal(server_id, argv[2][i]);
	}
	else
		write(1, "Usage: ./client_bonus <server_pid> <message>\n", 46);
	return (0);
}
