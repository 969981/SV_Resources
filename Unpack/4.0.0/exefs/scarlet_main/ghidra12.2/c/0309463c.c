/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309463c; name: FUN_0309463c
 */


void FUN_0309463c(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_1 + 0x188);
  lVar5 = FUN_03095288(plVar1);
  if (lVar5 == 0) {
    lVar5 = -0x100000000;
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(lVar5 + 4);
    lVar5 = (lVar5 - *(long *)(param_1 + 0x198)) * 0x20000000;
  }
  uVar7 = uVar7 | (uint)lVar5;
  lVar12 = *plVar1;
  lVar9 = ((long)param_4 - (long)param_3) * 0x80000000 >> 0x20;
  iVar14 = (int)((ulong)((long)param_4 - (long)param_3) >> 1);
  if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_02eb2098(param_5,PTR_PTR_047d1a50 + 0x20,lVar9);
  }
  memcpy((void *)*param_5,param_3,lVar9 << 1);
  lVar12 = lVar12 + (long)(int)uVar7 * 0x38;
  *(int *)(param_5 + 1) = iVar14;
  piVar13 = (int *)(lVar12 + 0x10);
  plVar15 = (long *)(lVar12 + 8);
  FUN_02eb1718(param_5 + 2,0,*piVar13,0);
  if (param_3 == param_4) {
    bVar4 = false;
  }
  else {
    bVar6 = 0;
    do {
      puVar11 = param_3 + 1;
      uVar3 = *param_3;
      lVar9 = *plVar15 + (ulong)uVar3 * 0x14;
      bVar2 = *(byte *)(lVar9 + 0x10);
      *(undefined1 *)(lVar9 + 0x10) = 8;
      uVar10 = (ulong)(uVar3 >> 3) & 0x1ffc;
      bVar6 = bVar6 | bVar2 & 0x40;
      lVar9 = param_5[2];
      *(uint *)(lVar9 + uVar10) = *(uint *)(lVar9 + uVar10) | 1 << (ulong)(uVar3 & 0x1f);
      param_3 = puVar11;
    } while (param_4 != puVar11);
    bVar4 = bVar6 != 0;
  }
  *(bool *)(param_5 + 5) = bVar4;
  iVar14 = *piVar13;
  if (iVar14 != 0) {
    lVar9 = (long)iVar14 * 0x14;
    pbVar8 = (byte *)(*plVar15 + 0x10);
    do {
      if ((*pbVar8 >> 3 & 1) == 0) {
        return;
      }
      lVar9 = lVar9 + -0x14;
      pbVar8 = pbVar8 + 0x14;
    } while (lVar9 != 0);
  }
  if ((uint)((ulong)lVar5 >> 0x20) <= *(uint *)(param_1 + 0x1a0)) {
    lVar5 = *(long *)(param_1 + 0x198) + (lVar5 >> 0x20) * 8;
    if (*(uint *)(lVar5 + 4) == uVar7) goto LAB_030947f0;
  }
  lVar5 = FUN_03095288(plVar1,*plVar1 + (long)(int)uVar7 * 0x38);
LAB_030947f0:
  FUN_03095c20(plVar1,lVar5);
  return;
}


