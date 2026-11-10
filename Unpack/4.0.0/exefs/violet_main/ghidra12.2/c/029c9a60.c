/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c9a60; name: FUN_029c9a60
 */


void FUN_029c9a60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = param_2 + 0x40;
  lVar1 = param_2;
  if (lVar2 != lVar3) {
    do {
      param_2 = lVar1 + 0x40;
      FUN_010ef684(lVar1,param_2);
      lVar2 = lVar1 + 0x80;
      lVar1 = param_2;
    } while (lVar2 != lVar3);
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == param_2) goto LAB_029c9ad0;
  }
  do {
    lVar2 = lVar2 + -0x40;
    FUN_00db239c(lVar2);
  } while (param_2 != lVar2);
LAB_029c9ad0:
  *(long *)(param_1 + 8) = param_2;
  return;
}


