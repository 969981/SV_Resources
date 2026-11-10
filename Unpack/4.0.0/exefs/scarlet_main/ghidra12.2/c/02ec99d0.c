/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec99d0; name: FUN_02ec99d0
 */


void FUN_02ec99d0(long param_1,long param_2,undefined8 *param_3,float *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 (*pauVar9) [12];
  undefined8 *puVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [16];
  
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  auVar12 = NEON_fmov(0x3f800000,4);
  pauVar9 = *(undefined1 (**) [12])(param_2 + 0x20);
  fVar11 = auVar12._0_4_ / *(float *)(param_2 + 0x40);
  fVar13 = auVar12._4_4_ / *(float *)(param_2 + 0x44);
  fVar14 = auVar12._8_4_ / *(float *)(param_2 + 0x48);
  fVar15 = auVar12._12_4_ / *(float *)(param_2 + 0x4c);
  uVar33 = (undefined4)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
  fVar38 = (float)*(undefined8 *)*pauVar9;
  fVar40 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(pauVar9[1] + 4);
  uVar47 = (undefined4)((ulong)*(undefined8 *)pauVar9[2] >> 0x20);
  fVar45 = (float)*(undefined8 *)*pauVar1;
  fVar46 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar25 = (float)puVar10[2] * fVar27;
  fVar26 = (float)((ulong)puVar10[2] >> 0x20) * fVar27;
  fVar27 = (float)puVar10[3] * fVar27;
  auVar49._12_4_ = uVar33;
  auVar49._0_12_ = *pauVar9;
  auVar53._12_4_ = uVar33;
  auVar53._0_12_ = *pauVar9;
  auVar49 = NEON_ext(auVar49,auVar53,8,1);
  fVar24 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar22 = (float)*puVar10 * fVar24;
  fVar23 = (float)((ulong)*puVar10 >> 0x20) * fVar24;
  fVar24 = (float)puVar10[1] * fVar24;
  auVar3._12_4_ = uVar47;
  auVar3._0_12_ = *pauVar1;
  auVar4._12_4_ = uVar47;
  auVar4._0_12_ = *pauVar1;
  auVar53 = NEON_ext(auVar3,auVar4,8,1);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar16 = (float)puVar10[4] * fVar18;
  fVar17 = (float)((ulong)puVar10[4] >> 0x20) * fVar18;
  fVar18 = (float)puVar10[5] * fVar18;
  fVar19 = (float)puVar10[6] + (float)*(undefined8 *)(param_1 + 0x50);
  fVar20 = (float)((ulong)puVar10[6] >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar21 = (float)puVar10[7] + (float)*(undefined8 *)(param_1 + 0x58);
  pauVar1 = (undefined1 (*) [12])(pauVar9[2] + 8);
  uVar33 = (undefined4)((ulong)*(undefined8 *)(pauVar9[3] + 4) >> 0x20);
  fVar28 = (float)*(undefined8 *)*pauVar1;
  fVar30 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar12._12_4_ = uVar33;
  auVar12._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar33;
  auVar2._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar12,auVar2,8,1);
  fVar29 = -(float)*(undefined8 *)pauVar9[4];
  fVar31 = -(float)((ulong)*(undefined8 *)pauVar9[4] >> 0x20);
  fVar32 = -(float)*(undefined8 *)(pauVar9[4] + 8);
  fVar43 = auVar12._4_4_;
  param_4[2] = fVar14;
  param_4[3] = fVar15;
  *param_4 = fVar11;
  param_4[1] = fVar13;
  fVar39 = fVar11 * fVar40;
  fVar41 = fVar13 * fVar46;
  fVar42 = fVar14 * fVar30;
  fVar44 = fVar15 * fVar43;
  fVar5 = *(float *)(param_2 + 0x50);
  fVar6 = *(float *)(param_2 + 0x54);
  fVar7 = *(float *)(param_2 + 0x58);
  fVar8 = *(float *)(param_2 + 0x5c);
  fVar34 = fVar38 * fVar11;
  fVar35 = fVar45 * fVar13;
  fVar36 = fVar28 * fVar14;
  fVar37 = fVar30 * fVar15;
  fVar48 = auVar49._0_4_ * fVar11;
  fVar50 = auVar53._0_4_ * fVar13;
  fVar51 = auVar12._0_4_ * fVar14;
  fVar52 = fVar43 * fVar15;
  param_3[5] = CONCAT44(fVar52 * fVar18 + fVar37 * fVar16 + fVar44 * fVar17,
                        fVar51 * fVar18 + fVar36 * fVar16 + fVar42 * fVar17);
  param_3[4] = CONCAT44(fVar50 * fVar18 + fVar35 * fVar16 + fVar41 * fVar17,
                        fVar48 * fVar18 + fVar34 * fVar16 + fVar39 * fVar17);
  *(float *)(param_3 + 7) =
       fVar51 * fVar21 + fVar36 * fVar19 + fVar42 * fVar20 +
       fVar14 * ((auVar12._0_4_ * fVar32 + fVar28 * fVar29 + fVar30 * fVar31) - fVar7);
  *(float *)((long)param_3 + 0x3c) =
       fVar52 * fVar21 + fVar37 * fVar19 + fVar44 * fVar20 +
       fVar15 * ((fVar43 * fVar32 + fVar30 * fVar29 + fVar43 * fVar31) - fVar8);
  *(float *)(param_3 + 6) =
       fVar48 * fVar21 + fVar34 * fVar19 + fVar39 * fVar20 +
       fVar11 * ((auVar49._0_4_ * fVar32 + fVar38 * fVar29 + fVar40 * fVar31) - fVar5);
  *(float *)((long)param_3 + 0x34) =
       fVar50 * fVar21 + fVar35 * fVar19 + fVar41 * fVar20 +
       fVar13 * ((auVar53._0_4_ * fVar32 + fVar45 * fVar29 + fVar46 * fVar31) - fVar6);
  param_3[1] = CONCAT44(fVar52 * fVar24 + fVar37 * fVar22 + fVar44 * fVar23,
                        fVar51 * fVar24 + fVar36 * fVar22 + fVar42 * fVar23);
  *param_3 = CONCAT44(fVar50 * fVar24 + fVar35 * fVar22 + fVar41 * fVar23,
                      fVar48 * fVar24 + fVar34 * fVar22 + fVar39 * fVar23);
  param_3[3] = CONCAT44(fVar52 * fVar27 + fVar37 * fVar25 + fVar44 * fVar26,
                        fVar51 * fVar27 + fVar36 * fVar25 + fVar42 * fVar26);
  param_3[2] = CONCAT44(fVar50 * fVar27 + fVar35 * fVar25 + fVar41 * fVar26,
                        fVar48 * fVar27 + fVar34 * fVar25 + fVar39 * fVar26);
  return;
}


