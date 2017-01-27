/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 16:50:10 by wfung             #+#    #+#             */
/*   Updated: 2017/01/27 00:37:09 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(void)
{		
	char *str;		//passed in str to test

	str =
			"####\n"	//5
			"....\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			1
			"#...\n"	//5
			"#...\n"	//5
			"#...\n"	//5
			"#...\n"	//5
			"\n"		//1			2
			"##..\n"	//5
			"##..\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			3
			"###.\n"	//5
			".#..\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//			4
			"#...\n"	//5
			"##..\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"\n"		//1			5
			".#..\n"	//5
			"##..\n"	//5
			".#..\n"	//5
			"....\n"	//5
			"\n"		//1			6
			".#..\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			7
			"##..\n"	//5
			".##.\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			8
			".#..\n"	//5
			"##..\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"\n"		//1			9
			".##.\n"	//5
			"##..\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			10
			"#...\n"	//5
			"##..\n"	//5
			".#..\n"	//5
			"....\n"	//5
			"\n"		//1			11
			"#...\n"	//5
			"#...\n"	//5
			"##..\n"	//5
			"....\n"	//5
			"\n"		//1			12
			"..#.\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			13
			"##..\n"	//5
			".#..\n"	//5
			".#..\n"	//5
			"....\n"	//5
			"\n"		//1			14
			"###.\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			15
			".#..\n"	//5
			".#..\n"	//5
			"##..\n"	//5
			"....\n"	//5
			"\n"		//1			16
			"#...\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			17
			"##..\n"	//5
			"#...\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"\n"		//1			18
			"#...\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5		
			"\n"		//5			19
			"##..\n"	//5
			".#..\n"	//5
			".#..\n"	//5
			"....\n"	//5
			"\n"		//1			20		20 - 26 are extra for testing
			"###.\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			21
			".#..\n"	//5
			".#..\n"	//5
			"##..\n"	//5
			"....\n"	//5
			"\n"		//1			22
			"#...\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5
			"\n"		//1			23
			"##..\n"	//5
			"#...\n"	//5
			"#...\n"	//5
			"....\n"	//5
			"\n"		//1			24
			"#...\n"	//5
			"###.\n"	//5
			"....\n"	//5
			"....\n"	//5		
			"\n"		//5			25
			"###.\n"	//5
			"..#.\n"	//5
			"....\n"	//5
			"....\n";	//5		
//			"\n";		//5			26

	if (ft_chk_input(str) == 1)
	{
		printf("main: chk_input finished\n");
		if (ft_matchx(str) == 1)
		{
			printf("-----\n");
			printf("matchx passed\n");
//			ft_shape_letter(str, ft_shape_count(str));
		}
	}
	else
	{
		printf("-----\n");
		printf("main: fail chk_input\n");
	}
	return (0);
}

/* sample.fillit from fillit pdf

...#$	5
...#$	5
...#$	5
...#$	5
$		1
....$	5
....$	5
....$	5
####$	5
$		1
.###$	5
...#$	5
....$	5
....$	5
$		1
....$	5
..##$	5
.##.$	5
....$	5
$>		1
*/