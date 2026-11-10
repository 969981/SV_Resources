/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024bfd54; name: FUN_024bfd54
 */


undefined2 FUN_024bfd54(undefined1 *param_1,code *param_2,ulong param_3)

{
  undefined2 uVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
      uVar1 = (*param_2)();
      return uVar1;
    }
  default:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = FUN_024c1aec(param_1 + 8);
    break;
  case 3:
    uVar1 = FUN_024c1b30(param_1 + 8);
  }
  return uVar1;
}


