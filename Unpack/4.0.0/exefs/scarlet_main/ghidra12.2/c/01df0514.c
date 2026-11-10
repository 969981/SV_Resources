/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df0514; name: FUN_01df0514
 */


void FUN_01df0514(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x1d8);
  iVar6 = *(int *)(param_1 + 0x108);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    iVar2 = *(int *)(param_1 + 0x1dc) + -1;
  }
  if (iVar6 == 0) {
    lVar4 = FUN_01195854();
    uVar5 = (uint)*(byte *)(lVar4 + 0x570);
    iVar6 = *(int *)(param_1 + 0x108);
  }
  else if (iVar6 - 1U < 2) {
    uVar5 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar5 = 0xffffffff;
  }
  iVar7 = iVar2;
  if (iVar6 != 2) {
    iVar7 = 1;
  }
  iVar1 = iVar2;
  if (iVar6 != 1) {
    iVar1 = iVar7;
  }
  iVar2 = iVar3 + iVar2 * 6;
  if (iVar6 != 0) {
    iVar2 = iVar1;
  }
  FUN_014e89c0(param_1,param_2 & 1,uVar5,iVar2);
  return;
}


