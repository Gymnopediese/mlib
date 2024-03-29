/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_dot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:26:23 by albaud            #+#    #+#             */
/*   Updated: 2023/10/25 11:35:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"
#include "mlib.h"

void	ann_dot_matrix_fuck_off(const t_m *a, const t_m *b, t_m *res)
{
	int		x;
	int		y;
	int		z;

	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
		{
			z = -1;
			while (++z < b->arr[0].size)
			{
				res->arr[y].arr[z] += a->arr[x].arr[y] * b->arr[x].arr[z];
			}
		}
	}
}

void	ann_dot_matrix_fuck(const t_m *a, const t_m *b, t_m *res)
{
	int		x;
	int		y;
	int		z;

	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
		{
			z = -1;
			while (++z < b->size)
			{
				res->arr[x].arr[z] += a->arr[x].arr[y] * b->arr[z].arr[y];
			}
		}
	}
}

void	m_dot(const t_m *a, const t_m *b, t_m *res)
{
	int		x;
	int		y;
	int		z;

	m_clear(res, 0);
	if (b->size != a->arr[0].size)
	{
		if (b->size == a->size)
			ann_dot_matrix_fuck_off(a, b, res);
		else
			ann_dot_matrix_fuck(a, b, res);
		return ;
	}
	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
		{
			z = -1;
			while (++z < b->arr[0].size)
				res->arr[x].arr[z] += a->arr[x].arr[y] * b->arr[y].arr[z];
		}
	}
}
