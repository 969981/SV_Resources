/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01967bd8; name: FUN_01967bd8
 */


void FUN_01967bd8(long param_1,ulong param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    return;
  }
  uVar4 = FUN_01195974();
  iVar3 = *(int *)(param_1 + 0x108);
  if (iVar3 == 0) {
    lVar5 = FUN_01195854();
    uVar10 = (uint)*(byte *)(lVar5 + 0x570);
    iVar9 = 0;
    iVar3 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar9 = 1;
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      iVar9 = 2;
    }
    uVar10 = *(uint *)(param_1 + 0x2a4);
  }
  uVar8 = uVar4 >> 0x20;
  if (iVar3 == 0) {
    uVar8 = (ulong)(uint)((int)uVar4 + (int)(uVar4 >> 0x20) * 6);
  }
  else if ((iVar3 != 1) && (iVar3 != 2)) {
    uVar8 = 1;
  }
  if (*(int *)(param_1 + 0x298) == 2) {
    bVar1 = *(char *)(param_1 + 0x19c) != '\0';
  }
  else if ((*(int *)(param_1 + 0x298) == 1) &&
          (lVar5 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar9,uVar10,uVar8), lVar5 != 0)) {
    sVar2 = FUN_00e974e0(*(undefined8 *)(lVar5 + 0x70));
    bVar1 = sVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  if (((*(char *)(param_1 + 0x19c) == '\0') ||
      ((*(int *)(lVar5 + 0x6c38) == iVar9 && (*(byte *)(lVar5 + 0x6c3c) == uVar10)))) &&
     ((param_2 & 1) != 0)) {
    uVar7 = 1;
  }
  else if ((*(char *)(param_1 + 0x1714) == '\0') ||
          (iVar3 = FUN_014e94fc(param_1,iVar9,uVar10,uVar8), iVar3 != 2)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 2;
  }
  if (iVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 3;
  }
  FUN_014e56f4(lVar5,uVar6,uVar8,uVar7,bVar1);
  return;
}


