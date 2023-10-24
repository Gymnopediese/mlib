/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vdot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:05:10 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 12:35:32 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

void	m_vvdot(const t_m *a, const t_v *b, t_v *res)
{
	int		x;

	x = -1;
	while (++x < a->size)
		res->arr[x] = v_dot(&a->arr[x], b);
}

void	m_hvdot(const t_m *a, const t_v *b, t_v *res)
{
	int		x;
	int		y;

	x = -1;
	while (++x < a->arr->size)
	{
		y = -1;
		res->arr[x] = 0;
		while (++y < a->size)
			res->arr[x] += a->arr[y].arr[x] * b->arr[y];
	}
}
