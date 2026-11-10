/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d6e734; name: FUN_01d6e734
 */


void FUN_01d6e734(undefined1 *param_1,code *param_2,ulong param_3)

{
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
      (*param_2)();
    }
    break;
  case 2:
    FUN_01d70b50(param_1 + 8);
    return;
  case 3:
    FUN_01d70b8c(0,param_1 + 8);
    return;
  }
  return;
}


