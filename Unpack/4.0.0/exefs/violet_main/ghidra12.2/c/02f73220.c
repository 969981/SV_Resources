/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f73220; name: FUN_02f73220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f73220(long param_1,float *param_2,uint param_3,float *param_4,undefined8 *param_5,
                 undefined8 *param_6,uint *param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  fVar15 = param_4[1];
  fVar27 = param_4[2];
  auVar16 = ZEXT816(0);
  lVar10 = 4;
  *(float *)((long)param_6 + 0xc) = *param_4;
  *(float *)(param_6 + 2) = fVar15;
  *(float *)((long)param_6 + 0x14) = fVar27;
  fVar15 = param_4[2];
  uVar2 = *(uint *)(param_1 + 0x10);
  pauVar8 = *(undefined1 (**) [16])(param_1 + 8);
  fVar27 = 0.0 - *param_4;
  fVar31 = 0.0 - param_4[1];
  fVar34 = 0.0 - fVar15;
  fVar36 = 0.0 - param_4[3];
  switch(uVar2 & 3) {
  case 1:
    lVar10 = 1;
    fVar36 = fVar27 * (float)*(undefined8 *)*pauVar8;
    fVar32 = fVar31 * (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
    fVar35 = fVar34 * *(float *)(*pauVar8 + 8);
    auVar30._0_8_ = CONCAT44(fVar36 + fVar32 + fVar35,fVar36 + fVar32 + fVar35);
    auVar30._8_8_ = auVar30._0_8_;
    break;
  case 2:
    auVar20._0_4_ = fVar27 * *(float *)*pauVar8;
    auVar20._4_4_ = fVar31 * *(float *)(*pauVar8 + 4);
    auVar20._8_4_ = fVar34 * *(float *)(*pauVar8 + 8);
    auVar20._12_4_ = fVar36 * *(float *)(*pauVar8 + 0xc);
    auVar17 = NEON_ext(auVar20,auVar20,8,1);
    auVar21._0_4_ = fVar27 * (float)*(undefined8 *)(*pauVar8 + 0xc);
    auVar21._4_4_ = fVar31 * (float)((ulong)*(undefined8 *)(*pauVar8 + 0xc) >> 0x20);
    auVar21._8_4_ = fVar34 * *(float *)(pauVar8[1] + 4);
    auVar21._12_4_ = fVar36 * *(float *)(pauVar8[1] + 4);
    auVar16 = NEON_ext(auVar21,auVar21,8,1);
    auVar30._4_4_ = auVar21._0_4_ + auVar21._4_4_ + auVar16._0_4_;
    auVar30._0_4_ = auVar17._0_4_ + auVar20._0_4_ + auVar20._4_4_;
    auVar30._8_8_ = 0xff800000ff800000;
    auVar16._8_8_ = _UNK_03cab988;
    auVar16._0_8_ = _DAT_03cab980;
    lVar10 = 2;
    break;
  case 3:
    if (uVar2 == 3) {
      auVar17._0_4_ = fVar27 * (float)*(undefined8 *)*pauVar8;
      auVar17._4_4_ = fVar31 * (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
      auVar17._8_4_ = fVar34 * *(float *)(*pauVar8 + 8);
      auVar17._12_4_ = fVar36 * *(float *)(*pauVar8 + 8);
      auVar25._0_4_ = fVar27 * (float)*(undefined8 *)(*pauVar8 + 0xc);
      auVar25._4_4_ = fVar31 * (float)((ulong)*(undefined8 *)(*pauVar8 + 0xc) >> 0x20);
      auVar25._8_4_ = fVar34 * *(float *)(pauVar8[1] + 4);
      auVar25._12_4_ = fVar36 * *(float *)(pauVar8[1] + 4);
      auVar37._0_4_ = fVar27 * (float)*(undefined8 *)(pauVar8[1] + 8);
      auVar37._4_4_ = fVar31 * (float)((ulong)*(undefined8 *)(pauVar8[1] + 8) >> 0x20);
      auVar37._8_4_ = fVar34 * *(float *)pauVar8[2];
      auVar37._12_4_ = fVar36 * *(float *)pauVar8[2];
      auVar16 = NEON_ext(auVar17,auVar17,8,1);
      auVar20 = NEON_ext(auVar25,auVar25,8,1);
      auVar21 = NEON_ext(auVar37,auVar37,8,1);
      fVar27 = auVar16._0_4_ + auVar17._0_4_ + auVar17._4_4_;
      fVar31 = auVar20._0_4_ + auVar25._0_4_ + auVar25._4_4_;
      uVar24 = CONCAT44(fVar31,fVar27);
      fVar34 = auVar21._0_4_ + auVar37._0_4_ + auVar37._4_4_;
      uVar24 = NEON_fmaxp(uVar24,uVar24,4);
      uVar19 = NEON_fmax(CONCAT44(fVar34,fVar34),uVar24,4);
      uVar24 = *(undefined8 *)
                (*pauVar8 +
                (long)(char)PTR_DAT_047d1a18
                            [(-(uint)((float)((ulong)uVar19 >> 0x20) <= fVar31) & 2) +
                             (uint)((float)uVar19 <= fVar27) | -(uint)((float)uVar19 <= fVar34) & 4]
                * 0xc);
      fVar36 = *(float *)((long)(*pauVar8 +
                                (long)(char)PTR_DAT_047d1a18
                                            [(-(uint)((float)((ulong)uVar19 >> 0x20) <= fVar31) & 2)
                                             + (uint)((float)uVar19 <= fVar27) |
                                             -(uint)((float)uVar19 <= fVar34) & 4] * 0xc) + 8);
      fVar27 = (float)((int)(char)PTR_DAT_047d1a18
                                  [(-(uint)((float)((ulong)uVar19 >> 0x20) <= fVar31) & 2) +
                                   (uint)((float)uVar19 <= fVar27) |
                                   -(uint)((float)uVar19 <= fVar34) & 4] | 0x3f000000);
      fVar31 = fVar27;
      goto LAB_02f73500;
    }
    lVar10 = 3;
  case 0:
    auVar16 = *pauVar8;
    auVar17 = *(undefined1 (*) [16])(*pauVar8 + 0xc);
    auVar25 = *(undefined1 (*) [16])(pauVar8[1] + 8);
    auVar37 = NEON_ext(auVar25,auVar25,8,1);
    auVar20 = NEON_ext(auVar16,auVar16,8,1);
    auVar21 = NEON_ext(auVar17,auVar17,8,1);
    auVar30._0_4_ = fVar27 * auVar16._0_4_ + fVar31 * auVar16._4_4_ + fVar34 * auVar20._0_4_;
    auVar30._4_4_ = fVar27 * auVar17._0_4_ + fVar31 * auVar17._4_4_ + fVar34 * auVar21._0_4_;
    auVar30._8_4_ = fVar27 * auVar25._0_4_ + fVar31 * auVar25._4_4_ + fVar34 * auVar37._0_4_;
    auVar30._12_4_ =
         fVar27 * (float)*(undefined8 *)(pauVar8[2] + 4) +
         fVar31 * (float)((ulong)*(undefined8 *)(pauVar8[2] + 4) >> 0x20) +
         fVar34 * *(float *)(pauVar8[2] + 0xc);
    auVar16._8_8_ = _UNK_03cab988;
    auVar16._0_8_ = _DAT_03cab980;
  }
  iVar9 = (int)lVar10;
  if (iVar9 < (int)uVar2) {
    pauVar11 = (undefined1 (*) [16])(pauVar8[1] + lVar10 * 0xc + 8);
    auVar38._0_4_ = iVar9 + (int)_DAT_03cab980;
    auVar38._4_4_ = iVar9 + (int)((ulong)_DAT_03cab980 >> 0x20);
    auVar38._8_4_ = iVar9 + (int)_UNK_03cab988;
    auVar38._12_4_ = iVar9 + (int)((ulong)_UNK_03cab988 >> 0x20);
    do {
      auVar17 = *(undefined1 (*) [16])(pauVar11[-2] + 8);
      pauVar6 = pauVar11 + 1;
      lVar10 = lVar10 + 4;
      auVar25 = *(undefined1 (*) [16])(pauVar11[-1] + 4);
      auVar20 = *pauVar11;
      puVar7 = *pauVar11;
      auVar41 = NEON_ext(auVar20,auVar20,8,1);
      auVar21 = NEON_ext(auVar17,auVar17,8,1);
      auVar37 = NEON_ext(auVar25,auVar25,8,1);
      pauVar11 = pauVar11 + 3;
      auVar39._0_4_ = fVar27 * auVar17._0_4_ + fVar31 * auVar17._4_4_ + fVar34 * auVar21._0_4_;
      auVar39._4_4_ = fVar27 * auVar25._0_4_ + fVar31 * auVar25._4_4_ + fVar34 * auVar37._0_4_;
      auVar39._8_4_ = fVar27 * auVar20._0_4_ + fVar31 * auVar20._4_4_ + fVar34 * auVar41._0_4_;
      auVar39._12_4_ =
           fVar27 * (float)*(undefined8 *)(puVar7 + 0xc) +
           fVar31 * (float)((ulong)*(undefined8 *)(puVar7 + 0xc) >> 0x20) +
           fVar34 * *(float *)(*pauVar6 + 4);
      auVar40._0_4_ = -(uint)(auVar30._0_4_ < auVar39._0_4_);
      auVar40._4_4_ = -(uint)(auVar30._4_4_ < auVar39._4_4_);
      auVar40._8_4_ = -(uint)(auVar30._8_4_ < auVar39._8_4_);
      auVar40._12_4_ = -(uint)(auVar30._12_4_ < auVar39._12_4_);
      auVar30 = NEON_fmax(auVar39,auVar30,4);
      auVar16 = auVar16 ^ (auVar16 ^ auVar38) & auVar40;
      auVar41._0_4_ = auVar38._0_4_ + 4;
      auVar41._4_4_ = auVar38._4_4_ + 4;
      auVar41._8_4_ = auVar38._8_4_ + 4;
      auVar41._12_4_ = auVar38._12_4_ + 4;
      auVar38 = auVar41;
    } while (lVar10 < (int)uVar2);
  }
  auVar17 = NEON_rev64(auVar30,4);
  auVar22._0_4_ = -(uint)(auVar17._0_4_ <= auVar30._0_4_);
  auVar22._4_4_ = -(uint)(auVar17._4_4_ <= auVar30._4_4_);
  auVar22._8_4_ = -(uint)(auVar17._8_4_ <= auVar30._8_4_);
  auVar22._12_4_ = -(uint)(auVar17._12_4_ <= auVar30._12_4_);
  auVar17 = NEON_fmax(auVar30,auVar17,4);
  auVar25 = NEON_rev64(auVar16,4);
  auVar25 = auVar25 ^ (auVar25 ^ auVar16) & auVar22;
  auVar16 = NEON_ext(auVar17,auVar17,8,1);
  auVar20 = NEON_ext(auVar25,auVar25,8,1);
  fVar31 = (float)(auVar20._0_4_ ^
                  (auVar20._0_4_ ^ auVar25._0_4_) & -(uint)(auVar16._0_4_ <= auVar17._0_4_));
  uVar24 = *(undefined8 *)(*pauVar8 + (long)(int)fVar31 * 0xc);
  fVar36 = *(float *)((long)(*pauVar8 + (long)(int)fVar31 * 0xc) + 8);
  fVar27 = (float)((uint)fVar31 | 0x3f000000);
LAB_02f73500:
  fVar34 = *(float *)(param_1 + 0x14);
  fVar18 = (float)((ulong)uVar24 >> 0x20);
  *param_6 = CONCAT44(fVar18 - param_4[1] * fVar34,(float)uVar24 - *param_4 * fVar34);
  *(float *)(param_6 + 1) = fVar36 - fVar15 * fVar34;
  *param_7 = (uint)fVar31 & 0xffff;
  fVar15 = param_2[2];
  fVar12 = *param_2;
  fVar14 = param_2[1];
  fVar31 = *param_4;
  fVar34 = param_4[1];
  fVar32 = param_4[2];
  fVar35 = fVar15;
  if (1 < (int)param_3) {
    lVar10 = (ulong)param_3 - 1;
    fVar23 = fVar32 * fVar15 + fVar31 * fVar12 + fVar34 * fVar14;
    fVar26 = fVar32 * fVar15 + fVar31 * fVar12 + fVar34 * fVar14;
    param_2 = param_2 + 5;
    do {
      fVar4 = *param_2;
      lVar10 = lVar10 + -1;
      pfVar1 = param_2 + -2;
      pfVar5 = param_2 + -1;
      param_2 = param_2 + 3;
      fVar28 = fVar31 * *pfVar1;
      fVar33 = fVar34 * *pfVar5;
      fVar29 = fVar28 + fVar33 + fVar32 * fVar4;
      fVar28 = fVar28 + fVar33 + fVar32 * fVar4;
      uVar2 = (uint)(fVar23 < fVar29);
      uVar3 = (uint)(fVar26 < fVar28);
      fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar29) & -uVar2);
      fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)fVar28) & -uVar3);
      fVar12 = (float)((uint)fVar12 ^
                      ((uint)fVar12 ^ (uint)*pfVar1) & (int)(uVar2 * -0x80000000) >> 0x1f);
      fVar14 = (float)((uint)fVar14 ^
                      ((uint)fVar14 ^ (uint)*pfVar5) & (int)(uVar3 * -0x80000000) >> 0x1f);
      fVar15 = (float)((uint)fVar15 ^
                      ((uint)fVar15 ^ (uint)fVar4) & (int)(uVar2 * -0x80000000) >> 0x1f);
      fVar35 = (float)((uint)fVar35 ^
                      ((uint)fVar35 ^ (uint)fVar4) & (int)(uVar3 * -0x80000000) >> 0x1f);
    } while (lVar10 != 0);
  }
  auVar13._0_4_ = fVar31 * ((float)uVar24 - fVar12);
  auVar13._4_4_ = fVar34 * (fVar18 - fVar14);
  auVar13._8_4_ = fVar32 * (fVar36 - fVar15);
  auVar13._12_4_ = param_4[3] * (fVar27 - fVar35);
  auVar16 = NEON_ext(auVar13,auVar13,8,1);
  *(float *)(param_6 + 3) = (auVar13._0_4_ + auVar13._4_4_ + auVar16._0_4_) - (float)*param_5;
  return;
}


