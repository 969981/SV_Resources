/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2d63c; name: FUN_02f2d63c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2d63c(long param_1,ushort *param_2,float *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  ulong uVar23;
  ulong uVar24;
  float fVar27;
  undefined1 auVar29 [12];
  undefined8 uVar28;
  undefined1 in_q3 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar43;
  
  pauVar1 = (undefined1 (*) [16])(param_2 + 8);
  fVar27 = (float)*(undefined8 *)(param_2 + 0xc);
  fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  auVar13 = *(undefined1 (*) [12])*pauVar1;
  auVar12 = *(undefined1 (*) [12])*pauVar1;
  auVar41 = *pauVar1;
  fVar18 = (float)*(undefined8 *)*pauVar1;
  fVar20 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  lVar15 = *(long *)(param_2 + 0x10);
  fVar17 = fVar18 * (float)*param_4 + fVar20 * (float)((ulong)*param_4 >> 0x20) +
           fVar27 * (float)param_4[1];
  if (lVar15 != 0) {
    fVar25 = (float)((uint)*(ushort *)(lVar15 + 0x3c) << 0x10);
    fVar22 = *param_3;
    fVar26 = param_3[1];
    fVar21 = (float)*(undefined8 *)(param_1 + 0x10) * fVar25;
    fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar25;
    in_q3 = *(undefined1 (*) [16])(lVar15 + 0x70);
    *(ulong *)(lVar15 + 0x78) =
         CONCAT44(in_q3._12_4_ + fVar17 * fVar25,in_q3._8_4_ + param_3[2] * fVar21);
    *(ulong *)(lVar15 + 0x70) =
         CONCAT44(in_q3._4_4_ + fVar26 * fVar25,in_q3._0_4_ + fVar22 * fVar21);
  }
  uVar2 = *param_2;
  if ((uVar2 & 0x30) != 0) {
    fVar22 = fVar18 * fVar18;
    auVar40._8_8_ = _UNK_03caaa68;
    auVar40._0_8_ = _DAT_03caaa60;
    uVar16 = (ulong)(byte)param_2[2];
    auVar8._4_8_ = in_q3._8_8_;
    auVar8._0_4_ = fVar22;
    auVar30._0_8_ = auVar8._0_8_ << 0x20;
    auVar30._8_4_ = fVar22;
    auVar30._12_4_ = fVar22;
    auVar35 = NEON_fmov(0x3f800000,4);
    fVar26 = fVar20 * fVar20 + fVar22;
    fVar25 = fVar27 * fVar27 + fVar22;
    auVar9._4_8_ = auVar30._8_8_;
    auVar9._0_4_ = SQRT(fVar26);
    auVar31._0_8_ = auVar9._0_8_ << 0x20;
    auVar31._8_4_ = SQRT(fVar25);
    auVar31._12_4_ = SQRT(fVar19 * fVar19 + fVar22);
    lVar14 = uVar16 * 0x20 + 0xd0;
    fVar22 = auVar35._4_4_ / SQRT(fVar26);
    auVar10._4_8_ = auVar31._8_8_;
    auVar10._0_4_ = fVar22;
    auVar32._0_8_ = auVar10._0_8_ << 0x20;
    auVar32._8_4_ = auVar35._8_4_ / auVar31._8_4_;
    auVar32._12_4_ = auVar35._12_4_ / auVar31._12_4_;
    auVar36._0_12_ = auVar41._0_12_;
    auVar36._12_4_ = 0;
    auVar41 = a64_TBL(ZEXT816(0),auVar36,auVar40);
    auVar37[8] = (char)_UNK_03cabbb8;
    auVar37._0_8_ = _DAT_03cabbb0;
    auVar37[9] = (char)((ulong)_UNK_03cabbb8 >> 8);
    auVar37[10] = (char)((ulong)_UNK_03cabbb8 >> 0x10);
    auVar37[0xb] = (char)((ulong)_UNK_03cabbb8 >> 0x18);
    auVar37[0xc] = (char)((ulong)_UNK_03cabbb8 >> 0x20);
    auVar37[0xd] = (char)((ulong)_UNK_03cabbb8 >> 0x28);
    auVar37[0xe] = (char)((ulong)_UNK_03cabbb8 >> 0x30);
    auVar37[0xf] = (char)((ulong)_UNK_03cabbb8 >> 0x38);
    auVar37 = a64_TBL(ZEXT816(0),auVar36,auVar37);
    iVar5 = -(uint)(fVar26 <= 0.0);
    iVar6 = -(uint)(fVar25 <= 0.0);
    uVar23 = CONCAT44(-(uint)(fVar25 < fVar26),-(uint)(fVar25 < fVar26));
    uVar24 = uVar23 & 0x100000001;
    iVar42 = (int)uVar24;
    iVar43 = (int)(uVar24 >> 0x20);
    auVar11._1_11_ = auVar32._5_11_;
    auVar11[0] = SUB41(fVar22,0) & ~(byte)iVar5;
    auVar29._0_8_ =
         CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                  CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                           CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                    auVar11._0_5_ << 0x20)));
    auVar29[8] = SUB41(auVar32._8_4_,0) & ~(byte)iVar6;
    auVar29[9] = (byte)((uint)auVar32._8_4_ >> 8) & ~(byte)((uint)iVar6 >> 8);
    auVar29[10] = (byte)((uint)auVar32._8_4_ >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    auVar29[0xb] = (byte)((uint)auVar32._8_4_ >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
    auVar7._4_4_ = (iVar43 << 0x1f) >> 0x1f;
    auVar7._0_4_ = (iVar42 << 0x1f) >> 0x1f;
    auVar7._8_4_ = (iVar42 << 0x1f) >> 0x1f;
    auVar7._12_4_ = (iVar43 << 0x1f) >> 0x1f;
    auVar37 = auVar37 ^ (auVar37 ^ auVar41) & auVar7;
    fVar39 = -auVar37._0_4_;
    fVar38 = auVar37._4_4_;
    uVar34 = (undefined4)((ulong)auVar29._0_8_ >> 0x20);
    uVar24 = CONCAT44(auVar29._8_4_,auVar29._8_4_);
    uVar24 = uVar24 ^ (uVar24 ^ CONCAT44(uVar34,uVar34)) & uVar23;
    auVar33 = NEON_ext(auVar37,auVar37,8,1);
    auVar41._12_4_ = fVar19;
    auVar41._0_12_ = auVar12;
    auVar35._12_4_ = fVar19;
    auVar35._0_12_ = auVar13;
    auVar41 = NEON_ext(auVar41,auVar35,4,1);
    uVar28 = NEON_ext(CONCAT44(fVar38,fVar39),auVar33._0_8_,4,1);
    fVar25 = (float)uVar24;
    fVar21 = (float)(uVar24 >> 0x20);
    fVar22 = fVar18 * (float)uVar28 - auVar41._0_4_ * fVar39;
    fVar26 = fVar20 * (float)((ulong)uVar28 >> 0x20) - auVar41._4_4_ * fVar38;
    fVar18 = fVar27 * fVar39 - fVar18 * auVar37._8_4_;
    fVar20 = fVar19 * fVar38 - fVar20 * auVar37._12_4_;
    auVar33._4_4_ = fVar26;
    auVar33._0_4_ = fVar22;
    auVar33._8_4_ = fVar18;
    auVar33._12_4_ = fVar20;
    auVar4._4_4_ = fVar26;
    auVar4._0_4_ = fVar22;
    auVar4._8_4_ = fVar18;
    auVar4._12_4_ = fVar20;
    auVar41 = NEON_ext(auVar33,auVar4,4,1);
    uVar24 = (ulong)(byte)PTR_DAT_047e4710[(byte)param_2[uVar16 * 0x10 + 0x6a]];
    fVar20 = (float)*(undefined8 *)param_3;
    fVar27 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar18 = fVar20 * fVar25 * fVar39 + fVar27 * fVar21 * fVar38 +
             (float)*(undefined8 *)(param_3 + 2) * fVar25 * auVar37._8_4_;
    fVar20 = fVar20 * fVar25 * auVar41._0_4_ + fVar27 * fVar21 * auVar41._4_4_ +
             (float)*(undefined8 *)(param_3 + 2) * fVar25 * fVar22;
    if ((uVar2 >> 3 & 1) == 0) {
      auVar41 = *(undefined1 (*) [16])((long)param_2 + uVar24 + lVar14);
      auVar35 = NEON_ext(auVar41,auVar41,8,1);
      puVar3 = (undefined8 *)((long)param_2 + uVar24 + lVar14);
      puVar3[1] = CONCAT44(auVar41._12_4_,auVar35._0_4_ - fVar17);
      *puVar3 = CONCAT44(auVar41._4_4_ - fVar20,auVar41._0_4_ - fVar18);
    }
    else {
      puVar3 = (undefined8 *)((long)param_2 + uVar24 + lVar14);
      puVar3[1] = CONCAT44(*(undefined4 *)((long)param_2 + uVar24 + lVar14 + 0xc),-fVar17);
      *puVar3 = CONCAT44(-fVar20,-fVar18);
      *param_2 = uVar2 & 0xfff7;
    }
    if (lVar15 != 0) {
      fVar27 = (float)*(undefined8 *)(param_1 + 0xd8) * (float)*(undefined8 *)(param_1 + 0x10) *
               (float)((uint)*(ushort *)(lVar15 + 0x3c) << 0x10);
      fVar18 = (float)((ulong)*(undefined8 *)(param_2 + uVar16 * 0x10 + 0x24) >> 0x20) +
               fVar18 * fVar27;
      *(ulong *)(param_2 + uVar16 * 0x10 + 0x24) =
           CONCAT17((char)((uint)fVar18 >> 0x18),
                    CONCAT16((char)((uint)fVar18 >> 0x10),
                             CONCAT15((char)((uint)fVar18 >> 8),
                                      CONCAT14(SUB41(fVar18,0),
                                               (int)*(undefined8 *)(param_2 + uVar16 * 0x10 + 0x24))
                                     )));
      *(undefined8 *)(param_2 + uVar16 * 0x10 + 0x20) =
           *(undefined8 *)(param_2 + uVar16 * 0x10 + 0x20);
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x5c) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x5c);
      *(float *)(param_2 + uVar16 * 0x10 + 0x5e) =
           *(float *)(param_2 + uVar16 * 0x10 + 0x5e) + fVar17 * fVar27;
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x58) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x58);
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x5a) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x5a);
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x3c) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x3c);
      *(float *)(param_2 + uVar16 * 0x10 + 0x3e) =
           *(float *)(param_2 + uVar16 * 0x10 + 0x3e) + fVar20 * fVar27;
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x38) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x38);
      *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x3a) =
           *(undefined4 *)(param_2 + uVar16 * 0x10 + 0x3a);
    }
  }
  return;
}


