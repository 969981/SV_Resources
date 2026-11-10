/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086d6d4; name: FUN_0086d6d4
 */


void FUN_0086d6d4(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
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
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  double dVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  undefined8 uVar35;
  undefined1 in_q5 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  float fVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  undefined8 uVar49;
  double dVar50;
  double dVar51;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 local_40 [4];
  undefined8 uStack_20;
  undefined8 uStack_18;
  uint local_c [3];
  
  lVar10 = param_1 + 0xd60;
  bVar2 = *(byte *)(lVar10 + (-(ulong)((param_2 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                             (ulong)(param_2 << 2) << 2) + 2);
  uVar9 = (ulong)(long)(int)(param_2 << 2) >> 2;
  bVar3 = *(byte *)(lVar10 + (uVar9 << 4 | 4) + 2);
  local_c[0] = (uint)bVar2;
  local_c[1] = (uint)bVar3;
  bVar4 = *(byte *)(lVar10 + (uVar9 << 4 | 8) + 2);
  param_1 = param_1 + 0x8d0;
  local_c[2] = (uint)bVar4;
  puVar7 = (undefined8 *)(param_1 + (ulong)bVar4 * 0x10);
  uVar22 = puVar7[1];
  fVar31 = (float)uVar22;
  fVar17 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = *puVar7;
  fVar24 = (float)uVar22;
  fVar29 = (float)((ulong)uVar22 >> 0x20);
  puVar7 = (undefined8 *)(param_1 + (ulong)bVar3 * 0x10);
  uVar15 = puVar7[1];
  uVar22 = *puVar7;
  fVar12 = (float)uVar22;
  fVar16 = fVar24 - fVar12;
  fVar13 = (float)((ulong)uVar22 >> 0x20);
  fVar18 = fVar29 - fVar13;
  fVar14 = (float)uVar15;
  fVar20 = fVar31 - fVar14;
  fVar21 = (float)((ulong)uVar15 >> 0x20);
  local_40[1] = CONCAT44(fVar17 - fVar21,fVar20);
  local_40[0] = CONCAT44(fVar18,fVar16);
  puVar7 = (undefined8 *)(param_1 + (ulong)bVar2 * 0x10);
  uVar15 = puVar7[1];
  uVar22 = *puVar7;
  fVar19 = (float)uVar22;
  fVar24 = fVar19 - fVar24;
  fVar25 = (float)((ulong)uVar22 >> 0x20);
  fVar29 = fVar25 - fVar29;
  fVar26 = (float)uVar15;
  fVar31 = fVar26 - fVar31;
  fVar27 = (float)((ulong)uVar15 >> 0x20);
  fVar16 = fVar16 * fVar16;
  fVar12 = fVar12 - fVar19;
  fVar13 = fVar13 - fVar25;
  fVar14 = fVar14 - fVar26;
  auVar36._4_12_ = in_q5._4_12_;
  auVar36._0_4_ = fVar16;
  auVar38._12_4_ = in_q5._12_4_;
  auVar38._0_8_ = auVar36._0_8_;
  auVar38._8_4_ = fVar20 * fVar20;
  auVar37._8_8_ = auVar38._8_8_;
  auVar37._4_4_ = fVar24 * fVar24;
  auVar37._0_4_ = fVar16;
  auVar39._0_12_ = auVar37._0_12_;
  auVar39._12_4_ = fVar31 * fVar31;
  auVar40 = NEON_ext(auVar39,auVar39,8,1);
  fVar20 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar19 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar16 = auVar40._0_4_ + fVar18 * fVar18 + fVar16;
  fVar18 = auVar40._4_4_ + fVar29 * fVar29 + fVar24 * fVar24;
  local_40[3] = CONCAT44(fVar27 - fVar17,fVar31);
  local_40[2] = CONCAT44(fVar29,fVar24);
  uStack_18 = CONCAT44(fVar21 - fVar27,fVar14);
  uStack_20 = CONCAT44(fVar13,fVar12);
  uVar22 = NEON_fminp(CONCAT44(fVar18,fVar16),CONCAT44(fVar18,fVar16),4);
  uVar22 = NEON_fmin(CONCAT44(fVar20,fVar20),uVar22,4);
  cVar5 = PTR_DAT_047d19d8
          [(-(uint)(fVar18 <= (float)((ulong)uVar22 >> 0x20)) & 2) + (uint)(fVar16 <= (float)uVar22)
           | -(uint)(fVar20 <= (float)uVar22) & 4];
  lVar10 = (long)cVar5;
  uVar8 = (uint)cVar5;
  uVar6 = (uVar8 & 3) << 1;
  uVar15 = local_40[lVar10 * 2 + 1];
  uVar1 = 0x36U >> (ulong)uVar6 & 3 ^ uVar8;
  uVar22 = local_40[(long)(int)uVar1 * 2 + 1];
  fVar31 = (float)local_40[(long)(int)uVar1 * 2];
  fVar12 = (float)((ulong)local_40[(long)(int)uVar1 * 2] >> 0x20);
  dVar42 = (double)fVar31;
  dVar34 = (double)fVar12;
  dVar43 = (double)(float)uVar22;
  fVar29 = (float)((ulong)local_40[lVar10 * 2] >> 0x20);
  dVar23 = *(double *)(PTR_DAT_047d1ce0 + 0xc0) /
           (dVar43 * dVar43 + dVar42 * dVar42 + dVar34 * dVar34);
  fVar24 = (float)local_40[lVar10 * 2];
  dVar28 = (double)fVar24;
  dVar48 = (double)(float)uVar15;
  dVar50 = (double)fVar29;
  dVar51 = (dVar48 * dVar43 + dVar28 * dVar42 + dVar50 * dVar34) * dVar23;
  fVar25 = (float)(dVar28 - dVar51 * dVar42);
  fVar33 = (float)(dVar50 - dVar51 * dVar34);
  fVar41 = (float)(dVar48 - dVar51 * dVar43);
  uVar35 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  uVar11 = -(ulong)((uint)(int)cVar5 >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(0x2dU >> (ulong)uVar6 & 3 ^ (int)cVar5) << 2;
  uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  puVar7 = (undefined8 *)(param_1 + (long)*(int *)((long)local_c + uVar11) * 0x10);
  uVar49 = *puVar7;
  fVar45 = (float)*param_3 - (float)uVar49;
  fVar46 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)uVar49 >> 0x20);
  fVar47 = (float)param_3[1] - (float)puVar7[1];
  fVar26 = fVar45 * fVar25;
  fVar30 = fVar46 * fVar33;
  fVar32 = fVar47 * fVar41;
  auVar44._8_8_ = 0xffffffffffffffff;
  auVar44._0_8_ = 0xffffffffffffffff;
  auVar40._4_4_ = fVar18;
  auVar40._0_4_ = fVar16;
  auVar40._8_4_ = fVar20;
  auVar40._12_4_ = fVar19;
  auVar40 = NEON_sshl(auVar40,auVar44,4);
  fVar27 = (fVar26 + fVar30 + fVar32) *
           ((float)uVar35 / (fVar25 * fVar25 + fVar33 * fVar33 + fVar41 * fVar41));
  *(float *)((long)local_40 + (uVar9 - 0x10)) = fVar27;
  fVar17 = (float)(0x5f2fed52 - auVar40._0_4_);
  fVar13 = (float)(0x5f2fed52 - auVar40._4_4_);
  fVar14 = (float)(0x5f2fed52 - auVar40._8_4_);
  fVar21 = (float)(0x5f2fed52 - auVar40._12_4_);
  fVar24 = (float)dVar23 *
           -(fVar31 * (fVar45 - fVar24 * fVar27) +
             fVar12 * (fVar46 - fVar29 * (fVar26 + fVar30 + fVar32) *
                                         ((float)((ulong)uVar35 >> 0x20) /
                                         (fVar25 * fVar25 + fVar33 * fVar33 + fVar41 * fVar41))) +
            (float)uVar22 * (fVar47 - (float)uVar15 * fVar27));
  *(float *)((long)local_40 + lVar10 * 4 + -0x10) = fVar24;
  *(float *)((long)local_40 + (uVar11 - 0x10)) =
       (1.0 - fVar24) - *(float *)((long)local_40 + (uVar9 - 0x10));
  param_4[1] = (ulong)(uint)fStack_48;
  *param_4 = uStack_50;
  param_5[1] = CONCAT44((fVar19 * -0.5557 * fVar21 * fVar21 + 1.55452) * fVar21 * 0.0,
                        fStack_48 * (fVar20 * -0.5557 * fVar14 * fVar14 + 1.55452) * fVar14);
  *param_5 = CONCAT44((float)((ulong)uStack_50 >> 0x20) *
                      (fVar18 * -0.5557 * fVar13 * fVar13 + 1.55452) * fVar13,
                      (float)uStack_50 * (fVar16 * -0.5557 * fVar17 * fVar17 + 1.55452) * fVar17);
  return;
}


