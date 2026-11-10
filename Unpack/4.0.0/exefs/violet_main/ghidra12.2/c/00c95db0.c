/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c95db0; name: FUN_00c95db0
 */


undefined1  [16]
FUN_00c95db0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  short sVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  short sVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar27 = param_4._14_2_;
  uVar26 = param_4._12_2_;
  uVar25 = param_4._10_2_;
  uVar24 = param_4._8_2_;
  uVar22 = param_4._6_2_;
  uVar21 = param_4._4_2_;
  uVar20 = param_4._2_2_;
  uVar19 = param_4._0_2_;
  fStack_38 = param_1._8_4_;
  fStack_34 = param_1._12_4_;
  local_40 = param_1._0_4_;
  fStack_3c = param_1._4_4_;
  iVar1 = (**(code **)(*(long *)(*(long *)(param_5 + 0x70) + 0x30) + 0x18))();
  if (iVar1 == 0) {
    auVar8 = ZEXT816(0);
  }
  else {
    iVar3 = 0;
    auVar14 = ZEXT816(0);
    do {
      plVar2 = (long *)(*(long *)(param_5 + 0x70) + 0x30);
      auVar8 = auVar14;
      (**(code **)(*plVar2 + 0x28))(plVar2,iVar3);
      fVar11 = auVar8._0_4_;
      fVar31 = auVar8._4_4_;
      fVar12 = auVar8._8_4_;
      fVar13 = auVar8._12_4_;
      fVar28 = param_3._0_4_;
      fVar29 = param_3._4_4_;
      fVar30 = param_3._8_4_;
      fVar17 = param_3._12_4_;
      auVar4._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar4._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar4._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar4._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar5._0_4_ = fVar11 * fVar11 + fVar31 * fVar31;
      auVar5._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
      auVar5._8_4_ = fVar11 * fVar11 + fVar31 * fVar31;
      auVar5._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
      auVar15 = NEON_ext(auVar5,auVar5,4,1);
      auVar8 = NEON_ext(auVar4,auVar4,4,1);
      auVar9._0_4_ = SQRT(auVar8._0_4_ + auVar8._4_4_);
      auVar9._4_4_ = SQRT(auVar8._8_4_ + auVar8._12_4_);
      auVar9._8_4_ = SQRT(auVar8._0_4_ + auVar8._4_4_);
      auVar9._12_4_ = SQRT(auVar8._8_4_ + auVar8._12_4_);
      auVar6._0_4_ = fVar28 * fVar28 + fVar29 * fVar29;
      auVar6._4_4_ = fVar30 * fVar30 + fVar17 * fVar17;
      auVar6._8_4_ = fVar28 * fVar28 + fVar29 * fVar29;
      auVar6._12_4_ = fVar30 * fVar30 + fVar17 * fVar17;
      fVar28 = (float)CONCAT22(uVar20,uVar19) +
               local_40 * extraout_s0 + fVar11 * fStack_3c + fVar28 * fStack_38;
      fVar29 = (float)CONCAT22(uVar22,uVar21) +
               local_40 * extraout_var + fVar31 * fStack_3c + fVar29 * fStack_38;
      auVar10._4_4_ = fVar29;
      auVar10._0_4_ = fVar28;
      fVar30 = (float)CONCAT22(uVar25,uVar24) +
               local_40 * extraout_var_00 + fVar12 * fStack_3c + fVar30 * fStack_38;
      auVar10._12_4_ =
           (float)CONCAT22(uVar27,uVar26) +
           local_40 * extraout_var_01 + fVar13 * fStack_3c + fVar17 * fStack_38;
      auVar10._8_4_ = fVar30;
      auVar8 = NEON_ext(auVar6,auVar6,4,1);
      auVar16._0_4_ = SQRT(auVar15._0_4_ + auVar15._4_4_);
      auVar16._4_4_ = SQRT(auVar15._8_4_ + auVar15._12_4_);
      auVar16._8_4_ = SQRT(auVar15._0_4_ + auVar15._4_4_);
      auVar16._12_4_ = SQRT(auVar15._8_4_ + auVar15._12_4_);
      sVar18 = -(ushort)(auVar9._0_4_ < auVar16._0_4_);
      sVar23 = sVar18 >> 0xf;
      auVar15._4_2_ = sVar18;
      auVar15._0_4_ = (int)sVar18;
      auVar15._6_2_ = sVar23;
      auVar15._8_2_ = sVar18;
      auVar15._10_2_ = sVar23;
      auVar15._12_2_ = sVar18;
      auVar15._14_2_ = sVar23;
      auVar9 = auVar9 ^ (auVar9 ^ auVar16) & auVar15;
      fVar12 = SQRT(auVar8._0_4_ + auVar8._4_4_);
      uVar19 = auVar14._12_2_;
      uVar20 = auVar14._14_2_;
      fVar11 = auVar14._12_4_;
      fVar31 = auVar9._0_4_;
      param_3._0_4_ = (float)-(uint)(fVar31 < fVar12);
      param_3._4_4_ = (float)-(uint)(auVar9._4_4_ < SQRT(auVar8._8_4_ + auVar8._12_4_));
      param_3._8_4_ = (float)-(uint)(auVar9._8_4_ < SQRT(auVar8._0_4_ + auVar8._4_4_));
      param_3._12_4_ = (float)-(uint)(auVar9._12_4_ < SQRT(auVar8._8_4_ + auVar8._12_4_));
      fVar31 = fStack_34 *
               (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)fVar12) & (uint)param_3._0_4_);
      auVar8._0_12_ = auVar10._0_12_;
      auVar8._12_4_ = fVar31;
      if (0.0 < fVar11) {
        if (fVar31 <= 0.0) {
LAB_00c95f18:
          auVar8 = auVar14;
        }
        else {
          fVar28 = fVar28 - auVar14._0_4_;
          fVar29 = fVar29 - auVar14._4_4_;
          fVar30 = fVar30 - auVar14._8_4_;
          fVar12 = fVar31 - fVar11;
          auVar7._0_4_ = fVar28 * fVar28 + fVar29 * fVar29;
          auVar7._4_4_ = fVar30 * fVar30 + 0.0;
          auVar7._8_4_ = fVar28 * fVar28 + fVar29 * fVar29;
          auVar7._12_4_ = fVar30 * fVar30 + 0.0;
          auVar15 = NEON_ext(auVar7,auVar7,4,1);
          param_3._0_4_ = auVar15._0_4_ + auVar15._4_4_;
          param_3._4_4_ = auVar15._8_4_ + auVar15._12_4_;
          param_3._8_4_ = auVar15._0_4_ + auVar15._4_4_;
          param_3._12_4_ = auVar15._8_4_ + auVar15._12_4_;
          if (fVar12 * fVar12 < param_3._0_4_) {
            fVar13 = SQRT(param_3._0_4_);
            if (NAN(fVar13)) {
              fVar13 = sqrtf(param_3._0_4_);
            }
            fVar12 = (fVar12 + fVar13) / (fVar13 + fVar13);
            auVar8._0_4_ = auVar14._0_4_ + fVar28 * fVar12;
            auVar8._4_4_ = auVar14._4_4_ + fVar29 * fVar12;
            fVar12 = auVar14._8_4_ + fVar30 * fVar12;
            auVar14._4_4_ = fVar12;
            auVar14._0_4_ = fVar12;
            auVar14._8_4_ = fVar12;
            auVar14._12_4_ = fVar12;
            param_3._8_8_ = auVar14._8_8_;
            param_3._0_8_ = CONCAT44((fVar31 + fVar11 + fVar13) * 0.5,fVar12);
            auVar8._8_8_ = param_3._0_8_;
          }
          else if (fVar12 < 0.0) goto LAB_00c95f18;
        }
      }
      uVar27 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar24 = 0;
      uVar22 = 0;
      uVar21 = 0;
      iVar3 = iVar3 + 1;
      auVar14 = auVar8;
    } while (iVar1 != iVar3);
  }
  return auVar8;
}


