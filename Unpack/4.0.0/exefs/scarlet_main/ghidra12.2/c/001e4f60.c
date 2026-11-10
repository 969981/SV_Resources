/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4f60; name: FUN_001e4f60
 */


void FUN_001e4f60(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int **)(param_2 + 0x660) == (int *)0x0) {
    return;
  }
  if (**(int **)(param_2 + 0x660) != 1) {
    FUN_001e4f14(param_1,param_2 + 0x4c8);
    FUN_001e4f14(param_1,param_2 + 0x4a8);
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x66c);
  if ((bVar1 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_001da5b0(param_1,param_2);
    bVar1 = *(byte *)(param_2 + 0x66c);
    uVar3 = uVar3 ^ 1;
  }
  if ((bVar1 >> 2 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_001da5d0(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  iVar4 = FUN_001e4f14(param_1,param_2 + 0x4c8);
  if ((uVar3 & 1) == 0 && iVar4 != 0) {
    FUN_001da668(param_2);
  }
  iVar4 = FUN_001e4f14(param_1,param_2 + 0x4a8);
  if ((uVar2 & 1) == 0 && iVar4 != 0) {
    FUN_001da254(param_2);
    return;
  }
  return;
}


