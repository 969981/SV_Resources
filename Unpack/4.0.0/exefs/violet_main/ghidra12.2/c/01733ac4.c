/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01733ac4; name: FUN_01733ac4
 */


int FUN_01733ac4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *param_2 + iVar1 * param_2[1];
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = param_2[1] + iVar1 * *param_2;
  }
  return iVar2 + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * iVar1;
}


