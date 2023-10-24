/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlib.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:06:06 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 12:36:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLIB_H

# define MLIB_H

# include "t_m.h"
# include "../vlib/vlib.h"
# include "stdio.h"

//return a new vector o
t_m		m_new(int x, int y, int init);
t_m		m_rand(int x, int y, double min, double max);

double	m_max(const t_m *a);
//apply to res the dot product of a and b, clear res
void	m_dot(const t_m *a, const t_m *b, t_m *res);
void	m_clear(t_m *a, int num);
void	m_apply(t_m *a, double (*f)(double));

void	m_print(const t_m *mtx);
void	m_add(const t_m *a, const t_m *b, t_m *res);
void	m_mult(const t_m *a, const t_m *b, t_m *res);
void	m_subs(const t_m *a, const t_m *b, t_m *res);
void	m_hvdot(const t_m *a, const t_v *b, t_v *res);
void	m_vvdot(const t_m *a, const t_v *b, t_v *res);

#endif