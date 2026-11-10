/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ac590; name: FUN_008ac590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_008ac590(undefined8 *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  FUN_008ac868();
  lVar7 = param_1[0xb];
  if (param_3 == 2) {
    local_a8 = *(undefined8 *)(lVar7 + 0x4c);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x54);
    local_98 = *(undefined4 *)(lVar7 + 100);
    uStack_94 = *(undefined4 *)(lVar7 + 0x68);
    local_b0 = *(undefined8 *)(lVar7 + 0x5c);
  }
  else {
    if (param_3 == 1) {
      local_a8 = *(undefined8 *)(lVar7 + 0x34);
      uStack_a0 = *(undefined8 *)(lVar7 + 0x3c);
      local_98 = *(undefined4 *)(lVar7 + 0x44);
      uStack_94 = *(undefined4 *)(lVar7 + 0x48);
    }
    else {
      if (param_3 != 0) goto LAB_008ac628;
      local_a8 = *(undefined8 *)(lVar7 + 0x24);
      uStack_a0 = *(undefined8 *)(lVar7 + 0x2c);
      uStack_94 = *(undefined4 *)(lVar7 + 0x20);
      local_98 = 0x42c80000;
    }
    local_b0 = 0;
  }
LAB_008ac628:
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_b8);
  lVar7 = param_1[0xb];
  fVar8 = (float)NEON_ucvtf((uint)*(byte *)(lVar7 + 0xc));
  local_c0 = local_b8 + fVar8 + fVar8;
  fStack_bc = fStack_b4 + fVar8 + fVar8;
  if ((((lVar7 == 0) || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(lVar7 + 8) >> 5 & 1) == 0)) || (*(char *)(param_1 + 0x13) == '\0')) {
    local_d0 = local_c0 / local_b8;
    lVar7 = (ulong)param_3 * 4;
    local_c8 = local_c0 * -0.5;
    fStack_c4 = fStack_bc * 0.5;
    fStack_cc = fStack_bc / fStack_b4;
    local_d8 = (local_d0 + -1.0) * 0.5;
    fStack_d4 = (fStack_cc + -1.0) * 0.5;
    local_60 = 0.0 - local_d8;
    fStack_5c = 0.0 - fStack_d4;
    local_58 = local_d8 + 1.0;
    fStack_4c = fStack_d4 + 1.0;
    puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) +
                      (long)*(int *)((long)param_1 + lVar7 + 0x9c));
    fStack_54 = fStack_5c;
    local_50 = local_60;
    local_48 = local_58;
    fStack_44 = fStack_4c;
    FUN_00892a80(param_2,puVar1,&local_c8,&local_c0,1,&local_60);
    fVar8 = local_c8 + local_c8 + local_c0;
    fVar11 = 1.0 / ((local_c8 + local_c0) - local_c8);
    fVar10 = fStack_c4 + (fStack_c4 - fStack_bc);
    fVar9 = 1.0 / ((fStack_c4 - fStack_bc) - fStack_c4);
    FUN_008b4f90(&local_90,param_2);
    puVar1[1] = (ulong)(uint)(fVar11 * -fVar8) << 0x20;
    *puVar1 = (ulong)(uint)(fVar11 + fVar11);
    puVar1[3] = (ulong)(uint)(fVar9 * -fVar10) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar9 + fVar9) << 0x20;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    uVar2 = _DAT_03cab5b0;
    puVar1[5] = _UNK_03cab5b8;
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    puVar1[9] = uStack_88;
    puVar1[8] = local_90;
    puVar1[0xb] = uStack_78;
    puVar1[10] = local_80;
    puVar1[0xd] = uStack_68;
    puVar1[0xc] = local_70;
    FUN_008ac0e8(param_1,param_2,*(undefined4 *)((long)param_1 + lVar7 + 0xa8),&local_b0,&local_c8,
                 &local_c0,&local_d0,&local_d8);
    iVar5 = FUN_008abb80(param_1,param_2,*(undefined4 *)((long)param_1 + lVar7 + 0xc0),&local_b0);
    lVar7 = param_1[0xb];
    if (lVar7 == 0) goto LAB_008ac82c;
  }
  else {
    iVar5 = 0;
  }
  if (((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar7 + 8) >> 5 & 1) != 0)) {
    FUN_008ac3ec(param_1,param_2,*(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4),
                 &local_b0,&local_c0);
  }
LAB_008ac82c:
  if (iVar5 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar5 + 2;
    if (-1 < iVar5 + -1) {
      iVar6 = iVar5 + -1;
    }
    iVar6 = iVar6 >> 2;
  }
  return iVar6;
}


