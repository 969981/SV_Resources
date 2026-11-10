/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087dd60; name: FUN_0087dd60
 */


undefined4 FUN_0087dd60(long param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0x80260201;
  }
  if (4 < param_2) {
    return 0x80260201;
  }
  if (1 < param_3) {
    return 0x80260201;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    return 0x80260203;
  }
  if (*(int *)(param_1 + 0x58) == param_2) {
    *(uint *)(param_1 + 0x98) = param_3;
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  if (iVar1 == param_2) {
    *(uint *)(param_1 + 0xe0) = param_3;
    iVar1 = *(int *)(param_1 + 0xe8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
  }
  if (iVar1 == param_2) {
    *(uint *)(param_1 + 0x128) = param_3;
    iVar1 = *(int *)(param_1 + 0x130);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x130);
  }
  if (iVar1 == param_2) {
    *(uint *)(param_1 + 0x170) = param_3;
    return 0;
  }
  return 0;
}


