/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mult.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:08:41 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 12:52:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

double	m_max(const t_m *a)
{
	int		x;
	int		y;
	double	max;

	x = -1;
	max = -99999999;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr->size)
		{
			if (a->arr[x].arr[y] > max)
				max = a->arr[x].arr[y];
		}
	}
	return (max);
}

void	m_mult(const t_m *a, const t_m *b, t_m *res)
{
	int		x;
	int		y;

	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
		{
			res->arr[x].arr[y] = a->arr[x].arr[y] * b->arr[x].arr[y];
		}
	}
}
