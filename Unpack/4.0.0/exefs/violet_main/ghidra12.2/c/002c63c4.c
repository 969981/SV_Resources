/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c63c4; name: FUN_002c63c4
 */


long * FUN_002c63c4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)(param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if (*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_01336080(param_1[1],param_2);
  FUN_002c2728(param_2 + 0x50);
  FUN_002c2804(param_2 + 0x38,*(undefined8 *)(param_2 + 0x40));
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_2 + 0x30));
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return plVar3;
}


