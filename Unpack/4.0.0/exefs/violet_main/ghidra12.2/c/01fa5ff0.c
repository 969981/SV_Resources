/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa5ff0; name: FUN_01fa5ff0
 */


long * FUN_01fa5ff0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    do {
      lVar1 = 0;
      if (*(long *)(*param_3 + 8) != 0) {
        lVar2 = *(long *)(*(long *)(*param_3 + 8) + 0x10);
        lVar1 = 0;
        if (lVar2 != 0) {
          lVar1 = lVar2 + -0x28;
        }
      }
      if (((long *)*param_1)[2] == lVar1) {
        return param_1;
      }
      lVar1 = *(long *)*param_1;
      if (lVar1 == 0) {
        return param_1;
      }
      if (*(short *)(lVar1 + 0x1a) == 0) {
        return param_1;
      }
      param_1 = param_1 + 4;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


