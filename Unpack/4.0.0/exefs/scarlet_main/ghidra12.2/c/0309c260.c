/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309c260; name: FUN_0309c260
 */


void FUN_0309c260(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_1 + 0x20) + (long)param_2;
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < param_2) {
    FUN_03095540(param_1 + 0xd0,PTR_PTR_047d1a50,(long)param_2);
  }
  if (*(int *)(param_1 + 0xd8) != param_2) {
    *(int *)(param_1 + 0xd8) = param_2;
  }
  iVar1 = (int)lVar2;
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar1) {
    FUN_03095450(param_1 + 0x100,PTR_PTR_047d1a50,lVar2);
  }
  if (*(int *)(param_1 + 0x108) != iVar1) {
    *(int *)(param_1 + 0x108) = iVar1;
  }
  lVar2 = (long)*(int *)(param_1 + 0x50) * (long)param_2;
  iVar1 = (int)lVar2;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar1) {
    FUN_02e9b320(param_1 + 0x140,PTR_PTR_047d1a50,lVar2);
  }
  if (*(int *)(param_1 + 0x148) != iVar1) {
    *(int *)(param_1 + 0x148) = iVar1;
  }
  return;
}


