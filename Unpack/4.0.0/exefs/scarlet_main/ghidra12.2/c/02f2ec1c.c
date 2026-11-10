/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2ec1c; name: FUN_02f2ec1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2ec1c(undefined1 param_1 [16],long param_2,long param_3,int param_4,int param_5,
                 long param_6,long *param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [14];
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 extraout_q0 [16];
  float fVar22;
  undefined1 extraout_q0_00 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  float fVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  float fVar67;
  int iVar68;
  int iVar69;
  undefined8 uVar65;
  float fVar70;
  undefined8 uVar66;
  int iVar71;
  float fVar72;
  float fVar73;
  byte bVar74;
  byte bVar76;
  byte bVar77;
  int iVar75;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  int iVar106;
  int iVar107;
  undefined8 uVar108;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (param_7 != (long *)0x0) {
    lVar15 = *param_7;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      param_1 = (**(code **)(lVar15 + 0x18))("SubIntegrate",0xc,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar17 = (undefined8 *)param_7[2];
    uVar12 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= (ulong)param_7[3]) && (param_7[2] = uVar12, puVar17 != (undefined8 *)0x0)) {
      *puVar17 = "TtSubIntegrate";
      uVar11 = nn::os::GetSystemTick();
      puVar17[1] = uVar11;
      param_1 = extraout_q0;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar17 = (undefined8 *)param_7[2];
      uVar12 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= (ulong)param_7[3]) && (param_7[2] = uVar12, puVar17 != (undefined8 *)0x0)) {
        *puVar17 = &DAT_03c4e575;
        puVar17[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
  }
  uVar10 = _UNK_03cabeb8;
  uVar11 = _DAT_03cabeb0;
  if (0 < param_5) {
    pauVar18 = (undefined1 (*) [16])(*(long *)(param_3 + 0x90) + (long)param_4 * 0x20);
    lVar15 = *(long *)(param_3 + 0x10);
    uVar108 = NEON_fmov(0x3f800000,4);
    iVar19 = 0;
    puVar17 = (undefined8 *)(*(long *)(param_3 + 0x68) + (long)param_4 * 0x20);
    do {
      fVar27 = (float)((ulong)puVar17[1] >> 0x20);
      auVar24 = *pauVar18;
      fVar22 = auVar24._12_4_;
      fVar64 = auVar24._0_4_;
      fVar26 = (float)*puVar17 - fVar64;
      fVar70 = auVar24._4_4_;
      fVar29 = (float)((ulong)*puVar17 >> 0x20) - fVar70;
      fVar72 = auVar24._8_4_;
      fVar31 = (float)puVar17[1] - fVar72;
      fVar23 = (float)*(undefined8 *)pauVar18[1];
      fVar28 = (float)puVar17[2] - fVar23;
      bVar80 = SUB41(fVar28,0);
      bVar82 = (byte)((uint)fVar28 >> 8);
      bVar84 = (byte)((uint)fVar28 >> 0x10);
      bVar35 = (byte)((uint)fVar28 >> 0x18);
      fVar25 = (float)((ulong)*(undefined8 *)pauVar18[1] >> 0x20);
      fVar20 = (float)((ulong)puVar17[2] >> 0x20) - fVar25;
      bVar37 = SUB41(fVar20,0);
      bVar39 = (byte)((uint)fVar20 >> 8);
      bVar41 = (byte)((uint)fVar20 >> 0x10);
      bVar43 = (byte)((uint)fVar20 >> 0x18);
      fVar21 = fVar27 - fVar22;
      bVar45 = SUB41(fVar21,0);
      bVar47 = (byte)((uint)fVar21 >> 8);
      bVar49 = (byte)((uint)fVar21 >> 0x10);
      bVar51 = (byte)((uint)fVar21 >> 0x18);
      fVar27 = fVar27 - fVar22;
      bVar53 = SUB41(fVar27,0);
      bVar55 = (byte)((uint)fVar27 >> 8);
      bVar57 = (byte)((uint)fVar27 >> 0x10);
      bVar59 = (byte)((uint)fVar27 >> 0x18);
      if (puVar17[3] == 0) {
        fVar61 = (float)*(undefined8 *)(lVar15 + 0xb0);
        fVar67 = (float)((ulong)*(undefined8 *)(lVar15 + 0xb0) >> 0x20);
        fVar73 = (float)*(undefined8 *)(lVar15 + 0xb8);
        fVar23 = fVar23 + fVar28 * fVar61;
        uVar79 = SUB41(fVar23,0);
        uVar81 = (undefined1)((uint)fVar23 >> 8);
        uVar83 = (undefined1)((uint)fVar23 >> 0x10);
        uVar85 = (undefined1)((uint)fVar23 >> 0x18);
        fVar25 = fVar25 + fVar20 * fVar67;
        uVar87 = SUB41(fVar25,0);
        uVar89 = (undefined1)((uint)fVar25 >> 8);
        uVar91 = (undefined1)((uint)fVar25 >> 0x10);
        uVar93 = (undefined1)((uint)fVar25 >> 0x18);
        fVar30 = fVar22 + fVar21 * fVar73;
        uVar95 = SUB41(fVar30,0);
        uVar97 = (undefined1)((uint)fVar30 >> 8);
        uVar99 = (undefined1)((uint)fVar30 >> 0x10);
        uVar101 = (undefined1)((uint)fVar30 >> 0x18);
        fVar22 = fVar22 + fVar27 * (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20);
        uVar102 = SUB41(fVar22,0);
        uVar103 = (undefined1)((uint)fVar22 >> 8);
        uVar104 = (undefined1)((uint)fVar22 >> 0x10);
        uVar105 = (undefined1)((uint)fVar22 >> 0x18);
        fVar64 = fVar64 + fVar26 * fVar61;
        fVar70 = fVar70 + fVar29 * fVar67;
        uVar66 = CONCAT44(fVar70,fVar64);
        fVar72 = fVar72 + fVar31 * fVar73;
        fVar28 = fVar28 + fVar23;
        uVar32 = SUB41(fVar28,0);
        uVar33 = (undefined1)((uint)fVar28 >> 8);
        uVar34 = (undefined1)((uint)fVar28 >> 0x10);
        uVar36 = (undefined1)((uint)fVar28 >> 0x18);
        fVar20 = fVar20 + fVar25;
        uVar38 = SUB41(fVar20,0);
        uVar40 = (undefined1)((uint)fVar20 >> 8);
        uVar42 = (undefined1)((uint)fVar20 >> 0x10);
        uVar44 = (undefined1)((uint)fVar20 >> 0x18);
        fVar21 = fVar21 + fVar30;
        uVar46 = SUB41(fVar21,0);
        uVar48 = (undefined1)((uint)fVar21 >> 8);
        uVar50 = (undefined1)((uint)fVar21 >> 0x10);
        uVar52 = (undefined1)((uint)fVar21 >> 0x18);
        fVar27 = fVar27 + fVar22;
        uVar54 = SUB41(fVar27,0);
        uVar56 = (undefined1)((uint)fVar27 >> 8);
        uVar58 = (undefined1)((uint)fVar27 >> 0x10);
        uVar60 = (undefined1)((uint)fVar27 >> 0x18);
        uVar65 = CONCAT44(fVar29 + fVar70,fVar26 + fVar64);
        fVar31 = fVar31 + fVar72;
      }
      else {
        uVar12 = (ulong)*(ushort *)(pauVar18[1] + 0xc);
        fVar61 = fVar21 * fVar21 + fVar28 * fVar28 + fVar20 * fVar20;
        fVar67 = fVar21 * fVar21 + fVar28 * fVar28 + fVar20 * fVar20;
        fVar30 = *(float *)(param_6 + uVar12 * 0x70 + 0x20);
        if (fVar61 < fVar30 * fVar30) {
          iVar62 = -(uint)(fVar61 == 0.0);
          bVar80 = ~(byte)((uint)iVar62 >> 8);
          bVar82 = ~(byte)((uint)iVar62 >> 0x10);
          bVar84 = ~(byte)((uint)iVar62 >> 0x18);
          iVar68 = 0x5f375a86 - CONCAT13((char)((int)fVar67 >> 0x19),(int3)((int)fVar67 >> 1));
          uVar6 = CONCAT17((char)((uint)iVar68 >> 0x18),
                           CONCAT16((char)((uint)iVar68 >> 0x10),
                                    CONCAT15((char)((uint)iVar68 >> 8),
                                             CONCAT14((char)iVar68,
                                                      0x5f375a86 -
                                                      CONCAT13((char)((int)fVar61 >> 0x19),
                                                               (int3)((int)fVar61 >> 1)))))) &
                  CONCAT17(bVar84,CONCAT16(bVar82,CONCAT15(bVar80,CONCAT14(~(byte)iVar62,
                                                                           CONCAT13(bVar84,CONCAT12(
                                                  bVar82,CONCAT11(bVar80,~(byte)iVar62)))))));
          fVar73 = *(float *)(param_6 + uVar12 * 0x70 + 0x24);
          fVar30 = (float)((ulong)uVar108 >> 0x20) -
                   (float)(uVar6 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20) * fVar73;
          uVar65 = NEON_fmax(CONCAT17((char)((uint)fVar30 >> 0x18),
                                      CONCAT16((char)((uint)fVar30 >> 0x10),
                                               CONCAT15((char)((uint)fVar30 >> 8),
                                                        CONCAT14(SUB41(fVar30,0),
                                                                 (float)uVar108 -
                                                                 (float)uVar6 *
                                                                 (float)*(undefined8 *)
                                                                         (lVar15 + 0x38) * fVar73)))
                                     ),0,4);
          fVar28 = fVar28 * (float)uVar65;
          bVar80 = SUB41(fVar28,0);
          bVar82 = (byte)((uint)fVar28 >> 8);
          bVar84 = (byte)((uint)fVar28 >> 0x10);
          bVar35 = (byte)((uint)fVar28 >> 0x18);
          fVar28 = (float)((ulong)uVar65 >> 0x20);
          fVar20 = fVar20 * fVar28;
          bVar37 = SUB41(fVar20,0);
          bVar39 = (byte)((uint)fVar20 >> 8);
          bVar41 = (byte)((uint)fVar20 >> 0x10);
          bVar43 = (byte)((uint)fVar20 >> 0x18);
          fVar21 = fVar21 * (float)uVar65;
          bVar45 = SUB41(fVar21,0);
          bVar47 = (byte)((uint)fVar21 >> 8);
          bVar49 = (byte)((uint)fVar21 >> 0x10);
          bVar51 = (byte)((uint)fVar21 >> 0x18);
          fVar27 = fVar27 * fVar28;
          bVar53 = SUB41(fVar27,0);
          bVar55 = (byte)((uint)fVar27 >> 8);
          bVar57 = (byte)((uint)fVar27 >> 0x10);
          bVar59 = (byte)((uint)fVar27 >> 0x18);
        }
        fVar28 = *(float *)(param_6 + uVar12 * 0x70 + 0x10);
        iVar62 = -(uint)(fVar61 <= fVar28 * fVar28);
        iVar68 = -(uint)(fVar67 <= fVar28 * fVar28);
        if (CONCAT13((byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar62 >> 0x18),
                     CONCAT12((byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar62 >> 0x10),
                              CONCAT11((byte)((uint)iVar68 >> 8) | (byte)((uint)iVar62 >> 8),
                                       (byte)iVar68 | (byte)iVar62))) == 0) {
          iVar63 = -(uint)(0.0 <= (float)CONCAT13(bVar35,CONCAT12(bVar84,CONCAT11(bVar82,bVar80))));
          iVar69 = -(uint)(0.0 <= (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))));
          iVar71 = -(uint)(0.0 <= (float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45))));
          iVar75 = -(uint)(0.0 <= (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))));
          iVar62 = -(uint)((float)CONCAT13(bVar35,CONCAT12(bVar84,CONCAT11(bVar82,bVar80))) < 0.0);
          iVar68 = -(uint)((float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) < 0.0);
          iVar106 = -(uint)((float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45))) < 0.0);
          iVar107 = -(uint)((float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))) < 0.0);
          fVar20 = (float)CONCAT13(bVar35 & ((byte)((uint)iVar62 >> 0x18) |
                                            (byte)((uint)iVar63 >> 0x18)),
                                   CONCAT12(bVar84 & ((byte)((uint)iVar62 >> 0x10) |
                                                     (byte)((uint)iVar63 >> 0x10)),
                                            CONCAT11(bVar82 & ((byte)((uint)iVar62 >> 8) |
                                                              (byte)((uint)iVar63 >> 8)),
                                                     bVar80 & ((byte)iVar62 | (byte)iVar63))));
          fVar30 = (float)CONCAT13(bVar51 & ((byte)((uint)iVar106 >> 0x18) |
                                            (byte)((uint)iVar71 >> 0x18)),
                                   CONCAT12(bVar49 & ((byte)((uint)iVar106 >> 0x10) |
                                                     (byte)((uint)iVar71 >> 0x10)),
                                            CONCAT11(bVar47 & ((byte)((uint)iVar106 >> 8) |
                                                              (byte)((uint)iVar71 >> 8)),
                                                     bVar45 & ((byte)iVar106 | (byte)iVar71))));
          bVar74 = bVar53 & ((byte)iVar107 | (byte)iVar75);
          bVar76 = bVar55 & ((byte)((uint)iVar107 >> 8) | (byte)((uint)iVar75 >> 8));
          bVar77 = bVar57 & ((byte)((uint)iVar107 >> 0x10) | (byte)((uint)iVar75 >> 0x10));
          bVar78 = bVar59 & ((byte)((uint)iVar107 >> 0x18) | (byte)((uint)iVar75 >> 0x18));
          fVar21 = (float)(CONCAT17(bVar43 & ((byte)((uint)iVar68 >> 0x18) |
                                             (byte)((uint)iVar69 >> 0x18)),
                                    CONCAT16(bVar41 & ((byte)((uint)iVar68 >> 0x10) |
                                                      (byte)((uint)iVar69 >> 0x10)),
                                             CONCAT15(bVar39 & ((byte)((uint)iVar68 >> 8) |
                                                               (byte)((uint)iVar69 >> 8)),
                                                      CONCAT14(bVar37 & ((byte)iVar68 | (byte)iVar69
                                                                        ),fVar20)))) >> 0x20);
          fVar27 = fVar30 * fVar30 + fVar20 * fVar20 + fVar21 * fVar21;
          bVar45 = 0;
          bVar47 = 0;
          bVar49 = 0;
          bVar51 = 0;
          bVar53 = 0;
          bVar55 = 0;
          bVar57 = 0;
          bVar59 = 0;
          bVar80 = 0;
          bVar82 = 0;
          bVar84 = 0;
          bVar35 = 0;
          bVar37 = 0;
          bVar39 = 0;
          bVar41 = 0;
          bVar43 = 0;
          if (fVar27 != 0.0) {
            fVar27 = fVar28 / SQRT(fVar27);
            fVar28 = fVar28 / SQRT(fVar30 * fVar30 + fVar20 * fVar20 + fVar21 * fVar21);
            fVar20 = fVar20 * fVar27;
            bVar80 = SUB41(fVar20,0);
            bVar82 = (byte)((uint)fVar20 >> 8);
            bVar84 = (byte)((uint)fVar20 >> 0x10);
            bVar35 = (byte)((uint)fVar20 >> 0x18);
            fVar21 = fVar21 * fVar28;
            bVar37 = SUB41(fVar21,0);
            bVar39 = (byte)((uint)fVar21 >> 8);
            bVar41 = (byte)((uint)fVar21 >> 0x10);
            bVar43 = (byte)((uint)fVar21 >> 0x18);
            fVar20 = fVar30 * fVar27;
            bVar45 = SUB41(fVar20,0);
            bVar47 = (byte)((uint)fVar20 >> 8);
            bVar49 = (byte)((uint)fVar20 >> 0x10);
            bVar51 = (byte)((uint)fVar20 >> 0x18);
            fVar28 = (float)(CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar74,fVar30)
                                                                     ))) >> 0x20) *
                     (float)CONCAT13((char)((uint)fVar28 >> 0x18),
                                     CONCAT12((char)((uint)fVar28 >> 0x10),
                                              (short)(CONCAT15((char)((uint)fVar28 >> 8),
                                                               CONCAT14(SUB41(fVar28,0),fVar27)) >>
                                                     0x20)));
            bVar53 = SUB41(fVar28,0);
            bVar55 = (byte)((uint)fVar28 >> 8);
            bVar57 = (byte)((uint)fVar28 >> 0x10);
            bVar59 = (byte)((uint)fVar28 >> 0x18);
          }
        }
        uVar3 = *(undefined4 *)(param_6 + uVar12 * 0x70 + 0x14);
        uVar1 = *(ushort *)(pauVar18[1] + 0xe);
        uVar65 = NEON_fmin(CONCAT44(uVar3,uVar3),
                           CONCAT17((char)(uVar1 >> 8),CONCAT16((char)uVar1,(uint6)uVar1 << 0x10)),4
                          );
        fVar28 = (float)uVar65;
        fVar20 = (float)((ulong)uVar65 >> 0x20);
        iVar62 = -(uint)(fVar31 * fVar31 + fVar26 * fVar26 + fVar29 * fVar29 <= fVar28 * fVar28);
        iVar68 = -(uint)(fVar31 * fVar31 + fVar26 * fVar26 + fVar29 * fVar29 <= fVar20 * fVar20);
        if (CONCAT13((byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar62 >> 0x18),
                     CONCAT12((byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar62 >> 0x10),
                              CONCAT11((byte)((uint)iVar68 >> 8) | (byte)((uint)iVar62 >> 8),
                                       (byte)iVar68 | (byte)iVar62))) == 0) {
          iVar62 = -(uint)(0.0 <= fVar26);
          iVar68 = -(uint)(0.0 <= fVar29);
          iVar63 = -(uint)(0.0 <= fVar31);
          iVar69 = -(uint)(fVar26 < 0.0);
          iVar71 = -(uint)(fVar29 < 0.0);
          iVar75 = -(uint)(fVar31 < 0.0);
          bVar74 = SUB41(fVar26,0) & ((byte)iVar69 | (byte)iVar62);
          bVar76 = (byte)((uint)fVar26 >> 8) &
                   ((byte)((uint)iVar69 >> 8) | (byte)((uint)iVar62 >> 8));
          bVar77 = (byte)((uint)fVar26 >> 0x10) &
                   ((byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar62 >> 0x10));
          bVar78 = (byte)((uint)fVar26 >> 0x18) &
                   ((byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar62 >> 0x18));
          bVar86 = SUB41(fVar29,0) & ((byte)iVar71 | (byte)iVar68);
          bVar88 = (byte)((uint)fVar29 >> 8) &
                   ((byte)((uint)iVar71 >> 8) | (byte)((uint)iVar68 >> 8));
          bVar90 = (byte)((uint)fVar29 >> 0x10) &
                   ((byte)((uint)iVar71 >> 0x10) | (byte)((uint)iVar68 >> 0x10));
          bVar92 = (byte)((uint)fVar29 >> 0x18) &
                   ((byte)((uint)iVar71 >> 0x18) | (byte)((uint)iVar68 >> 0x18));
          bVar94 = SUB41(fVar31,0) & ((byte)iVar75 | (byte)iVar63);
          bVar96 = (byte)((uint)fVar31 >> 8) &
                   ((byte)((uint)iVar75 >> 8) | (byte)((uint)iVar63 >> 8));
          bVar98 = (byte)((uint)fVar31 >> 0x10) &
                   ((byte)((uint)iVar75 >> 0x10) | (byte)((uint)iVar63 >> 0x10));
          bVar100 = (byte)((uint)fVar31 >> 0x18) &
                    ((byte)((uint)iVar75 >> 0x18) | (byte)((uint)iVar63 >> 0x18));
          fVar27 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar74))) *
                   (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar74)));
          fVar30 = (float)CONCAT13(bVar92,CONCAT12(bVar90,CONCAT11(bVar88,bVar86))) *
                   (float)CONCAT13(bVar92,CONCAT12(bVar90,CONCAT11(bVar88,bVar86)));
          fVar61 = (float)CONCAT13(bVar100,CONCAT12(bVar98,CONCAT11(bVar96,bVar94))) *
                   (float)CONCAT13(bVar100,CONCAT12(bVar98,CONCAT11(bVar96,bVar94)));
          fVar21 = fVar61 + fVar27 + fVar30;
          fVar26 = 0.0;
          fVar29 = 0.0;
          fVar31 = 0.0;
          if (fVar21 != 0.0) {
            fVar28 = fVar28 / SQRT(fVar21);
            fVar26 = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar74))) * fVar28;
            fVar29 = (float)CONCAT13(bVar92,CONCAT12(bVar90,CONCAT11(bVar88,bVar86))) *
                     (fVar20 / SQRT(fVar61 + fVar27 + fVar30));
            fVar31 = (float)CONCAT13(bVar100,CONCAT12(bVar98,CONCAT11(bVar96,bVar94))) * fVar28;
          }
        }
        fVar20 = (float)*(undefined8 *)(lVar15 + 0xb0);
        fVar21 = (float)((ulong)*(undefined8 *)(lVar15 + 0xb0) >> 0x20);
        fVar27 = (float)*(undefined8 *)(lVar15 + 0xb8);
        fVar23 = fVar23 + (float)CONCAT13(bVar35,CONCAT12(bVar84,CONCAT11(bVar82,bVar80))) * fVar20;
        uVar79 = SUB41(fVar23,0);
        uVar81 = (undefined1)((uint)fVar23 >> 8);
        uVar83 = (undefined1)((uint)fVar23 >> 0x10);
        uVar85 = (undefined1)((uint)fVar23 >> 0x18);
        fVar25 = fVar25 + (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) * fVar21;
        uVar87 = SUB41(fVar25,0);
        uVar89 = (undefined1)((uint)fVar25 >> 8);
        uVar91 = (undefined1)((uint)fVar25 >> 0x10);
        uVar93 = (undefined1)((uint)fVar25 >> 0x18);
        fVar28 = fVar22 + (float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45))) * fVar27;
        uVar95 = SUB41(fVar28,0);
        uVar97 = (undefined1)((uint)fVar28 >> 8);
        uVar99 = (undefined1)((uint)fVar28 >> 0x10);
        uVar101 = (undefined1)((uint)fVar28 >> 0x18);
        fVar22 = fVar22 + (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))) *
                          (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20);
        uVar102 = SUB41(fVar22,0);
        uVar103 = (undefined1)((uint)fVar22 >> 8);
        uVar104 = (undefined1)((uint)fVar22 >> 0x10);
        uVar105 = (undefined1)((uint)fVar22 >> 0x18);
        fVar64 = fVar64 + fVar26 * fVar20;
        fVar70 = fVar70 + fVar29 * fVar21;
        uVar66 = CONCAT44(fVar70,fVar64);
        fVar72 = fVar72 + fVar31 * fVar27;
        auVar9._2_12_ = auVar24._4_12_;
        auVar9._0_2_ = *(undefined2 *)((long)puVar17 + 0x1e);
        fVar23 = (float)CONCAT13(bVar35,CONCAT12(bVar84,CONCAT11(bVar82,bVar80))) + fVar23;
        uVar32 = SUB41(fVar23,0);
        uVar33 = (undefined1)((uint)fVar23 >> 8);
        uVar34 = (undefined1)((uint)fVar23 >> 0x10);
        uVar36 = (undefined1)((uint)fVar23 >> 0x18);
        fVar25 = (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) + fVar25;
        uVar38 = SUB41(fVar25,0);
        uVar40 = (undefined1)((uint)fVar25 >> 8);
        uVar42 = (undefined1)((uint)fVar25 >> 0x10);
        uVar44 = (undefined1)((uint)fVar25 >> 0x18);
        fVar28 = (float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45))) + fVar28;
        uVar46 = SUB41(fVar28,0);
        uVar48 = (undefined1)((uint)fVar28 >> 8);
        uVar50 = (undefined1)((uint)fVar28 >> 0x10);
        uVar52 = (undefined1)((uint)fVar28 >> 0x18);
        fVar22 = (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))) + fVar22;
        uVar54 = SUB41(fVar22,0);
        uVar56 = (undefined1)((uint)fVar22 >> 8);
        uVar58 = (undefined1)((uint)fVar22 >> 0x10);
        uVar60 = (undefined1)((uint)fVar22 >> 0x18);
        uVar65 = CONCAT44(fVar29 + fVar70,fVar26 + fVar64);
        fVar31 = fVar31 + fVar72;
        if ((float)(auVar9._0_4_ << 0x10) != 0.0) {
          lVar13 = param_6 + uVar12 * 0x70;
          fVar20 = *(float *)(lVar13 + 8);
          lVar16 = *(long *)(param_2 + 0x40);
          uVar2 = *(uint *)(lVar13 + 4) | 2;
          fVar21 = *(float *)(lVar15 + 0x90) * fVar20;
          fVar26 = *(float *)(lVar15 + 0x94) * fVar20;
          fVar27 = *(float *)(lVar15 + 0x98) * fVar20;
          fVar20 = *(float *)(lVar15 + 0x9c) * fVar20;
          if ((*(uint *)(lVar16 + 0xb58) & uVar2) != 0) {
            lVar13 = 0;
            puVar14 = (undefined8 *)(lVar16 + 0xb68);
            fVar29 = (float)*(undefined8 *)(lVar15 + 0x40);
            fVar64 = (float)((ulong)*(undefined8 *)(lVar15 + 0x40) >> 0x20);
            auVar24._0_8_ = CONCAT44(fVar26 * fVar64,fVar21 * fVar29);
            auVar24._8_4_ = fVar27 * fVar29;
            auVar24._12_4_ = fVar20 * fVar64;
            uStack_88 = auVar24._8_8_;
            local_90 = auVar24._0_8_;
            do {
              if ((*(uint *)(puVar14 + -1) & uVar2) != 0) {
                (**(code **)(*(long *)*puVar14 + 0xa0))
                          ((long *)*puVar14,param_2,*(uint *)(pauVar18[1] + 8) & 0x7fffffff,
                           &local_90);
              }
              lVar13 = lVar13 + 1;
              puVar14 = puVar14 + 2;
            } while (lVar13 < *(int *)(lVar16 + 0xb5c));
            fVar27 = (float)*(undefined8 *)(lVar15 + 0x38);
            fVar21 = fVar27 * (float)local_90;
            fVar20 = (float)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20);
            fVar26 = fVar20 * local_90._4_4_;
            fVar27 = fVar27 * (float)uStack_88;
            fVar20 = fVar20 * uStack_88._4_4_;
          }
          fVar23 = fVar23 + fVar21;
          uVar32 = SUB41(fVar23,0);
          uVar33 = (undefined1)((uint)fVar23 >> 8);
          uVar34 = (undefined1)((uint)fVar23 >> 0x10);
          uVar36 = (undefined1)((uint)fVar23 >> 0x18);
          fVar25 = fVar25 + fVar26;
          uVar38 = SUB41(fVar25,0);
          uVar40 = (undefined1)((uint)fVar25 >> 8);
          uVar42 = (undefined1)((uint)fVar25 >> 0x10);
          uVar44 = (undefined1)((uint)fVar25 >> 0x18);
          fVar28 = fVar28 + fVar27;
          uVar46 = SUB41(fVar28,0);
          uVar48 = (undefined1)((uint)fVar28 >> 8);
          uVar50 = (undefined1)((uint)fVar28 >> 0x10);
          uVar52 = (undefined1)((uint)fVar28 >> 0x18);
          fVar22 = fVar22 + fVar20;
          uVar54 = SUB41(fVar22,0);
          uVar56 = (undefined1)((uint)fVar22 >> 8);
          uVar58 = (undefined1)((uint)fVar22 >> 0x10);
          uVar60 = (undefined1)((uint)fVar22 >> 0x18);
        }
      }
      auVar4[1] = uVar33;
      auVar4[0] = uVar32;
      auVar4[2] = uVar34;
      auVar4[3] = uVar36;
      auVar4[4] = uVar38;
      auVar4[5] = uVar40;
      auVar4[6] = uVar42;
      auVar4[7] = uVar44;
      auVar4[8] = uVar46;
      auVar4[9] = uVar48;
      auVar4[10] = uVar50;
      auVar4[0xb] = uVar52;
      auVar4[0xc] = uVar54;
      auVar4[0xd] = uVar56;
      auVar4[0xe] = uVar58;
      auVar4[0xf] = uVar60;
      auVar7._8_8_ = uVar10;
      auVar7._0_8_ = uVar11;
      param_1 = a64_TBL(ZEXT816(0),auVar4,auVar7);
      auVar5[1] = uVar81;
      auVar5[0] = uVar79;
      auVar5[2] = uVar83;
      auVar5[3] = uVar85;
      auVar5[4] = uVar87;
      auVar5[5] = uVar89;
      auVar5[6] = uVar91;
      auVar5[7] = uVar93;
      auVar5[8] = uVar95;
      auVar5[9] = uVar97;
      auVar5[10] = uVar99;
      auVar5[0xb] = uVar101;
      auVar5[0xc] = uVar102;
      auVar5[0xd] = uVar103;
      auVar5[0xe] = uVar104;
      auVar5[0xf] = uVar105;
      auVar8._8_8_ = uVar10;
      auVar8._0_8_ = uVar11;
      auVar24 = a64_TBL(ZEXT816(0),auVar5,auVar8);
      iVar19 = iVar19 + 1;
      puVar17[2] = CONCAT17(uVar44,CONCAT16(uVar42,CONCAT15(uVar40,CONCAT14(uVar38,CONCAT13(uVar36,
                                                  CONCAT12(uVar34,CONCAT11(uVar33,uVar32)))))));
      puVar17[1] = CONCAT44(param_1._12_4_,fVar31);
      *puVar17 = uVar65;
      *(ulong *)pauVar18[1] =
           CONCAT17(uVar93,CONCAT16(uVar91,CONCAT15(uVar89,CONCAT14(uVar87,CONCAT13(uVar85,CONCAT12(
                                                  uVar83,CONCAT11(uVar81,uVar79)))))));
      *(ulong *)(*pauVar18 + 8) = CONCAT44(auVar24._12_4_,fVar72);
      *(undefined8 *)*pauVar18 = uVar66;
      pauVar18 = pauVar18 + 2;
      puVar17 = puVar17 + 4;
    } while (iVar19 != param_5);
  }
  if (param_7 != (long *)0x0) {
    lVar15 = *param_7;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar17 = (undefined8 *)param_7[2];
      uVar12 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= (ulong)param_7[3]) && (param_7[2] = uVar12, puVar17 != (undefined8 *)0x0)) {
        *puVar17 = &DAT_03c4e575;
        puVar17[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
    puVar17 = (undefined8 *)param_7[2];
    uVar12 = (long)puVar17 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= (ulong)param_7[3]) && (param_7[2] = uVar12, puVar17 != (undefined8 *)0x0)) {
      *puVar17 = &DAT_03c2d363;
      uVar11 = nn::os::GetSystemTick();
      puVar17[1] = uVar11;
      param_1 = extraout_q0_00;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(param_1,*(undefined8 *)(lVar15 + 0x28));
    }
  }
  return;
}


