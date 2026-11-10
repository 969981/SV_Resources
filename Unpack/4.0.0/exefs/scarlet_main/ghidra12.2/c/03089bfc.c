/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03089bfc; name: FUN_03089bfc
 */


void FUN_03089bfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
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
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  undefined8 local_10;
  float fStack_8;
  
  local_10 = param_1[8];
  fVar36 = (float)local_10;
  fVar11 = ABS((float)((ulong)local_10 >> 0x20));
  uVar15 = CONCAT44(fVar11,ABS(fVar36));
  fStack_8 = (float)param_1[9];
  fVar13 = ABS(fStack_8);
  uVar15 = NEON_fmaxp(uVar15,uVar15,4);
  uVar15 = NEON_fmax(CONCAT44(fVar13,fVar13),uVar15,4);
  bVar2 = PTR_DAT_047d1a18
          [(-(uint)((float)((ulong)uVar15 >> 0x20) <= fVar11) & 2) +
           (uint)((float)uVar15 <= ABS(fVar36)) | -(uint)((float)uVar15 <= fVar13) & 4];
  lVar6 = (long)(char)bVar2;
  if (2 < bVar2) {
    lVar6 = 3;
  }
  *(undefined4 *)((long)&local_10 + lVar6 * 4) = 0;
  fVar11 = ABS((float)((ulong)local_10 >> 0x20));
  uVar15 = CONCAT44(fVar11,ABS((float)local_10));
  fStack_8 = ABS(fStack_8);
  uVar15 = NEON_fmaxp(uVar15,uVar15,4);
  uVar15 = NEON_fmax(CONCAT44(fStack_8,fStack_8),uVar15,4);
  cVar3 = PTR_DAT_047d1a18
          [(-(uint)((float)((ulong)uVar15 >> 0x20) <= fVar11) & 2) +
           (uint)((float)uVar15 <= ABS((float)local_10)) | -(uint)((float)uVar15 <= fStack_8) & 4];
  if (bVar2 == 0) {
    fVar11 = -fVar36;
    fVar13 = 0.0;
    fVar16 = 0.0;
    lVar6 = 0;
    pfVar5 = (float *)(param_1 + 8);
  }
  else if (bVar2 == 1) {
    pfVar5 = (float *)((long)param_1 + 0x44);
    fVar13 = -*pfVar5;
    fVar16 = 0.0;
    fVar11 = 0.0;
    lVar6 = 1;
  }
  else if (bVar2 == 2) {
    pfVar5 = (float *)(param_1 + 9);
    fVar16 = -*pfVar5;
    fVar11 = 0.0;
    fVar13 = 0.0;
    lVar6 = 2;
  }
  else {
    pfVar5 = (float *)((long)param_1 + 0x4c);
    fVar11 = 0.0;
    fVar13 = 0.0;
    fVar16 = 0.0;
    lVar6 = 3;
  }
  *(float *)((ulong)&local_10 | lVar6 << 2) = *pfVar5;
  fVar24 = (float)param_1[1];
  fVar44 = (float)((ulong)param_1[1] >> 0x20);
  fVar41 = (float)*param_1;
  fVar43 = (float)((ulong)*param_1 >> 0x20);
  fVar23 = *(float *)(param_1 + 2);
  fVar26 = *(float *)((long)param_1 + 0x14);
  fVar38 = *(float *)(param_1 + 3);
  fVar47 = *(float *)((long)param_1 + 0x1c);
  fVar46 = (float)param_1[4];
  fVar31 = (float)((ulong)param_1[4] >> 0x20);
  fVar33 = (float)param_1[5];
  fVar35 = (float)((ulong)param_1[5] >> 0x20);
  fVar19 = (float)param_1[6];
  fVar10 = fVar19 + fVar46 * fVar16 + fVar41 * fVar11 + fVar23 * fVar13;
  fVar20 = (float)((ulong)param_1[6] >> 0x20);
  fVar12 = fVar20 + fVar31 * fVar16 + fVar43 * fVar11 + fVar26 * fVar13;
  fVar21 = (float)param_1[7];
  fVar14 = fVar21 + fVar33 * fVar16 + fVar24 * fVar11 + fVar38 * fVar13;
  fVar22 = (float)((ulong)param_1[7] >> 0x20);
  fVar11 = fVar22 + fVar35 * fVar16 + fVar44 * fVar11 + fVar47 * fVar13;
  fVar13 = fVar19 + fVar46 * 0.0 + fVar41 * 0.0 + fVar23 * 0.0;
  fVar16 = fVar20 + fVar31 * 0.0 + fVar43 * 0.0 + fVar26 * 0.0;
  fVar17 = fVar21 + fVar33 * 0.0 + fVar24 * 0.0 + fVar38 * 0.0;
  fVar18 = fVar22 + fVar35 * 0.0 + fVar44 * 0.0 + fVar47 * 0.0;
  if (cVar3 == '\0') {
    fVar36 = -fVar36;
    fVar42 = 0.0;
    fVar39 = 0.0;
    lVar6 = 0;
    pfVar5 = (float *)(param_1 + 8);
  }
  else if (cVar3 == '\x01') {
    pfVar5 = (float *)((long)param_1 + 0x44);
    fVar42 = -*pfVar5;
    fVar39 = 0.0;
    fVar36 = 0.0;
    lVar6 = 1;
  }
  else if (cVar3 == '\x02') {
    pfVar5 = (float *)(param_1 + 9);
    fVar39 = -*pfVar5;
    fVar36 = 0.0;
    fVar42 = 0.0;
    lVar6 = 2;
  }
  else {
    pfVar5 = (float *)((long)param_1 + 0x4c);
    fVar36 = 0.0;
    fVar42 = 0.0;
    fVar39 = 0.0;
    lVar6 = 3;
  }
  *(float *)((ulong)&local_10 | lVar6 << 2) = *pfVar5;
  fVar25 = fVar10 - fVar13;
  fVar29 = fVar12 - fVar16;
  fVar30 = fVar14 - fVar17;
  fVar7 = fVar19 + fVar46 * fVar39 + fVar41 * fVar36 + fVar23 * fVar42;
  fVar8 = fVar20 + fVar31 * fVar39 + fVar43 * fVar36 + fVar26 * fVar42;
  fVar9 = fVar21 + fVar33 * fVar39 + fVar24 * fVar36 + fVar38 * fVar42;
  fVar36 = fVar22 + fVar35 * fVar39 + fVar44 * fVar36 + fVar47 * fVar42;
  fVar39 = (float)*param_2;
  fVar37 = fVar25 * fVar39;
  fVar32 = (float)((ulong)*param_2 >> 0x20);
  fVar40 = fVar29 * fVar32;
  fVar34 = (float)param_2[1];
  fVar42 = fVar30 * fVar34;
  fVar19 = fVar19 + fVar46 * 0.0 + fVar41 * 0.0 + fVar23 * 0.0;
  fVar20 = fVar20 + fVar31 * 0.0 + fVar43 * 0.0 + fVar26 * 0.0;
  fVar21 = fVar21 + fVar33 * 0.0 + fVar24 * 0.0 + fVar38 * 0.0;
  fVar22 = fVar22 + fVar35 * 0.0 + fVar44 * 0.0 + fVar47 * 0.0;
  fVar23 = fVar37 + fVar40 + fVar42;
  fVar42 = fVar37 + fVar40 + fVar42;
  fVar38 = fVar7 - fVar19;
  fVar41 = fVar8 - fVar20;
  fVar43 = fVar9 - fVar21;
  fVar44 = fVar39 * fVar38;
  fVar46 = fVar32 * fVar41;
  fVar47 = fVar34 * fVar43;
  fVar24 = (float)((ulong)param_2[1] >> 0x20);
  fVar25 = fVar25 - fVar39 * fVar23;
  fVar29 = fVar29 - fVar32 * fVar42;
  fVar30 = fVar30 - fVar34 * fVar23;
  fVar23 = (fVar11 - fVar18) - fVar24 * fVar42;
  fVar26 = fVar44 + fVar46 + fVar47;
  fVar47 = fVar44 + fVar46 + fVar47;
  fVar25 = fVar25 * fVar25;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  fVar23 = fVar23 * fVar23;
  auVar28._4_4_ = fVar29;
  auVar28._0_4_ = fVar25;
  auVar28._8_4_ = fVar30;
  auVar28._12_4_ = fVar23;
  auVar45._4_4_ = fVar29;
  auVar45._0_4_ = fVar25;
  auVar45._8_4_ = fVar30;
  auVar45._12_4_ = fVar23;
  auVar45 = NEON_ext(auVar28,auVar45,8,1);
  fVar38 = fVar38 - fVar39 * fVar26;
  fVar41 = fVar41 - fVar32 * fVar47;
  fVar43 = fVar43 - fVar34 * fVar26;
  fVar23 = (fVar36 - fVar22) - fVar24 * fVar47;
  auVar27._0_4_ = fVar38 * fVar38;
  auVar27._4_4_ = fVar41 * fVar41;
  auVar27._8_4_ = fVar43 * fVar43;
  auVar27._12_4_ = fVar23 * fVar23;
  auVar28 = NEON_ext(auVar27,auVar27,8,1);
  bVar4 = auVar27._0_4_ + auVar27._4_4_ + auVar28._0_4_ <= fVar25 + fVar29 + auVar45._0_4_;
  puVar1 = param_3;
  if (bVar4) {
    puVar1 = param_5;
  }
  puVar1[1] = CONCAT44(fVar11,fVar14);
  *puVar1 = CONCAT44(fVar12,fVar10);
  puVar1 = param_4;
  if (bVar4) {
    puVar1 = param_6;
  }
  puVar1[1] = CONCAT44(fVar18,fVar17);
  *puVar1 = CONCAT44(fVar16,fVar13);
  if (bVar4) {
    param_5 = param_3;
  }
  param_5[1] = CONCAT44(fVar36,fVar9);
  *param_5 = CONCAT44(fVar8,fVar7);
  if (bVar4) {
    param_6 = param_4;
  }
  param_6[1] = CONCAT44(fVar22,fVar21);
  *param_6 = CONCAT44(fVar20,fVar19);
  return;
}


