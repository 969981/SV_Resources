/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037441c; name: FUN_0037441c
 */


void FUN_0037441c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar6 = *plVar3;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar6;
    param_1[2] = 0;
    puVar5 = PTR_LAB_047cba48;
    while (plVar3 != param_1) {
      plVar2 = (long *)plVar3[1];
      puVar4 = (undefined8 *)plVar3[2];
      plVar3[2] = 0;
      if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00374490 to 00374493 has its CatchHandler @ 003744a8 */
        (**(code **)*puVar4)();
      }
      FUN_0049e790(puVar5,plVar3);
      plVar3 = plVar2;
    }
  }
  return;
}


