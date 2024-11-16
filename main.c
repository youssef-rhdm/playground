/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:15:25 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/16 18:03:39 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void no_arg()
{
	putstr(RED "No Arguments Given");
	putchar('\n');
	putstr("Application will Quit");
}

int main(int argc, char *argv[])
{
	if (argc < 2)
		no_arg();
	else
	{

		if (strcomp(argv[1], "-help") == 0 || strcomp(argv[1], "-h") == 0)
			putstr(WHT "-create / -c Create a new Text File  \n Parameters : \t FILENAME ");

		if (strcomp(argv[1], "-create") == 0)
		{
			if (argv[2] && (strcomp(argv[2], "-help") == 0 || strcomp(argv[2], "-h") == 0))
				putstr(WHT "Create Help Splash Page");
			if (argv[2])
			{
				FILE *file;
				file = fopen(strconcat(argv[2], ".txt"),"ab");
				fclose(file);

			}
			else if (argv[2] == NULL)
				no_arg();
		}
	}
	return 0;
}
