/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1ee38; name: FUN_02f1ee38
 */


void FUN_02f1ee38(undefined8 *param_1,undefined1 (*param_2) [12],long param_3,undefined8 *param_4,
                 float *param_5)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  undefined1 (*pauVar3) [12];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uVar30;
  float fVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar43;
  float fVar44;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar47;
  undefined1 auVar46 [16];
  float fVar48;
  float fVar50;
  undefined1 auVar49 [16];
  float fVar53;
  undefined1 auVar51 [12];
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar77;
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  int iVar88;
  undefined1 auVar87 [16];
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  float fVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  
  fVar40 = (float)*param_4;
  pauVar1 = param_2 + 8;
  fVar44 = (float)*(undefined8 *)(param_2[8] + 8);
  fVar83 = (float)((ulong)*(undefined8 *)(param_2[8] + 8) >> 0x20);
  fVar48 = *(float *)*pauVar1;
  fVar50 = *(float *)(param_2[8] + 4);
  fVar58 = *(float *)(param_2[8] + 8);
  fVar43 = (float)*(undefined8 *)*pauVar1;
  fVar36 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar32 = *(ulong *)param_2[10];
  uVar41 = *(undefined8 *)(param_2[9] + 4);
  if (0.0 < fVar40) {
    fVar85 = 0.0;
    fVar86 = 0.0;
    fVar82 = 0.0;
    fVar84 = 0.0;
    fVar71 = 0.0;
    fVar74 = 0.0;
    fVar75 = 0.0;
    fVar76 = 0.0;
    auVar69._0_4_ = *param_5 - fVar43;
    auVar69._4_4_ = param_5[1] - fVar36;
    auVar69._8_4_ = param_5[2] - fVar44;
    auVar69._12_4_ = param_5[3] - fVar83;
    fVar37 = (float)*(undefined8 *)(*param_2 + 8);
    fVar39 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar34 = (float)*(undefined8 *)*param_2;
    fVar35 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    auVar46._12_4_ = fVar39;
    auVar46._0_12_ = *param_2;
    auVar49._12_4_ = fVar39;
    auVar49._0_12_ = *param_2;
    auVar46 = NEON_ext(auVar46,auVar49,8,1);
    fVar47 = auVar46._4_4_ * auVar46._4_4_;
    fVar48 = fVar34 * auVar69._0_4_ + fVar35 * auVar69._4_4_ + fVar37 * auVar69._8_4_;
    fVar50 = fVar34 * auVar69._0_4_ + fVar35 * auVar69._4_4_ + fVar37 * auVar69._8_4_;
    fVar45 = fVar47 + -0.5;
    fVar47 = fVar47 + -0.5;
    fVar77 = 0.0;
    fVar81 = 0.0;
    uVar30 = 0;
    auVar49 = NEON_ext(auVar69,auVar69,4,1);
    auVar15._12_4_ = fVar39;
    auVar15._0_12_ = *param_2;
    auVar16._12_4_ = fVar39;
    auVar16._0_12_ = *param_2;
    auVar46 = NEON_ext(auVar15,auVar16,4,1);
    fVar33 = auVar46._0_4_;
    fVar38 = auVar46._4_4_;
    fVar58 = fVar33 * auVar69._0_4_ - fVar34 * auVar49._0_4_;
    fVar60 = fVar38 * auVar69._4_4_ - fVar35 * auVar49._4_4_;
    fVar62 = fVar34 * auVar69._8_4_ - fVar37 * auVar69._0_4_;
    fVar63 = fVar35 * auVar69._12_4_ - fVar39 * auVar69._4_4_;
    auVar19._4_4_ = fVar60;
    auVar19._0_4_ = fVar58;
    auVar19._8_4_ = fVar62;
    auVar19._12_4_ = fVar63;
    auVar20._4_4_ = fVar60;
    auVar20._0_4_ = fVar58;
    auVar20._8_4_ = fVar62;
    auVar20._12_4_ = fVar63;
    auVar46 = NEON_ext(auVar19,auVar20,4,1);
    uVar65 = *(undefined8 *)(param_2[5] + 4);
    fVar59 = fVar45 * auVar69._0_4_ + fVar34 * fVar48 + auVar46._0_4_ * fVar39;
    fVar61 = fVar47 * auVar69._4_4_ + fVar35 * fVar50 + auVar46._4_4_ * fVar39;
    fVar48 = fVar45 * auVar69._8_4_ + fVar37 * fVar48 + fVar58 * fVar39;
    fVar50 = fVar47 * auVar69._12_4_ + fVar39 * fVar50 + fVar39 * 0.0;
    fVar59 = fVar59 + fVar59;
    fVar61 = fVar61 + fVar61;
    fVar48 = fVar48 + fVar48;
    fVar60 = (float)((int)(short)uVar65 << 0x10);
    fVar62 = (float)((int)(short)((ulong)uVar65 >> 0x10) << 0x10);
    fVar63 = (float)((int)(short)((ulong)uVar65 >> 0x20) << 0x10);
    fVar58 = (float)((int)(short)((ulong)uVar65 >> 0x30) << 0x10);
    fVar64 = 0.0;
    fVar66 = 0.0;
    fVar67 = 0.0;
    fVar68 = 0.0;
    do {
      pfVar2 = (float *)(PTR_DAT_047e4708 + uVar30 * 0x10);
      fVar99 = *pfVar2;
      fVar100 = pfVar2[1];
      fVar101 = pfVar2[2];
      fVar102 = pfVar2[3];
      fVar103 = fVar59 * fVar99;
      fVar104 = fVar61 * fVar100;
      fVar105 = (fVar50 + fVar50) * fVar102;
      auVar26._4_4_ = fVar104;
      auVar26._0_4_ = fVar103;
      auVar26._8_4_ = fVar48 * fVar101;
      auVar26._12_4_ = fVar105;
      auVar27._4_4_ = fVar104;
      auVar27._0_4_ = fVar103;
      auVar27._8_4_ = fVar48 * fVar101;
      auVar27._12_4_ = fVar105;
      auVar46 = NEON_ext(auVar26,auVar27,8,1);
      if (fVar103 + fVar104 + auVar46._0_4_ <= 0.0) {
        fVar106 = fVar48 * fVar48 + fVar59 * fVar59 + fVar61 * fVar61;
        auVar51 = SUB1612(ZEXT816(0),0);
        pauVar3 = (undefined1 (*) [12])(param_3 + 0x30 + uVar30 * 0x10);
        fVar105 = (float)*(undefined8 *)(*pauVar3 + 8);
        fVar31 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
        fVar103 = (float)*(undefined8 *)*pauVar3;
        fVar104 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
        fVar107 = SQRT(fVar106);
        fVar109 = SQRT(fVar48 * fVar48 + fVar59 * fVar59 + fVar61 * fVar61);
        if (fVar106 != 0.0) {
          auVar51._0_4_ = fVar59 / fVar107;
          auVar51._4_4_ = fVar61 / fVar109;
          auVar51._8_4_ = fVar48 / fVar107;
        }
        fVar106 = fVar99 * auVar51._0_4_;
        fVar53 = fVar100 * auVar51._4_4_;
        fVar54 = fVar101 * auVar51._8_4_;
        puVar4 = (undefined8 *)(param_3 + (uVar30 >> 1 & 0x7f) * 0x10);
        uVar57 = puVar4[1];
        uVar65 = *puVar4;
        fVar93 = (float)((ulong)uVar57 >> 0x20);
        auVar28._12_4_ = fVar31;
        auVar28._0_12_ = *pauVar3;
        auVar29._12_4_ = fVar31;
        auVar29._0_12_ = *pauVar3;
        auVar46 = NEON_ext(auVar28,auVar29,4,1);
        fVar55 = fVar37 * fVar105 + fVar34 * fVar103 + fVar35 * fVar104;
        fVar56 = fVar37 * fVar105 + fVar34 * fVar103 + fVar35 * fVar104;
        fVar107 = fVar107 * fVar31 * (0.0 - (fVar106 + fVar53 + fVar54));
        fVar109 = fVar109 * fVar31 * (0.0 - (fVar106 + fVar53 + fVar54));
        auVar52._0_4_ = fVar34 * auVar46._0_4_ - fVar33 * fVar103;
        auVar52._4_4_ = fVar35 * auVar46._4_4_ - fVar38 * fVar104;
        auVar52._8_4_ = fVar37 * fVar103 - fVar34 * fVar105;
        auVar52._12_4_ = fVar39 * fVar104 - fVar35 * fVar31;
        auVar46 = NEON_ext(auVar52,auVar52,4,1);
        fVar106 = fVar99 * fVar107;
        fVar53 = fVar100 * fVar109;
        fVar54 = fVar101 * fVar107;
        fVar108 = SQRT(fVar106 * fVar106 + fVar53 * fVar53 + fVar54 * fVar54);
        fVar110 = SQRT(fVar106 * fVar106 + fVar53 * fVar53 + fVar54 * fVar54);
        fVar82 = fVar82 - fVar106;
        fVar84 = fVar84 - fVar53;
        fVar85 = fVar85 - fVar54;
        fVar86 = fVar86 - fVar102 * fVar109;
        fVar77 = fVar77 + fVar108;
        fVar81 = fVar81 + fVar110;
        fVar71 = fVar71 + ((float)uVar65 + fVar99 * fVar93 + 0.0) * fVar108;
        fVar74 = fVar74 + ((float)((ulong)uVar65 >> 0x20) + fVar100 * fVar93 + 0.0) * fVar110;
        fVar75 = fVar75 + ((float)uVar57 + fVar101 * fVar93 + 0.0) * fVar108;
        fVar76 = fVar76 + (fVar93 + fVar102 * fVar93 + 0.0) * fVar110;
        fVar99 = fVar39 * auVar46._0_4_ + fVar45 * fVar103 + fVar34 * fVar55;
        fVar100 = fVar39 * auVar46._4_4_ + fVar47 * fVar104 + fVar35 * fVar56;
        fVar101 = fVar39 * auVar52._0_4_ + fVar45 * fVar105 + fVar37 * fVar55;
        fVar102 = fVar39 * 0.0 + fVar47 * fVar31 + fVar39 * fVar56;
        fVar64 = fVar64 + fVar107 * (fVar99 + fVar99);
        fVar66 = fVar66 + fVar109 * (fVar100 + fVar100);
        fVar67 = fVar67 + fVar107 * (fVar101 + fVar101);
        fVar68 = fVar68 + fVar109 * (fVar102 + fVar102);
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != 6);
    auVar51 = *(undefined1 (*) [12])(param_3 + 0x90);
    fVar105 = (float)uVar41;
    fVar55 = fVar105 * (float)*(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x90);
    fVar31 = (float)((ulong)uVar41 >> 0x20);
    fVar56 = fVar31 * auVar51._4_4_;
    fVar107 = (float)uVar32;
    fVar93 = fVar107 * auVar51._8_4_;
    fVar109 = (float)(uVar32 >> 0x20);
    fVar48 = SQRT(fVar55 * fVar55 + fVar56 * fVar56 + fVar93 * fVar93);
    fVar99 = SQRT(fVar55 * fVar55 + fVar56 * fVar56 + fVar93 * fVar93);
    fVar50 = fVar105 * *(float *)(param_3 + 0x9c);
    fVar100 = fVar31 * *(float *)(param_3 + 0xa0);
    fVar103 = fVar107 * *(float *)(param_3 + 0xa4);
    fVar108 = SQRT(fVar50 * fVar50 + fVar100 * fVar100 + fVar103 * fVar103);
    fVar97 = SQRT(fVar50 * fVar50 + fVar100 * fVar100 + fVar103 * fVar103);
    fVar59 = fVar105 * *(float *)(param_3 + 0xa8);
    fVar101 = fVar31 * *(float *)(param_3 + 0xac);
    fVar104 = fVar107 * *(float *)(param_3 + 0xb0);
    fVar110 = SQRT(fVar59 * fVar59 + fVar101 * fVar101 + fVar104 * fVar104);
    fVar98 = SQRT(fVar59 * fVar59 + fVar101 * fVar101 + fVar104 * fVar104);
    fVar106 = fVar105 * *(float *)(param_3 + 0xb4);
    fVar53 = fVar31 * *(float *)(param_3 + 0xb8);
    fVar54 = fVar107 * *(float *)(param_3 + 0xbc);
    fVar61 = SQRT(fVar106 * fVar106 + fVar53 * fVar53 + fVar54 * fVar54);
    fVar102 = SQRT(fVar106 * fVar106 + fVar53 * fVar53 + fVar54 * fVar54);
    fVar50 = (((0.0 - fVar55 * fVar48) - fVar50 * fVar108) - fVar59 * fVar110) - fVar106 * fVar61;
    fVar100 = (((0.0 - fVar56 * fVar99) - fVar100 * fVar97) - fVar101 * fVar98) - fVar53 * fVar102;
    fVar101 = (((0.0 - fVar93 * fVar48) - fVar103 * fVar108) - fVar104 * fVar110) - fVar54 * fVar61;
    iVar90 = -(uint)(fVar50 == 0.0);
    iVar91 = -(uint)(fVar100 == 0.0);
    iVar94 = -(uint)(fVar101 == 0.0);
    iVar96 = -(uint)((((0.0 - fVar109 * 0.0 *
                              (float)CONCAT13((char)((uint)fVar99 >> 0x18),
                                              CONCAT12((char)((uint)fVar99 >> 0x10),
                                                       (short)(CONCAT15((char)((uint)fVar99 >> 8),
                                                                        CONCAT14(SUB41(fVar99,0),
                                                                                 fVar48)) >> 0x20)))
                       ) - fVar109 * 0.0 * fVar97) - fVar109 * 0.0 * fVar98) -
                     fVar109 * 0.0 *
                     (float)CONCAT13((char)((uint)fVar102 >> 0x18),
                                     CONCAT12((char)((uint)fVar102 >> 0x10),
                                              (short)(CONCAT15((char)((uint)fVar102 >> 8),
                                                               CONCAT14(SUB41(fVar102,0),fVar61)) >>
                                                     0x20))) == 0.0);
    fVar59 = (float)((ulong)*param_4 >> 0x20);
    if (CONCAT13(~(byte)((uint)iVar91 >> 0x18) | ~(byte)((uint)iVar90 >> 0x18) |
                 ~(byte)((uint)iVar94 >> 0x18) | ~(byte)((uint)iVar96 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar91 >> 0x10) | ~(byte)((uint)iVar90 >> 0x10) |
                          ~(byte)((uint)iVar94 >> 0x10) | ~(byte)((uint)iVar96 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar91 >> 8) | ~(byte)((uint)iVar90 >> 8) |
                                   ~(byte)((uint)iVar94 >> 8) | ~(byte)((uint)iVar96 >> 8),
                                   ~(byte)iVar91 | ~(byte)iVar90 | ~(byte)iVar94 | ~(byte)iVar96)))
        != 0) {
      fVar61 = fVar40 * (float)*param_1;
      fVar48 = fVar105 + fVar50 * fVar61 * fVar60;
      fVar50 = fVar31 + fVar100 * fVar59 * (float)((ulong)*param_1 >> 0x20) * fVar62;
      fVar61 = fVar107 + fVar101 * fVar61 * fVar63;
      iVar90 = -(uint)(0.0 < fVar105);
      iVar91 = -(uint)(0.0 < fVar31);
      iVar94 = -(uint)(0.0 < fVar107);
      iVar96 = -(uint)(0.0 < fVar48);
      iVar92 = -(uint)(0.0 < fVar50);
      iVar95 = -(uint)(0.0 < fVar61);
      uVar41 = CONCAT17((byte)((uint)fVar50 >> 0x18) &
                        ~((byte)((uint)iVar92 >> 0x18) ^ (byte)((uint)iVar91 >> 0x18)),
                        CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                 ~((byte)((uint)iVar92 >> 0x10) ^ (byte)((uint)iVar91 >> 0x10)),
                                 CONCAT15((byte)((uint)fVar50 >> 8) &
                                          ~((byte)((uint)iVar92 >> 8) ^ (byte)((uint)iVar91 >> 8)),
                                          CONCAT14(SUB41(fVar50,0) & ~((byte)iVar92 ^ (byte)iVar91),
                                                   CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                            ~((byte)((uint)iVar96 >> 0x18) ^
                                                             (byte)((uint)iVar90 >> 0x18)),
                                                            CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                                                     ~((byte)((uint)iVar96 >> 0x10)
                                                                      ^ (byte)((uint)iVar90 >> 0x10)
                                                                      ),CONCAT11((byte)((uint)fVar48
                                                                                       >> 8) &
                                                                                 ~((byte)((uint)
                                                  iVar96 >> 8) ^ (byte)((uint)iVar90 >> 8)),
                                                  SUB41(fVar48,0) & ~((byte)iVar96 ^ (byte)iVar90)))
                                                  )))));
      uVar32 = (ulong)CONCAT13((byte)((uint)fVar61 >> 0x18) &
                               ~((byte)((uint)iVar95 >> 0x18) ^ (byte)((uint)iVar94 >> 0x18)),
                               CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                        ~((byte)((uint)iVar95 >> 0x10) ^
                                         (byte)((uint)iVar94 >> 0x10)),
                                        CONCAT11((byte)((uint)fVar61 >> 8) &
                                                 ~((byte)((uint)iVar95 >> 8) ^
                                                  (byte)((uint)iVar94 >> 8)),
                                                 SUB41(fVar61,0) & ~((byte)iVar95 ^ (byte)iVar94))))
      ;
    }
    fVar61 = (float)uVar32;
    if (0.0 < fVar77) {
      fVar48 = fVar40 * (float)*param_1;
      fVar50 = fVar59 * (float)((ulong)*param_1 >> 0x20);
      fVar82 = fVar82 * fVar48;
      fVar84 = fVar84 * fVar50;
      fVar85 = fVar85 * fVar48;
      fVar86 = fVar86 * fVar50;
      auVar21._4_4_ = fVar84;
      auVar21._0_4_ = fVar82;
      auVar21._8_4_ = fVar85;
      auVar21._12_4_ = fVar86;
      auVar22._4_4_ = fVar84;
      auVar22._0_4_ = fVar82;
      auVar22._8_4_ = fVar85;
      auVar22._12_4_ = fVar86;
      auVar46 = NEON_ext(auVar21,auVar22,4,1);
      fVar48 = fVar34 * fVar82 + fVar35 * fVar84 + fVar37 * fVar85;
      fVar50 = fVar34 * fVar82 + fVar35 * fVar84 + fVar37 * fVar85;
      fVar83 = fVar34 * auVar46._0_4_ - fVar33 * fVar82;
      fVar99 = fVar35 * auVar46._4_4_ - fVar38 * fVar84;
      fVar100 = fVar37 * fVar82 - fVar34 * fVar85;
      fVar101 = fVar39 * fVar84 - fVar35 * fVar86;
      auVar23._4_4_ = fVar99;
      auVar23._0_4_ = fVar83;
      auVar23._8_4_ = fVar100;
      auVar23._12_4_ = fVar101;
      auVar24._4_4_ = fVar99;
      auVar24._0_4_ = fVar83;
      auVar24._8_4_ = fVar100;
      auVar24._12_4_ = fVar101;
      auVar46 = NEON_ext(auVar23,auVar24,4,1);
      uVar65 = NEON_fmov(0x3f800000,4);
      fVar77 = (float)uVar65 / fVar77;
      fVar81 = (float)((ulong)uVar65 >> 0x20) / fVar81;
      fVar82 = fVar45 * fVar82 + fVar34 * fVar48 + fVar39 * auVar46._0_4_;
      fVar84 = fVar47 * fVar84 + fVar35 * fVar50 + fVar39 * auVar46._4_4_;
      fVar85 = fVar45 * fVar85 + fVar37 * fVar48 + fVar39 * fVar83;
      fVar86 = fVar47 * fVar86 +
               fVar39 * (float)CONCAT13((char)((uint)fVar50 >> 0x18),
                                        CONCAT12((char)((uint)fVar50 >> 0x10),
                                                 (short)(CONCAT15((char)((uint)fVar50 >> 8),
                                                                  CONCAT14(SUB41(fVar50,0),fVar48))
                                                        >> 0x20))) + fVar39 * 0.0;
      fVar82 = fVar82 + fVar82;
      fVar84 = fVar84 + fVar84;
      fVar85 = fVar85 + fVar85;
      fVar86 = fVar86 + fVar86;
      auVar72._0_4_ = fVar71 * fVar77;
      auVar72._4_4_ = fVar74 * fVar81;
      auVar72._8_4_ = fVar75 * fVar77;
      auVar72._12_4_ = fVar76 * fVar81;
      fVar48 = fVar37 * auVar72._8_4_ + fVar34 * auVar72._0_4_ + fVar35 * auVar72._4_4_;
      fVar50 = fVar37 * auVar72._8_4_ + fVar34 * auVar72._0_4_ + fVar35 * auVar72._4_4_;
      auVar49 = NEON_fmov(0x3f800000,4);
      auVar46 = NEON_ext(auVar72,auVar72,4,1);
      auVar73._0_4_ = fVar34 * auVar46._0_4_ - fVar33 * auVar72._0_4_;
      auVar73._4_4_ = fVar35 * auVar46._4_4_ - fVar38 * auVar72._4_4_;
      auVar73._8_4_ = fVar37 * auVar72._0_4_ - fVar34 * auVar72._8_4_;
      auVar73._12_4_ = fVar39 * auVar72._4_4_ - fVar35 * auVar72._12_4_;
      auVar46 = NEON_ext(auVar73,auVar73,4,1);
      fVar83 = fVar39 * auVar46._0_4_ + fVar45 * auVar72._0_4_ + fVar34 * fVar48;
      fVar71 = fVar39 * auVar46._4_4_ + fVar47 * auVar72._4_4_ + fVar35 * fVar50;
      fVar74 = fVar39 * auVar73._0_4_ + fVar45 * auVar72._8_4_ + fVar37 * fVar48;
      fVar75 = fVar39 * 0.0 + fVar47 * auVar72._12_4_ + fVar39 * fVar50;
      fVar48 = fVar82 * fVar58;
      fVar50 = fVar84 * fVar58;
      fVar76 = fVar85 * fVar58;
      fVar77 = fVar86 * fVar58;
      iVar90 = -(uint)(fVar48 == 0.0);
      iVar91 = -(uint)(fVar50 == 0.0);
      iVar94 = -(uint)(fVar76 == 0.0);
      iVar96 = -(uint)(fVar77 == 0.0);
      auVar87[0] = ~(byte)iVar90;
      auVar87[1] = ~(byte)((uint)iVar90 >> 8);
      auVar87[2] = ~(byte)((uint)iVar90 >> 0x10);
      auVar87[3] = ~(byte)((uint)iVar90 >> 0x18);
      auVar87[4] = ~(byte)iVar91;
      auVar87[5] = ~(byte)((uint)iVar91 >> 8);
      auVar87[6] = ~(byte)((uint)iVar91 >> 0x10);
      auVar87[7] = ~(byte)((uint)iVar91 >> 0x18);
      auVar87[8] = ~(byte)iVar94;
      auVar87[9] = ~(byte)((uint)iVar94 >> 8);
      auVar87[10] = ~(byte)((uint)iVar94 >> 0x10);
      auVar87[0xb] = ~(byte)((uint)iVar94 >> 0x18);
      auVar87[0xc] = ~(byte)iVar96;
      auVar87[0xd] = ~(byte)((uint)iVar96 >> 8);
      auVar87[0xe] = ~(byte)((uint)iVar96 >> 0x10);
      auVar87[0xf] = ~(byte)((uint)iVar96 >> 0x18);
      auVar78._0_4_ = auVar49._0_4_ / fVar48;
      auVar78._4_4_ = auVar49._4_4_ / fVar50;
      auVar78._8_4_ = auVar49._8_4_ / fVar76;
      auVar78._12_4_ = auVar49._12_4_ / fVar77;
      auVar25[8] = 0xf0;
      auVar25._0_8_ = 0x5f7ffff05f7ffff0;
      auVar25[9] = 0xff;
      auVar25[10] = 0x7f;
      auVar25[0xb] = 0x5f;
      auVar25[0xc] = 0xf0;
      auVar25[0xd] = 0xff;
      auVar25[0xe] = 0x7f;
      auVar25[0xf] = 0x5f;
      auVar78 = auVar78 ^ (auVar78 ^ auVar25) & ~auVar87;
      auVar70._0_4_ = auVar69._0_4_ * auVar78._0_4_;
      auVar70._4_4_ = auVar69._4_4_ * auVar78._4_4_;
      auVar70._8_4_ = auVar69._8_4_ * auVar78._8_4_;
      auVar70._12_4_ = auVar69._12_4_ * auVar78._12_4_;
      iVar92 = -(uint)(auVar70._0_4_ < 0.0);
      iVar95 = -(uint)(auVar70._4_4_ < 0.0);
      iVar88 = -(uint)(auVar70._8_4_ < 0.0);
      iVar89 = -(uint)(auVar70._12_4_ < 0.0);
      iVar90 = -(uint)(auVar49._0_4_ <= auVar70._0_4_);
      iVar91 = -(uint)(auVar49._4_4_ <= auVar70._4_4_);
      iVar94 = -(uint)(auVar49._8_4_ <= auVar70._8_4_);
      iVar96 = -(uint)(auVar49._12_4_ <= auVar70._12_4_);
      auVar79[0] = ~(byte)iVar92 & ~(byte)iVar90;
      auVar79[1] = ~(byte)((uint)iVar92 >> 8) & ~(byte)((uint)iVar90 >> 8);
      auVar79[2] = ~(byte)((uint)iVar92 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
      auVar79[3] = ~(byte)((uint)iVar92 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
      auVar79[4] = ~(byte)iVar95 & ~(byte)iVar91;
      auVar79[5] = ~(byte)((uint)iVar95 >> 8) & ~(byte)((uint)iVar91 >> 8);
      auVar79[6] = ~(byte)((uint)iVar95 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
      auVar79[7] = ~(byte)((uint)iVar95 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
      auVar79[8] = ~(byte)iVar88 & ~(byte)iVar94;
      auVar79[9] = ~(byte)((uint)iVar88 >> 8) & ~(byte)((uint)iVar94 >> 8);
      auVar79[10] = ~(byte)((uint)iVar88 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      auVar79[0xb] = ~(byte)((uint)iVar88 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      auVar79[0xc] = ~(byte)iVar89 & ~(byte)iVar96;
      auVar79[0xd] = ~(byte)((uint)iVar89 >> 8) & ~(byte)((uint)iVar96 >> 8);
      auVar79[0xe] = ~(byte)((uint)iVar89 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      auVar79[0xf] = ~(byte)((uint)iVar89 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar70 = auVar70 ^ (auVar70 ^ auVar49) & ~auVar79;
      auVar80._0_4_ = fVar82 * auVar70._0_4_;
      auVar80._4_4_ = fVar84 * auVar70._4_4_;
      auVar80._8_4_ = fVar85 * auVar70._8_4_;
      auVar80._12_4_ = fVar86 * auVar70._12_4_;
      fVar48 = fVar43 + auVar80._0_4_ * fVar58;
      fVar50 = fVar36 + auVar80._4_4_ * fVar58;
      fVar58 = fVar44 + auVar80._8_4_ * fVar58;
      fVar43 = ((float)*(double *)(param_2[1] + 4) + fVar83 + fVar83) -
               (float)*(double *)(param_2[1] + 4);
      fVar44 = ((float)*(double *)param_2[2] + fVar71 + fVar71) - (float)*(double *)param_2[2];
      fVar71 = ((float)*(double *)(param_2[2] + 8) + fVar74 + fVar74) -
               (float)*(double *)(param_2[2] + 8);
      fVar74 = (fVar75 + fVar75 + 0.0) - 0.0;
      auVar9._4_4_ = fVar44;
      auVar9._0_4_ = fVar43;
      auVar9._8_4_ = fVar71;
      auVar9._12_4_ = fVar74;
      auVar10._4_4_ = fVar44;
      auVar10._0_4_ = fVar43;
      auVar10._8_4_ = fVar71;
      auVar10._12_4_ = fVar74;
      auVar46 = NEON_ext(auVar9,auVar10,4,1);
      auVar49 = NEON_ext(auVar80,auVar80,4,1);
      fVar36 = fVar43 * auVar49._0_4_ - auVar46._0_4_ * auVar80._0_4_;
      fVar83 = fVar44 * auVar49._4_4_ - auVar46._4_4_ * auVar80._4_4_;
      fVar43 = fVar71 * auVar80._0_4_ - fVar43 * auVar80._8_4_;
      fVar44 = fVar74 * auVar80._4_4_ - fVar44 * auVar80._12_4_;
      auVar11._4_4_ = fVar83;
      auVar11._0_4_ = fVar36;
      auVar11._8_4_ = fVar43;
      auVar11._12_4_ = fVar44;
      auVar12._4_4_ = fVar83;
      auVar12._0_4_ = fVar36;
      auVar12._8_4_ = fVar43;
      auVar12._12_4_ = fVar44;
      auVar46 = NEON_ext(auVar11,auVar12,4,1);
      uVar65 = NEON_ext(auVar46._0_8_,CONCAT44(fVar83,fVar36),4,1);
      fVar83 = auVar46._0_4_;
      fVar74 = auVar46._4_4_;
      fVar76 = fVar34 * fVar83 + fVar35 * fVar74 + fVar37 * fVar36;
      fVar43 = fVar33 * fVar83 - fVar34 * (float)uVar65;
      fVar44 = fVar38 * fVar74 - fVar35 * (float)((ulong)uVar65 >> 0x20);
      fVar71 = fVar34 * fVar36 - fVar37 * fVar83;
      fVar75 = fVar35 * 0.0 - fVar39 * fVar74;
      auVar13._4_4_ = fVar44;
      auVar13._0_4_ = fVar43;
      auVar13._8_4_ = fVar71;
      auVar13._12_4_ = fVar75;
      auVar14._4_4_ = fVar44;
      auVar14._0_4_ = fVar43;
      auVar14._8_4_ = fVar71;
      auVar14._12_4_ = fVar75;
      auVar46 = NEON_ext(auVar13,auVar14,4,1);
      fVar44 = fVar45 * fVar83 + fVar34 * fVar76 + fVar39 * auVar46._0_4_;
      fVar83 = fVar47 * fVar74 + fVar35 * (fVar34 * fVar83 + fVar35 * fVar74 + fVar37 * fVar36) +
               fVar39 * auVar46._4_4_;
      fVar43 = fVar45 * fVar36 + fVar37 * fVar76 + fVar39 * fVar43;
      uVar41 = CONCAT44((fVar83 + fVar83) * fVar62 + (float)((ulong)uVar41 >> 0x20),
                        (fVar44 + fVar44) * fVar60 + (float)uVar41);
      fVar61 = (fVar43 + fVar43) * fVar63 + fVar61;
      fVar44 = (float)*(undefined8 *)(param_2[8] + 8);
      fVar83 = (float)((ulong)*(undefined8 *)(param_2[8] + 8) >> 0x20);
      fVar43 = (float)*(undefined8 *)param_2[8];
      fVar36 = (float)((ulong)*(undefined8 *)param_2[8] >> 0x20);
    }
    else {
      fVar48 = *(float *)*pauVar1;
      fVar50 = *(float *)(param_2[8] + 4);
      fVar58 = *(float *)(param_2[8] + 8);
    }
    fVar40 = fVar40 * (float)*param_1;
    fVar59 = fVar59 * (float)((ulong)*param_1 >> 0x20);
    auVar42._0_4_ = fVar64 * fVar40;
    auVar42._4_4_ = fVar66 * fVar59;
    auVar42._8_4_ = fVar67 * fVar40;
    auVar42._12_4_ = fVar68 * fVar59;
    auVar46 = NEON_ext(auVar42,auVar42,4,1);
    fVar64 = fVar34 * auVar42._0_4_ + fVar35 * auVar42._4_4_ + fVar37 * auVar42._8_4_;
    fVar40 = fVar33 * auVar42._0_4_ - fVar34 * auVar46._0_4_;
    fVar33 = fVar38 * auVar42._4_4_ - fVar35 * auVar46._4_4_;
    fVar38 = fVar34 * auVar42._8_4_ - fVar37 * auVar42._0_4_;
    fVar59 = fVar35 * auVar42._12_4_ - fVar39 * auVar42._4_4_;
    auVar17._4_4_ = fVar33;
    auVar17._0_4_ = fVar40;
    auVar17._8_4_ = fVar38;
    auVar17._12_4_ = fVar59;
    auVar18._4_4_ = fVar33;
    auVar18._0_4_ = fVar40;
    auVar18._8_4_ = fVar38;
    auVar18._12_4_ = fVar59;
    auVar46 = NEON_ext(auVar17,auVar18,4,1);
    fVar33 = fVar45 * auVar42._0_4_ + fVar34 * fVar64 + fVar39 * auVar46._0_4_;
    fVar34 = fVar47 * auVar42._4_4_ +
             fVar35 * (fVar34 * auVar42._0_4_ + fVar35 * auVar42._4_4_ + fVar37 * auVar42._8_4_) +
             fVar39 * auVar46._4_4_;
    fVar40 = fVar45 * auVar42._8_4_ + fVar37 * fVar64 + fVar39 * fVar40;
    uVar41 = CONCAT44((float)((ulong)uVar41 >> 0x20) + (fVar34 + fVar34) * fVar62,
                      (float)uVar41 + (fVar33 + fVar33) * fVar60);
    uVar32 = (ulong)(uint)(fVar61 + (fVar40 + fVar40) * fVar63);
  }
  fVar40 = (float)uVar32;
  fVar34 = fVar48 * fVar48 + fVar50 * fVar50 + fVar58 * fVar58;
  fVar35 = fVar48 * fVar48 + fVar50 * fVar50 + fVar58 * fVar58;
  auVar5._4_4_ = fVar36;
  auVar5._0_4_ = fVar43;
  auVar5._8_4_ = fVar44;
  auVar5._12_4_ = fVar83;
  auVar6._4_4_ = fVar36;
  auVar6._0_4_ = fVar43;
  auVar6._8_4_ = fVar44;
  auVar6._12_4_ = fVar83;
  auVar46 = NEON_ext(auVar5,auVar6,8,1);
  fVar43 = auVar46._4_4_ * auVar46._4_4_;
  iVar90 = -(uint)(fVar34 <= fVar43);
  iVar91 = -(uint)(fVar35 <= fVar43);
  if (CONCAT13((byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar90 >> 0x18),
               CONCAT12((byte)((uint)iVar91 >> 0x10) | (byte)((uint)iVar90 >> 0x10),
                        CONCAT11((byte)((uint)iVar91 >> 8) | (byte)((uint)iVar90 >> 8),
                                 (byte)iVar91 | (byte)iVar90))) == 0) {
    if ((~(uint)fVar34 & 0x7fc00000) != 0) {
      uVar65 = NEON_fmov(0x3f800000,4);
      fVar43 = (float)uVar65 / SQRT(fVar34);
      if ((~(uint)fVar43 & 0x7fc00000) != 0) {
        fVar43 = fVar83 * fVar43 * 0.99999976;
        *(ulong *)(param_2[8] + 8) = CONCAT44(fVar83,fVar58 * fVar43);
        *(ulong *)param_2[8] =
             CONCAT44(fVar50 * fVar83 * ((float)((ulong)uVar65 >> 0x20) / SQRT(fVar35)) * 0.99999976
                      ,fVar48 * fVar43);
      }
    }
  }
  else {
    *(float *)(param_2[8] + 8) = fVar58;
    *(float *)param_2[9] = fVar83;
    *(float *)param_2[8] = fVar48;
    *(float *)(param_2[8] + 4) = fVar50;
  }
  fVar48 = (float)uVar41;
  fVar50 = (float)((ulong)uVar41 >> 0x20);
  fVar43 = fVar40 * fVar40 + fVar48 * fVar48 + fVar50 * fVar50;
  fVar36 = fVar40 * fVar40 + fVar48 * fVar48 + fVar50 * fVar50;
  fVar58 = (float)((ulong)*(undefined8 *)param_2[10] >> 0x20);
  auVar7._12_4_ = fVar58;
  auVar7._0_12_ = *(undefined1 (*) [12])(param_2[9] + 4);
  auVar8._12_4_ = fVar58;
  auVar8._0_12_ = *(undefined1 (*) [12])(param_2[9] + 4);
  auVar46 = NEON_ext(auVar7,auVar8,8,1);
  fVar44 = auVar46._4_4_ * auVar46._4_4_;
  iVar90 = -(uint)(fVar43 <= fVar44);
  iVar91 = -(uint)(fVar36 <= fVar44);
  if (CONCAT13((byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar90 >> 0x18),
               CONCAT12((byte)((uint)iVar91 >> 0x10) | (byte)((uint)iVar90 >> 0x10),
                        CONCAT11((byte)((uint)iVar91 >> 8) | (byte)((uint)iVar90 >> 8),
                                 (byte)iVar91 | (byte)iVar90))) == 0) {
    if ((~(uint)fVar43 & 0x7fc00000) == 0) {
      return;
    }
    uVar41 = NEON_fmov(0x3f800000,4);
    fVar43 = (float)uVar41 / SQRT(fVar43);
    if ((~(uint)fVar43 & 0x7fc00000) == 0) {
      return;
    }
    fVar43 = fVar58 * fVar43 * 0.99999976;
    uVar41 = CONCAT44(fVar50 * fVar58 * ((float)((ulong)uVar41 >> 0x20) / SQRT(fVar36)) * 0.99999976
                      ,fVar48 * fVar43);
    fVar40 = fVar40 * fVar43;
  }
  *(ulong *)param_2[10] = CONCAT44(fVar58,fVar40);
  *(undefined8 *)(param_2[9] + 4) = uVar41;
  return;
}


