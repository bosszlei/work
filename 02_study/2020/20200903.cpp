#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\n",rand());
    return 0;
}

static bool _of_node_is_type(const struct device_node *np, const char *type)
{
    const char *match = __of_get_property(np, "device_type", NULL);

    return np && match && type && !strcmp(match, type);
}

int of_n_addr_cells(struct device_node* np)
{
    if (np->parent)
        np = np->parent;

    return of_bus_n_addr_cellls(np);
}


int of_bus_n_size_cells(struct device_node* np)
{
    unsigned long cells;
    for ( ; np; np = np->panrent)
        if (of_property_read_u32(np, "#size-cells", &cells))
            return cells;
    
    /*No #size-cells property for the root node*/
    return OF_ROOT_NODE_SIZE_CELLS_DEDAULT;
}