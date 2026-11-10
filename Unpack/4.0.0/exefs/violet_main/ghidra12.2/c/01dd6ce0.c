/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd6ce0; name: FUN_01dd6ce0
 */


bool FUN_01dd6ce0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)(param_1 + 0x1a8);
  iVar5 = *(int *)(lVar11 + 0x6c38);
  uVar2 = *(uint *)(lVar11 + 0x6c3c);
  uVar6 = FUN_01195974();
  iVar10 = *(int *)(param_1 + 0x108);
  uVar12 = uVar6 >> 0x20;
  if (iVar10 == 0) {
    lVar7 = FUN_01195854();
    uVar9 = (uint)*(byte *)(lVar7 + 0x570);
    uVar8 = 0;
    iVar10 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar8 = 1;
    if (iVar10 != 1) {
      if (iVar10 != 2) {
        uVar9 = 0xffffffff;
        uVar8 = 3;
        goto LAB_01dd6d30;
      }
      uVar8 = 2;
    }
    uVar9 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd6d30:
  if (iVar10 == 0) {
    uVar12 = (ulong)(uint)((int)uVar6 + (int)(uVar6 >> 0x20) * 6);
  }
  else if ((iVar10 != 1) && (iVar10 != 2)) {
    uVar12 = 1;
  }
  uVar4 = uVar2 >> 0xe & 0x3f;
  uVar3 = *(uint *)(lVar11 + 0x6c3c);
  uVar1 = uVar4;
  if (1 < iVar5 - 1U) {
    uVar1 = 0;
  }
  if (iVar5 == 0) {
    uVar1 = (uVar2 >> 8 & 0x3f) + uVar4 * 6;
  }
  iVar5 = FUN_01dc7dcc(*(undefined8 *)(param_1 + 0x1a0),*(int *)(lVar11 + 0x6c38),uVar3 & 0xff,uVar1
                       ,uVar8,uVar9,uVar12,uVar3 >> 0x14 & 0x3f,uVar3 >> 0x1a);
  return iVar5 != 0;
}


