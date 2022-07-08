/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:25:10 by ntenisha          #+#    #+#             */
/*   Updated: 2022/07/01 21:14:20 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

static int	ft_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\r' || str[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			c;
	long int	rezult;

	i = 0;
	c = 1;
	rezult = 0;
	i = ft_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = (c * -1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (rezult * c < INT_MIN / 10)
			return (-1);
		if (rezult * c > INT_MAX / 10)
			return (-1);
		rezult = rezult * 10 + (str[i] - '0');
		i++;
	}
	return (rezult * c);
}
