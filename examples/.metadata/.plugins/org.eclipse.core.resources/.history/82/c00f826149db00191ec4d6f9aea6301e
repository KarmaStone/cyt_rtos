#include "platform_register.h"


static list *platform_list;
static list_iter *platform_list_iter;



int platform_init(void)
{
	platform_list = list_create();
	platform_list_iter = list_get_iterator(platform_list, START_FROM_HEAD);

	if ((platform_list == NULL) || (platform_list_iter == NULL))
	{
		/*msicdev列表初始化失败,系统重启*/
		soft_system_resert(__func__);
	}
    
    return 0;
}
//arch_init(platform_init);


list *platform_get_list( void )
{
	return platform_list;
}

static list_node *platform_list_empty(struct platformdevice *platform)
{
	list_iter *iter;
	list_node *node;

	iter = list_get_iterator(platform_list, START_FROM_HEAD);
	while ((node = list_next(iter)) != NULL)
	{
		if (platform == node->value)
		{
			list_release_iterator(iter);
			return node;
		}
	}
	list_release_iterator(iter);
	return NULL;
}


int platform_register(struct platformdevice *platform)
{
	int err = 0;
    
    if ( platform_list_empty(platform) != NULL )
    {
        INIT_PRINT(INIT_FAIL,"%s hasbeen register" , platform->name);
		return -EINVAL;
    }
    
	if (list_add_node_tail(platform_list, platform) == NULL)
	{
        INIT_PRINT(INIT_FAIL,"%s platform register" , platform->name);
		return -ENOMEM;
	}

    INIT_PRINT(INIT_OK,"%s platform register" , platform->name);

	return err;
}

int platform_deregister(struct platformdevice *platform)
{
    list_node *node; 
    
    if( list_length(platform_list) == 0)
        return -EINVAL;
    
	if ( ( node = platform_list_empty(platform)) == NULL )
		return -EINVAL;
	
	list_del_node(platform_list , node);
    
	return 0;
}

