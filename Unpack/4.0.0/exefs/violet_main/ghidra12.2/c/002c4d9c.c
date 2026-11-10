/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c4d9c; name: FUN_002c4d9c
 */


long * FUN_002c4d9c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar2 = (long *)(param_2 + 0x10);
    plVar4 = (long *)*plVar2;
    if (*plVar4 != param_2) {
      do {
        lVar3 = *plVar2;
        plVar2 = (long *)(lVar3 + 0x10);
        plVar4 = (long *)*plVar2;
      } while (*plVar4 != lVar3);
    }
  }
  else {
    do {
      plVar4 = plVar2;
      plVar2 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_01336080(param_1[1],param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 002c4e28 to 002c4e2b has its CatchHandler @ 002c4e64 */
    (**(code **)*puVar1)();
  }
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_2 + 0x30));
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return plVar4;
}


