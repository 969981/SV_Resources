/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0194f298; name: FUN_0194f298
 */


void FUN_0194f298(long param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) < 1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


