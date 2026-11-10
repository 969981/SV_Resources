/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f66a8; name: FUN_028f66a8
 */


void FUN_028f66a8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    plVar2 = (long *)(param_2 + 0x10);
    plVar1 = (long *)*plVar2;
    if (*plVar1 != param_2) {
      do {
        lVar3 = *plVar2;
        plVar2 = (long *)(lVar3 + 0x10);
        plVar1 = (long *)*plVar2;
      } while (*plVar1 != lVar3);
    }
  }
  else {
    do {
      plVar1 = plVar2;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar1;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1]);
  return;
}


