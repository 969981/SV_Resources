/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01431564; name: FUN_01431564
 */


void FUN_01431564(float param_1,long param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float extraout_s0;
  float fVar8;
  float fVar9;
  float extraout_s0_00;
  float fVar10;
  undefined8 extraout_d0;
  undefined4 extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  undefined8 extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  ulong uStack_48;
  
  if (*(char *)(param_2 + 0x67) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x244);
  if (iVar1 == 3) {
    uStack_78 = 0;
    uStack_74 = 0;
    local_80 = 0.0;
    uStack_7c = 0;
    uStack_6c = 0;
    if (0.0 < *(float *)(param_3 + 0x20)) {
      FUN_0143251c(param_3 + 0x40,param_3 + 0x48);
      uStack_78 = (undefined4)extraout_var_04;
      uStack_74 = (undefined4)((ulong)extraout_var_04 >> 0x20);
      local_80 = (float)extraout_d0;
      uStack_7c = (undefined4)((ulong)extraout_d0 >> 0x20);
    }
    if (0.0 < *(float *)(param_3 + 0x22)) {
      FUN_0143251c(param_3 + 0x40,param_3 + 0x48);
      uStack_6c = extraout_var;
    }
    if ((*(float *)(param_3 + 0x20) <= 0.0) && (*(float *)(param_3 + 0x22) <= 0.0)) {
      iVar1 = *(int *)(param_2 + 0x244);
      *(undefined4 *)(param_2 + 0x244) = 0;
      if (iVar1 != 0) {
        lVar6 = *(long *)(param_2 + 0x150);
        lVar7 = *(long *)(param_2 + 0x158);
        *(undefined8 *)(param_2 + 0xec) = 0;
        *(undefined8 *)(param_2 + 0x100) = 0;
        *(undefined8 *)(param_2 + 0x108) = 0;
        *(undefined8 *)(param_2 + 0x110) = 0;
        *(undefined8 *)(param_2 + 0x118) = 0;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0xd0) {
          *(undefined8 *)(lVar6 + 0x6c) = 0;
          *(undefined8 *)(lVar6 + 0x80) = 0;
          *(undefined8 *)(lVar6 + 0x88) = 0;
          *(undefined8 *)(lVar6 + 0x90) = 0;
          *(undefined8 *)(lVar6 + 0x98) = 0;
        }
      }
      *(undefined4 *)(param_2 + 0x24c) = 0;
      return;
    }
    if (*(float *)(param_2 + 0x248) == 0.0) {
      fVar10 = 1.0;
    }
    else {
      fVar10 = *(float *)(param_2 + 0x24c) / *(float *)(param_2 + 0x248);
      if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
    }
    lVar7 = *(long *)(param_2 + 0x70);
    lVar6 = FUN_00c4c40c(lVar7,*param_3);
    fVar29 = (float)*(undefined8 *)(lVar6 + 0x30);
    fVar24 = (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20);
    fVar25 = (float)*(undefined8 *)(lVar6 + 0x38);
    auVar3._4_4_ = uStack_7c;
    auVar3._0_4_ = local_80;
    auVar3._8_4_ = uStack_78;
    auVar12._4_4_ = uStack_7c;
    auVar12._0_4_ = local_80;
    auVar12._8_4_ = uStack_78;
    local_50 = CONCAT44(uStack_6c,local_80);
    auVar12._12_4_ = uStack_74;
    auVar3._12_4_ = uStack_74;
    auVar12 = NEON_ext(auVar12,auVar3,8,1);
    uStack_48 = (ulong)auVar12._0_4_;
    fVar23 = (float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
    fVar27 = *(float *)(lVar7 + 0x3e0) * fVar29 + *(float *)(lVar7 + 0x3f0) * fVar24 +
             (float)*(undefined8 *)(lVar7 + 0x400) * fVar25 +
             (float)*(undefined8 *)(lVar7 + 0x410) * fVar23;
    fVar28 = *(float *)(lVar7 + 0x3e4) * fVar29 + *(float *)(lVar7 + 0x3f4) * fVar24 +
             (float)((ulong)*(undefined8 *)(lVar7 + 0x400) >> 0x20) * fVar25 +
             (float)((ulong)*(undefined8 *)(lVar7 + 0x410) >> 0x20) * fVar23;
    fVar29 = *(float *)(lVar7 + 1000) * fVar29 + *(float *)(lVar7 + 0x3f8) * fVar24 +
             (float)*(undefined8 *)(lVar7 + 0x408) * fVar25 +
             (float)*(undefined8 *)(lVar7 + 0x418) * fVar23;
    local_60 = 0;
    uStack_58 = 0;
    FUN_0143251c(fVar10,&local_50,&local_60);
    auVar20._4_4_ = fVar28;
    auVar20._0_4_ = fVar27;
    auVar20._8_4_ = fVar29;
    auVar20._12_4_ = 0;
    auVar17._0_4_ = extraout_s0 + fVar27;
    auVar17._4_4_ = extraout_var_00 + fVar28;
    auVar17._8_4_ = extraout_var_02 + fVar29;
    auVar17._12_4_ = extraout_var_05 + 0.0;
    uVar2 = *param_3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      *(undefined4 *)(param_2 + 0x244) = 2;
      *(undefined4 *)(param_2 + 0x24c) = 0;
    }
    lVar7 = *(long *)(param_2 + 0x70);
    lVar6 = FUN_00c4c40c(lVar7,*param_3);
    fVar10 = *(float *)(lVar7 + 0x3e0);
    fVar29 = *(float *)(lVar7 + 0x3e4);
    fVar24 = *(float *)(lVar7 + 1000);
    fVar25 = *(float *)(lVar7 + 0x3ec);
    auVar20 = *(undefined1 (*) [16])(lVar7 + 0x3f0);
    uVar5 = *(undefined8 *)(lVar7 + 0x408);
    uVar4 = *(undefined8 *)(lVar7 + 0x400);
    fVar23 = (float)*(undefined8 *)(lVar6 + 0x30);
    fVar27 = (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20);
    uVar22 = *(undefined8 *)(lVar7 + 0x418);
    uVar21 = *(undefined8 *)(lVar7 + 0x410);
    fVar28 = (float)*(undefined8 *)(lVar6 + 0x38);
    fVar26 = (float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
    if (0.0 < *(float *)(param_3 + 0x20)) {
      if (*(float *)(param_3 + 0x36) == 0.0) {
        fVar18 = SUB164(*(undefined1 (*) [16])(param_3 + 8),0);
        local_50 = (ulong)(uint)(SUB164(*(undefined1 (*) [16])(param_3 + 8),4) - fVar18) << 0x20;
        fVar8 = (float)FUN_014324d8(param_2 + 0x268,&local_50);
        fVar19 = SUB164(*(undefined1 (*) [16])(param_3 + 0x18),0);
        local_50 = (ulong)(uint)(SUB164(*(undefined1 (*) [16])(param_3 + 0x18),4) - fVar19) << 0x20;
        fVar9 = (float)FUN_014324d8(param_2 + 0x268,&local_50);
        *(float *)(param_3 + 0x4c) = fVar19 + fVar9;
        *(undefined4 *)(param_3 + 0x4e) = *(undefined4 *)(param_3 + 0x4e);
        *(float *)(param_3 + 0x48) = fVar18 + fVar8;
        *(undefined4 *)(param_3 + 0x4a) = *(undefined4 *)(param_3 + 0x4a);
      }
      FUN_0143251c(param_3 + 0x40,param_3 + 0x48);
      auVar11._0_4_ =
           fVar10 * fVar23 + auVar20._0_4_ * fVar27 + (float)uVar4 * fVar28 + (float)uVar21 * fVar26
           + extraout_s0_00;
      auVar11._4_4_ =
           fVar29 * fVar23 + auVar20._4_4_ * fVar27 + (float)((ulong)uVar4 >> 0x20) * fVar28 +
           (float)((ulong)uVar21 >> 0x20) * fVar26 + extraout_var_01;
      auVar11._8_4_ =
           fVar24 * fVar23 + auVar20._8_4_ * fVar27 + (float)uVar5 * fVar28 + (float)uVar22 * fVar26
           + extraout_var_03;
      auVar11._12_4_ =
           fVar25 * fVar23 + auVar20._12_4_ * fVar27 + (float)((ulong)uVar5 >> 0x20) * fVar28 +
           (float)((ulong)uVar22 >> 0x20) * fVar26 + extraout_var_06;
      auVar20 = ZEXT416((uint)*(float *)(param_3 + 0x20));
      NEON_rev64(auVar11,4);
      if (*(float *)(param_3 + 0x36) <= *(float *)(param_3 + 0x20)) {
        *(float *)(param_3 + 0x36) = *(float *)(param_3 + 0x36) + param_1;
      }
      else {
        auVar20 = *(undefined1 (*) [16])(param_3 + 0x40);
        auVar12 = NEON_rev64(*(undefined1 (*) [16])(param_3 + 0x48),4);
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._4_4_;
        auVar15._0_8_ = auVar13._0_8_;
        auVar15._8_4_ = auVar12._12_4_;
        auVar15._12_4_ = auVar12._12_4_;
        auVar14._8_8_ = auVar15._8_8_;
        auVar14._0_8_ = CONCAT44(auVar20._4_4_,auVar12._4_4_);
        auVar16._0_12_ = auVar14._0_12_;
        auVar16._12_4_ = auVar20._12_4_;
        *(undefined4 *)(param_3 + 0x36) = 0;
        *(long *)(param_3 + 0x44) = auVar16._8_8_;
        *(undefined8 *)(param_3 + 0x40) = auVar14._0_8_;
      }
    }
    auVar17 = ZEXT416((uint)*(float *)(param_3 + 0x22));
    if (0.0 < *(float *)(param_3 + 0x22)) {
      if (*(float *)(param_3 + 0x38) == 0.0) {
        local_80 = SUB164(*(undefined1 (*) [16])(param_3 + 0x10),0);
        local_50 = (ulong)(uint)(SUB164(*(undefined1 (*) [16])(param_3 + 0x10),4) - local_80) <<
                   0x20;
        fVar10 = (float)FUN_014324d8(param_2 + 0x268,&local_50);
        *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
        *(undefined4 *)(param_3 + 0x4e) = *(undefined4 *)(param_3 + 0x4e);
        *(ulong *)(param_3 + 0x48) = CONCAT44(local_80 + fVar10,*(undefined4 *)(param_3 + 0x48));
      }
      FUN_0143251c(param_3 + 0x40,param_3 + 0x48);
      auVar17 = ZEXT416((uint)*(float *)(param_3 + 0x22));
      if (*(float *)(param_3 + 0x38) <= *(float *)(param_3 + 0x22)) {
        param_1 = *(float *)(param_3 + 0x38) + param_1;
        auVar20 = ZEXT416((uint)param_1);
        *(float *)(param_3 + 0x38) = param_1;
      }
      else {
        *(undefined4 *)(param_3 + 0x38) = 0;
        auVar20._0_8_ =
             CONCAT44(*(undefined4 *)(param_3 + 0x4a),(int)*(undefined8 *)(param_3 + 0x40));
        auVar20._8_8_ = *(undefined8 *)(param_3 + 0x44);
        *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x44);
        *(undefined8 *)(param_3 + 0x40) = auVar20._0_8_;
      }
    }
    if ((auVar17._0_4_ <= 0.0) &&
       (auVar17 = ZEXT416((uint)*(float *)(param_3 + 0x20)), *(float *)(param_3 + 0x20) <= 0.0)) {
      return;
    }
    uVar2 = *param_3;
  }
  FUN_014321cc(auVar17,auVar20,param_2,uVar2);
  FUN_00cc3a84(*(undefined8 *)(param_2 + 0x70),*param_3);
  return;
}


