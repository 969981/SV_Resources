/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a22d4; name: FUN_014a22d4
 */


void FUN_014a22d4(long param_1,int *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x4a8);
  if (*(int *)(lVar1 + 0x1c) == 0) {
    FUN_0111e884(lVar1,*param_2 + *(int *)(lVar1 + 0xc) * param_2[1]);
    return;
  }
  FUN_0111e884(lVar1,param_2[1] + *(int *)(lVar1 + 0x10) * *param_2);
  return;
}


