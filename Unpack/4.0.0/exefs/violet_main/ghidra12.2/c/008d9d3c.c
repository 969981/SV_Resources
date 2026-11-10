/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d9d3c; name: FUN_008d9d3c
 */


void FUN_008d9d3c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined2 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  undefined8 uVar17;
  void *__s;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  void *__s_00;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar17 = FUN_008d42f0(0x2000,0x80);
  puVar16 = PTR_DAT_047d2518;
  *(undefined8 *)PTR_DAT_047d2518 = uVar17;
  __s = (void *)FUN_008d42f0(0x2000,0x80);
  __s_00 = *(void **)puVar16;
  *(void **)PTR_DAT_047d2508 = __s;
  memset(__s_00,0,0x2000);
  memset(__s,0,0x2000);
  lVar18 = 0;
  uVar19 = 0x720a056d;
  uVar21 = 0x45f0cdb4;
  uVar22 = 0xe318145e;
  uVar20 = 0x178eab2c;
  do {
    uVar20 = uVar20 ^ uVar20 << 0xb;
    uVar1 = uVar20 ^ uVar19;
    uVar20 = uVar1 ^ uVar20 >> 8;
    uVar22 = uVar22 ^ uVar22 << 0xb;
    uVar2 = uVar20 ^ uVar19 >> 0x13;
    uVar19 = uVar19 ^ uVar19 << 0xb;
    uVar22 = uVar22 ^ uVar22 >> 8 ^ uVar2;
    uVar3 = uVar22 ^ uVar20 >> 0x13;
    uVar21 = uVar21 ^ uVar21 << 0xb;
    uVar4 = uVar21 ^ uVar21 >> 8 ^ uVar3;
    uVar20 = uVar4 ^ uVar22 >> 0x13;
    uVar19 = uVar19 ^ uVar19 >> 8 ^ uVar20;
    uVar22 = uVar19 ^ uVar4 >> 0x13;
    uVar21 = uVar2 ^ uVar2 << 0xb;
    uVar5 = uVar21 ^ uVar21 >> 8 ^ uVar22;
    uVar21 = uVar5 ^ uVar19 >> 0x13;
    uVar6 = uVar3 ^ uVar3 << 0xb;
    fVar13 = (float)CONCAT13(0x3f,CONCAT12((byte)(uVar19 >> 0x19),(short)(uVar22 >> 9)) | 0x800000)
             + -1.0;
    uVar19 = uVar6 ^ uVar6 >> 8 ^ uVar21 ^ uVar5 >> 0x13;
    fVar33 = (float)(uVar21 >> 9 | 0x3f800000) + -1.0;
    fVar14 = fVar13 + fVar13 + -1.0;
    fVar35 = (float)(uVar19 >> 9 | 0x3f800000) + -1.0;
    fVar13 = (float)CONCAT13(0x3f,CONCAT12((byte)(uVar1 >> 0x19),(short)(uVar2 >> 9)) | 0x800000) +
             -1.0;
    fVar8 = (float)CONCAT13(0x3f,CONCAT12((byte)(uVar4 >> 0x19),(short)(uVar20 >> 9)) | 0x800000) +
            -1.0;
    fVar33 = fVar33 + fVar33 + -1.0;
    fVar35 = fVar35 + fVar35 + -1.0;
    fVar34 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar24 = fVar14 * fVar14;
    fVar15 = fVar33 * fVar33;
    uVar27 = (undefined1)((uint)fVar15 >> 8);
    uVar28 = (undefined1)((uint)fVar15 >> 0x10);
    uVar29 = (undefined1)((uint)fVar15 >> 0x18);
    fVar23 = fVar35 * fVar35;
    uVar30 = (undefined1)((uint)fVar23 >> 8);
    uVar31 = (undefined1)((uint)fVar23 >> 0x10);
    uVar32 = (undefined1)((uint)fVar23 >> 0x18);
    auVar36[4] = SUB41(fVar15,0);
    auVar36._0_4_ = fVar24;
    auVar36[5] = uVar27;
    auVar36[6] = uVar28;
    auVar36[7] = uVar29;
    auVar36[8] = SUB41(fVar23,0);
    auVar36[9] = uVar30;
    auVar36[10] = uVar31;
    auVar36[0xb] = uVar32;
    auVar36._12_4_ = 0;
    auVar39[4] = SUB41(fVar15,0);
    auVar39._0_4_ = fVar24;
    auVar39[5] = uVar27;
    auVar39[6] = uVar28;
    auVar39[7] = uVar29;
    auVar39[8] = SUB41(fVar23,0);
    auVar39[9] = uVar30;
    auVar39[10] = uVar31;
    auVar39[0xb] = uVar32;
    auVar39._12_4_ = 0;
    auVar36 = NEON_ext(auVar36,auVar39,8,1);
    fVar24 = auVar36._0_4_ + fVar24;
    fVar15 = auVar36._4_4_ + fVar15;
    fVar23 = fVar24 + fVar15;
    fVar24 = fVar24 + fVar15;
    uVar27 = SUB41(fVar24,0);
    uVar28 = (undefined1)((uint)fVar24 >> 8);
    uVar29 = (undefined1)((uint)fVar24 >> 0x10);
    uVar30 = (undefined1)((uint)fVar24 >> 0x18);
    puVar7 = (undefined8 *)((long)__s_00 + lVar18);
    puVar7[1] = (ulong)(uint)(fVar8 + fVar8 + -1.0);
    *puVar7 = CONCAT44(fVar34 + fVar34 + -1.0,fVar13 + fVar13 + -1.0);
    auVar11[4] = uVar27;
    auVar11._0_4_ = fVar23;
    auVar11[5] = uVar28;
    auVar11[6] = uVar29;
    auVar11[7] = uVar30;
    auVar11[8] = SUB41(fVar23,0);
    auVar11[9] = (char)((uint)fVar23 >> 8);
    auVar11[10] = (char)((uint)fVar23 >> 0x10);
    auVar11[0xb] = (char)((uint)fVar23 >> 0x18);
    auVar11[0xc] = uVar27;
    auVar11[0xd] = uVar28;
    auVar11[0xe] = uVar29;
    auVar11[0xf] = uVar30;
    auVar36 = NEON_frsqrte(auVar11,4);
    iVar9 = -(uint)(fVar23 == 0.0);
    iVar10 = -(uint)(fVar24 == 0.0);
    iVar25 = -(uint)(fVar23 == 0.0);
    uVar12 = (undefined2)(CONCAT15(uVar28,CONCAT14(uVar27,fVar23)) >> 0x20);
    iVar26 = -(uint)((float)CONCAT13(uVar30,CONCAT12(uVar29,uVar12)) == 0.0);
    auVar38._0_4_ = auVar36._0_4_ * fVar23;
    auVar38._4_4_ = auVar36._4_4_ * fVar24;
    auVar38._8_4_ = auVar36._8_4_ * fVar23;
    auVar38._12_4_ = auVar36._12_4_ * (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar12));
    auVar39 = NEON_frsqrts(auVar36,auVar38,4);
    auVar37._0_4_ = auVar36._0_4_ * auVar39._0_4_;
    auVar37._4_4_ = auVar36._4_4_ * auVar39._4_4_;
    auVar37._8_4_ = auVar36._8_4_ * auVar39._8_4_;
    auVar37._12_4_ = auVar36._12_4_ * auVar39._12_4_;
    auVar40._0_4_ = fVar23 * auVar37._0_4_;
    auVar40._4_4_ = fVar24 * auVar37._4_4_;
    auVar40._8_4_ = fVar23 * auVar37._8_4_;
    auVar40._12_4_ = (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar12)) * auVar37._12_4_;
    auVar36 = NEON_frsqrts(auVar37,auVar40,4);
    fVar14 = fVar14 * auVar37._0_4_ * auVar36._0_4_;
    fVar33 = fVar33 * auVar37._4_4_ * auVar36._4_4_;
    fVar35 = fVar35 * auVar37._8_4_ * auVar36._8_4_;
    fVar13 = auVar37._12_4_ * auVar36._12_4_ * 0.0;
    ((undefined8 *)((long)__s + lVar18))[1] =
         CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                  CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                           CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                    CONCAT14(SUB41(fVar13,0) & ~(byte)iVar26,
                                             CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                      ~(byte)((uint)iVar25 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                               ~(byte)((uint)iVar25 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar35 >> 8) &
                                                                        ~(byte)((uint)iVar25 >> 8),
                                                                        SUB41(fVar35,0) &
                                                                        ~(byte)iVar25)))))));
    *(undefined8 *)((long)__s + lVar18) =
         CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                  CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                           CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                    CONCAT14(SUB41(fVar33,0) & ~(byte)iVar10,
                                             CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                      ~(byte)((uint)iVar9 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                               ~(byte)((uint)iVar9 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar14 >> 8) &
                                                                        ~(byte)((uint)iVar9 >> 8),
                                                                        SUB41(fVar14,0) &
                                                                        ~(byte)iVar9)))))));
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x2000);
  return;
}


