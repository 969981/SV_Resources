/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd6bcc; name: FUN_01dd6bcc
 */


bool FUN_01dd6bcc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)(param_1 + 0x1a8);
  iVar4 = *(int *)(lVar10 + 0x6c38);
  uVar1 = *(uint *)(lVar10 + 0x6c3c);
  uVar5 = FUN_01195974();
  iVar9 = *(int *)(param_1 + 0x108);
  uVar11 = uVar5 >> 0x20;
  if (iVar9 == 0) {
    lVar6 = FUN_01195854();
    uVar8 = (uint)*(byte *)(lVar6 + 0x570);
    uVar7 = 0;
    iVar9 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar7 = 1;
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        uVar8 = 0xffffffff;
        uVar7 = 3;
        goto LAB_01dd6c1c;
      }
      uVar7 = 2;
    }
    uVar8 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd6c1c:
  if (iVar9 == 0) {
    uVar11 = (ulong)(uint)((int)uVar5 + (int)(uVar5 >> 0x20) * 6);
  }
  else if ((iVar9 != 1) && (iVar9 != 2)) {
    uVar11 = 1;
  }
  uVar3 = uVar1 >> 0xe & 0x3f;
  iVar9 = uVar3 * 6;
  if (1 < iVar4 - 1U) {
    uVar3 = 0;
  }
  uVar2 = *(uint *)(lVar10 + 0x6c3c);
  if (iVar4 == 0) {
    uVar3 = (uVar1 >> 8 & 0x3f) + iVar9;
  }
  iVar4 = FUN_01dc85a0(*(undefined8 *)(param_1 + 0x1a0),*(int *)(lVar10 + 0x6c38),uVar2 & 0xff,uVar3
                       ,uVar7,uVar8,uVar11,uVar2 >> 0x14 & 0x3f,uVar2 >> 0x1a,
                       *(int *)(param_1 + 0x29c) == 2);
  return iVar4 != 0;
}


