/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2f_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:39:14 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 10:39:14 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "vec2f.h"

static void	print_vec2f(t_vec2f v)
{
	printf("{x: %f, y: %f}\n", v.x, v.y);
}

int	main(void)
{
	t_vec2f	test_v0 = vec2f_init(1, 0);
	t_vec2f	test_v1 = vec2f_init(1, 3);
	t_vec2f	test_v2 = vec2f_init(0, 0.55);
	printf("Original v0: ");
	print_vec2f(test_v0);
	printf("Original v1: ");
	print_vec2f(test_v1);
	printf("Original v2: ");
	print_vec2f(test_v2);
	printf("Scaled by 2.0: ");
	print_vec2f(VEC2F_SCALE(test_v0, 2.0));
	print_vec2f(VEC2F_SCALE(test_v1, 2.0));
	print_vec2f(VEC2F_SCALE(test_v2, 2.0));
	printf("Add v0 to v2: ");
	print_vec2f(VEC2F_ADD(test_v0, test_v2));
	printf("Sub v0 to v2: ");
	print_vec2f(VEC2F_SUB(test_v0, test_v2));
	printf("Mult v0 to v2: ");
	print_vec2f(VEC2F_MULT(test_v0, test_v2));
	printf("Div v0 to v2: ");
	print_vec2f(VEC2F_DIV(test_v0, test_v2));
	printf("Dot v0 to v1: %f\n", VEC2F_DOT(test_v0, test_v1));
	printf("Dot v0 to v2: %f\n", VEC2F_DOT(test_v0, test_v2));
	printf("Length of v0: %f\n", VEC2F_LENGTH(test_v0));
	printf("Length of v1: %f\n", VEC2F_LENGTH(test_v1));
	printf("Length of v2: %f\n", VEC2F_LENGTH(test_v2));
	printf("Normalized v0: ");
	print_vec2f(VEC2F_NORMALIZE(test_v0));
	printf("Length of Normalized v0: %f\n", VEC2F_LENGTH(VEC2F_NORMALIZE(test_v0)));
	printf("Normalized v1: ");
	print_vec2f(VEC2F_NORMALIZE(test_v1));
	printf("Length of Normalized v1: %f\n", VEC2F_LENGTH(VEC2F_NORMALIZE(test_v1)));
	printf("Normalized v2: ");
	print_vec2f(VEC2F_NORMALIZE(test_v2));
	printf("Length of Normalized v2: %f\n", VEC2F_LENGTH(VEC2F_NORMALIZE(test_v2)));
	printf("Rotate v0 by pi / 2: ");
	print_vec2f(vec2f_rotate(test_v0, M_PI_2));
	printf("Rotate v1 by pi (180 deg): ");
	print_vec2f(vec2f_rotate(test_v1, M_PI));
	return (0);
}
