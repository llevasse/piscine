/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:00:29 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/14 16:05:21 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
/* #include <header.h> */

typedef struct s_force{
    int **tab;
    int **key;
    int index[3];
}   t_force;


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_init_struct(t_force *b)
{
    int i;

    i = 0;
    while(i < 4)
    {
        b->index[i] = i;
        i++;
    }
}

void    ft_print_tab(int **tab, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while(j < size)
        {
            ft_putchar(tab[i][j] + '0');
            if(j != size)
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    } 
}

int **ft_gen_key(void)
{
    int **key;
    int i;
    int j;
    int k;

    i = 0;
    key = (int **)malloc(sizeof(int *) * 4);
    if(!key)
        return (0);
    while (i < 4)
    {
        key[i] = (int*)malloc(sizeof(int) * 4);
        if(!key[i])
            return(0) ;
        j = 0;
        k = i + 1;
        while(j < 4)
        {
            if (k == 5)
                k = 1;
            key[i][j] = k++;
            j++;
        }
        i++;
    }
    return(key);
}

int **ft_init_tab(int **tab, int **key)
{
    int i;

    i = 0;
    while(i < 4)
    {
        tab[i] = key[i];
        i++;
    }
    return(tab);
}

void    ft_free( int **key, int **tab, int size)
{
    int i;
    int j;

    i  = 0;
    while(i < size)
    {
        free(key[i++]);
    }
    free(key);
    free(tab);

}

void ft_brute_force(t_force *brute, int i)
{
    if (brute->index[i] != 4)
        brute->tab[i] = brute->key[brute->index[i]++];
    else
    {
        ft_brute_force(brute, i + 1);
        brute->index[i] = 0;
        brute->tab[i] = brute->key[brute->index[i]++];
    }
}

int main(void)
{
    t_force brute;

    brute.tab = (int **)malloc(sizeof(int *) * 4);
    if(!brute.tab)
        return (0);
    brute.key = ft_gen_key();
    if (!brute.key)
        return (0);
    ft_print_tab(brute.key, 4);
    brute.tab = ft_init_tab(brute.tab, brute.key);
    ft_init_struct(&brute);
    ft_putchar('\n');
    //while (ft_check(brute.tab, brute.key));
    ft_brute_force(&brute, 0);
    ft_print_tab(brute.tab, 4);
    ft_putchar('\n');
    /* ft_brute_force(&brute, 0);
    ft_print_tab(brute.tab, 4);
    ft_putchar('\n');
    ft_brute_force(&brute, 0);
    ft_print_tab(brute.tab, 4); */
    ft_free(brute.key, brute.tab, 4);
    return 0;
}

