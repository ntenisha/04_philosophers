/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_destroy_pthread_and_mutex.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 08:32:48 by ntenisha          #+#    #+#             */
/*   Updated: 2022/07/01 21:14:37 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ph_destroy_pthread_and_mutex(t_sim *sim)
{
	int	i;

	i = 0;
	if (pthread_join(sim->monitor, NULL) != 0)
		return (ph_error(ERR_THREAD));
	ph_unlock_forks(sim);
	pthread_mutex_unlock(sim->end);
	while (i < sim->data->number_of_philos)
	{
		if (pthread_join(sim->philos[i].body, NULL) != 0)
			return (ph_error(ERR_THREAD));
		i++;
	}
	i = 0;
	while (i < sim->data->number_of_philos)
	{
		if (pthread_mutex_destroy(sim->philos[i].right_fork) != 0)
			return (ph_error(ERR_MUTEX));
		i++;
	}
	if (pthread_mutex_destroy(sim->end) != 0)
		return (ph_error(ERR_MUTEX));
	return (0);
}

int	ph_unlock_forks(t_sim *sim)
{
	int	i;

	i = 0;
	while (i < sim->data->number_of_philos)
	{
		pthread_mutex_unlock(sim->philos[i].right_fork);
		i++;
	}
	return (0);
}
