/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e8ce4; name: FUN_014e8ce4
 */


void FUN_014e8ce4(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    FUN_01dd1830(*(undefined8 *)(param_1 + 0x158));
  }
  iVar1 = *(int *)(param_1 + 0x1d8);
  iVar4 = *(int *)(param_1 + 0x108);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    iVar5 = *(int *)(param_1 + 0x1dc) + -1;
  }
  if (iVar4 == 0) {
    lVar2 = FUN_01195854();
    uVar3 = (uint)*(byte *)(lVar2 + 0x570);
    iVar4 = *(int *)(param_1 + 0x108);
  }
  else if (iVar4 - 1U < 2) {
    uVar3 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (iVar4 == 0) {
    iVar5 = iVar1 + iVar5 * 6;
  }
  else if ((iVar4 != 1) && (iVar4 != 2)) {
    iVar5 = 1;
  }
  FUN_014e89c0(param_1,0,uVar3,iVar5);
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  return;
}


