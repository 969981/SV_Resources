/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b518c; name: FUN_030b518c
 */


int FUN_030b518c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = iVar2;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= iVar2) {
    FUN_02e9b11c(param_1 + 8,PTR_PTR_047d1a50,(long)iVar2 + 1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (long)iVar4 * 0x10);
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  *(int *)(param_1 + 0x10) = (int)((long)iVar2 + 1);
  return iVar2;
}


