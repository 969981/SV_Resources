/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031921bc; name: FUN_031921bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031921bc(undefined8 *param_1,float *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_031cbbc4(param_1,param_2,&local_30,10);
  auVar34._8_8_ = uStack_28;
  auVar34._0_8_ = local_30;
  auVar18._8_4_ = 0x34000000;
  auVar18._0_8_ = 0x3400000034000000;
  auVar18._12_4_ = 0x34000000;
  auVar18 = NEON_fmax(auVar34,auVar18,4);
  fVar19 = (float)DAT_03cab620;
  uVar12 = (ulong)DAT_03cab620 >> 0x20;
  fVar22 = (float)_UNK_03caa5b8;
  uVar14 = (ulong)_UNK_03caa5b8 >> 0x20;
  fVar27 = (float)_DAT_03caa5b0;
  uVar13 = (ulong)_DAT_03caa5b0 >> 0x20;
  fVar32 = auVar18._0_4_;
  fVar29 = auVar18._4_4_;
  fVar28 = auVar18._8_4_;
  fVar17 = auVar18._12_4_;
  fVar20 = (float)_DAT_03cabe60;
  uVar15 = (ulong)_DAT_03cabe60 >> 0x20;
  fVar21 = (float)_UNK_03cabe68;
  uVar16 = (ulong)_UNK_03cabe68 >> 0x20;
  param_1[1] = CONCAT44(fVar17 * (float)((ulong)DAT_03cab628 >> 0x20),fVar28 * (float)DAT_03cab628);
  *param_1 = CONCAT44(fVar29 * (float)uVar12,fVar32 * fVar19);
  *(float *)(param_1 + 3) = fVar28 * fVar21;
  *(float *)((long)param_1 + 0x1c) = fVar17 * (float)uVar16;
  *(float *)(param_1 + 2) = fVar32 * fVar20;
  *(float *)((long)param_1 + 0x14) = fVar29 * (float)uVar15;
  *(float *)(param_1 + 5) = fVar28 * fVar22;
  *(float *)((long)param_1 + 0x2c) = fVar17 * (float)uVar14;
  *(float *)(param_1 + 4) = fVar32 * fVar27;
  *(float *)((long)param_1 + 0x24) = fVar29 * (float)uVar13;
  fVar32 = *param_2;
  fVar29 = param_2[1];
  fVar28 = param_2[2];
  fVar27 = fVar32 * fVar32 + fVar29 * fVar29 + fVar28 * fVar28;
  fVar17 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar19 = 0.0;
  fVar25 = 0.0;
  fVar23 = 0.0;
  fVar22 = 0.0;
  fVar24 = 0.0;
  if (fVar27 != 0.0) {
    fVar27 = SQRT(fVar27);
    fVar23 = SQRT(fVar32 * fVar32 + fVar29 * fVar29 + fVar28 * fVar28);
    fVar22 = fVar32 / fVar27;
    fVar24 = fVar29 / fVar23;
    fVar25 = fVar28 / fVar27;
    fVar23 = param_2[3] / fVar23;
  }
  pauVar1 = (undefined1 (*) [12])(param_2 + 8);
  fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
  uVar6 = *(undefined8 *)*pauVar1;
  fVar32 = (float)((ulong)uVar6 >> 0x20);
  auVar4._12_4_ = fVar29;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = fVar29;
  auVar5._0_12_ = *pauVar1;
  auVar18 = NEON_ext(auVar4,auVar5,8,1);
  uVar11 = NEON_ext(uVar6,auVar18._0_8_,4,1);
  auVar2._4_4_ = fVar24;
  auVar2._0_4_ = fVar22;
  auVar2._8_4_ = fVar25;
  auVar2._12_4_ = fVar23;
  auVar3._4_4_ = fVar24;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar25;
  auVar3._12_4_ = fVar23;
  auVar18 = NEON_ext(auVar2,auVar3,4,1);
  fVar28 = (float)uVar6 * auVar18._0_4_ - fVar22 * (float)uVar11;
  fVar27 = fVar32 * auVar18._4_4_ - fVar24 * (float)((ulong)uVar11 >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_2 + 10) * fVar22 - fVar25 * (float)uVar6;
  fVar32 = fVar29 * fVar24 - fVar23 * fVar32;
  auVar7._4_4_ = fVar27;
  auVar7._0_4_ = fVar28;
  auVar7._8_4_ = fVar30;
  auVar7._12_4_ = fVar32;
  auVar8._4_4_ = fVar27;
  auVar8._0_4_ = fVar28;
  auVar8._8_4_ = fVar30;
  auVar8._12_4_ = fVar32;
  auVar34 = NEON_ext(auVar7,auVar8,4,1);
  fVar33 = auVar34._0_4_;
  fVar35 = auVar34._4_4_;
  fVar32 = fVar33 * fVar33 + fVar35 * fVar35 + fVar28 * fVar28;
  fVar31 = 0.0;
  fVar27 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  *(ulong *)(param_2 + 2) = CONCAT44(fVar23,fVar25);
  *(ulong *)param_2 = CONCAT44(fVar24,fVar22);
  *(ulong *)(param_2 + 6) = (ulong)(uint)fVar28;
  *(long *)(param_2 + 4) = auVar34._0_8_;
  if (fVar32 != 0.0) {
    fVar32 = SQRT(fVar32);
    fVar27 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar28 * fVar28);
    fVar29 = fVar33 / fVar32;
    fVar30 = fVar35 / fVar27;
    fVar31 = fVar28 / fVar32;
    fVar27 = 0.0 / fVar27;
  }
  auVar9._4_4_ = fVar30;
  auVar9._0_4_ = fVar29;
  auVar9._8_4_ = fVar31;
  auVar9._12_4_ = fVar27;
  auVar10._4_4_ = fVar30;
  auVar10._0_4_ = fVar29;
  auVar10._8_4_ = fVar31;
  auVar10._12_4_ = fVar27;
  auVar34 = NEON_ext(auVar9,auVar10,4,1);
  auVar26._0_4_ = fVar22 * auVar34._0_4_ - auVar18._0_4_ * fVar29;
  auVar26._4_4_ = fVar24 * auVar34._4_4_ - auVar18._4_4_ * fVar30;
  auVar26._8_4_ = fVar25 * fVar29 - fVar22 * fVar31;
  auVar26._12_4_ = fVar23 * fVar30 - fVar24 * fVar27;
  auVar18 = NEON_ext(auVar26,auVar26,4,1);
  fVar28 = auVar18._0_4_;
  fVar22 = auVar18._4_4_;
  fVar32 = fVar28 * fVar28 + fVar22 * fVar22 + auVar26._0_4_ * auVar26._0_4_;
  *(ulong *)(param_2 + 6) = CONCAT44(fVar27,fVar31);
  *(ulong *)(param_2 + 4) = CONCAT44(fVar30,fVar29);
  *(ulong *)(param_2 + 10) = (ulong)(uint)auVar26._0_4_;
  *(long *)(param_2 + 8) = auVar18._0_8_;
  if (fVar32 != 0.0) {
    fVar32 = SQRT(fVar32);
    fVar19 = SQRT(fVar28 * fVar28 + fVar22 * fVar22 + auVar26._0_4_ * auVar26._0_4_);
    fVar17 = fVar28 / fVar32;
    fVar20 = fVar22 / fVar19;
    fVar21 = auVar26._0_4_ / fVar32;
    fVar19 = 0.0 / fVar19;
  }
  param_2[10] = fVar21;
  param_2[0xb] = fVar19;
  param_2[8] = fVar17;
  param_2[9] = fVar20;
  return;
}


