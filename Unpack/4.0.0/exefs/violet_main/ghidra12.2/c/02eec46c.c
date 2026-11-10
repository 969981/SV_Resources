/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eec46c; name: FUN_02eec46c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eec46c(int *param_1,float *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  float fVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar2 = param_1[1];
  fVar10 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar21 = param_2[3];
  pauVar1 = (undefined1 (*) [16])0x0;
  if (*param_1 != 0) {
    pauVar1 = (undefined1 (*) [16])((long)*param_1 + (long)param_1);
  }
  lVar8 = 4;
  switch(uVar2 & 3) {
  case 1:
    lVar8 = 1;
    fVar21 = fVar10 * (float)*(undefined8 *)*pauVar1;
    fVar22 = fVar14 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar23 = fVar15 * *(float *)(*pauVar1 + 8);
    auVar16._0_8_ = CONCAT44(fVar21 + fVar22 + fVar23,fVar21 + fVar22 + fVar23);
    auVar24 = ZEXT816(0);
    auVar16._8_8_ = auVar16._0_8_;
    break;
  case 2:
    auVar17._0_4_ = fVar10 * *(float *)*pauVar1;
    auVar17._4_4_ = fVar14 * *(float *)(*pauVar1 + 4);
    auVar17._8_4_ = fVar15 * *(float *)(*pauVar1 + 8);
    auVar17._12_4_ = fVar21 * *(float *)(*pauVar1 + 0xc);
    auVar20 = NEON_ext(auVar17,auVar17,8,1);
    auVar12._0_4_ = fVar10 * (float)*(undefined8 *)(*pauVar1 + 0xc);
    auVar12._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)(*pauVar1 + 0xc) >> 0x20);
    auVar12._8_4_ = fVar15 * *(float *)(pauVar1[1] + 4);
    auVar12._12_4_ = fVar21 * *(float *)(pauVar1[1] + 4);
    auVar13 = NEON_ext(auVar12,auVar12,8,1);
    auVar16._4_4_ = auVar12._0_4_ + auVar12._4_4_ + auVar13._0_4_;
    auVar16._0_4_ = auVar20._0_4_ + auVar17._0_4_ + auVar17._4_4_;
    auVar16._8_8_ = 0xff800000ff800000;
    auVar24._8_8_ = _UNK_03cab988;
    auVar24._0_8_ = _DAT_03cab980;
    lVar8 = 2;
    break;
  case 3:
    if (uVar2 == 3) {
      auVar13._0_4_ = fVar10 * (float)*(undefined8 *)*pauVar1;
      auVar13._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar13._8_4_ = fVar15 * *(float *)(*pauVar1 + 8);
      auVar13._12_4_ = fVar21 * *(float *)(*pauVar1 + 8);
      auVar20._0_4_ = fVar10 * (float)*(undefined8 *)(*pauVar1 + 0xc);
      auVar20._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)(*pauVar1 + 0xc) >> 0x20);
      auVar20._8_4_ = fVar15 * *(float *)(pauVar1[1] + 4);
      auVar20._12_4_ = fVar21 * *(float *)(pauVar1[1] + 4);
      auVar25._0_4_ = fVar10 * (float)*(undefined8 *)(pauVar1[1] + 8);
      auVar25._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
      auVar25._8_4_ = fVar15 * *(float *)pauVar1[2];
      auVar25._12_4_ = fVar21 * *(float *)pauVar1[2];
      auVar12 = NEON_ext(auVar13,auVar13,8,1);
      auVar16 = NEON_ext(auVar20,auVar20,8,1);
      auVar17 = NEON_ext(auVar25,auVar25,8,1);
      fVar10 = auVar12._0_4_ + auVar13._0_4_ + auVar13._4_4_;
      fVar14 = auVar16._0_4_ + auVar20._0_4_ + auVar20._4_4_;
      uVar19 = CONCAT44(fVar14,fVar10);
      fVar15 = auVar17._0_4_ + auVar25._0_4_ + auVar25._4_4_;
      uVar19 = NEON_fmaxp(uVar19,uVar19,4);
      uVar19 = NEON_fmax(CONCAT44(fVar15,fVar15),uVar19,4);
      uVar6 = (ulong)(char)PTR_DAT_047d1a18
                           [(-(uint)((float)((ulong)uVar19 >> 0x20) <= fVar14) & 2) +
                            (uint)((float)uVar19 <= fVar10) | -(uint)((float)uVar19 <= fVar15) & 4];
      uVar11 = uVar6;
      goto LAB_02eec728;
    }
    lVar8 = 3;
  case 0:
    auVar13 = *pauVar1;
    auVar12 = *(undefined1 (*) [16])(*pauVar1 + 0xc);
    auVar20 = *(undefined1 (*) [16])(pauVar1[1] + 8);
    auVar25 = NEON_ext(auVar20,auVar20,8,1);
    auVar16 = NEON_ext(auVar13,auVar13,8,1);
    auVar17 = NEON_ext(auVar12,auVar12,8,1);
    auVar16._0_4_ = fVar10 * auVar13._0_4_ + fVar14 * auVar13._4_4_ + fVar15 * auVar16._0_4_;
    auVar16._4_4_ = fVar10 * auVar12._0_4_ + fVar14 * auVar12._4_4_ + fVar15 * auVar17._0_4_;
    auVar16._8_4_ = fVar10 * auVar20._0_4_ + fVar14 * auVar20._4_4_ + fVar15 * auVar25._0_4_;
    auVar16._12_4_ =
         fVar10 * (float)*(undefined8 *)(pauVar1[2] + 4) +
         fVar14 * (float)((ulong)*(undefined8 *)(pauVar1[2] + 4) >> 0x20) +
         fVar15 * *(float *)(pauVar1[2] + 0xc);
    auVar24._8_8_ = _UNK_03cab988;
    auVar24._0_8_ = _DAT_03cab980;
  }
  iVar7 = (int)lVar8;
  if (iVar7 < (int)uVar2) {
    pauVar9 = (undefined1 (*) [16])(pauVar1[1] + lVar8 * 0xc + 8);
    auVar26._0_4_ = iVar7 + (int)_DAT_03cab980;
    auVar26._4_4_ = iVar7 + (int)((ulong)_DAT_03cab980 >> 0x20);
    auVar26._8_4_ = iVar7 + (int)_UNK_03cab988;
    auVar26._12_4_ = iVar7 + (int)((ulong)_UNK_03cab988 >> 0x20);
    do {
      auVar13 = *(undefined1 (*) [16])(pauVar9[-2] + 8);
      pauVar4 = pauVar9 + 1;
      lVar8 = lVar8 + 4;
      auVar12 = *(undefined1 (*) [16])(pauVar9[-1] + 4);
      auVar20 = *pauVar9;
      puVar5 = *pauVar9;
      auVar29 = NEON_ext(auVar20,auVar20,8,1);
      auVar17 = NEON_ext(auVar13,auVar13,8,1);
      auVar25 = NEON_ext(auVar12,auVar12,8,1);
      pauVar9 = pauVar9 + 3;
      auVar27._0_4_ = fVar10 * auVar13._0_4_ + fVar14 * auVar13._4_4_ + fVar15 * auVar17._0_4_;
      auVar27._4_4_ = fVar10 * auVar12._0_4_ + fVar14 * auVar12._4_4_ + fVar15 * auVar25._0_4_;
      auVar27._8_4_ = fVar10 * auVar20._0_4_ + fVar14 * auVar20._4_4_ + fVar15 * auVar29._0_4_;
      auVar27._12_4_ =
           fVar10 * (float)*(undefined8 *)(puVar5 + 0xc) +
           fVar14 * (float)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20) +
           fVar15 * *(float *)(*pauVar4 + 4);
      auVar28._0_4_ = -(uint)(auVar16._0_4_ < auVar27._0_4_);
      auVar28._4_4_ = -(uint)(auVar16._4_4_ < auVar27._4_4_);
      auVar28._8_4_ = -(uint)(auVar16._8_4_ < auVar27._8_4_);
      auVar28._12_4_ = -(uint)(auVar16._12_4_ < auVar27._12_4_);
      auVar16 = NEON_fmax(auVar27,auVar16,4);
      auVar24 = auVar24 ^ (auVar24 ^ auVar26) & auVar28;
      auVar29._0_4_ = auVar26._0_4_ + 4;
      auVar29._4_4_ = auVar26._4_4_ + 4;
      auVar29._8_4_ = auVar26._8_4_ + 4;
      auVar29._12_4_ = auVar26._12_4_ + 4;
      auVar26 = auVar29;
    } while (lVar8 < (int)uVar2);
  }
  auVar13 = NEON_rev64(auVar16,4);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar16._0_4_);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar16._4_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar16._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar16._12_4_);
  auVar13 = NEON_fmax(auVar16,auVar13,4);
  auVar12 = NEON_rev64(auVar24,4);
  auVar12 = auVar12 ^ (auVar12 ^ auVar24) & auVar18;
  auVar20 = NEON_ext(auVar13,auVar13,8,1);
  auVar16 = NEON_ext(auVar12,auVar12,8,1);
  uVar11 = auVar16._0_8_ ^
           (auVar16._0_8_ ^ auVar12._0_8_) & (ulong)-(uint)(auVar20._0_4_ <= auVar13._0_4_);
  uVar6 = uVar11 & 0xffffffff;
  uVar11 = (ulong)(int)uVar11;
LAB_02eec728:
  uVar3 = *(undefined4 *)((long)(*pauVar1 + uVar11 * 0xc) + 8);
  uVar19 = *(undefined8 *)(*pauVar1 + uVar11 * 0xc);
  param_3[1] = CONCAT44(uVar3,uVar3);
  *param_3 = uVar19;
  *(uint *)((long)param_3 + 0xc) = (uint)uVar6 | 0x3f000000;
  return;
}


