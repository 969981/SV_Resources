/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309628c; name: FUN_0309628c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0309628c(long param_1,int *param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  byte bVar24;
  byte bVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  piVar16 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  uVar1 = *(ushort *)(piVar16 + 2);
  if ((short)uVar1 < 1) {
    auVar35 = ZEXT816(0);
  }
  else {
    lVar17 = (long)*piVar16;
    lVar14 = *(long *)(param_1 + 0x38);
    puVar5 = (undefined8 *)
             (lVar14 + (long)*(int *)(*(long *)(param_1 + 0x28) + lVar17 * 0x14) * 0x10);
    uVar33 = puVar5[1];
    fVar21 = (float)uVar33;
    fVar22 = (float)((ulong)uVar33 >> 0x20);
    uVar33 = *puVar5;
    fVar18 = (float)uVar33;
    fVar19 = (float)((ulong)uVar33 >> 0x20);
    uVar15 = (ulong)uVar1;
    piVar16 = (int *)(*(long *)(param_1 + 0x28) + lVar17 * 0x14 + 4);
    auVar23 = ZEXT816(0);
    do {
      uVar15 = uVar15 - 1;
      puVar5 = (undefined8 *)(lVar14 + (long)piVar16[-1] * 0x10);
      uVar13 = puVar5[1];
      uVar33 = *puVar5;
      iVar2 = *piVar16;
      fVar27 = (float)uVar33 - fVar18;
      fVar29 = (float)((ulong)uVar33 >> 0x20) - fVar19;
      fVar31 = (float)uVar13 - fVar21;
      fVar32 = (float)((ulong)uVar13 >> 0x20) - fVar22;
      piVar16 = piVar16 + 5;
      pfVar6 = (float *)(lVar14 + (long)iVar2 * 0x10);
      auVar36._4_4_ = fVar29;
      auVar36._0_4_ = fVar27;
      auVar36._8_4_ = fVar31;
      auVar36._12_4_ = fVar32;
      auVar10._4_4_ = fVar29;
      auVar10._0_4_ = fVar27;
      auVar10._8_4_ = fVar31;
      auVar10._12_4_ = fVar32;
      auVar35 = NEON_ext(auVar36,auVar10,4,1);
      auVar34._0_4_ = *pfVar6 - fVar18;
      auVar34._4_4_ = pfVar6[1] - fVar19;
      auVar34._8_4_ = pfVar6[2] - fVar21;
      auVar34._12_4_ = pfVar6[3] - fVar22;
      auVar36 = NEON_ext(auVar34,auVar34,4,1);
      fVar28 = fVar27 * auVar36._0_4_ - auVar34._0_4_ * auVar35._0_4_;
      fVar30 = fVar29 * auVar36._4_4_ - auVar34._4_4_ * auVar35._4_4_;
      fVar27 = fVar31 * auVar34._0_4_ - auVar34._8_4_ * fVar27;
      fVar29 = fVar32 * auVar34._4_4_ - auVar34._12_4_ * fVar29;
      auVar11._4_4_ = fVar30;
      auVar11._0_4_ = fVar28;
      auVar11._8_4_ = fVar27;
      auVar11._12_4_ = fVar29;
      auVar12._4_4_ = fVar30;
      auVar12._0_4_ = fVar28;
      auVar12._8_4_ = fVar27;
      auVar12._12_4_ = fVar29;
      auVar36 = NEON_ext(auVar11,auVar12,4,1);
      auVar35._0_4_ = auVar23._0_4_ + auVar36._0_4_;
      auVar35._4_4_ = auVar23._4_4_ + auVar36._4_4_;
      auVar35._8_4_ = auVar23._8_4_ + fVar28;
      auVar35._12_4_ = auVar23._12_4_ + 0.0;
      auVar23 = auVar35;
    } while (uVar15 != 0);
  }
  fVar22 = auVar35._0_4_;
  fVar18 = auVar35._4_4_;
  fVar27 = auVar35._8_4_;
  fVar28 = fVar22 * fVar22 + fVar18 * fVar18 + fVar27 * fVar27;
  fVar29 = fVar22 * fVar22 + fVar18 * fVar18 + fVar27 * fVar27;
  uVar3 = (uint)(0.0 < fVar28);
  iVar2 = -uVar3;
  uVar4 = (uint)(0.0 < fVar29);
  iVar9 = -uVar4;
  bVar24 = (byte)((uint)iVar9 >> 8);
  bVar25 = (byte)((uint)iVar9 >> 0x10);
  bVar26 = (byte)((uint)iVar9 >> 0x18);
  fVar29 = SQRT(fVar29);
  fVar19 = 0.0;
  fVar21 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  if (fVar28 != 0.0) {
    uVar33 = NEON_fmov(0x3f800000,4);
    fVar30 = (float)uVar33 / SQRT(fVar28);
    fVar31 = (float)((ulong)uVar33 >> 0x20) / fVar29;
  }
  if (CONCAT13(bVar26 | (byte)((uint)iVar2 >> 0x18),
               CONCAT12(bVar25 | (byte)((uint)iVar2 >> 0x10),
                        CONCAT11(bVar24 | (byte)((uint)iVar2 >> 8),(byte)iVar9 | (byte)iVar2))) == 0
     ) {
    auVar23._8_8_ = _UNK_03caa5b8;
    auVar23._0_8_ = _DAT_03caa5b0;
  }
  else {
    fVar18 = fVar18 * fVar31;
    auVar8[4] = SUB41(fVar18,0);
    auVar8._0_4_ = fVar22 * fVar30;
    auVar8[5] = (char)((uint)fVar18 >> 8);
    auVar8[6] = (char)((uint)fVar18 >> 0x10);
    auVar8[7] = (char)((uint)fVar18 >> 0x18);
    auVar8._8_4_ = fVar27 * fVar30;
    auVar8._12_4_ = auVar35._12_4_ * fVar31;
    auVar7._4_4_ = (int)(uVar4 * -0x80000000) >> 0x1f;
    auVar7._0_4_ = (int)(uVar3 * -0x80000000) >> 0x1f;
    auVar7._8_4_ = (int)(uVar3 * -0x80000000) >> 0x1f;
    auVar7._12_4_ =
         ((int)(CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14((byte)iVar9,iVar2)))) >>
               0x20) << 0x1f) >> 0x1f;
    auVar23 = auVar35 ^ (auVar35 ^ auVar8) & auVar7;
    fVar19 = SQRT(fVar28) * 0.5;
    fVar21 = fVar29 * 0.5;
  }
  param_3[1] = auVar23._8_8_;
  *param_3 = auVar23._0_8_;
  auVar20._4_4_ = fVar21;
  auVar20._0_4_ = fVar19;
  auVar20._8_8_ = 0;
  return auVar20;
}


