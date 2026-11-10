/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c3514; name: FUN_030c3514
 */


void FUN_030c3514(long param_1,uint *param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  unkbyte9 *pVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  char cVar25;
  int iVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar2 = *param_2;
  if ((int)uVar2 < *(int *)(param_1 + 0x20)) {
    if ((-1 < (int)uVar2) &&
       (lVar16 = *(long *)(param_1 + 0x40) + (ulong)uVar2 * 0x80,
       (*(byte *)(lVar16 + 0x10) >> 4 & 1) != 0)) {
      auVar17 = *(undefined1 (*) [16])(lVar16 + 0x30);
      pVar3 = (unkbyte9 *)(lVar16 + 0x40);
      uVar12 = *(undefined8 *)(lVar16 + 0x48);
      uVar18 = (undefined1)((ulong)uVar12 >> 8);
      uVar19 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar20 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar21 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar22 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar23 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar24 = (undefined1)((ulong)uVar12 >> 0x38);
      lVar15 = (long)*(int *)(param_1 + 0x80) + -1;
      lVar14 = *(long *)(param_1 + 0x78);
      lVar16 = lVar15;
      if (*(uint *)(lVar14 + lVar15 * 0x30) == uVar2) {
LAB_030c3604:
        cVar25 = *(char *)(lVar14 + lVar16 * 0x30 + 7);
        bVar13 = cVar25 != '\0';
        cVar25 = -(cVar25 == '\0');
        auVar34[1] = cVar25;
        auVar34[0] = cVar25;
        auVar34[2] = cVar25;
        auVar34[3] = cVar25;
        auVar34[4] = cVar25;
        auVar34[5] = cVar25;
        auVar34[6] = cVar25;
        auVar34[7] = cVar25;
        auVar34[8] = cVar25;
        auVar34[9] = cVar25;
        auVar34[10] = cVar25;
        auVar34[0xb] = cVar25;
        auVar34[0xc] = cVar25;
        auVar34[0xd] = cVar25;
        auVar34[0xe] = cVar25;
        auVar34[0xf] = cVar25;
        auVar4[9] = uVar18;
        auVar4._0_9_ = *pVar3;
        auVar4[10] = uVar19;
        auVar4[0xb] = uVar20;
        auVar4[0xc] = uVar21;
        auVar4[0xd] = uVar22;
        auVar4[0xe] = uVar23;
        auVar4[0xf] = uVar24;
        auVar28 = auVar17 ^ (auVar17 ^ auVar4) & auVar34;
        auVar5[9] = uVar18;
        auVar5._0_9_ = *pVar3;
        auVar5[10] = uVar19;
        auVar5[0xb] = uVar20;
        auVar5[0xc] = uVar21;
        auVar5[0xd] = uVar22;
        auVar5[0xe] = uVar23;
        auVar5[0xf] = uVar24;
        auVar17 = auVar17 ^ (auVar17 ^ auVar5) & ~auVar34;
      }
      else {
        lVar16 = (long)*(int *)(param_1 + 0x70);
        if (*(uint *)(lVar14 + lVar16 * 0x30) == uVar2) goto LAB_030c3604;
        iVar26 = *(int *)(param_1 + 0x74);
        fVar11 = (float)((ulong)uVar12 >> 0x20);
        fVar33 = (float)*(undefined8 *)pVar3;
        fVar10 = (float)((ulong)*(undefined8 *)pVar3 >> 0x20);
        if (((int)lVar15 == iVar26) || (*(int *)(param_1 + 0x70) == iVar26)) {
          lVar14 = lVar14 + (long)iVar26 * 0x30;
          auVar36._0_4_ = auVar17._0_4_ - *(float *)(lVar14 + 0x10);
          auVar36._4_4_ = auVar17._4_4_ - *(float *)(lVar14 + 0x14);
          auVar36._8_4_ = auVar17._8_4_ - *(float *)(lVar14 + 0x18);
          auVar36._12_4_ = auVar17._12_4_ - *(float *)(lVar14 + 0x1c);
          auVar30._0_4_ = fVar33 - *(float *)(lVar14 + 0x10);
          auVar30._4_4_ = fVar10 - *(float *)(lVar14 + 0x14);
          auVar30._8_4_ = (float)uVar12 - *(float *)(lVar14 + 0x18);
          auVar30._12_4_ = fVar11 - *(float *)(lVar14 + 0x1c);
          auVar35 = NEON_ext(auVar36,auVar36,4,1);
          auVar28 = NEON_ext(auVar30,auVar30,4,1);
          auVar31._0_4_ = auVar36._0_4_ * auVar28._0_4_ - auVar30._0_4_ * auVar35._0_4_;
          auVar31._4_4_ = auVar36._4_4_ * auVar28._4_4_ - auVar30._4_4_ * auVar35._4_4_;
          auVar31._8_4_ = auVar36._8_4_ * auVar30._0_4_ - auVar30._8_4_ * auVar36._0_4_;
          auVar31._12_4_ = auVar36._12_4_ * auVar30._4_4_ - auVar30._12_4_ * auVar36._4_4_;
          auVar35 = NEON_ext(auVar31,auVar31,4,1);
          auVar32._0_4_ = *(float *)(param_1 + 0x90) * auVar35._0_4_;
          auVar32._4_4_ = *(float *)(param_1 + 0x94) * auVar35._4_4_;
          auVar32._8_4_ = *(float *)(param_1 + 0x98) * auVar31._0_4_;
          auVar32._12_4_ = *(float *)(param_1 + 0x9c) * 0.0;
          auVar35 = NEON_ext(auVar32,auVar32,8,1);
          fVar33 = auVar32._0_4_ + auVar32._4_4_ + auVar35._0_4_;
          iVar26 = -(uint)(0.0 < fVar33);
          bVar13 = fVar33 <= 0.0;
          uVar27 = CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar26 >> 8),~(byte)iVar26)));
          auVar38._4_4_ = uVar27;
          auVar38._0_4_ = uVar27;
          auVar38._8_4_ = uVar27;
          auVar38._12_4_ = uVar27;
          auVar35[9] = uVar18;
          auVar35._0_9_ = *pVar3;
          auVar35[10] = uVar19;
          auVar35[0xb] = uVar20;
          auVar35[0xc] = uVar21;
          auVar35[0xd] = uVar22;
          auVar35[0xe] = uVar23;
          auVar35[0xf] = uVar24;
          auVar28[9] = uVar18;
          auVar28._0_9_ = *pVar3;
          auVar28[10] = uVar19;
          auVar28[0xb] = uVar20;
          auVar28[0xc] = uVar21;
          auVar28[0xd] = uVar22;
          auVar28[0xe] = uVar23;
          auVar28[0xf] = uVar24;
          auVar28 = auVar28 ^ (auVar35 ^ auVar17) & auVar38;
          auVar9[9] = uVar18;
          auVar9._0_9_ = *pVar3;
          auVar9[10] = uVar19;
          auVar9[0xb] = uVar20;
          auVar9[0xc] = uVar21;
          auVar9[0xd] = uVar22;
          auVar9[0xe] = uVar23;
          auVar9[0xf] = uVar24;
          auVar17 = auVar17 ^ (auVar17 ^ auVar9) & auVar38;
        }
        else {
          lVar16 = lVar14 + lVar16 * 0x30;
          lVar14 = lVar14 + lVar15 * 0x30;
          auVar29._0_4_ =
               (fVar33 - auVar17._0_4_) * (*(float *)(lVar16 + 0x10) - *(float *)(lVar14 + 0x10));
          auVar29._4_4_ =
               (fVar10 - auVar17._4_4_) * (*(float *)(lVar16 + 0x14) - *(float *)(lVar14 + 0x14));
          auVar29._8_4_ =
               ((float)uVar12 - auVar17._8_4_) *
               (*(float *)(lVar16 + 0x18) - *(float *)(lVar14 + 0x18));
          auVar29._12_4_ =
               (fVar11 - auVar17._12_4_) * (*(float *)(lVar16 + 0x1c) - *(float *)(lVar14 + 0x1c));
          auVar35 = NEON_ext(auVar29,auVar29,8,1);
          fVar33 = auVar29._0_4_ + auVar29._4_4_ + auVar35._0_4_;
          iVar26 = -(uint)(fVar33 < 0.0);
          uVar27 = CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar26 >> 8),~(byte)iVar26)));
          auVar37._4_4_ = uVar27;
          auVar37._0_4_ = uVar27;
          auVar37._8_4_ = uVar27;
          auVar37._12_4_ = uVar27;
          bVar13 = fVar33 < 0.0;
          auVar7[9] = uVar18;
          auVar7._0_9_ = *pVar3;
          auVar7[10] = uVar19;
          auVar7[0xb] = uVar20;
          auVar7[0xc] = uVar21;
          auVar7[0xd] = uVar22;
          auVar7[0xe] = uVar23;
          auVar7[0xf] = uVar24;
          auVar28 = auVar17 ^ (auVar17 ^ auVar7) & auVar37;
          auVar8[9] = uVar18;
          auVar8._0_9_ = *pVar3;
          auVar8[10] = uVar19;
          auVar8[0xb] = uVar20;
          auVar8[0xc] = uVar21;
          auVar8[0xd] = uVar22;
          auVar8[0xe] = uVar23;
          auVar8[0xf] = uVar24;
          auVar17 = auVar17 ^ (auVar17 ^ auVar8) & ~auVar37;
        }
      }
      cVar25 = -((char)param_2[1] == '\0');
      auVar6[1] = cVar25;
      auVar6[0] = cVar25;
      auVar6[2] = cVar25;
      auVar6[3] = cVar25;
      auVar6[4] = cVar25;
      auVar6[5] = cVar25;
      auVar6[6] = cVar25;
      auVar6[7] = cVar25;
      auVar6[8] = cVar25;
      auVar6[9] = cVar25;
      auVar6[10] = cVar25;
      auVar6[0xb] = cVar25;
      auVar6[0xc] = cVar25;
      auVar6[0xd] = cVar25;
      auVar6[0xe] = cVar25;
      auVar6[0xf] = cVar25;
      auVar17 = auVar17 ^ (auVar17 ^ auVar28) & ~auVar6;
      goto LAB_030c3564;
    }
    lVar16 = *(long *)(param_1 + 0x40) + (long)(int)uVar2 * 0x80;
    pauVar1 = (undefined1 (*) [16])(lVar16 + 0x40);
    if ((char)param_2[1] != '\x01') {
      pauVar1 = (undefined1 (*) [16])(lVar16 + 0x30);
    }
    auVar17 = *pauVar1;
  }
  else {
    auVar17 = *(undefined1 (*) [16])(param_1 + 0xb0);
  }
  bVar13 = false;
LAB_030c3564:
  *(long *)(param_2 + 6) = auVar17._8_8_;
  *(long *)(param_2 + 4) = auVar17._0_8_;
  *(long *)(param_2 + 10) = auVar17._8_8_;
  *(long *)(param_2 + 8) = auVar17._0_8_;
  *(bool *)((long)param_2 + 7) = bVar13;
  if (*(int *)(param_1 + 0x20) <= (int)uVar2) {
    *(undefined1 *)(param_2 + 1) = 2;
    return;
  }
  if ((-1 < (int)uVar2) &&
     ((*(byte *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 0x80 + 0x10) >> 4 & 1) != 0)) {
    *(undefined1 *)((long)param_2 + 6) = 1;
    param_2[7] = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  return;
}


