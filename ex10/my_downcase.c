char* my_downcase(char* param_1)
{
      for(int i = 0; param_1[i]; i++)
    {
        if(param_1[i] >= 'A' && param_1[i] <= 'Z') {
            param_1[i] += 32;
        }
    }
    return param_1;
}