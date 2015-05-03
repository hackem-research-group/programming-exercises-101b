int mayor (int x, int y, int z)
{
    int max = x;

    if(y > max)
    {
        max = y;
    }

    if(z > max)
    {
        max = z;
    }
    return max;
}

int menor (int x, int y, int z)
{
    int min = x;

    if(y < min)
    {
        min = y;
    }

    if(z < min)
    {
        min = z;
    }
    return min;
}

int medio (int x, int y, int z)
{
    if(x != mayor(x, y, z) && x !=menor(x, y, z))
    {
        return x;
    }
    else
    {
        if(y != mayor(x, y, z) && y !=menor(x, y, z))
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}
