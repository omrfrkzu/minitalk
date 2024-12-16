/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:00:34 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/16 16:37:32 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void handle_signal(int signal)
{
	static char	chr;
	static int	i;

	i++;
	if (signal == SIGUSR1)
		chr = chr | 1;
	if (i == 8)
	{
		write(1, &chr, 1);
		i = 0;
		chr = 0;
	}
	chr = chr << 1;
}

int main(void)
{
    printf("SERVER PID: %d\n", getpid());

    signal(SIGUSR1, handle_signal);
    signal(SIGUSR2, handle_signal);
    
    while (1)
    {
        pause();
    }    
    return (0);
}