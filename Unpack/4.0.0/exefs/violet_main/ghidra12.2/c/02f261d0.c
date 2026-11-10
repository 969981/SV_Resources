/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f261d0; name: FUN_02f261d0
 */


void FUN_02f261d0(undefined1 (*param_1) [12],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  uVar31 = *(undefined8 *)(param_1[3] + 4);
  fVar13 = (float)uVar31;
  uVar14 = (undefined4)((ulong)uVar31 >> 0x20);
  uVar5 = *(undefined8 *)*pauVar1;
  fVar12 = (float)uVar5;
  fVar21 = (float)((ulong)uVar5 >> 0x20);
  auVar28._12_4_ = uVar14;
  auVar28._0_12_ = *pauVar1;
  auVar4._12_4_ = uVar14;
  auVar4._0_12_ = *pauVar1;
  auVar28 = NEON_ext(auVar28,auVar4,8,1);
  pfVar11 = (float *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar15 = *(float *)(param_2 + 0x74);
  *(undefined8 *)(pfVar11 + 2) = uVar31;
  *(undefined8 *)pfVar11 = uVar5;
  fVar20 = (float)*(undefined8 *)(*param_1 + 8);
  fVar17 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar31 = *(undefined8 *)*param_1;
  fVar18 = (float)uVar31;
  fVar19 = (float)((ulong)uVar31 >> 0x20);
  uVar27 = NEON_ext(uVar5,auVar28._0_8_,4,1);
  fVar22 = fVar18 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar24 = fVar19 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar25 = fVar20 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar26 = fVar17 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  auVar6._12_4_ = fVar17;
  auVar6._0_12_ = *param_1;
  auVar7._12_4_ = fVar17;
  auVar7._0_12_ = *param_1;
  auVar28 = NEON_ext(auVar6,auVar7,8,1);
  uVar31 = NEON_ext(uVar31,auVar28._0_8_,4,1);
  auVar8._4_4_ = fVar24;
  auVar8._0_4_ = fVar22;
  auVar8._8_4_ = fVar25;
  auVar8._12_4_ = fVar26;
  auVar9._4_4_ = fVar24;
  auVar9._0_4_ = fVar22;
  auVar9._8_4_ = fVar25;
  auVar9._12_4_ = fVar26;
  auVar28 = NEON_ext(auVar8,auVar9,4,1);
  fVar30 = (float)((ulong)uVar27 >> 0x20);
  fVar17 = fVar18 * (float)uVar27 - fVar12 * (float)uVar31;
  fVar19 = fVar19 * fVar30 - fVar21 * (float)((ulong)uVar31 >> 0x20);
  fVar26 = fVar20 * fVar12 - fVar13 * fVar18;
  fVar23 = fVar12 * auVar28._0_4_ - (float)uVar27 * fVar22;
  fVar24 = fVar21 * auVar28._4_4_ - fVar30 * fVar24;
  fVar25 = fVar13 * fVar22 - fVar12 * fVar25;
  fVar18 = (float)*(undefined8 *)(lVar2 + 0x60) * fVar17 +
           *(float *)(lVar2 + 0x40) * fVar19 + *(float *)(lVar2 + 0x50) * fVar26;
  fVar20 = (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar17 +
           *(float *)(lVar2 + 0x44) * fVar19 + *(float *)(lVar2 + 0x54) * fVar26;
  fVar22 = (float)*(undefined8 *)(lVar2 + 0x68) * fVar17 +
           *(float *)(lVar2 + 0x48) * fVar19 + *(float *)(lVar2 + 0x58) * fVar26;
  fVar21 = (float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar17 +
           *(float *)(lVar2 + 0x4c) * fVar19 + *(float *)(lVar2 + 0x5c) * fVar26;
  fVar17 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar23 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar24 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar25;
  fVar19 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar23 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar24 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar25;
  fVar26 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar23 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar24 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar25;
  fVar23 = (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar23 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar24 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar25;
  fVar24 = (float)*(undefined8 *)(lVar3 + 0x30);
  auVar32._0_4_ = *(float *)(lVar2 + 0x30) + fVar24;
  fVar25 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  auVar32._4_4_ = *(float *)(lVar2 + 0x34) + fVar25;
  fVar30 = (float)*(undefined8 *)(lVar3 + 0x38);
  auVar32._8_4_ = *(float *)(lVar2 + 0x38) + fVar30;
  fVar35 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  auVar32._12_4_ = *(float *)(lVar2 + 0x3c) + fVar35;
  auVar10._8_4_ = 0x28800000;
  auVar10._0_8_ = 0x2880000028800000;
  auVar10._12_4_ = 0x28800000;
  auVar28 = NEON_fmax(auVar32,auVar10,4);
  fVar24 = *(float *)(lVar2 + 0x30) * fVar18 * fVar18 + fVar24 * fVar17 * fVar17;
  fVar25 = *(float *)(lVar2 + 0x34) * fVar20 * fVar20 + fVar25 * fVar19 * fVar19;
  auVar29._0_8_ = CONCAT44(fVar25,fVar24);
  auVar29._8_4_ = *(float *)(lVar2 + 0x38) * fVar22 * fVar22 + fVar30 * fVar26 * fVar26;
  auVar29._12_4_ = *(float *)(lVar2 + 0x3c) * fVar21 * fVar21 + fVar35 * fVar23 * fVar23;
  auVar33._8_8_ = auVar29._8_8_;
  auVar33._0_8_ = auVar29._0_8_;
  auVar34._0_12_ = auVar33._0_12_;
  auVar34._12_4_ = auVar28._12_4_;
  auVar28 = NEON_ext(auVar34,auVar34,8,1);
  fVar21 = fVar24 + fVar25 + auVar28._0_4_ + auVar28._4_4_;
  *(ulong *)(pfVar11 + 6) = CONCAT44(fVar15 / fVar21,fVar22);
  *(ulong *)(pfVar11 + 4) = CONCAT44(fVar20,fVar18);
  *(ulong *)(pfVar11 + 10) = CONCAT44(fVar21,fVar26);
  *(ulong *)(pfVar11 + 8) = CONCAT44(fVar19,fVar17);
  auVar16._0_4_ =
       (*(float *)(param_1[1] + 4) - (float)*(undefined8 *)*param_1) *
       (float)*(undefined8 *)(param_1[2] + 8);
  auVar16._4_4_ =
       (*(float *)(param_1[1] + 8) - (float)((ulong)*(undefined8 *)*param_1 >> 0x20)) *
       (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  auVar16._8_4_ =
       (*(float *)param_1[2] - (float)*(undefined8 *)(*param_1 + 8)) *
       (float)*(undefined8 *)(param_1[3] + 4);
  auVar16._12_4_ =
       (*(float *)(param_1[2] + 4) - (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20)) *
       (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  auVar28 = NEON_ext(auVar16,auVar16,8,1);
  *(ulong *)(pfVar11 + 2) =
       CONCAT44((auVar16._0_4_ + auVar16._4_4_ + auVar28._0_4_) * *(float *)(param_2 + 0x1c),fVar13)
  ;
  *(undefined8 *)pfVar11 = uVar5;
  *pfVar11 = fVar12 + 1.1920929e-07;
  *(undefined1 *)pfVar11 = 4;
  *param_3 = pfVar11 + 0xc;
  return;
}


