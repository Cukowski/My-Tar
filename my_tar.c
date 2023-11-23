#include "my_tar.h"

options_t * get_options(char ** av)
{
    // malloc the return val
    options_t * ret = malloc(sizeof(options_t) + 1);

    // default bool false
    ret->c = false;
    ret->r = false;
    ret->f = false;
    ret->t = false;
    ret->u = false;
    ret->x = false;

    for (int i = 0, j; av[i]; i++)
    {
        if (av[i][0] == '-')
        {
            for (j = 1; av[i][j]; j++)
            {
                switch (av[i][j]) 
                {
                    case 'c':
                        ret->c = true;
                        break;
                    case 'r':
                        ret->r = true;
                        break;
                    case 'f':
                        ret->f = true;
                        break;
                    case 't':
                        ret->t = true;
                        break;
                    case 'u':
                        ret->u = true;
                        break;
                    case 'x':
                        ret->x = true;
                        break;
                    default:
                        printf("%s: invalid input!\ninvalid option: %c\n", av[i], av[i][j]);
                }
            }
        }
    }

    return ret;
}

int main(int argc, char **argv)
{
    if (argc < 1) 
    {
        fprintf(stderr, " ");
        exit(1);
    }

    options_t * opts = get_options(argv);

    printf("\nc: %d, f: %d, r: %d, t: %d, u: %d, x: %d\n", opts->c, opts->f, opts->r, opts->t, opts->u, opts->x);

    free(opts);

    return 0;
}