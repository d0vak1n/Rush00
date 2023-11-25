void rush(int x, int y)
{
  int ix;
  int iy;

  ix = 1; //La variable que recorre las columnas inicia en 1
  iy = 1; //La variable que recorre las filas se inicia en 1
  
  while(iy <= y)
  {
      while (ix <= x && (iy == 1 || iy == y)) //Mientras sea la primera o la ultima columna
      {
          if (ix == 1) //Primera columna fila 1 y última
          {
              ft_putchar(65);
          }
          else if (ix > 1 && ix < x) //Columnas entre 1 y x fila 1 o última
          {
              ft_putchar(66);
          }
          else if (ix == x) //Última columna fila primera o última
          {
              ft_putchar(67);
          }
        ix++;
      }
      while(ix <= x && iy > 1 && iy < y ) //Mientras esté entre la primera o la última fila
      {
        if (ix == 1 || ix == x) //primera o ultima columna
        {
            ft_putchar(66);
        }
        else if (ix > 1 && ix < x) //columnas del medio
        {
            ft_putchar(32);
        }
        ix++;
      }
     ft_putchar(10); //Seguiente fila
     iy++ ; //Aumenta el contador de filas
     ix = 1; //Volvemos a la columna 1
  }
}