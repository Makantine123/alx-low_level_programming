#include <unistd.h>
#include <string.h>

int rand()
{
    static int count = -1;

    count ++;

    if (count == 0)
    {
        return (9);
    }
    if (count == 1)
    {
        return (8);
    }
    if (count == 2)
    {
        return (10);
    }
    if (count == 3)
    {
        return (24);
    }
    if (count == 4)
    {
        return (75);
    }
    if (count == 5)
    {
        return (9);
    }

    return (count * count % 30000);
}
