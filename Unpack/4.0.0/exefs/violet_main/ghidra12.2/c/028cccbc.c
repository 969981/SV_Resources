/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028cccbc; name: FUN_028cccbc
 */


void FUN_028cccbc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == param_3) {
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (param_2 + (param_3 - param_2) != lVar2) {
    lVar1 = param_3 - param_2 >> 3;
    do {
      FUN_028ccd30(param_2,param_2 + lVar1 * 8);
      param_2 = param_2 + 8;
    } while (lVar2 + lVar1 * -8 != param_2);
  }
  FUN_028ccb70(param_1,param_2);
  return;
}


