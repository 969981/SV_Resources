/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc5a50; name: FUN_02fc5a50
 */


void FUN_02fc5a50(long param_1,long param_2,long param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  ushort uVar12;
  double dVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long lStack_188;
  undefined1 local_180;
  long local_178;
  long lStack_170;
  byte local_168;
  long local_160;
  long local_158;
  uint local_150;
  uint local_14c;
  undefined1 auStack_148 [32];
  long local_128;
  long local_120;
  undefined1 auStack_110 [80];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  long local_68;
  uint local_60;
  long local_58;
  long local_50;
  long local_48;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  if (*(char *)(*(long *)(*(long *)(lVar8 + 0x8a8) + 0x48) +
                (ulong)*(ushort *)(param_3 + 0x8a) * 0x50 + 0x18) != '\0') {
    return;
  }
  plVar5 = *(long **)(lVar8 + 0x4b8);
  if (plVar5 == (long *)0x0) {
    uVar6 = 0x24;
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5,param_2,param_3);
  }
  local_58 = *(long *)(param_2 + 0x78);
  uVar16 = (uint)uVar6;
  if ((local_58 == 0) || (*(char *)(local_58 + 0x18) != '\x15')) {
    local_60 = 0xffffffff;
  }
  else {
    plVar5 = (long *)(local_58 + (ulong)(uVar16 >> 5 & 7) * 8 + 0x48);
    lVar8 = *plVar5;
    local_58 = 0;
    if (lVar8 != 0) {
      local_58 = lVar8 + (long)plVar5;
    }
    local_60 = (uVar16 >> 5) << 0x1d | 0x1fffffff;
  }
  local_70 = *(undefined8 *)(param_1 + 0x2a8);
  local_68 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x8a8) + 0x48) +
             (ulong)*(ushort *)(param_2 + 0x8a) * 0x50;
  local_78 = param_2;
  local_48 = param_2;
  FUN_02fc2fe0(param_1,param_3,uVar16 >> 2 & 7,1,&local_90,&local_c0,auStack_110,auStack_148);
  puVar9 = *(undefined8 **)(param_1 + 0x2a8);
  dVar2 = (double)puVar9[2];
  dVar3 = (double)puVar9[3];
  dVar13 = (double)puVar9[4];
  *(double *)(param_1 + 0x2e0) = dVar2;
  *(double *)(param_1 + 0x2e8) = dVar3;
  *(double *)(param_1 + 0x2f0) = dVar13;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  uVar19 = puVar9[1];
  uVar18 = *puVar9;
  uVar7 = CONCAT44((float)(dStack_b8 - dVar3),(float)(local_c0 - dVar2));
  uVar17 = CONCAT44((float)dStack_a8,(float)(local_b0 - dVar13));
  *(undefined8 *)(param_1 + 0x318) = uVar17;
  *(undefined8 *)(param_1 + 0x310) = uVar7;
  *(undefined8 *)(param_1 + 0x328) = uVar19;
  *(undefined8 *)(param_1 + 800) = uVar18;
  *(undefined8 *)(param_1 + 0x338) = uStack_88;
  *(undefined8 *)(param_1 + 0x330) = local_90;
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x4c8);
  *(uint *)(param_1 + 0x394) = (uint)*(ushort *)(param_3 + 0x94) << 0x10;
  *(undefined8 *)(param_1 + 0x378) = 0x7f8000007f800000;
  *(undefined8 *)(param_1 + 0x370) = 0x7f8000007f800000;
  lStack_188 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  local_1a0 = *(undefined8 *)(lStack_188 + 0x8b8);
  uStack_198 = *(undefined8 *)(lStack_188 + 0x8a8);
  local_190 = *(undefined8 *)(lStack_188 + 0x508);
  lStack_188 = lStack_188 + 0x530;
  local_180 = 0;
  local_168 = (byte)uVar6;
  local_160 = *(long *)(param_2 + 0x78);
  if (*(char *)(local_160 + 0x18) == '\x15') {
    plVar5 = (long *)(local_160 + ((uVar6 & 0xff) >> 2 & 0x38) + 0x48);
    lVar8 = *plVar5;
    local_160 = 0;
    if (lVar8 != 0) {
      local_160 = lVar8 + (long)plVar5;
    }
  }
  local_158 = *(long *)(param_3 + 0x78);
  if (*(char *)(local_158 + 0x18) == '\x15') {
    plVar5 = (long *)(local_158 + ((uVar6 & 0xff) >> 2 & 7) * 8 + 0x48);
    lVar8 = *plVar5;
    local_158 = 0;
    if (lVar8 != 0) {
      local_158 = lVar8 + (long)plVar5;
    }
  }
  local_150 = (uint)*(byte *)(local_160 + 0x19);
  local_14c = (uint)*(byte *)(local_158 + 0x19);
  *(long **)(param_1 + 0xa8) = &local_78;
  *(undefined1 **)(param_1 + 0xb0) = auStack_148;
  local_178 = param_2;
  lStack_170 = param_3;
  if (*(char *)(local_58 + 0x19) == '\x03') {
    if ((*(char *)(local_128 + 0x19) == '\x03') || ((*(byte *)(local_128 + 0x1a) >> 3 & 1) != 0))
    goto LAB_02fc5dd8;
LAB_02fc5d78:
    local_168 = (byte)(uVar16 >> 3) & 0x1c | local_168 & 3 | (byte)((uVar16 >> 2 & 7) << 5);
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined1 **)(param_1 + 0xa8) = auStack_148;
    *(long **)(param_1 + 0xb0) = &local_78;
    uVar19 = puVar9[1];
    uVar18 = *puVar9;
    *(undefined8 *)(param_1 + 0x308) = uVar17;
    *(undefined8 *)(param_1 + 0x300) = uVar7;
    *(undefined8 *)(param_1 + 0x328) = uStack_88;
    *(undefined8 *)(param_1 + 800) = local_90;
    *(undefined8 *)(param_1 + 0x338) = uVar19;
    *(undefined8 *)(param_1 + 0x330) = uVar18;
    *(uint *)(param_1 + 0x390) = (uint)*(ushort *)(param_3 + 0x94) << 0x10;
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x4c8);
    local_178 = param_3;
    lStack_170 = param_2;
    lVar8 = local_158;
    local_158 = local_160;
    uVar16 = local_14c;
    local_14c = local_150;
LAB_02fc5dcc:
    local_150 = uVar16;
    local_160 = lVar8;
    uVar7 = FUN_02f528e4(&local_1a0,param_1 + 0x100);
LAB_02fc5de4:
    FUN_02fc5620(param_1,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),uVar7,
                 param_1 + 0x150);
  }
  else {
    uVar12 = *(ushort *)(local_58 + 0x1a);
    if (*(char *)(local_128 + 0x19) == '\x03') {
      if ((uVar12 >> 3 & 1) == 0) {
LAB_02fc5d6c:
        lVar8 = local_160;
        uVar16 = local_150;
        goto LAB_02fc5dcc;
      }
LAB_02fc5dd8:
      uVar7 = FUN_02f52d3c(&local_1a0,param_1 + 0x100);
      goto LAB_02fc5de4;
    }
    if (((*(ushort *)(local_128 + 0x1a) | uVar12) >> 3 & 1) != 0) {
      if ((uVar12 >> 3 & 1) == 0) goto LAB_02fc5d6c;
      if ((*(ushort *)(local_128 + 0x1a) >> 3 & 1) == 0) goto LAB_02fc5d78;
      goto LAB_02fc5dd8;
    }
    local_50 = local_58;
    local_120 = local_128;
    if (*(int *)(param_1 + 0x118) < 0xec1) {
      lVar8 = *(long *)(param_1 + 0x110) + (long)*(int *)(param_1 + 0x118) + 0x20;
    }
    else {
      lVar8 = FUN_031c36f4(param_1 + 0x100);
    }
    FUN_02f5252c(lVar8,&local_1a0);
    FUN_02fc3a30(param_1,&local_78,auStack_148,lVar8);
    *(uint *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + (uint)*(byte *)(lVar8 + 9) * 0x10;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  lVar8 = *(long *)(param_1 + 0xe0);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xfb) == '\0') {
    FUN_02f24e3c(param_1 + 0x80,*(undefined8 *)(param_1 + 0x298),param_1);
    return;
  }
  puVar9 = (undefined8 *)(param_1 + 0xd0);
  uVar7 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar8 + 8) = 0x7777;
  plVar5 = *(long **)(param_1 + 200);
  iVar15 = *(int *)((long)plVar5 + 0x1c);
  iVar1 = iVar15 + *(int *)(*plVar5 + 8) + *(int *)(param_1 + 0xdc);
  if (iVar1 == 0) goto LAB_02fc5eb8;
  puVar10 = (uint *)*puVar9;
  if (puVar10 == (uint *)plVar5[2]) {
    uVar12 = *(ushort *)(param_1 + 0xda);
LAB_02fc5ea8:
    sVar14 = (short)iVar15;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0xda);
    puVar11 = puVar10;
    puVar4 = (uint *)plVar5[2];
    if ((uint)uVar12 == (*puVar10 & 0xffff)) {
      puVar11 = *(uint **)(puVar10 + 2);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      uVar12 = 0;
      puVar4 = (uint *)plVar5[2];
    }
    puVar10 = puVar4;
    if (puVar11 == puVar10) {
      iVar15 = *(int *)((long)plVar5 + 0x1c);
      goto LAB_02fc5ea8;
    }
    sVar14 = (short)*puVar11;
    puVar10 = puVar11;
  }
  *(ushort *)(param_1 + 0xda) = sVar14 - uVar12;
  *puVar9 = puVar10;
LAB_02fc5eb8:
  *(int *)(param_1 + 0xdc) = iVar1;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(param_1 + 200),uVar7,puVar9);
  plVar5 = *(long **)(param_1 + 200);
  lVar8 = plVar5[3];
  iVar1 = *(int *)((long)plVar5 + 0x1c);
  iVar15 = *(int *)(*plVar5 + 8);
  *(long *)(param_1 + 0xd0) = plVar5[2];
  *(short *)(param_1 + 0xd8) = (short)lVar8;
  *(short *)(param_1 + 0xda) = (short)iVar1;
  *(int *)(param_1 + 0xdc) = -(iVar1 + iVar15);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


