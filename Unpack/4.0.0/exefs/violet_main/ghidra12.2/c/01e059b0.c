/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e059b0; name: FUN_01e059b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e059b0(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
                 long *param_5)

{
  short *psVar1;
  undefined8 *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined3 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  short sVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  int *piVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float extraout_s0;
  undefined1 auVar34 [12];
  float extraout_var;
  undefined8 uVar33;
  float extraout_var_00;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  int iVar47;
  undefined1 auVar46 [16];
  float extraout_var_01;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar61;
  uint uVar62;
  undefined1 auVar63 [12];
  float fVar69;
  float fVar72;
  float fVar75;
  undefined1 auVar64 [16];
  float fVar70;
  uint uVar71;
  float fVar73;
  uint uVar74;
  uint uVar76;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  undefined6 uVar80;
  byte bVar88;
  float fVar85;
  byte bVar89;
  float fVar90;
  undefined1 auVar81 [12];
  float fVar86;
  float fVar87;
  float fVar91;
  float fVar92;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  int iVar93;
  int iVar96;
  int iVar97;
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  undefined1 auVar100 [16];
  int iVar101;
  int iVar103;
  int iVar104;
  int iVar105;
  undefined1 auVar102 [16];
  undefined8 uVar106;
  undefined1 auVar107 [16];
  int iVar108;
  int iVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  long local_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  
  if ((DAT_04837608 & 1) == 0) {
    uVar106 = param_3._8_8_;
    uVar33 = param_2._8_8_;
    iVar11 = __cxa_guard_acquire(&DAT_04837608);
    param_2._8_8_ = uVar33;
    param_3._8_8_ = uVar106;
    if (iVar11 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
      param_2._8_8_ = uVar33;
      param_3._8_8_ = uVar106;
    }
  }
  lVar15 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  lVar14 = *param_4;
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar18 = *(short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar18) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e05ba4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e05ba4:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar14 + 0x10) != 0) {
          plVar19 = (long *)(*(long *)(lVar14 + 0x10) + -0x28);
          lVar14 = (**(code **)(*plVar19 + 0x68))(plVar19);
          auVar9 = *(undefined1 (*) [16])(lVar14 + 0x30);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0x68))(plVar19);
          fVar61 = *pfVar12;
          fVar69 = pfVar12[1];
          fVar72 = pfVar12[2];
          fVar75 = pfVar12[3];
          fVar54 = pfVar12[4];
          fVar58 = pfVar12[5];
          fVar59 = pfVar12[6];
          fVar60 = pfVar12[7];
          fVar77 = pfVar12[8];
          fVar85 = pfVar12[9];
          fVar90 = pfVar12[10];
          fVar98 = pfVar12[0xb] * pfVar12[0xb];
          auVar49._0_4_ = fVar54 * fVar54 + fVar58 * fVar58;
          auVar49._4_4_ = fVar59 * fVar59 + fVar60 * fVar60;
          auVar49._8_4_ = fVar54 * fVar54 + fVar58 * fVar58;
          auVar49._12_4_ = fVar59 * fVar59 + fVar60 * fVar60;
          auVar94._0_4_ = fVar77 * fVar77 + fVar85 * fVar85;
          auVar94._4_4_ = fVar90 * fVar90 + fVar98;
          auVar94._8_4_ = fVar77 * fVar77 + fVar85 * fVar85;
          auVar94._12_4_ = fVar90 * fVar90 + fVar98;
          auVar112._0_4_ = fVar61 * fVar61 + fVar69 * fVar69;
          auVar112._4_4_ = fVar72 * fVar72 + fVar75 * fVar75;
          auVar112._8_4_ = fVar61 * fVar61 + fVar69 * fVar69;
          auVar112._12_4_ = fVar72 * fVar72 + fVar75 * fVar75;
          auVar49 = NEON_ext(auVar49,auVar49,4,1);
          auVar94 = NEON_ext(auVar94,auVar94,4,1);
          auVar35 = NEON_ext(auVar112,auVar112,4,1);
          auVar23._0_4_ = auVar49._0_4_ + auVar49._4_4_;
          auVar23._4_4_ = auVar49._8_4_ + auVar49._12_4_;
          auVar23._8_4_ = auVar49._0_4_ + auVar49._4_4_;
          auVar23._12_4_ = auVar49._8_4_ + auVar49._12_4_;
          auVar24._0_4_ = auVar94._0_4_ + auVar94._4_4_;
          auVar24._4_4_ = auVar94._8_4_ + auVar94._12_4_;
          auVar24._8_4_ = auVar94._0_4_ + auVar94._4_4_;
          auVar24._12_4_ = auVar94._8_4_ + auVar94._12_4_;
          auVar25._0_4_ = auVar35._0_4_ + auVar35._4_4_;
          auVar25._4_4_ = auVar35._8_4_ + auVar35._12_4_;
          auVar25._8_4_ = auVar35._0_4_ + auVar35._4_4_;
          auVar25._12_4_ = auVar35._8_4_ + auVar35._12_4_;
          auVar49 = NEON_frsqrte(auVar23,4);
          auVar94 = NEON_frsqrte(auVar24,4);
          plVar21 = (long *)(lVar15 + 0x2d8);
          iVar101 = -(uint)(auVar25._0_4_ == 0.0);
          iVar103 = -(uint)(auVar25._4_4_ == 0.0);
          iVar104 = -(uint)(auVar25._8_4_ == 0.0);
          iVar105 = -(uint)(auVar25._12_4_ == 0.0);
          auVar35 = NEON_frsqrte(auVar25,4);
          auVar111._0_4_ = auVar25._0_4_ * auVar35._0_4_;
          auVar111._4_4_ = auVar25._4_4_ * auVar35._4_4_;
          auVar111._8_4_ = auVar25._8_4_ * auVar35._8_4_;
          auVar111._12_4_ = auVar25._12_4_ * auVar35._12_4_;
          auVar113._0_4_ = auVar23._0_4_ * auVar49._0_4_;
          auVar113._4_4_ = auVar23._4_4_ * auVar49._4_4_;
          auVar113._8_4_ = auVar23._8_4_ * auVar49._8_4_;
          auVar113._12_4_ = auVar23._12_4_ * auVar49._12_4_;
          iVar11 = -(uint)(auVar23._0_4_ == 0.0);
          iVar47 = -(uint)(auVar23._4_4_ == 0.0);
          iVar108 = -(uint)(auVar23._8_4_ == 0.0);
          iVar109 = -(uint)(auVar23._12_4_ == 0.0);
          auVar112 = NEON_frsqrts(auVar35,auVar111,4);
          auVar100._0_4_ = auVar35._0_4_ * auVar112._0_4_;
          auVar100._4_4_ = auVar35._4_4_ * auVar112._4_4_;
          auVar100._8_4_ = auVar35._8_4_ * auVar112._8_4_;
          auVar100._12_4_ = auVar35._12_4_ * auVar112._12_4_;
          auVar112 = NEON_frsqrts(auVar49,auVar113,4);
          auVar35._4_4_ = auVar24._4_4_ * auVar94._4_4_;
          auVar35._0_4_ = auVar24._0_4_ * auVar94._0_4_;
          auVar35._8_4_ = auVar24._8_4_ * auVar94._8_4_;
          auVar35._12_4_ = auVar24._12_4_ * auVar94._12_4_;
          auVar35 = NEON_frsqrts(auVar94,auVar35,4);
          auVar36._0_4_ = auVar25._0_4_ * auVar100._0_4_;
          auVar36._4_4_ = auVar25._4_4_ * auVar100._4_4_;
          auVar36._8_4_ = auVar25._8_4_ * auVar100._8_4_;
          auVar36._12_4_ = auVar25._12_4_ * auVar100._12_4_;
          auVar107._0_4_ = auVar49._0_4_ * auVar112._0_4_;
          auVar107._4_4_ = auVar49._4_4_ * auVar112._4_4_;
          auVar107._8_4_ = auVar49._8_4_ * auVar112._8_4_;
          auVar107._12_4_ = auVar49._12_4_ * auVar112._12_4_;
          auVar110._0_4_ = auVar94._0_4_ * auVar35._0_4_;
          auVar110._4_4_ = auVar94._4_4_ * auVar35._4_4_;
          auVar110._8_4_ = auVar94._8_4_ * auVar35._8_4_;
          auVar110._12_4_ = auVar94._12_4_ * auVar35._12_4_;
          auVar94 = NEON_frsqrts(auVar100,auVar36,4);
          auVar35 = NEON_fmov(0x3f800000,4);
          auVar50._0_4_ = auVar23._0_4_ * auVar107._0_4_;
          auVar50._4_4_ = auVar23._4_4_ * auVar107._4_4_;
          auVar50._8_4_ = auVar23._8_4_ * auVar107._8_4_;
          auVar50._12_4_ = auVar23._12_4_ * auVar107._12_4_;
          auVar114._0_4_ = auVar24._0_4_ * auVar110._0_4_;
          auVar114._4_4_ = auVar24._4_4_ * auVar110._4_4_;
          auVar114._8_4_ = auVar24._8_4_ * auVar110._8_4_;
          auVar114._12_4_ = auVar24._12_4_ * auVar110._12_4_;
          iVar93 = -(uint)(auVar24._0_4_ == 0.0);
          iVar96 = -(uint)(auVar24._4_4_ == 0.0);
          iVar97 = -(uint)(auVar24._8_4_ == 0.0);
          auVar49 = NEON_frsqrts(auVar107,auVar50,4);
          auVar112 = NEON_frsqrts(auVar110,auVar114,4);
          fVar61 = fVar61 * auVar100._0_4_ * auVar94._0_4_;
          fVar69 = fVar69 * auVar100._4_4_ * auVar94._4_4_;
          fVar72 = fVar72 * auVar100._8_4_ * auVar94._8_4_;
          fVar75 = fVar75 * auVar100._12_4_ * auVar94._12_4_;
          fVar70 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18),
                                   CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                            ~(byte)((uint)iVar101 >> 0x10),
                                            CONCAT11((byte)((uint)fVar61 >> 8) &
                                                     ~(byte)((uint)iVar101 >> 8),
                                                     SUB41(fVar61,0) & ~(byte)iVar101)));
          uVar33 = CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                            CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10),
                                     CONCAT15((byte)((uint)fVar69 >> 8) &
                                              ~(byte)((uint)iVar103 >> 8),
                                              CONCAT14(SUB41(fVar69,0) & ~(byte)iVar103,fVar70))));
          auVar63._0_10_ =
               CONCAT19((byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar104 >> 8),
                        CONCAT18(SUB41(fVar72,0) & ~(byte)iVar104,uVar33));
          auVar63[10] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar104 >> 0x10);
          auVar63[0xb] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18);
          auVar64[0xc] = SUB41(fVar75,0) & ~(byte)iVar105;
          auVar64._0_12_ = auVar63;
          auVar64[0xd] = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar105 >> 8);
          auVar64[0xe] = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10);
          auVar64[0xf] = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18);
          auVar94 = NEON_fmov(0x40800000,4);
          fVar54 = fVar54 * auVar107._0_4_ * auVar49._0_4_;
          fVar58 = fVar58 * auVar107._4_4_ * auVar49._4_4_;
          fVar59 = fVar59 * auVar107._8_4_ * auVar49._8_4_;
          fVar60 = fVar60 * auVar107._12_4_ * auVar49._12_4_;
          fVar77 = fVar77 * auVar110._0_4_ * auVar112._0_4_;
          fVar85 = fVar85 * auVar110._4_4_ * auVar112._4_4_;
          fVar90 = fVar90 * auVar110._8_4_ * auVar112._8_4_;
          fVar98 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                   CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                            ~(byte)((uint)iVar11 >> 0x10),
                                            CONCAT11((byte)((uint)fVar54 >> 8) &
                                                     ~(byte)((uint)iVar11 >> 8),
                                                     SUB41(fVar54,0) & ~(byte)iVar11)));
          auVar55._0_8_ =
               CONCAT17((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                        CONCAT16((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                                 CONCAT15((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                          CONCAT14(SUB41(fVar58,0) & ~(byte)iVar47,fVar98))));
          auVar55[8] = SUB41(fVar59,0) & ~(byte)iVar108;
          auVar55[9] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar108 >> 8);
          auVar55[10] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
          auVar55[0xb] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
          auVar55[0xc] = SUB41(fVar60,0) & ~(byte)iVar109;
          auVar55[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar109 >> 8);
          auVar55[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10);
          auVar55[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18);
          auVar112 = NEON_ext(auVar64,auVar64,8,1);
          fVar54 = (float)((ulong)auVar55._0_8_ >> 0x20);
          fVar78 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                   CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                            ~(byte)((uint)iVar93 >> 0x10),
                                            CONCAT11((byte)((uint)fVar77 >> 8) &
                                                     ~(byte)((uint)iVar93 >> 8),
                                                     SUB41(fVar77,0) & ~(byte)iVar93)));
          uVar80 = CONCAT15((byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar96 >> 8),
                            CONCAT14(SUB41(fVar85,0) & ~(byte)iVar96,fVar78));
          bVar88 = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
          bVar89 = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
          auVar81._0_8_ = CONCAT17(bVar89,CONCAT16(bVar88,uVar80));
          auVar81[8] = SUB41(fVar90,0) & ~(byte)iVar97;
          auVar81[9] = (byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar97 >> 8);
          auVar81[10] = (byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
          auVar81[0xb] = (byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
          auVar49 = NEON_ext(auVar55,auVar55,8,1);
          fVar86 = (float)((ulong)auVar81._0_8_ >> 0x20);
          fVar90 = (float)((ulong)uVar33 >> 0x20);
          uVar7 = (undefined2)((uint6)uVar80 >> 0x20);
          fVar58 = auVar81._8_4_;
          fVar59 = auVar35._0_4_ + (float)_DAT_03cab3a0 * fVar70 + (float)_DAT_03cac210 * fVar54 +
                   (float)_DAT_03cabb00 * fVar58;
          fVar60 = auVar35._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar70 +
                   (float)((ulong)_DAT_03cac210 >> 0x20) * fVar54 +
                   (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar58;
          fVar61 = auVar35._8_4_ + (float)_UNK_03cab3a8 * fVar70 + (float)_UNK_03cac218 * fVar54 +
                   (float)_UNK_03cabb08 * fVar58;
          fVar69 = auVar35._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar70 +
                   (float)((ulong)_UNK_03cac218 >> 0x20) * fVar54 +
                   (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar58;
          fVar58 = auVar49._0_4_;
          fVar99 = SQRT(fVar59) * 0.5;
          auVar51._0_4_ = fVar99 * auVar94._0_4_;
          auVar51._4_4_ = SQRT(fVar60) * 0.5 * auVar94._4_4_;
          auVar51._8_4_ = SQRT(fVar61) * 0.5 * auVar94._8_4_;
          auVar51._12_4_ = SQRT(fVar69) * 0.5 * auVar94._12_4_;
          auVar35 = NEON_frecpe(auVar51,4);
          auVar49 = NEON_frecps(auVar35,auVar51,4);
          auVar102._0_4_ = auVar35._0_4_ * auVar49._0_4_;
          auVar102._4_4_ = auVar35._4_4_ * auVar49._4_4_;
          auVar102._8_4_ = auVar35._8_4_ * auVar49._8_4_;
          auVar102._12_4_ = auVar35._12_4_ * auVar49._12_4_;
          fVar79 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)fVar60) & -(uint)(fVar59 <= fVar60))
          ;
          fVar87 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)fVar60) & -(uint)(fVar59 <= fVar60))
          ;
          fVar91 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)fVar60) & -(uint)(fVar59 <= fVar60))
          ;
          fVar92 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)fVar60) & -(uint)(fVar59 <= fVar60))
          ;
          auVar35 = NEON_frecps(auVar102,auVar51,4);
          uVar8 = CONCAT12(auVar63[10],(short)((unkuint10)auVar63._0_10_ >> 0x40));
          fVar54 = (float)CONCAT13(auVar63[0xb],uVar8);
          fVar72 = auVar102._0_4_ * auVar35._0_4_;
          fVar75 = auVar102._4_4_ * auVar35._4_4_;
          fVar77 = auVar102._8_4_ * auVar35._8_4_;
          fVar85 = auVar102._12_4_ * auVar35._12_4_;
          fVar70 = (fVar90 + fVar98) * fVar72;
          fVar73 = (auVar112._0_4_ + fVar78) * fVar72;
          fVar72 = (fVar58 + -fVar86) * fVar72;
          uVar62 = (uint)fVar99 ^
                   ((uint)fVar99 ^ (uint)((fVar90 + fVar98) * fVar75)) & -(uint)(fVar59 <= fVar60);
          uVar71 = (uint)fVar70 ^
                   ((uint)fVar70 ^ (uint)(SQRT(fVar60) * 0.5)) & -(uint)(fVar59 <= fVar60);
          uVar74 = (uint)fVar73 ^
                   ((uint)fVar73 ^
                   (uint)((fVar58 + (float)CONCAT13(bVar89,CONCAT12(bVar88,uVar7))) * fVar75)) &
                   -(uint)(fVar59 <= fVar60);
          uVar76 = (uint)fVar72 ^
                   ((uint)fVar72 ^ (uint)((fVar78 + -auVar63._8_4_) * fVar75)) &
                   -(uint)(fVar59 <= fVar60);
          uVar62 = uVar62 ^ (uVar62 ^ (uint)((auVar112._0_4_ + fVar78) * fVar77)) &
                            -(uint)(fVar79 <= fVar61);
          uVar71 = uVar71 ^ (uVar71 ^ (uint)((fVar58 + fVar86) * fVar77)) &
                            -(uint)(fVar87 <= fVar61);
          uVar74 = uVar74 ^ (uVar74 ^ (uint)(SQRT(fVar61) * 0.5)) & -(uint)(fVar91 <= fVar61);
          uVar76 = uVar76 ^ (uVar76 ^ (uint)((fVar90 - fVar98) * fVar77)) &
                            -(uint)(fVar92 <= fVar61);
          fVar58 = (float)(uVar62 ^ (uVar62 ^ (uint)((fVar58 - (float)CONCAT13(bVar89,CONCAT12(
                                                  bVar88,uVar7))) * fVar85)) &
                                    -(uint)((float)((uint)fVar79 ^
                                                   ((uint)fVar79 ^ (uint)fVar61) &
                                                   -(uint)(fVar79 <= fVar61)) <= fVar69));
          fVar54 = (float)(uVar71 ^ (uVar71 ^ (uint)((fVar78 - fVar54) * fVar85)) &
                                    -(uint)((float)((uint)fVar87 ^
                                                   ((uint)fVar87 ^ (uint)fVar61) &
                                                   -(uint)(fVar87 <= fVar61)) <= fVar69));
          fVar59 = (float)(uVar74 ^ (uVar74 ^ (uint)((fVar90 - fVar98) * fVar85)) &
                                    -(uint)((float)((uint)fVar91 ^
                                                   ((uint)fVar91 ^ (uint)fVar61) &
                                                   -(uint)(fVar91 <= fVar61)) <= fVar69));
          fVar60 = (float)(uVar76 ^ (uVar76 ^ (uint)(SQRT(fVar69) * 0.5)) &
                                    -(uint)((float)((uint)fVar92 ^
                                                   ((uint)fVar92 ^ (uint)fVar61) &
                                                   -(uint)(fVar92 <= fVar61)) <= fVar69));
          lVar14 = nn::os::GetCurrentThread();
          goto LAB_01e05de8;
        }
        break;
      }
      sVar18 = sVar4;
    } while (sVar4 != 0);
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00c43ef0(&local_98,0x30);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_98[2] == 0) {
    FUN_00f5d3e8(param_1,&local_98);
  }
  puVar2 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar22 = (int *)((long)local_98 + 0x1c);
      do {
        iVar11 = *piVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_b0 = (undefined8 *)*puVar2;
        FUN_00c44438(lVar15 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) {
LAB_01e05a88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_01e05de8:
  if (*plVar21 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x2e0));
    do {
      if (*plVar21 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x2e0));
          while (*plVar21 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *plVar21 = lVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e05df8;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e05df8:
    piVar22 = (int *)*param_5;
    piVar3 = (int *)param_5[1];
    if (piVar22 == piVar3) {
LAB_01e06110:
      local_d8 = 0;
    }
    else {
      auVar10._4_4_ = fVar54;
      auVar10._0_4_ = fVar58;
      auVar10._8_4_ = fVar59;
      auVar10._12_4_ = fVar60;
      auVar65._4_4_ = fVar59;
      auVar65._0_4_ = fVar59;
      auVar65._8_4_ = fVar59;
      auVar65._12_4_ = fVar59;
      auVar35 = NEON_ext(auVar65,auVar10,0xc,1);
      auVar82._4_4_ = fVar54;
      auVar82._0_4_ = fVar54;
      auVar82._8_4_ = fVar54;
      auVar82._12_4_ = fVar54;
      auVar49 = NEON_ext(auVar82,auVar35,0xc,1);
      fVar69 = (float)_DAT_03cab640;
      fVar72 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar75 = (float)_UNK_03cab648;
      fVar77 = (float)((ulong)_UNK_03cab648 >> 0x20);
      auVar38._0_4_ = -fVar58;
      fVar61 = -fVar54;
      auVar37._8_4_ = -fVar59;
      auVar37._4_4_ = auVar37._8_4_;
      auVar37._0_4_ = auVar37._8_4_;
      auVar37._12_4_ = auVar37._8_4_;
      auVar38._4_12_ = auVar37._4_12_;
      auVar40._0_8_ = auVar38._0_8_;
      auVar40._8_4_ = fVar61;
      auVar40._12_4_ = auVar37._8_4_;
      auVar39._8_8_ = auVar40._8_8_;
      auVar39._4_4_ = auVar37._8_4_;
      auVar39._0_4_ = auVar38._0_4_;
      auVar41._0_12_ = auVar39._0_12_;
      auVar41._12_4_ = auVar37._8_4_;
      auVar95._0_4_ =
           (float)_DAT_03caa5b0 * fVar60 + fVar58 * fVar69 * 0.0 +
           (float)DAT_03cab620 * auVar49._0_4_ * fVar69 + (float)_DAT_03caad80 * auVar35._0_4_;
      auVar95._4_4_ =
           (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar60 + fVar54 * fVar72 * 0.0 +
           (float)((ulong)DAT_03cab620 >> 0x20) * auVar49._4_4_ * fVar72 +
           (float)((ulong)_DAT_03caad80 >> 0x20) * auVar35._4_4_;
      auVar95._8_4_ =
           (float)_UNK_03caa5b8 * fVar60 + fVar59 * fVar75 * 0.0 +
           (float)DAT_03cab628 * auVar49._8_4_ * fVar75 + (float)_UNK_03caad88 * auVar35._8_4_;
      auVar95._12_4_ =
           (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar60 + fVar58 * fVar77 * 0.0 +
           (float)((ulong)DAT_03cab628 >> 0x20) * auVar49._12_4_ * fVar77 +
           (float)((ulong)_UNK_03caad88 >> 0x20) * auVar35._12_4_;
      auVar56._4_4_ = auVar95._8_4_;
      auVar56._0_4_ = auVar95._8_4_;
      auVar56._8_4_ = auVar95._8_4_;
      auVar56._12_4_ = auVar95._8_4_;
      auVar66._4_4_ = auVar95._4_4_;
      auVar66._0_4_ = auVar95._4_4_;
      auVar66._8_4_ = auVar95._4_4_;
      auVar66._12_4_ = auVar95._4_4_;
      auVar49 = NEON_ext(auVar41,auVar41,8,1);
      auVar94 = NEON_ext(auVar56,auVar95,0xc,1);
      fVar54 = auVar49._0_4_;
      auVar42._4_12_ = auVar41._4_12_;
      auVar42._0_4_ = fVar54;
      auVar44._0_8_ = auVar42._0_8_;
      auVar44._8_4_ = auVar49._8_4_;
      auVar44._12_4_ = auVar37._8_4_;
      auVar43._8_8_ = auVar44._8_8_;
      auVar43._4_4_ = auVar38._0_4_;
      auVar43._0_4_ = fVar54;
      auVar45._0_12_ = auVar43._0_12_;
      auVar45._12_4_ = fVar61;
      auVar112 = NEON_ext(auVar66,auVar94,0xc,1);
      auVar35 = NEON_ext(auVar45,auVar49,8,1);
      auVar35 = NEON_ext(auVar35,auVar35,0xc,1);
      fVar58 = (auVar38._0_4_ * auVar95._12_4_ + fVar60 * auVar95._0_4_ * fVar69 +
               auVar35._0_4_ * auVar112._0_4_ * fVar69) - auVar94._0_4_ * fVar54;
      fVar59 = (fVar61 * auVar95._12_4_ + fVar60 * auVar95._4_4_ * fVar72 +
               auVar35._4_4_ * auVar112._4_4_ * fVar72) - auVar94._4_4_ * auVar49._4_4_;
      fVar60 = (auVar37._8_4_ * auVar95._12_4_ + fVar60 * auVar95._8_4_ * fVar75 +
               auVar35._8_4_ * auVar112._8_4_ * fVar75) - auVar94._8_4_ * auVar49._8_4_;
      local_d8 = 0;
      fVar54 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      auVar26._0_4_ = fVar58 * fVar58 + fVar59 * fVar59;
      auVar26._4_4_ = fVar60 * fVar60 + 0.0;
      auVar26._8_4_ = fVar58 * fVar58 + fVar59 * fVar59;
      auVar26._12_4_ = fVar60 * fVar60 + 0.0;
      auVar35 = NEON_ext(auVar26,auVar26,4,1);
      uVar16 = (ulong)((fVar54 / *(float *)PTR_FloatDegree180_047d2390) * param_3._0_4_);
      auVar27._0_4_ = auVar35._0_4_ + auVar35._4_4_;
      auVar27._4_4_ = auVar35._8_4_ + auVar35._12_4_;
      auVar27._8_4_ = auVar35._0_4_ + auVar35._4_4_;
      auVar27._12_4_ = auVar35._8_4_ + auVar35._12_4_;
      auVar35 = NEON_frsqrte(auVar27,4);
      auVar67._0_4_ = auVar27._0_4_ * auVar35._0_4_;
      auVar67._4_4_ = auVar27._4_4_ * auVar35._4_4_;
      auVar67._8_4_ = auVar27._8_4_ * auVar35._8_4_;
      auVar67._12_4_ = auVar27._12_4_ * auVar35._12_4_;
      auVar49 = NEON_frsqrts(auVar35,auVar67,4);
      auVar57._0_4_ = auVar35._0_4_ * auVar49._0_4_;
      auVar57._4_4_ = auVar35._4_4_ * auVar49._4_4_;
      auVar57._8_4_ = auVar35._8_4_ * auVar49._8_4_;
      auVar57._12_4_ = auVar35._12_4_ * auVar49._12_4_;
      auVar52._0_4_ = auVar27._0_4_ * auVar57._0_4_;
      auVar52._4_4_ = auVar27._4_4_ * auVar57._4_4_;
      auVar52._8_4_ = auVar27._8_4_ * auVar57._8_4_;
      auVar52._12_4_ = auVar27._12_4_ * auVar57._12_4_;
      iVar11 = -(uint)(auVar27._0_4_ == 0.0);
      iVar47 = -(uint)(auVar27._4_4_ == 0.0);
      iVar93 = -(uint)(auVar27._8_4_ == 0.0);
      iVar96 = -(uint)(auVar27._12_4_ == 0.0);
      auVar35 = NEON_frsqrts(auVar57,auVar52,4);
      pfVar12 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar16 >> 0x18 & 0xff) * 0x10);
      fVar58 = fVar58 * auVar57._0_4_ * auVar35._0_4_;
      fVar59 = fVar59 * auVar57._4_4_ * auVar35._4_4_;
      fVar60 = fVar60 * auVar57._8_4_ * auVar35._8_4_;
      fVar61 = auVar57._12_4_ * auVar35._12_4_ * 0.0;
      uVar33 = 0x7f7fffff;
      uVar106 = 0;
      fVar54 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                               CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar58 >> 8) &
                                                  ~(byte)((uint)iVar11 >> 8),
                                                  SUB41(fVar58,0) & ~(byte)iVar11)));
      auVar34._0_8_ =
           CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                    CONCAT16((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10),
                             CONCAT15((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar47 >> 8),
                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar47,fVar54))));
      auVar34[8] = SUB41(fVar60,0) & ~(byte)iVar93;
      auVar34[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar93 >> 8);
      auVar34[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
      auVar34[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
      auVar46[0xc] = SUB41(fVar61,0) & ~(byte)iVar96;
      auVar46._0_12_ = auVar34;
      auVar46[0xd] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar96 >> 8);
      auVar46[0xe] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      auVar46[0xf] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      puVar2 = (undefined8 *)(lVar15 + 0x90);
      fStack_c8 = auVar34._8_4_;
      fStack_c4 = auVar46._12_4_;
      fStack_cc = (float)((ulong)auVar34._0_8_ >> 0x20);
      do {
        iVar11 = *piVar22;
        local_b0 = &local_78;
        local_78 = CONCAT44(local_78._4_4_,iVar11);
        puVar20 = puVar2;
        if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
          puVar13 = (undefined8 *)*puVar2;
          do {
            if (iVar11 < *(int *)(puVar13 + 4)) {
              puVar17 = (undefined8 *)*puVar13;
              puVar20 = puVar13;
              if (puVar17 == (undefined8 *)0x0) {
                goto LAB_01e05fac;
              }
            }
            else {
              if (iVar11 <= *(int *)(puVar13 + 4)) goto LAB_01e05fac;
              puVar20 = puVar13 + 1;
              puVar17 = (undefined8 *)*puVar20;
              if (puVar17 == (undefined8 *)0x0) goto LAB_01e05fac;
            }
            puVar13 = puVar17;
          } while( true );
        }
        puVar13 = puVar2;
LAB_01e05fac:
        puVar17 = (undefined8 *)*puVar20;
        if ((undefined8 *)*puVar20 == (undefined8 *)0x0) {
          FUN_00dec8e8(&local_98,(long *)(lVar15 + 0x88),&DAT_03d30400,&local_b0,auStack_a0);
          *local_98 = 0;
          local_98[1] = 0;
          local_98[2] = puVar13;
          *puVar20 = local_98;
          puVar13 = local_98;
          if (**(long **)(lVar15 + 0x88) != 0) {
            *(long *)(lVar15 + 0x88) = **(long **)(lVar15 + 0x88);
            puVar13 = (undefined8 *)*puVar20;
          }
          FUN_010108e0(*(undefined8 *)(lVar15 + 0x90),puVar13);
          *(long *)(lVar15 + 0xb8) = *(long *)(lVar15 + 0xb8) + 1;
          puVar17 = local_98;
        }
        for (plVar21 = (long *)puVar17[0xb]; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          lVar14 = plVar21[2];
          if ((lVar14 == 0) || ((*(byte *)(plVar21 + 3) & 1) != 0)) {
LAB_01e06000:
            auVar29._8_8_ = uVar106;
            auVar29._0_8_ = uVar33;
          }
          else {
            FUN_00cbc2e4(lVar14,lVar14 + 0x90);
            local_c0 = auVar9._0_4_;
            fStack_bc = auVar9._4_4_;
            local_c0 = extraout_s0 - local_c0;
            fStack_bc = extraout_var - fStack_bc;
            fVar58 = extraout_var_00 - auVar9._8_4_;
            fVar59 = extraout_var_01 - 0.0;
            auVar28._0_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
            auVar28._4_4_ = fVar58 * fVar58 + 0.0;
            auVar28._8_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
            auVar28._12_4_ = fVar58 * fVar58 + 0.0;
            auVar35 = NEON_ext(auVar28,auVar28,4,1);
            auVar29._0_4_ = auVar35._0_4_ + auVar35._4_4_;
            auVar29._4_4_ = auVar35._8_4_ + auVar35._12_4_;
            auVar29._8_4_ = auVar35._0_4_ + auVar35._4_4_;
            auVar29._12_4_ = auVar35._8_4_ + auVar35._12_4_;
            if ((float)uVar33 <= auVar29._0_4_) goto LAB_01e06000;
            if (auVar29._0_4_ < param_2._0_4_ * param_2._0_4_) {
              auVar30._0_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
              auVar30._4_4_ = fVar58 * fVar58 + fVar59 * fVar59;
              auVar30._8_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
              auVar30._12_4_ = fVar58 * fVar58 + fVar59 * fVar59;
              auVar35 = NEON_ext(auVar30,auVar30,4,1);
              auVar31._0_4_ = auVar35._0_4_ + auVar35._4_4_;
              auVar31._4_4_ = auVar35._8_4_ + auVar35._12_4_;
              auVar31._8_4_ = auVar35._0_4_ + auVar35._4_4_;
              auVar31._12_4_ = auVar35._8_4_ + auVar35._12_4_;
              auVar35 = NEON_frsqrte(auVar31,4);
              auVar83._0_4_ = auVar31._0_4_ * auVar35._0_4_;
              auVar83._4_4_ = auVar31._4_4_ * auVar35._4_4_;
              auVar83._8_4_ = auVar31._8_4_ * auVar35._8_4_;
              auVar83._12_4_ = auVar31._12_4_ * auVar35._12_4_;
              auVar49 = NEON_frsqrts(auVar35,auVar83,4);
              auVar68._0_4_ = auVar35._0_4_ * auVar49._0_4_;
              auVar68._4_4_ = auVar35._4_4_ * auVar49._4_4_;
              auVar68._8_4_ = auVar35._8_4_ * auVar49._8_4_;
              auVar68._12_4_ = auVar35._12_4_ * auVar49._12_4_;
              auVar84._0_4_ = auVar31._0_4_ * auVar68._0_4_;
              auVar84._4_4_ = auVar31._4_4_ * auVar68._4_4_;
              auVar84._8_4_ = auVar31._8_4_ * auVar68._8_4_;
              auVar84._12_4_ = auVar31._12_4_ * auVar68._12_4_;
              iVar11 = -(uint)(auVar31._0_4_ == 0.0);
              iVar47 = -(uint)(auVar31._4_4_ == 0.0);
              iVar93 = -(uint)(auVar31._8_4_ == 0.0);
              iVar96 = -(uint)(auVar31._12_4_ == 0.0);
              auVar35 = NEON_frsqrts(auVar68,auVar84,4);
              local_c0 = local_c0 * auVar68._0_4_ * auVar35._0_4_;
              fStack_bc = fStack_bc * auVar68._4_4_ * auVar35._4_4_;
              fVar58 = fVar58 * auVar68._8_4_ * auVar35._8_4_;
              fVar59 = fVar59 * auVar68._12_4_ * auVar35._12_4_;
              fVar60 = (float)CONCAT13((byte)((uint)local_c0 >> 0x18) &
                                       ~(byte)((uint)iVar11 >> 0x18),
                                       CONCAT12((byte)((uint)local_c0 >> 0x10) &
                                                ~(byte)((uint)iVar11 >> 0x10),
                                                CONCAT11((byte)((uint)local_c0 >> 8) &
                                                         ~(byte)((uint)iVar11 >> 8),
                                                         SUB41(local_c0,0) & ~(byte)iVar11)));
              auVar48._0_8_ =
                   CONCAT17((byte)((uint)fStack_bc >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                            CONCAT16((byte)((uint)fStack_bc >> 0x10) & ~(byte)((uint)iVar47 >> 0x10)
                                     ,CONCAT15((byte)((uint)fStack_bc >> 8) &
                                               ~(byte)((uint)iVar47 >> 8),
                                               CONCAT14(SUB41(fStack_bc,0) & ~(byte)iVar47,fVar60)))
                           );
              auVar48[8] = SUB41(fVar58,0) & ~(byte)iVar93;
              auVar48[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar93 >> 8);
              auVar48[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
              auVar48[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
              auVar53[0xc] = SUB41(fVar59,0) & ~(byte)iVar96;
              auVar53._0_12_ = auVar48;
              auVar53[0xd] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar96 >> 8);
              auVar53[0xe] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
              auVar53[0xf] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
              fVar60 = fVar60 * fVar54;
              fVar58 = (float)((ulong)auVar48._0_8_ >> 0x20) * fStack_cc;
              fVar59 = auVar48._8_4_ * fStack_c8;
              fVar61 = auVar53._12_4_ * fStack_c4;
              auVar32._0_4_ = fVar60 + fVar58;
              auVar32._4_4_ = fVar59 + fVar61;
              auVar32._8_4_ = fVar60 + fVar58;
              auVar32._12_4_ = fVar59 + fVar61;
              auVar35 = NEON_ext(auVar32,auVar32,4,1);
              if (*pfVar12 + (float)((uint)uVar16 & 0xffffff) * 5.9604645e-08 * pfVar12[2] <
                  auVar35._0_4_ + auVar35._4_4_) {
                local_d8 = plVar21[2];
              }
            }
          }
          uVar106 = auVar29._8_8_;
          uVar33 = auVar29._0_8_;
        }
        piVar22 = piVar22 + 1;
      } while (piVar22 != piVar3);
      if (local_d8 == 0) goto LAB_01e06110;
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_00c43ef0(&local_98,local_d8 + 0x30);
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      if (local_98[2] == local_d8 + 0x28) {
        FUN_00f5d3e8(&local_b0,&local_98);
      }
      puVar2 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_98 + 3);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          piVar22 = (int *)((long)local_98 + 0x1c);
          do {
            iVar11 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_78 = *puVar2;
            FUN_00c44438(lVar14 + 0x8040,&local_78);
          }
        }
        else if (sVar18 == 0) goto LAB_01e05a88;
      }
      uVar16 = FUN_01440498(lVar15,&local_b0,param_4);
      puVar2 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          piVar22 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar11 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_98 = (undefined8 *)*puVar2;
            FUN_00c44438(lVar14 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_01e05a88;
      }
      if ((uVar16 & 1) == 0) {
        local_d8 = 0;
      }
    }
    *(undefined8 *)(lVar15 + 0x2d8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x2e0));
    if (local_d8 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
LAB_01e0612c:
      (**(code **)(*plVar19 + 0x60))();
      return;
    }
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_00c43ef0(&local_98,local_d8 + 0x30);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_98[2] == local_d8 + 0x28) {
      FUN_00f5d3e8(param_1,&local_98);
    }
    puVar2 = local_98;
    if (local_98 == (undefined8 *)0x0) goto LAB_01e0612c;
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar22 = (int *)((long)local_98 + 0x1c);
      do {
        iVar11 = *piVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_b0 = (undefined8 *)*puVar2;
        FUN_00c44438(lVar15 + 0x8040,&local_b0);
      }
      goto LAB_01e0612c;
    }
    if (sVar18 != 0) goto LAB_01e0612c;
    goto LAB_01e05a88;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar6) {
    *plVar21 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01e05df8;
  goto LAB_01e05de8;
}


