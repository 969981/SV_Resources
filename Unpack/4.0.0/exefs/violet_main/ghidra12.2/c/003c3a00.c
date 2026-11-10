/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c3a00; name: FUN_003c3a00
 */


void FUN_003c3a00(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar1;
  return;
}


