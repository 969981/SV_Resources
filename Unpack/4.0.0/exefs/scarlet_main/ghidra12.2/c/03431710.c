/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03431710; name: FUN_03431710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03431710(long *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],long param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar17;
  float fVar18;
  undefined1 auVar13 [16];
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  long local_200;
  ulong local_1f8;
  undefined4 local_1f0;
  long local_1e8;
  ulong local_1e0;
  undefined4 local_1d8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  int local_e0;
  byte local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_1f0 = 0;
  local_208 = 0;
  local_1d8 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  if (*(int *)(param_4 + 0x40) != 0) {
    lVar9 = *(long *)(param_4 + 0x38);
    local_218 = 0;
    local_210 = 0.0;
    local_1d0 = *(float *)*param_3 - *(float *)*param_2;
    fStack_1cc = *(float *)(*param_3 + 4) - *(float *)(*param_2 + 4);
    local_1c8 = *(float *)(*param_3 + 8) - *(float *)(*param_2 + 8);
    uVar7 = FUN_0341a340(*(undefined8 *)(lVar9 + 0x18),param_2,&local_1d0,&local_218);
    if ((uVar7 & 1) != 0) {
      auVar13 = NEON_fmov(0x3f800000,4);
      uVar11 = *(undefined8 *)(lVar9 + 0x18);
      fVar22 = auVar13._12_4_;
      auVar3 = *param_2;
      auVar2 = *param_2;
      auVar1 = *param_2;
      fVar12 = (float)local_218 - *(float *)*param_2;
      fVar17 = *(float *)((ulong)&local_218 | 4) - *(float *)(*param_2 + 4);
      fVar18 = local_210 - *(float *)(*param_2 + 8);
      fVar19 = fVar22 - fVar22;
      memset(&local_1d0,0,0xc0);
      uStack_100 = CONCAT44(fVar17,fVar12);
      auVar20._8_4_ = fVar18;
      auVar20._0_8_ = uStack_100;
      auVar20._12_4_ = fVar19;
      auVar14._12_4_ = fVar22;
      auVar14._0_12_ = auVar1;
      uStack_108 = auVar14._8_8_;
      local_110 = auVar1._0_8_;
      uStack_f8 = auVar20._8_8_;
      local_e0 = 0;
      local_b8 = 0;
      lVar8 = *param_1;
      local_f0 = uVar11;
      if (*(long *)(lVar8 + 8) != 0) {
        if ((DAT_048af750 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_048af750);
          auVar20._4_4_ = fVar17;
          auVar20._0_4_ = fVar12;
          auVar14._0_12_ = auVar2;
          if (iVar6 != 0) {
            _DAT_048af740 = auVar13._0_8_;
            uRam00000000048af748 = auVar13._8_8_;
            __cxa_guard_release(&DAT_048af750);
            auVar14._0_12_ = auVar3;
          }
        }
        uStack_98 = auVar14._8_8_;
        local_a0 = auVar14._0_8_;
        uStack_88 = auVar20._8_8_;
        uStack_90 = auVar20._0_8_;
        auVar14 = NEON_frecpe(auVar20,4);
        auVar20 = NEON_frecps(auVar20,auVar14,4);
        local_a4 = 0;
        auVar13._0_8_ =
             CONCAT44(auVar14._4_4_ * (float)((ulong)_DAT_048af740 >> 0x20) * auVar20._4_4_,
                      auVar14._0_4_ * (float)_DAT_048af740 * auVar20._0_4_);
        auVar13._8_4_ = auVar14._8_4_ * (float)uRam00000000048af748 * auVar20._8_4_;
        auVar13._12_4_ =
             auVar14._12_4_ * (float)((ulong)uRam00000000048af748 >> 0x20) * auVar20._12_4_;
        uStack_78 = auVar13._8_8_;
        local_80 = auVar13._0_8_;
        FUN_03436b2c(*(undefined8 *)(lVar8 + 8),&local_a0,&local_a4,&local_1d0);
        if (local_e0 != 0) {
          bVar5 = FUN_03436e58(&local_1d0);
          local_b8 = bVar5 & 1 | local_b8 != 0;
        }
        local_e0 = 0;
        if (local_b8 != 0) goto LAB_034318dc;
        lVar8 = *param_1;
      }
      local_e0 = 0;
      uVar7 = FUN_0341bbe4(&local_208,param_2,*(undefined8 *)(lVar9 + 0x18),param_3,lVar8,param_5,
                           param_6,8,0);
      if ((uVar7 & 1) == 0) goto LAB_034318dc;
LAB_03431a68:
      uVar11 = 1;
      goto LAB_03431a74;
    }
LAB_034318dc:
    local_218 = 0;
    local_210 = 0.0;
    puVar10 = (undefined8 *)
              (*(long *)(param_4 + 0x38) + (ulong)(*(int *)(param_4 + 0x40) - 1) * 0x20 + 0x18);
    local_1d0 = *(float *)*param_3 - *(float *)*param_2;
    fStack_1cc = *(float *)(*param_3 + 4) - *(float *)(*param_2 + 4);
    local_1c8 = *(float *)(*param_3 + 8) - *(float *)(*param_2 + 8);
    uVar7 = FUN_0341a340(*puVar10,param_2,&local_1d0,&local_218);
    if ((uVar7 & 1) != 0) {
      auVar20 = NEON_fmov(0x3f800000,4);
      uVar11 = *puVar10;
      fVar22 = auVar20._12_4_;
      auVar3 = *param_3;
      auVar2 = *param_3;
      auVar1 = *param_3;
      fVar12 = (float)local_218 - *(float *)*param_3;
      fVar17 = *(float *)((ulong)&local_218 | 4) - *(float *)(*param_3 + 4);
      fVar18 = local_210 - *(float *)(*param_3 + 8);
      fVar19 = fVar22 - fVar22;
      memset(&local_1d0,0,0xc0);
      uStack_100 = CONCAT44(fVar17,fVar12);
      auVar21._8_4_ = fVar18;
      auVar21._0_8_ = uStack_100;
      auVar21._12_4_ = fVar19;
      auVar15._12_4_ = fVar22;
      auVar15._0_12_ = auVar1;
      uStack_108 = auVar15._8_8_;
      local_110 = auVar1._0_8_;
      uStack_f8 = auVar21._8_8_;
      local_e0 = 0;
      local_b8 = 0;
      lVar9 = *param_1;
      local_f0 = uVar11;
      if (*(long *)(lVar9 + 8) != 0) {
        if ((DAT_048af750 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_048af750);
          auVar21._4_4_ = fVar17;
          auVar21._0_4_ = fVar12;
          auVar15._0_12_ = auVar2;
          if (iVar6 != 0) {
            _DAT_048af740 = auVar20._0_8_;
            uRam00000000048af748 = auVar20._8_8_;
            __cxa_guard_release(&DAT_048af750);
            auVar15._0_12_ = auVar3;
          }
        }
        uStack_98 = auVar15._8_8_;
        local_a0 = auVar15._0_8_;
        uStack_88 = auVar21._8_8_;
        uStack_90 = auVar21._0_8_;
        auVar20 = NEON_frecpe(auVar21,4);
        auVar14 = NEON_frecps(auVar21,auVar20,4);
        local_a4 = 0;
        auVar16._0_8_ =
             CONCAT44(auVar20._4_4_ * (float)((ulong)_DAT_048af740 >> 0x20) * auVar14._4_4_,
                      auVar20._0_4_ * (float)_DAT_048af740 * auVar14._0_4_);
        auVar16._8_4_ = auVar20._8_4_ * (float)uRam00000000048af748 * auVar14._8_4_;
        auVar16._12_4_ =
             auVar20._12_4_ * (float)((ulong)uRam00000000048af748 >> 0x20) * auVar14._12_4_;
        uStack_78 = auVar16._8_8_;
        local_80 = auVar16._0_8_;
        FUN_03436b2c(*(undefined8 *)(lVar9 + 8),&local_a0,&local_a4,&local_1d0);
        if (local_e0 != 0) {
          bVar5 = FUN_03436e58(&local_1d0);
          local_b8 = bVar5 & 1 | local_b8 != 0;
        }
        local_e0 = 0;
        if (local_b8 != 0) goto LAB_03431a70;
        lVar9 = *param_1;
      }
      local_e0 = 0;
      uVar7 = FUN_0341bbe4(&local_208,param_3,*puVar10,param_2,lVar9,param_5,param_6,8,1);
      if ((uVar7 & 1) != 0) goto LAB_03431a68;
    }
  }
LAB_03431a70:
  uVar11 = 0;
LAB_03431a74:
  puVar4 = PTR_DAT_047e2fd0;
  if (local_1e8 != 0) {
    local_1e0 = local_1e0 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    local_1e8 = 0;
    local_1e0 = local_1e0 & 0xffffffff;
  }
  if (local_200 != 0) {
    local_1f8 = local_1f8 & 0xffffffff00000000;
    (**(code **)(puVar4 + 0x30))(0xb);
  }
  return uVar11;
}


