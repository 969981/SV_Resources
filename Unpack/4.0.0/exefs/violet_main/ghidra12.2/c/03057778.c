/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03057778; name: FUN_03057778
 */


void FUN_03057778(char *param_1,uint param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar41;
  undefined8 uVar40;
  float fVar42;
  undefined8 uVar43;
  float fVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar52;
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar67;
  ulong uVar65;
  float fVar68;
  int iVar69;
  undefined1 auVar66 [16];
  float fVar70;
  float fVar76;
  float fVar78;
  undefined1 auVar71 [16];
  float fVar77;
  float fVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  undefined4 local_94;
  undefined8 local_80;
  undefined8 uStack_78;
  
  iVar34 = *(int *)(param_1 + 0xa8);
  if ((-1 < iVar34) && (lVar14 = *(long *)(param_1 + 0xf8), iVar34 < *(int *)(lVar14 + 0x20))) {
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x10);
    fVar29 = (float)*(undefined8 *)(param_1 + 0x18);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    uVar43 = *(undefined8 *)*pauVar1;
    fVar25 = (float)uVar43;
    fVar26 = (float)((ulong)uVar43 >> 0x20);
    fVar33 = (float)*param_3;
    fVar36 = (float)((ulong)*param_3 >> 0x20);
    fVar38 = (float)param_3[1];
    fVar41 = (float)((ulong)param_3[1] >> 0x20);
    fVar42 = fVar38 * fVar29 + fVar33 * fVar25 + fVar36 * fVar26;
    fVar46 = fVar38 * fVar29 + fVar33 * fVar25 + fVar36 * fVar26;
    fVar11 = *(float *)((long)param_3 + 0x1c);
    fVar49 = *(float *)((long)param_3 + 0x14) - fVar36;
    auVar66._0_4_ = fVar33 - fVar25 * fVar42;
    auVar66._4_4_ = fVar36 - fVar26 * fVar46;
    auVar66._8_4_ = fVar38 - fVar29 * fVar42;
    auVar66._12_4_ = fVar41 - fVar31 * fVar46;
    auVar44._12_4_ = fVar31;
    auVar44._0_12_ = *pauVar1;
    auVar56._12_4_ = fVar31;
    auVar56._0_12_ = *pauVar1;
    auVar44 = NEON_ext(auVar44,auVar56,8,1);
    fVar53 = fVar25 * (*(float *)(param_3 + 2) - fVar33);
    fVar57 = fVar26 * fVar49;
    fVar46 = fVar29 * (*(float *)(param_3 + 3) - fVar38);
    uVar43 = NEON_ext(uVar43,auVar44._0_8_,4,1);
    auVar44 = NEON_ext(auVar66,auVar66,4,1);
    auVar45._0_4_ = fVar25 * auVar44._0_4_ - (float)uVar43 * auVar66._0_4_;
    auVar45._4_4_ = fVar26 * auVar44._4_4_ - (float)((ulong)uVar43 >> 0x20) * auVar66._4_4_;
    auVar45._8_4_ = fVar29 * auVar66._0_4_ - fVar25 * auVar66._8_4_;
    auVar45._12_4_ = fVar31 * auVar66._4_4_ - fVar26 * auVar66._12_4_;
    fVar42 = fVar53 + fVar57 + fVar46;
    fVar46 = fVar53 + fVar57 + fVar46;
    auVar44 = NEON_ext(auVar45,auVar45,4,1);
    fVar25 = (*(float *)(param_3 + 2) - fVar33) - fVar25 * fVar42;
    fVar49 = fVar49 - fVar26 * fVar46;
    fVar29 = (*(float *)(param_3 + 3) - fVar38) - fVar29 * fVar42;
    fVar42 = auVar44._0_4_;
    fVar53 = auVar44._4_4_;
    fVar26 = -(fVar25 * fVar42 + fVar49 * fVar53 + fVar29 * auVar45._0_4_);
    uVar40 = *(undefined8 *)(param_1 + 0xb8);
    uVar43 = *(undefined8 *)(param_1 + 0xb0);
    auVar81 = *(undefined1 (*) [16])(param_1 + 0xc0);
    auVar48 = *(undefined1 (*) [16])(param_1 + 0xd0);
    auVar51 = *(undefined1 (*) [16])(param_1 + 0xe0);
    do {
      lVar24 = *(long *)(lVar14 + 0x18);
      puVar16 = (undefined8 *)(lVar24 + (long)iVar34 * 0x90);
      fVar58 = (float)puVar16[1];
      fVar32 = (float)*puVar16;
      fVar54 = (float)((ulong)*puVar16 >> 0x20);
      fVar57 = *(float *)(puVar16 + 2);
      fVar52 = *(float *)((long)puVar16 + 0x14);
      fVar88 = *(float *)(puVar16 + 3);
      fVar60 = (float)((ulong)uVar43 >> 0x20);
      fVar50 = (float)((ulong)uVar40 >> 0x20);
      lVar23 = (long)iVar34;
      fVar27 = auVar51._0_4_ + (float)uVar43 * fVar32 + auVar81._0_4_ * fVar54 +
               auVar48._0_4_ * fVar58;
      fVar28 = auVar51._4_4_ + fVar60 * fVar32 + auVar81._4_4_ * fVar54 + auVar48._4_4_ * fVar58;
      fVar30 = auVar51._8_4_ + (float)uVar40 * fVar32 + auVar81._8_4_ * fVar54 +
               auVar48._8_4_ * fVar58;
      fVar32 = auVar51._12_4_ + fVar50 * fVar32 + auVar81._12_4_ * fVar54 + auVar48._12_4_ * fVar58;
      fVar54 = (auVar48._0_4_ * fVar88 +
               auVar81._0_4_ * fVar52 + auVar51._0_4_ + (float)uVar43 * fVar57) - fVar27;
      fVar58 = (auVar48._4_4_ * fVar88 + auVar81._4_4_ * fVar52 + auVar51._4_4_ + fVar60 * fVar57) -
               fVar28;
      fVar60 = (auVar48._8_4_ * fVar88 +
               auVar81._8_4_ * fVar52 + auVar51._8_4_ + (float)uVar40 * fVar57) - fVar30;
      fVar61 = fVar42 * fVar54 + fVar53 * fVar58 + auVar45._0_4_ * fVar60;
      if (1.1920929e-07 < fVar61 * fVar61) {
        fVar61 = -(fVar26 + auVar45._0_4_ * fVar30 + fVar42 * fVar27 + fVar53 * fVar28) / fVar61;
        fVar59 = -(fVar26 + auVar45._0_4_ * fVar30 + fVar42 * fVar27 + fVar53 * fVar28) /
                 (fVar42 * fVar54 + fVar53 * fVar58 + auVar45._0_4_ * fVar60);
        fVar62 = fVar27 + fVar54 * fVar61;
        fVar89 = fVar28 + fVar58 * fVar59;
        fVar86 = fVar30 + fVar60 * fVar61;
        fVar59 = fVar32 + ((auVar48._12_4_ * fVar88 +
                           auVar81._12_4_ * fVar52 + auVar51._12_4_ + fVar50 * fVar57) - fVar32) *
                          fVar59;
        fVar57 = fVar25 - fVar62;
        fVar52 = fVar49 - fVar89;
        fVar88 = fVar29 - fVar86;
        fVar50 = ((fVar11 - fVar41) - fVar31 * fVar46) - fVar59;
        fVar61 = *(float *)((long)param_3 + 0x14) - fVar89;
        uStack_78 = CONCAT44(fVar59,fVar86);
        local_80 = CONCAT44(fVar89,fVar62);
        auVar75._0_4_ = fVar57 * (*(float *)(param_3 + 2) - fVar62);
        auVar75._4_4_ = fVar52 * fVar61;
        auVar75._8_4_ = fVar88 * (*(float *)(param_3 + 3) - fVar86);
        auVar75._12_4_ = fVar50 * (*(float *)((long)param_3 + 0x1c) - fVar59);
        auVar44 = NEON_ext(auVar75,auVar75,8,1);
        if (auVar75._0_4_ + auVar75._4_4_ + auVar44._0_4_ <= 0.0) {
LAB_03057cf8:
          local_94 = 0;
          fVar57 = SQRT(fVar88 * fVar88 + fVar57 * fVar57 + fVar52 * fVar52);
          goto LAB_03057d10;
        }
        if ((*(byte *)(lVar24 + lVar23 * 0x90 + 0x80) >> 4 & 1) != 0) {
          iVar37 = -(uint)(ABS(*(float *)(param_3 + 2) - fVar62) <= 1e-05);
          iVar39 = -(uint)(ABS(fVar61) <= 1e-05);
          iVar69 = -(uint)(ABS(*(float *)(param_3 + 3) - fVar86) <= 1e-05);
          if (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                       (byte)((uint)iVar69 >> 0x18),
                       CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                                (byte)((uint)iVar69 >> 0x10),
                                CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar37 >> 8) &
                                         (byte)((uint)iVar69 >> 8),
                                         (byte)iVar39 & (byte)iVar37 & (byte)iVar69))) != 0)
          goto LAB_03057cf8;
        }
        fVar57 = auVar66._0_4_ * fVar57;
        fVar52 = auVar66._4_4_ * fVar52;
        fVar50 = auVar66._12_4_ * fVar50;
        auVar4._4_4_ = fVar52;
        auVar4._0_4_ = fVar57;
        auVar4._8_4_ = auVar66._8_4_ * fVar88;
        auVar4._12_4_ = fVar50;
        auVar5._4_4_ = fVar52;
        auVar5._0_4_ = fVar57;
        auVar5._8_4_ = auVar66._8_4_ * fVar88;
        auVar5._12_4_ = fVar50;
        auVar44 = NEON_ext(auVar4,auVar5,8,1);
        if (auVar44._0_4_ + fVar57 + fVar52 <= 0.0) goto LAB_030578f8;
      }
      else {
LAB_030578f8:
        if (*(float *)(param_3 + 8) == 0.0) {
          return;
        }
        if ((param_2 & 1) == 0) {
          return;
        }
        iVar34 = -(uint)(fVar54 == 0.0);
        iVar37 = -(uint)(fVar58 == 0.0);
        iVar39 = -(uint)(fVar60 == 0.0);
        fVar57 = *(float *)(param_1 + 0x10);
        fVar52 = *(float *)(param_1 + 0x14);
        fVar88 = *(float *)(param_1 + 0x18);
        fVar50 = *(float *)(param_1 + 0x1c);
        fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                 CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                          ~(byte)((uint)iVar34 >> 0x10),
                                          CONCAT11((byte)((uint)fVar54 >> 8) &
                                                   ~(byte)((uint)iVar34 >> 8),
                                                   SUB41(fVar54,0) & ~(byte)iVar34)));
        fVar60 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar60 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar60,0) & ~(byte)iVar39)));
        auVar47._0_4_ = fVar54 * fVar54;
        fVar58 = (float)(CONCAT17((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                                  CONCAT16((byte)((uint)fVar58 >> 0x10) &
                                           ~(byte)((uint)iVar37 >> 0x10),
                                           CONCAT15((byte)((uint)fVar58 >> 8) &
                                                    ~(byte)((uint)iVar37 >> 8),
                                                    CONCAT14(SUB41(fVar58,0) & ~(byte)iVar37,fVar54)
                                                   ))) >> 0x20);
        auVar47._4_4_ = fVar58 * fVar58;
        auVar47._8_4_ = fVar60 * fVar60;
        auVar47._12_4_ = 0x3f800000;
        auVar55._0_4_ = fVar54 * fVar57;
        auVar55._4_4_ = fVar58 * fVar52;
        auVar55._8_4_ = fVar60 * fVar88;
        auVar55._12_4_ = fVar50 * 1.0;
        auVar44 = NEON_ext(auVar47,auVar47,8,1);
        auVar56 = NEON_ext(auVar55,auVar55,8,1);
        fVar61 = auVar44._0_4_ + auVar47._0_4_ + auVar47._4_4_;
        fVar59 = auVar56._0_4_ + auVar55._0_4_ + auVar55._4_4_;
        fVar62 = fVar61 - fVar59 * fVar59;
        fVar61 = fVar61 - fVar59 * fVar59;
        if (fVar62 < 1.1920929e-07) {
          return;
        }
        auVar44 = *(undefined1 (*) [16])(param_3 + 4);
        fVar89 = auVar44._0_4_;
        fVar63 = fVar27 - fVar89;
        fVar86 = auVar44._4_4_;
        fVar67 = fVar28 - fVar86;
        fVar90 = auVar44._8_4_;
        fVar68 = fVar30 - fVar90;
        fVar35 = auVar44._12_4_;
        auVar71._0_4_ = fVar54 * fVar63;
        auVar71._4_4_ = fVar58 * fVar67;
        auVar71._8_4_ = fVar60 * fVar68;
        auVar71._12_4_ = (fVar32 - fVar35) * 1.0;
        auVar80._0_4_ = fVar57 * fVar63;
        auVar80._4_4_ = fVar52 * fVar67;
        auVar80._8_4_ = fVar88 * fVar68;
        auVar80._12_4_ = fVar50 * (fVar32 - fVar35);
        auVar56 = NEON_ext(auVar71,auVar71,8,1);
        auVar81 = NEON_ext(auVar80,auVar80,8,1);
        fVar70 = auVar56._0_4_ + auVar71._0_4_ + auVar71._4_4_;
        fVar76 = auVar81._0_4_ + auVar80._0_4_ + auVar80._4_4_;
        fVar64 = fVar70 - fVar76 * fVar59;
        fVar70 = fVar70 - fVar76 * fVar59;
        auVar44 = NEON_ext(auVar44,auVar44,8,1);
        fVar77 = auVar44._4_4_ * auVar44._4_4_;
        fVar59 = fVar64 * fVar64 -
                 fVar62 * (((fVar68 * fVar68 + fVar63 * fVar63 + fVar67 * fVar67) - fVar76 * fVar76)
                          - fVar77);
        if (fVar59 < 0.0) {
          return;
        }
        fVar59 = SQRT(fVar59);
        fVar68 = SQRT(fVar70 * fVar70 -
                      fVar61 * (((fVar68 * fVar68 + fVar63 * fVar63 + fVar67 * fVar67) -
                                fVar76 * fVar76) - fVar77));
        uVar43 = NEON_fmov(0x3f800000,4);
        fVar63 = (float)uVar43;
        fVar67 = (float)((ulong)uVar43 >> 0x20);
        fVar61 = fVar67 / fVar61;
        fVar76 = (fVar63 / fVar62) * -(fVar64 + fVar59);
        fVar77 = fVar61 * -(fVar70 + fVar68);
        uVar40 = CONCAT44(fVar61 * (fVar68 - fVar70),(fVar63 / fVar62) * (fVar59 - fVar64));
        uVar43 = NEON_fmin(CONCAT44(fVar77,fVar76),uVar40,4);
        fVar61 = (float)uVar43;
        fVar59 = (float)((ulong)uVar43 >> 0x20);
        uVar43 = NEON_fmax(CONCAT44(fVar77,fVar76),uVar40,4);
        fVar62 = (fVar27 + fVar54 * fVar61) - fVar89;
        fVar68 = (fVar28 + fVar58 * fVar59) - fVar86;
        fVar78 = (fVar30 + fVar60 * fVar61) - fVar90;
        fVar64 = fVar57 * fVar62;
        fVar76 = fVar52 * fVar68;
        fVar87 = fVar88 * fVar78;
        fVar70 = fVar64 + fVar76 + fVar87;
        fVar87 = fVar64 + fVar76 + fVar87;
        fVar62 = fVar62 - fVar57 * fVar70;
        fVar68 = fVar68 - fVar52 * fVar87;
        fVar78 = fVar78 - fVar88 * fVar70;
        fVar64 = fVar62 * fVar62 + fVar68 * fVar68 + fVar78 * fVar78;
        fVar70 = 0.0;
        fVar77 = 0.0;
        fVar79 = 0.0;
        fVar76 = 0.0;
        if (fVar64 != 0.0) {
          fVar64 = SQRT(fVar64);
          fVar76 = SQRT(fVar62 * fVar62 + fVar68 * fVar68 + fVar78 * fVar78);
          fVar70 = fVar62 / fVar64;
          fVar77 = fVar68 / fVar76;
          fVar79 = fVar78 / fVar64;
          fVar76 = (((fVar32 + fVar59 * 1.0) - fVar35) - fVar50 * fVar87) / fVar76;
        }
        uVar65 = CONCAT44(-(uint)(fVar59 < fVar67),-(uint)(fVar61 < fVar63)) &
                 CONCAT44(-(uint)(0.0 <= fVar59),-(uint)(0.0 <= fVar61)) &
                 CONCAT44(-(uint)(fVar59 <= (float)((ulong)uVar43 >> 0x20)),
                          -(uint)(fVar61 <= (float)uVar43));
        if (CONCAT13((byte)(uVar65 >> 0x38) | (byte)(uVar65 >> 0x18),
                     CONCAT12((byte)(uVar65 >> 0x30) | (byte)(uVar65 >> 0x10),
                              CONCAT11((byte)(uVar65 >> 0x28) | (byte)(uVar65 >> 8),
                                       (byte)(uVar65 >> 0x20) | (byte)uVar65))) == 0) {
          return;
        }
        fVar86 = *(float *)((long)param_3 + 0x14) - fVar86;
        fVar59 = fVar57 * (*(float *)(param_3 + 2) - fVar89);
        fVar64 = fVar52 * fVar86;
        fVar67 = fVar88 * (*(float *)(param_3 + 3) - fVar90);
        fVar62 = fVar59 + fVar64 + fVar67;
        fVar67 = fVar59 + fVar64 + fVar67;
        auVar82._0_4_ = (*(float *)(param_3 + 2) - fVar89) - fVar57 * fVar62;
        auVar82._4_4_ = fVar86 - fVar52 * fVar67;
        auVar82._8_4_ = (*(float *)(param_3 + 3) - fVar90) - fVar88 * fVar62;
        auVar82._12_4_ = (*(float *)((long)param_3 + 0x1c) - fVar35) - fVar50 * fVar67;
        fVar59 = fVar88 * fVar79 + fVar57 * fVar70 + fVar52 * fVar77;
        fVar62 = fVar88 * fVar79 + fVar57 * fVar70 + fVar52 * fVar77;
        auVar44 = NEON_ext(auVar82,auVar82,4,1);
        auVar72._0_4_ = fVar70 - fVar57 * fVar59;
        auVar72._4_4_ = fVar77 - fVar52 * fVar62;
        auVar72._8_4_ = fVar79 - fVar88 * fVar59;
        auVar72._12_4_ = fVar76 - fVar50 * fVar62;
        auVar56 = NEON_ext(auVar72,auVar72,4,1);
        auVar73._0_4_ = auVar82._0_4_ * auVar56._0_4_ - auVar72._0_4_ * auVar44._0_4_;
        auVar73._4_4_ = auVar82._4_4_ * auVar56._4_4_ - auVar72._4_4_ * auVar44._4_4_;
        auVar73._8_4_ = auVar82._8_4_ * auVar72._0_4_ - auVar72._8_4_ * auVar82._0_4_;
        auVar73._12_4_ = auVar82._12_4_ * auVar72._4_4_ - auVar72._12_4_ * auVar82._4_4_;
        auVar44 = NEON_ext(auVar73,auVar73,4,1);
        fVar59 = auVar72._0_4_ * auVar82._0_4_ + auVar72._4_4_ * auVar82._4_4_ +
                 auVar72._8_4_ * auVar82._8_4_;
        fVar62 = auVar72._0_4_ * auVar82._0_4_ + auVar72._4_4_ * auVar82._4_4_ +
                 auVar72._8_4_ * auVar82._8_4_;
        fVar57 = fVar57 * auVar44._0_4_;
        fVar52 = fVar52 * auVar44._4_4_;
        fVar50 = fVar57 + fVar52 + fVar88 * auVar73._0_4_;
        fVar57 = fVar57 + fVar52 + fVar88 * auVar73._0_4_;
        auVar83._0_4_ = ABS(fVar59);
        auVar83._4_4_ = ABS(fVar62);
        auVar83._8_4_ = ABS(fVar59);
        auVar83._12_4_ = ABS(fVar62);
        fVar52 = ABS(fVar50);
        fVar88 = ABS(fVar57);
        fVar89 = ABS(fVar50);
        fVar57 = ABS(fVar57);
        auVar74._0_4_ = -(uint)(fVar59 <= 0.0);
        auVar74._4_4_ = 0;
        auVar74._8_4_ = -(uint)(fVar59 <= 0.0);
        auVar74._12_4_ = -(uint)(fVar62 <= 0.0);
        auVar6._4_4_ = fVar88;
        auVar6._0_4_ = fVar52;
        auVar6._8_4_ = fVar89;
        auVar6._12_4_ = fVar57;
        auVar56 = NEON_fmax(auVar83,auVar6,4);
        auVar7._4_4_ = fVar88;
        auVar7._0_4_ = fVar52;
        auVar7._8_4_ = fVar89;
        auVar7._12_4_ = fVar57;
        auVar44 = NEON_fmin(auVar83,auVar7,4);
        auVar10._8_4_ = 0x800000;
        auVar10._0_8_ = 0x80000000800000;
        auVar10._12_4_ = 0x800000;
        auVar56 = NEON_fmax(auVar56,auVar10,4);
        auVar84._0_4_ = -(uint)(auVar83._0_4_ < fVar52);
        auVar84._4_4_ = -(uint)(auVar83._4_4_ < fVar88);
        auVar84._8_4_ = -(uint)(auVar83._8_4_ < fVar89);
        auVar84._12_4_ = -(uint)(auVar83._12_4_ < fVar57);
        fVar57 = auVar44._0_4_ / auVar56._0_4_;
        fVar52 = auVar44._4_4_ / auVar56._4_4_;
        fVar88 = auVar44._8_4_ / auVar56._8_4_;
        fVar59 = auVar44._12_4_ / auVar56._12_4_;
        fVar62 = fVar57 * fVar57;
        fVar89 = fVar52 * fVar52;
        fVar86 = fVar88 * fVar88;
        fVar90 = fVar59 * fVar59;
        auVar85._0_4_ =
             fVar57 + (fVar62 * (fVar62 + -1.0048817) + 3.768408) *
                      (fVar62 * (fVar62 + -3.8319519) + 5.503148) *
                      fVar57 * fVar62 * (fVar62 * 0.0028662258 + -0.007186844) *
                      (fVar62 * (fVar62 + 1.7041799) + 2.2365003);
        auVar85._4_4_ =
             fVar52 + (fVar89 * (fVar89 + -1.0048817) + 3.768408) *
                      (fVar89 * (fVar89 + -3.8319519) + 5.503148) *
                      fVar52 * fVar89 * (fVar89 * 0.0028662258 + -0.007186844) *
                      (fVar89 * (fVar89 + 1.7041799) + 2.2365003);
        auVar85._8_4_ =
             fVar88 + (fVar86 * (fVar86 + -1.0048817) + 3.768408) *
                      (fVar86 * (fVar86 + -3.8319519) + 5.503148) *
                      fVar88 * fVar86 * (fVar86 * 0.0028662258 + -0.007186844) *
                      (fVar86 * (fVar86 + 1.7041799) + 2.2365003);
        auVar85._12_4_ =
             fVar59 + (fVar90 * (fVar90 + -1.0048817) + 3.768408) *
                      (fVar90 * (fVar90 + -3.8319519) + 5.503148) *
                      fVar59 * fVar90 * (fVar90 * 0.0028662258 + -0.007186844) *
                      (fVar90 * (fVar90 + 1.7041799) + 2.2365003);
        auVar8._4_4_ = 1.5707964 - auVar85._4_4_;
        auVar8._0_4_ = 1.5707964 - auVar85._0_4_;
        auVar8._8_4_ = 1.5707964 - auVar85._8_4_;
        auVar8._12_4_ = 1.5707964 - auVar85._12_4_;
        auVar85 = auVar85 ^ (auVar85 ^ auVar8) & auVar84;
        auVar9._4_4_ = 0;
        auVar9._0_4_ = 3.1415927 - auVar85._0_4_;
        auVar9._8_4_ = 0.0 - auVar85._8_4_;
        auVar9._12_4_ = 0.0 - auVar85._12_4_;
        auVar85 = auVar85 ^ (auVar85 ^ auVar9) & auVar74;
        fVar52 = (float)CONCAT13((byte)(-(uint)(fVar50 < 0.0) >> 0x18) & 0x80 ^ auVar85[3],
                                 auVar85._0_3_);
        fVar57 = fVar52 / *(float *)(param_3 + 8);
        bVar12 = false;
        bVar13 = true;
        if (0.0 <= fVar57) {
          bVar12 = false;
          bVar13 = true;
          if (!NAN(fVar57)) {
            bVar12 = fVar57 == 1.0;
            bVar13 = 1.0 <= fVar57;
          }
        }
        if (bVar13 && !bVar12) {
          return;
        }
        fVar63 = (float)((uint)fVar63 ^
                        ((uint)fVar63 ^ (uint)fVar61) & ((int)uVar65 << 0x1f) >> 0x1f);
        local_94 = 1;
        uStack_78 = CONCAT44(fVar32 + fVar63 * fVar63,fVar30 + fVar60 * fVar63);
        local_80 = CONCAT44(fVar28 + fVar58 * fVar63,fVar27 + fVar54 * fVar63);
        fVar57 = SQRT(fVar38 * fVar38 + fVar33 * fVar33 + fVar36 * fVar36) + ABS(fVar35 * fVar52);
LAB_03057d10:
        uVar65 = FUN_0307878c(lVar24 + lVar23 * 0x90 + 0x70,*(undefined8 *)(param_1 + 0x100),0);
        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x38) +
                                    (uVar65 >> 0x16 & 0x3ff) * 0x100) + 0x20);
        iVar34 = *(int *)(lVar14 + 0x30);
        uVar21 = (uint)uVar65 & 0x3fffff;
        uVar65 = (ulong)uVar21;
        uVar19 = uVar21 - iVar34;
        if ((int)uVar21 < iVar34) {
          uVar19 = uVar21;
          if ((*(int *)(lVar14 + 0x78) == 0) ||
             (uVar19 = *(uint *)(*(long *)(lVar14 + 0x70) + uVar65 * 4), uVar19 != 0xffffffff)) {
            lVar22 = *(long *)(lVar14 + 0xc0);
            goto LAB_03057d7c;
          }
          lVar22 = *(long *)(lVar14 + 0x28) + uVar65 * 0x14;
        }
        else {
          lVar22 = *(long *)(lVar14 + 0xe0);
LAB_03057d7c:
          lVar22 = lVar22 + (long)(int)uVar19 * 0x14;
        }
        uVar19 = *(uint *)(lVar22 + 0xc);
        if (((*(byte *)(lVar22 + 0x10) >> 6 & 1) == 0) && (uVar19 != 0xffffffff)) {
          uVar19 = uVar19 & 0x3fffff | *(int *)(lVar14 + 0x17c) << 0x16;
        }
        uVar20 = uVar21 - iVar34;
        if ((int)uVar21 < iVar34) {
          if (*(int *)(lVar14 + 0x78) == 0) {
            uVar20 = uVar21;
LAB_03057df4:
            lVar22 = *(long *)(lVar14 + 0xc0);
            goto LAB_03057df8;
          }
          uVar20 = *(uint *)(*(long *)(lVar14 + 0x70) + uVar65 * 4);
          if (uVar20 != 0xffffffff) goto LAB_03057df4;
          lVar22 = *(long *)(lVar14 + 0x28) + uVar65 * 0x14;
        }
        else {
          lVar22 = *(long *)(lVar14 + 0xe0);
LAB_03057df8:
          lVar22 = lVar22 + (long)(int)uVar20 * 0x14;
        }
        uVar21 = *(uint *)(lVar22 + 8);
        if (((*(byte *)(lVar22 + 0x10) >> 6 & 1) == 0) && (uVar21 != 0xffffffff)) {
          uVar21 = uVar21 & 0x3fffff | *(int *)(lVar14 + 0x17c) << 0x16;
        }
        uVar20 = uVar19 & 0x3fffff;
        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x38) +
                                    (ulong)(uVar19 >> 0x16) * 0x100) + 0x20);
        iVar34 = *(int *)(lVar14 + 0x50);
        uVar18 = uVar20 - *(int *)(lVar14 + 0x20);
        if ((int)uVar20 < *(int *)(lVar14 + 0x20)) {
          if (*(int *)(lVar14 + 0x98) == 0) {
            uVar18 = uVar20;
          }
          else {
            uVar18 = *(uint *)(*(long *)(lVar14 + 0x90) + (ulong)uVar20 * 4);
            if (uVar18 == 0xffffffff) {
              lVar14 = *(long *)(lVar14 + 0x48);
              uVar18 = uVar20;
              goto LAB_03057e70;
            }
          }
          lVar14 = *(long *)(lVar14 + 0x120);
        }
        else {
          lVar14 = *(long *)(lVar14 + 0x140);
        }
LAB_03057e70:
        piVar2 = (int *)(lVar14 + (long)(int)(iVar34 * uVar18) * 4);
        piVar3 = piVar2 + iVar34;
        if ((*param_1 == '\0') &&
           (piVar15 = *(int **)(param_1 + 0x98),
           (long)piVar3 - (long)piVar2 == *(long *)(param_1 + 0xa0) - (long)piVar15)) {
          if (piVar2 != piVar3) {
            lVar14 = (long)iVar34 << 2;
            piVar17 = piVar2;
            do {
              if (*piVar17 != *piVar15) goto LAB_03057ec8;
              piVar17 = piVar17 + 1;
              piVar15 = piVar15 + 1;
              lVar14 = lVar14 + -4;
            } while (lVar14 != 0);
          }
        }
        else {
LAB_03057ec8:
          iVar34 = *(int *)(param_3 + 0xc);
          lVar14 = (long)iVar34;
          if ((int)(*(uint *)((long)param_3 + 100) & 0x7fffffff) <= iVar34) {
            FUN_0305870c(param_3 + 0xb,lVar14 + 1);
            iVar34 = *(int *)(param_3 + 0xc);
          }
          puVar16 = (undefined8 *)(param_3[0xb] + (long)iVar34 * 0x30);
          *(int *)(param_3 + 0xc) = (int)(lVar14 + 1);
          puVar16[1] = uStack_78;
          *puVar16 = local_80;
          *(undefined4 *)((long)puVar16 + 0x14) = local_94;
          *(uint *)(puVar16 + 3) = uVar19;
          *(float *)(puVar16 + 2) = fVar57;
          *(uint *)((long)puVar16 + 0x1c) = uVar21;
          puVar16[4] = piVar2;
          puVar16[5] = piVar3;
          *(int **)(param_1 + 0x98) = piVar2;
          *(int **)(param_1 + 0xa0) = piVar3;
        }
        lVar24 = lVar24 + lVar23 * 0x90;
        lVar14 = *(long *)(param_1 + 0xf8);
        fVar86 = (float)*(undefined8 *)(param_1 + 0xb8);
        fVar90 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
        fVar62 = (float)*(undefined8 *)(param_1 + 0xb0);
        fVar89 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
        fVar76 = (float)*(undefined8 *)(lVar24 + 0x58);
        fVar70 = (float)*(undefined8 *)(lVar24 + 0x50);
        fVar68 = (float)((ulong)*(undefined8 *)(lVar24 + 0x50) >> 0x20);
        fVar57 = *(float *)(lVar24 + 0x60);
        fVar52 = *(float *)(lVar24 + 100);
        fVar88 = *(float *)(lVar24 + 0x68);
        fVar35 = (float)*(undefined8 *)(param_1 + 0xc0);
        fVar63 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
        fVar64 = (float)*(undefined8 *)(param_1 + 200);
        fVar67 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
        fVar32 = *(float *)(lVar24 + 0x30);
        fVar27 = *(float *)(lVar24 + 0x34);
        fVar54 = *(float *)(lVar24 + 0x38);
        fVar28 = *(float *)(lVar24 + 0x40);
        fVar58 = *(float *)(lVar24 + 0x44);
        fVar30 = *(float *)(lVar24 + 0x48);
        iVar34 = *(int *)(param_1 + 0xa8);
        fVar60 = *(float *)(param_1 + 0xd0);
        fVar50 = *(float *)(param_1 + 0xd4);
        fVar61 = *(float *)(param_1 + 0xd8);
        fVar59 = *(float *)(param_1 + 0xdc);
        uVar43 = CONCAT44(fVar89 * fVar32 + fVar63 * fVar27 + fVar50 * fVar54,
                          fVar62 * fVar32 + fVar35 * fVar27 + fVar60 * fVar54);
        uVar40 = CONCAT44(fVar90 * fVar32 + fVar67 * fVar27 + fVar59 * fVar54,
                          fVar86 * fVar32 + fVar64 * fVar27 + fVar61 * fVar54);
        auVar81._0_8_ =
             CONCAT44(fVar50 * fVar30 + fVar89 * fVar28 + fVar63 * fVar58,
                      fVar60 * fVar30 + fVar62 * fVar28 + fVar35 * fVar58);
        auVar81._8_4_ = fVar61 * fVar30 + fVar86 * fVar28 + fVar64 * fVar58;
        auVar81._12_4_ = fVar59 * fVar30 + fVar90 * fVar28 + fVar67 * fVar58;
        auVar48._0_8_ =
             CONCAT44(fVar50 * fVar76 + fVar89 * fVar70 + fVar63 * fVar68,
                      fVar60 * fVar76 + fVar62 * fVar70 + fVar35 * fVar68);
        auVar48._8_4_ = fVar61 * fVar76 + fVar86 * fVar70 + fVar64 * fVar68;
        auVar48._12_4_ = fVar59 * fVar76 + fVar90 * fVar70 + fVar67 * fVar68;
        auVar51._0_8_ =
             CONCAT44(fVar50 * fVar88 +
                      fVar63 * fVar52 + *(float *)(param_1 + 0xe4) + fVar89 * fVar57,
                      fVar60 * fVar88 +
                      fVar35 * fVar52 + *(float *)(param_1 + 0xe0) + fVar62 * fVar57);
        auVar51._8_4_ =
             fVar61 * fVar88 + fVar64 * fVar52 + *(float *)(param_1 + 0xe8) + fVar86 * fVar57;
        auVar51._12_4_ =
             fVar59 * fVar88 + fVar67 * fVar52 + *(float *)(param_1 + 0xec) + fVar90 * fVar57;
        *(undefined8 *)(param_1 + 0xb8) = uVar40;
        *(undefined8 *)(param_1 + 0xb0) = uVar43;
        *(long *)(param_1 + 200) = auVar81._8_8_;
        *(undefined8 *)(param_1 + 0xc0) = auVar81._0_8_;
        *(long *)(param_1 + 0xd8) = auVar48._8_8_;
        *(undefined8 *)(param_1 + 0xd0) = auVar48._0_8_;
        *(long *)(param_1 + 0xe8) = auVar51._8_8_;
        *(undefined8 *)(param_1 + 0xe0) = auVar51._0_8_;
      }
      iVar34 = iVar34 + 1;
      *(int *)(param_1 + 0xa8) = iVar34;
    } while (iVar34 < *(int *)(lVar14 + 0x20));
  }
  return;
}


