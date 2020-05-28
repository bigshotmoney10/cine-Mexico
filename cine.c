//Aqui va el menu con sus opciones: venta, devolucion, ver estado... salir

Se elige venta:

void vender_entrada ()
{
int comprador = -1, fila = -1, columna = -1, pagado = -1;
preguntalabel:
printf ("El comprador es adulto (0) o ninio (1)?\n");
scanf ("%d", &comprador);
if ((comprador != 0) && (comprador != 1))
goto preguntalabel;

filalabel:
printf ("Donde quiere sentarse?\nFila?\n");
scanf ("%d", &fila);
if ((fila < 1) && (fila > limite_fila))
goto filalabel;

columnalabel:
printf ("Asiento número (columna)?\n");
scanf ("%d", &columna);
if ((columna < 1) && (columna > limite_columna))
goto columnalabel;

pagadolabel:
if (comprador == 1)
printf ("El precio es: .....\n Pagado? (0 = no pagado, 1 = pagado)");
else if (comprador == 0)
printf ("El precio es: .....\n Pagado? (0 = no pagado, 1 = pagado)");

scanf ("%d",&pagado);
if ((pagado != 0) && (pagado != 1))
goto pagadolabel;
else
matriz_sitios [fila] [columna] = 1;

return;
}
