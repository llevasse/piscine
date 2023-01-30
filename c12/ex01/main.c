#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
t_list *ft_list_last(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);

/*----------------------------------------------------------------------------*/
/*----------------------------- FT PRINT LIST --------------------------------*/
/*----------------------------------------------------------------------------*/

void	ft_print_list(t_list *li)
{
	if (!li)
		{
			printf("La liste est vide, rien a afficher\n");
			return ;
		}
	while (li)
	{
		printf("%s\n", li->data);
		li = li->next;
	}
}

/*----------------------------------------------------------------------------*/
/*----------------------------- FT STRCMP ------------------------------------*/
/*----------------------------------------------------------------------------*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*----------------------------------------------------------------------------*/
/*----------------------------- MAIN -----------------------------------------*/
/*----------------------------------------------------------------------------*/



int	main(int ac, char **av)
{
	(void)av;
	(void)ac;
	t_list *mylist;
	t_list *mylist2;
	int (*ptr)(char *, char *);

	ptr = &ft_strcmp;

	mylist = ft_create_elem("mdr");
	mylist2 = ft_create_elem("SALUT");
	if (!mylist)
		printf("La liste est vide frere.\n");
	else
		printf("La liste a des elements mon reuf.\n");
	ft_list_push_front(&mylist, "FRONT");
	ft_list_push_front(&mylist2, "JE SUIS LA DEUXIEME LISTE");
	ft_list_push_front(&mylist, "2");
	ft_list_push_front(&mylist, "3");
	ft_list_push_front(&mylist, "4");
	ft_list_push_front(&mylist, "5");
	ft_list_push_front(&mylist, "6");
	ft_list_push_front(&mylist, "7");
	ft_list_push_front(&mylist, "8");
	/*ft_list_push_back(&mylist, "BACK");*/
	ft_print_list(mylist);
	printf("SIZE : %d\n", ft_list_size(mylist));
	printf("LAST : %s\n", ft_list_last(mylist)->data);
	/*printf("\n\n\nTEST PUSH STRS.\n");
	ft_print_list(ft_list_push_strs(ac, av));
	printf("\n\n\n5eme element (lol) : %s\n", ft_list_at(mylist, 5)->data);
	printf("\n\n\nREVERSE.\n");
	ft_list_reverse(&mylist);
	ft_print_list(mylist);
	printf("\n\n\nTEST MERGE \n");
	ft_list_merge(&mylist, mylist2);
	ft_print_list(mylist);
	printf("\n\n\nSORT LIST : \n");
	ft_list_sort(&mylist, (ptr));
*/
	return (0);
}
