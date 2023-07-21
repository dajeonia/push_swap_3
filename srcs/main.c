#include "push_swap.h"

int	vars_init(t_vars *vars, int argc, char **argv);
int	vars_end(t_vars *vars);

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (vars_init(&vars, argc, argv) < 0)
		return (-1);
	if (push_swap_main(&vars) < 0)
	{
		vars_end(&vars);
		return (-1);
	}
	if (cmd_put(vars.cmd) < 0)
	{
		vars_end(&vars);
		return (-1);
	}
	vars_end(&vars);
	return (0);
}

int	vars_init(t_vars *vars, int argc, char **argv)
{
	vars->a = parse_argv(argc, argv);
	if (vars->a == NULL)
		return (-1);
	vars->b = NULL;
	return (0);
}

int	vars_end(t_vars *vars)
{
	ft_lstclear(&(vars->cmd), free);
	ft_stclear(&(vars->a));
	ft_stclear(&(vars->b));
	return (0);
}
