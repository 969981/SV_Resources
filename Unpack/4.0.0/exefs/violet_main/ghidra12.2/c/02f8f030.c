/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f8f030; name: FUN_02f8f030
 */


undefined8
FUN_02f8f030(code *param_1,code *param_2,undefined1 (*param_3) [16],undefined4 *param_4,
            undefined1 (*param_5) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined1 auVar16 [16];
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined8 uVar33;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar33 = NEON_fmov(0xbf800000,4);
  local_80 = 0x7f7fffee7f7fffee;
  uStack_78 = 0x3fb3333300000000;
  local_c0 = *(undefined8 *)param_3[0xc];
  uStack_b8 = *(undefined8 *)(param_3[0xc] + 8);
  uStack_a8 = *(undefined8 *)(param_3[0xd] + 8);
  uStack_b0 = *(undefined8 *)param_3[0xd];
  auVar20 = ZEXT816(0);
  local_a0 = *(undefined8 *)param_3[0xe];
  uStack_98 = *(undefined8 *)(param_3[0xe] + 8);
  uStack_88 = *(undefined8 *)(param_3[0xf] + 8);
  local_90 = *(undefined8 *)param_3[0xf];
  fVar10 = (float)*(undefined8 *)(param_3[7] + 8);
  auVar21._0_12_ = SUB1612(*param_5,0);
  auVar21._12_4_ = fVar10 - (float)*(undefined8 *)param_3[8];
  fVar12 = (float)*(undefined8 *)(param_3[4] + 8);
  fVar9 = (float)*(undefined8 *)param_3[4];
  fVar11 = (float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
  auVar25 = *param_5;
  uVar15 = CONCAT44((float)((ulong)*(undefined8 *)(param_3[7] + 8) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_3[8] + 8) >> 0x20),
                    fVar10 - (float)*(undefined8 *)(param_3[8] + 8));
  iVar13 = 0;
  do {
    auVar26 = auVar21;
    fVar9 = auVar26._0_4_ * fVar9;
    fVar11 = auVar26._4_4_ * fVar11;
    fVar12 = auVar26._8_4_ * fVar12;
    local_100 = CONCAT44(CONCAT31(local_100._5_3_,*(undefined1 *)(param_4 + 1)),*param_4);
    fVar10 = fVar12 + fVar9 + fVar11;
    auVar21 = auVar26;
    if (-fVar10 * (float)*(undefined8 *)param_3[6] < (float)*(undefined8 *)param_3[9]) {
LAB_02f8f228:
      auVar26 = auVar25;
      if (iVar13 < 1) {
        return 0x80040200;
      }
      fVar12 = (float)*(undefined8 *)(param_3[4] + 8);
      fVar32 = (float)((ulong)*(undefined8 *)(param_3[4] + 8) >> 0x20);
      fVar9 = (float)*(undefined8 *)param_3[4];
      fVar11 = (float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
      goto LAB_02f8f234;
    }
    uVar18 = NEON_fmax(uVar15,0,4);
    uVar19 = NEON_fmin(CONCAT44(auVar20._4_4_ +
                                (float)((ulong)*(undefined8 *)(param_3[0x10] + 8) >> 0x20) +
                                ((float)((ulong)uVar33 >> 0x20) / (fVar12 + fVar9 + fVar11)) *
                                (float)((ulong)uVar18 >> 0x20),
                                auVar20._0_4_ + (float)*(undefined8 *)(param_3[0x10] + 8) +
                                ((float)uVar33 / fVar10) * (float)uVar18),
                       *(undefined8 *)(param_3[6] + 8),4);
    fVar10 = (float)uVar19;
    fVar9 = (float)(uVar19 >> 0x20);
    auVar20 = param_3[0xf];
    uStack_88 = CONCAT44(auVar20._12_4_ + fVar9 * *(float *)(param_3[5] + 0xc),
                         auVar20._8_4_ + fVar10 * *(float *)(param_3[5] + 8));
    local_90 = CONCAT44(auVar20._4_4_ + fVar9 * *(float *)(param_3[5] + 4),
                        auVar20._0_4_ + fVar10 * *(float *)param_3[5]);
    iVar8 = (*param_1)(*(undefined8 *)param_3[3],*(undefined8 *)param_3[0x10],&local_c0,&local_100,
                       local_f0);
    if (4 < iVar8) {
LAB_02f8f224:
      goto LAB_02f8f228;
    }
    iVar8 = iVar13 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar19;
    fVar14 = (float)*(undefined8 *)param_3[2] * fStack_d8 +
             (float)*(undefined8 *)*param_3 * local_e0 + *(float *)param_3[1] * fStack_dc;
    fVar17 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20) * fStack_d8 +
             (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * local_e0 +
             *(float *)(param_3[1] + 4) * fStack_dc;
    auVar21._0_8_ = CONCAT44(fVar17,fVar14);
    auVar21._8_4_ =
         (float)*(undefined8 *)(param_3[2] + 8) * fStack_d8 +
         (float)*(undefined8 *)(*param_3 + 8) * local_e0 + *(float *)(param_3[1] + 8) * fStack_dc;
    fVar12 = (float)*(undefined8 *)(param_3[4] + 8);
    fVar32 = (float)((ulong)*(undefined8 *)(param_3[4] + 8) >> 0x20);
    fVar9 = (float)*(undefined8 *)param_3[4];
    fVar11 = (float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
    fVar14 = fVar14 * fVar9;
    fVar17 = fVar17 * fVar11;
    fVar23 = ((float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fStack_d8 +
             (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) * local_e0 +
             *(float *)(param_3[1] + 0xc) * fStack_dc) * fVar32;
    auVar25._4_4_ = fVar17;
    auVar25._0_4_ = fVar14;
    auVar25._8_4_ = auVar21._8_4_ * fVar12;
    auVar25._12_4_ = fVar23;
    auVar28._4_4_ = fVar17;
    auVar28._0_4_ = fVar14;
    auVar28._8_4_ = auVar21._8_4_ * fVar12;
    auVar28._12_4_ = fVar23;
    auVar25 = NEON_ext(auVar25,auVar28,8,1);
    fVar23 = local_f0._0_4_ - (float)*(undefined8 *)(param_3[8] + 8);
    auVar21._12_4_ =
         (local_f0._0_4_ - (float)*(undefined8 *)param_3[8]) -
         fVar10 * (fVar14 + fVar17 + auVar25._0_4_);
    auVar25 = auVar26;
    if (((float)uVar15 <= fVar23) || (fVar23 <= 0.0)) {
      iVar13 = iVar8;
      goto LAB_02f8f224;
    }
    if ((float)*(undefined8 *)(param_3[6] + 8) <= fVar10) {
      iVar13 = iVar13 + 1;
      goto LAB_02f8f224;
    }
    uVar15 = CONCAT44(local_f0._4_4_ - (float)((ulong)*(undefined8 *)(param_3[8] + 8) >> 0x20),
                      fVar23);
    iVar13 = iVar8;
  } while (iVar8 != 6);
  auVar21._8_8_ = auVar21._8_8_;
LAB_02f8f234:
  fVar10 = auVar21._0_4_;
  auVar29._0_4_ = fVar9 * fVar10;
  fVar14 = auVar21._4_4_;
  auVar29._4_4_ = fVar11 * fVar14;
  auVar29._8_4_ = fVar12 * auVar21._8_4_;
  auVar29._12_4_ = fVar32 * auVar21._12_4_;
  auVar20 = NEON_ext(auVar29,auVar29,8,1);
  if (0.0 < auVar29._0_4_ + auVar29._4_4_ + auVar20._0_4_) {
    auVar20 = NEON_ext(auVar26,auVar26,4,1);
    auVar25 = NEON_ext(auVar21,auVar21,4,1);
    fVar17 = auVar25._0_4_ * auVar26._0_4_ - fVar10 * auVar20._0_4_;
    fVar23 = auVar25._4_4_ * auVar26._4_4_ - fVar14 * auVar20._4_4_;
    auVar16._0_8_ = CONCAT44(fVar23,fVar17);
    auVar16._8_4_ = fVar10 * auVar26._8_4_ - auVar21._8_4_ * auVar26._0_4_;
    auVar16._12_4_ = fVar14 * auVar26._12_4_ - auVar21._12_4_ * auVar26._4_4_;
    auVar20 = NEON_ext(auVar16,auVar16,4,1);
    auVar27._0_4_ = fVar9 * fVar17;
    auVar27._4_4_ = fVar11 * fVar23;
    auVar27._8_4_ = fVar12 * auVar16._8_4_;
    auVar27._12_4_ = fVar32 * auVar16._12_4_;
    uVar15 = NEON_ext(auVar20._0_8_,auVar16._0_8_,4,1);
    auVar21 = NEON_ext(auVar27,auVar27,4,1);
    fVar10 = fVar9 * (float)uVar15 - auVar21._0_4_;
    fVar14 = fVar11 * (float)((ulong)uVar15 >> 0x20) - auVar21._4_4_;
    fVar9 = fVar12 * auVar20._0_4_ - fVar9 * fVar17;
    fVar11 = fVar32 * auVar20._4_4_ - fVar11 * 0.0;
    auVar31._4_4_ = fVar14;
    auVar31._0_4_ = fVar10;
    auVar31._8_4_ = fVar9;
    auVar31._12_4_ = fVar11;
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = fVar9;
    auVar2._12_4_ = fVar11;
    auVar20 = NEON_ext(auVar31,auVar2,4,1);
    fVar32 = auVar20._0_4_;
    fVar14 = auVar20._4_4_;
    pauVar1 = param_3 + 2;
    uVar24 = (undefined4)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20);
    fVar23 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar9 = fVar10 * fVar10 + fVar32 * fVar32 + fVar14 * fVar14;
    fVar11 = fVar10 * fVar10 + fVar32 * fVar32 + fVar14 * fVar14;
    fVar12 = SQRT(fVar9);
    fVar17 = SQRT(fVar11);
    fVar32 = fVar32 / fVar12;
    fVar14 = fVar14 / fVar17;
    fVar10 = fVar10 / fVar12;
    auVar7._12_4_ = 0.0 / fVar17;
    auVar7._8_4_ = fVar10;
    auVar20 = *param_3;
    auVar21 = param_3[1];
    auVar28 = NEON_ext(auVar21,auVar21,8,1);
    auVar25 = NEON_ext(auVar20,auVar20,8,1);
    auVar5._12_4_ = uVar24;
    auVar5._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar6._12_4_ = uVar24;
    auVar6._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar29 = NEON_ext(auVar5,auVar6,8,1);
    uVar19 = CONCAT44(-(uint)(fVar11 < 1.1920929e-07),-(uint)(fVar9 < 1.1920929e-07)) & 0x100000001;
    fVar9 = auVar25._0_4_ * fVar10 + auVar20._0_4_ * fVar32 + auVar20._4_4_ * fVar14;
    fVar11 = auVar28._0_4_ * fVar10 + auVar21._0_4_ * fVar32 + auVar21._4_4_ * fVar14;
    fVar12 = auVar29._0_4_ * fVar10 + (float)*(undefined8 *)*pauVar1 * fVar32 + fVar23 * fVar14;
    fVar10 = auVar29._4_4_ * fVar10 + fVar23 * fVar32 + auVar29._4_4_ * fVar14;
    auVar7._4_4_ = fVar14;
    auVar7._0_4_ = fVar32;
    uStack_f8 = CONCAT44(0.0 - fVar10,0.0 - fVar12);
    local_100 = CONCAT44(0.0 - fVar11,0.0 - fVar9);
    (*param_2)(*(undefined8 *)param_3[3],&local_100,*(undefined8 *)param_3[0x10],param_3 + 0xc,
               local_f0);
    auVar20 = param_3[0xe];
    local_e0 = local_e0 - (float)*(undefined8 *)param_3[0xf];
    fStack_dc = fStack_dc - (float)((ulong)*(undefined8 *)param_3[0xf] >> 0x20);
    fStack_d8 = fStack_d8 - (float)*(undefined8 *)(param_3[0xf] + 8);
    auVar21 = param_3[0xc];
    auVar25 = param_3[0xd];
    auVar29 = NEON_ext(auVar25,auVar25,8,1);
    auVar28 = NEON_ext(auVar21,auVar21,8,1);
    auVar31 = NEON_ext(auVar20,auVar20,8,1);
    fVar9 = fVar9 * (local_f0._0_4_ -
                    (auVar28._0_4_ * fStack_d8 +
                    auVar21._0_4_ * local_e0 + auVar21._4_4_ * fStack_dc));
    fVar11 = fVar11 * (local_f0._4_4_ -
                      (auVar29._0_4_ * fStack_d8 +
                      auVar25._0_4_ * local_e0 + auVar25._4_4_ * fStack_dc));
    fVar12 = fVar12 * (local_f0._8_4_ -
                      (auVar31._0_4_ * fStack_d8 +
                      auVar20._0_4_ * local_e0 + auVar20._4_4_ * fStack_dc));
    fVar10 = fVar10 * (local_f0._12_4_ -
                      (auVar31._4_4_ * fStack_d8 +
                      auVar20._4_4_ * local_e0 + auVar31._4_4_ * fStack_dc));
    auVar3._4_4_ = fVar11;
    auVar3._0_4_ = fVar9;
    auVar3._8_4_ = fVar12;
    auVar3._12_4_ = fVar10;
    auVar4._4_4_ = fVar11;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = fVar12;
    auVar4._12_4_ = fVar10;
    auVar20 = NEON_ext(auVar3,auVar4,8,1);
    auVar22._0_12_ = auVar7._0_12_;
    auVar22._12_4_ = (fVar9 + fVar11 + auVar20._0_4_) - (float)*(undefined8 *)param_3[8];
    iVar13 = (int)uVar19;
    iVar8 = (int)(uVar19 >> 0x20);
    auVar30._12_4_ = (iVar8 << 0x1f) >> 0x1f;
    auVar30._8_4_ = (iVar13 << 0x1f) >> 0x1f;
    auVar30._4_4_ = (iVar8 << 0x1f) >> 0x1f;
    auVar30._0_4_ = (iVar13 << 0x1f) >> 0x1f;
    auVar21 = auVar22 ^ (auVar22 ^ auVar26) & auVar30;
  }
  *(long *)(*param_5 + 8) = auVar21._8_8_;
  *(long *)*param_5 = auVar21._0_8_;
  return 0;
}


