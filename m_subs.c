/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_subs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:09:38 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 12:53:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

void	m_subs(const t_m *a, const t_m *b, t_m *res)
{
	int		x;
	int		y;

	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
			res->arr[x].arr[y] = a->arr[x].arr[y] - b->arr[x].arr[y];
	}
}
