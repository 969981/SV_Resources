/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289af80; name: FUN_0289af80
 */


long * FUN_0289af80(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    if (*param_3 == 0) {
      if (*param_1 != 0) {
        do {
          if (param_2 + -1 == param_1) {
            return param_2;
          }
          plVar1 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (*plVar1 != 0);
        return param_1;
      }
    }
    else {
      lVar3 = *(long *)(*param_3 + 0x10);
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = lVar3 + -0x28;
      }
      if (lVar2 != *param_1) {
        do {
          if (param_2 + -1 == param_1) {
            return param_2;
          }
          plVar1 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (lVar2 != *plVar1);
      }
    }
  }
  return param_1;
}


