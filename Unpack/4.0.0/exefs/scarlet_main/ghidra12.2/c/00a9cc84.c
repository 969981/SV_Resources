/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a9cc84; name: FUN_00a9cc84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a9cc84(float *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  float fVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  float fVar37;
  float fVar38;
  float fVar45;
  float fVar47;
  float fVar49;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  float fVar56;
  float fVar58;
  float fVar60;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar61;
  float fVar62;
  int iVar78;
  int iVar80;
  undefined1 auVar63 [16];
  int iVar82;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  float fVar79;
  float fVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar83;
  float fVar84;
  int iVar97;
  int iVar98;
  undefined1 auVar85 [16];
  int iVar99;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  int iVar107;
  int iVar111;
  int iVar112;
  undefined1 auVar108 [16];
  int iVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar114;
  float fVar115;
  float fVar119;
  float fVar121;
  undefined1 auVar116 [16];
  float fVar120;
  float fVar122;
  float fVar123;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    plVar13 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00a9d4c0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a9d4c0:
        bVar4 = false;
      }
      if (bVar4) {
        plVar13 = (long *)0x0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar13 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        }
        break;
      }
      plVar13 = (long *)0x0;
      sVar12 = sVar2;
    } while (sVar2 != 0);
  }
  pfVar8 = (float *)(**(code **)(*plVar13 + 0x68))(plVar13);
  fVar37 = *pfVar8;
  fVar45 = pfVar8[1];
  fVar47 = pfVar8[2];
  fVar49 = pfVar8[3];
  fVar50 = pfVar8[4];
  fVar56 = pfVar8[5];
  fVar58 = pfVar8[6];
  fVar60 = pfVar8[7];
  auVar63._0_4_ = fVar50 * fVar50 + fVar56 * fVar56;
  auVar63._4_4_ = fVar58 * fVar58 + fVar60 * fVar60;
  auVar63._8_4_ = fVar50 * fVar50 + fVar56 * fVar56;
  auVar63._12_4_ = fVar58 * fVar58 + fVar60 * fVar60;
  fVar100 = pfVar8[8];
  fVar102 = pfVar8[9];
  fVar104 = pfVar8[10];
  fVar106 = pfVar8[0xb];
  auVar41 = *(undefined1 (*) [16])(pfVar8 + 0xc);
  auVar85 = NEON_ext(auVar63,auVar63,4,1);
  auVar108._0_4_ = fVar37 * fVar37 + fVar45 * fVar45;
  auVar108._4_4_ = fVar47 * fVar47 + fVar49 * fVar49;
  auVar108._8_4_ = fVar37 * fVar37 + fVar45 * fVar45;
  auVar108._12_4_ = fVar47 * fVar47 + fVar49 * fVar49;
  auVar63 = NEON_ext(auVar108,auVar108,4,1);
  auVar15._0_4_ = auVar85._0_4_ + auVar85._4_4_;
  auVar15._4_4_ = auVar85._8_4_ + auVar85._12_4_;
  auVar15._8_4_ = auVar85._0_4_ + auVar85._4_4_;
  auVar15._12_4_ = auVar85._8_4_ + auVar85._12_4_;
  auVar85._0_4_ = fVar100 * fVar100 + fVar102 * fVar102;
  auVar85._4_4_ = fVar104 * fVar104 + fVar106 * fVar106;
  auVar85._8_4_ = fVar100 * fVar100 + fVar102 * fVar102;
  auVar85._12_4_ = fVar104 * fVar104 + fVar106 * fVar106;
  auVar108 = NEON_ext(auVar85,auVar85,4,1);
  auVar85 = NEON_frsqrte(auVar15,4);
  auVar16._0_4_ = auVar63._0_4_ + auVar63._4_4_;
  auVar16._4_4_ = auVar63._8_4_ + auVar63._12_4_;
  auVar16._8_4_ = auVar63._0_4_ + auVar63._4_4_;
  auVar16._12_4_ = auVar63._8_4_ + auVar63._12_4_;
  auVar63 = NEON_frsqrte(auVar16,4);
  auVar17._0_4_ = auVar108._0_4_ + auVar108._4_4_;
  auVar17._4_4_ = auVar108._8_4_ + auVar108._12_4_;
  auVar17._8_4_ = auVar108._0_4_ + auVar108._4_4_;
  auVar17._12_4_ = auVar108._8_4_ + auVar108._12_4_;
  auVar108 = NEON_frsqrte(auVar17,4);
  auVar133._0_4_ = auVar16._0_4_ * auVar63._0_4_;
  auVar133._4_4_ = auVar16._4_4_ * auVar63._4_4_;
  auVar133._8_4_ = auVar16._8_4_ * auVar63._8_4_;
  auVar133._12_4_ = auVar16._12_4_ * auVar63._12_4_;
  auVar134 = NEON_frsqrts(auVar63,auVar133,4);
  auVar116._0_4_ = auVar63._0_4_ * auVar134._0_4_;
  auVar116._4_4_ = auVar63._4_4_ * auVar134._4_4_;
  auVar116._8_4_ = auVar63._8_4_ * auVar134._8_4_;
  auVar116._12_4_ = auVar63._12_4_ * auVar134._12_4_;
  auVar135._0_4_ = auVar15._0_4_ * auVar85._0_4_;
  auVar135._4_4_ = auVar15._4_4_ * auVar85._4_4_;
  auVar135._8_4_ = auVar15._8_4_ * auVar85._8_4_;
  auVar135._12_4_ = auVar15._12_4_ * auVar85._12_4_;
  auVar63 = NEON_frsqrts(auVar85,auVar135,4);
  auVar124._0_4_ = auVar85._0_4_ * auVar63._0_4_;
  auVar124._4_4_ = auVar85._4_4_ * auVar63._4_4_;
  auVar124._8_4_ = auVar85._8_4_ * auVar63._8_4_;
  auVar124._12_4_ = auVar85._12_4_ * auVar63._12_4_;
  auVar136._0_4_ = auVar17._0_4_ * auVar108._0_4_;
  auVar136._4_4_ = auVar17._4_4_ * auVar108._4_4_;
  auVar136._8_4_ = auVar17._8_4_ * auVar108._8_4_;
  auVar136._12_4_ = auVar17._12_4_ * auVar108._12_4_;
  auVar63 = NEON_frsqrts(auVar108,auVar136,4);
  auVar131._0_4_ = auVar108._0_4_ * auVar63._0_4_;
  auVar131._4_4_ = auVar108._4_4_ * auVar63._4_4_;
  auVar131._8_4_ = auVar108._8_4_ * auVar63._8_4_;
  auVar131._12_4_ = auVar108._12_4_ * auVar63._12_4_;
  auVar137._0_4_ = auVar16._0_4_ * auVar116._0_4_;
  auVar137._4_4_ = auVar16._4_4_ * auVar116._4_4_;
  auVar137._8_4_ = auVar16._8_4_ * auVar116._8_4_;
  auVar137._12_4_ = auVar16._12_4_ * auVar116._12_4_;
  iVar61 = -(uint)(auVar16._0_4_ == 0.0);
  iVar78 = -(uint)(auVar16._4_4_ == 0.0);
  iVar80 = -(uint)(auVar16._8_4_ == 0.0);
  iVar82 = -(uint)(auVar16._12_4_ == 0.0);
  auVar63 = NEON_frsqrts(auVar116,auVar137,4);
  auVar138._0_4_ = auVar15._0_4_ * auVar124._0_4_;
  auVar138._4_4_ = auVar15._4_4_ * auVar124._4_4_;
  auVar138._8_4_ = auVar15._8_4_ * auVar124._8_4_;
  auVar138._12_4_ = auVar15._12_4_ * auVar124._12_4_;
  iVar83 = -(uint)(auVar15._0_4_ == 0.0);
  iVar97 = -(uint)(auVar15._4_4_ == 0.0);
  iVar98 = -(uint)(auVar15._8_4_ == 0.0);
  iVar99 = -(uint)(auVar15._12_4_ == 0.0);
  auVar108 = NEON_frsqrts(auVar124,auVar138,4);
  fVar37 = fVar37 * auVar116._0_4_ * auVar63._0_4_;
  fVar45 = fVar45 * auVar116._4_4_ * auVar63._4_4_;
  fVar47 = fVar47 * auVar116._8_4_ * auVar63._8_4_;
  fVar49 = fVar49 * auVar116._12_4_ * auVar63._12_4_;
  fVar114 = param_1[0xc] - auVar41._0_4_;
  fVar119 = param_1[0xd] - auVar41._4_4_;
  fVar121 = param_1[0xe] - auVar41._8_4_;
  auVar139._0_4_ = auVar17._0_4_ * auVar131._0_4_;
  auVar139._4_4_ = auVar17._4_4_ * auVar131._4_4_;
  auVar139._8_4_ = auVar17._8_4_ * auVar131._8_4_;
  auVar139._12_4_ = auVar17._12_4_ * auVar131._12_4_;
  iVar107 = -(uint)(auVar17._0_4_ == 0.0);
  iVar111 = -(uint)(auVar17._4_4_ == 0.0);
  iVar112 = -(uint)(auVar17._8_4_ == 0.0);
  iVar113 = -(uint)(auVar17._12_4_ == 0.0);
  fVar50 = fVar50 * auVar124._0_4_ * auVar108._0_4_;
  fVar56 = fVar56 * auVar124._4_4_ * auVar108._4_4_;
  fVar58 = fVar58 * auVar124._8_4_ * auVar108._8_4_;
  fVar60 = fVar60 * auVar124._12_4_ * auVar108._12_4_;
  auVar63 = NEON_frsqrts(auVar131,auVar139,4);
  auVar51._0_8_ =
       CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10),
                         CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar97 >> 8),
                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar97,
                                           CONCAT13((byte)((uint)fVar50 >> 0x18) &
                                                    ~(byte)((uint)iVar83 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                                             ~(byte)((uint)iVar83 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar50 >> 8) &
                                                                      ~(byte)((uint)iVar83 >> 8),
                                                                      SUB41(fVar50,0) &
                                                                      ~(byte)iVar83)))))));
  auVar51[8] = SUB41(fVar58,0) & ~(byte)iVar98;
  auVar51[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar98 >> 8);
  auVar51[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
  auVar51[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
  auVar51[0xc] = SUB41(fVar60,0) & ~(byte)iVar99;
  auVar51[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar99 >> 8);
  auVar51[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10);
  auVar51[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18);
  *(byte *)(param_1 + 2) = SUB41(fVar47,0) & ~(byte)iVar80;
  *(byte *)((long)param_1 + 9) = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar80 >> 8);
  *(byte *)((long)param_1 + 10) = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
  *(byte *)((long)param_1 + 0xb) = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
  *(byte *)(param_1 + 3) = SUB41(fVar49,0) & ~(byte)iVar82;
  *(byte *)((long)param_1 + 0xd) = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar82 >> 8);
  *(byte *)((long)param_1 + 0xe) = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
  *(byte *)((long)param_1 + 0xf) = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
  *(byte *)param_1 = SUB41(fVar37,0) & ~(byte)iVar61;
  *(byte *)((long)param_1 + 1) = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar61 >> 8);
  *(byte *)((long)param_1 + 2) = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
  *(byte *)((long)param_1 + 3) = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
  *(byte *)(param_1 + 1) = SUB41(fVar45,0) & ~(byte)iVar78;
  *(byte *)((long)param_1 + 5) = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar78 >> 8);
  *(byte *)((long)param_1 + 6) = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
  *(byte *)((long)param_1 + 7) = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
  *(long *)(param_1 + 6) = auVar51._8_8_;
  *(undefined8 *)(param_1 + 4) = auVar51._0_8_;
  fVar114 = fVar114 * fVar114;
  fVar119 = fVar119 * fVar119;
  fVar121 = fVar121 * fVar121;
  fVar100 = fVar100 * auVar131._0_4_ * auVar63._0_4_;
  fVar102 = fVar102 * auVar131._4_4_ * auVar63._4_4_;
  fVar104 = fVar104 * auVar131._8_4_ * auVar63._8_4_;
  fVar106 = fVar106 * auVar131._12_4_ * auVar63._12_4_;
  auVar64._0_8_ =
       CONCAT17((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                CONCAT16((byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar111 >> 0x10),
                         CONCAT15((byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar111 >> 8),
                                  CONCAT14(SUB41(fVar102,0) & ~(byte)iVar111,
                                           CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                                    ~(byte)((uint)iVar107 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                             ~(byte)((uint)iVar107 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                      ~(byte)((uint)iVar107 >> 8),
                                                                      SUB41(fVar100,0) &
                                                                      ~(byte)iVar107)))))));
  auVar64[8] = SUB41(fVar104,0) & ~(byte)iVar112;
  auVar64[9] = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar112 >> 8);
  auVar64[10] = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10);
  auVar64[0xb] = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18);
  auVar64[0xc] = SUB41(fVar106,0) & ~(byte)iVar113;
  auVar64[0xd] = (byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar113 >> 8);
  auVar64[0xe] = (byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10);
  auVar64[0xf] = (byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18);
  auVar134._0_4_ = fVar114 + fVar119;
  auVar134._4_4_ = fVar121 + 0.0;
  auVar134._8_4_ = fVar114 + fVar119;
  auVar134._12_4_ = fVar121 + 0.0;
  *(long *)(param_1 + 10) = auVar64._8_8_;
  *(undefined8 *)(param_1 + 8) = auVar64._0_8_;
  auVar63 = NEON_ext(auVar134,auVar134,4,1);
  if (0.0001 < auVar63._0_4_ + auVar63._4_4_) {
    *(long *)(param_1 + 0xe) = auVar41._8_8_;
    *(long *)(param_1 + 0xc) = auVar41._0_8_;
    lVar9 = param_2[0x10];
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar12 = *(short *)(lVar9 + 0x1a);
LAB_00a9d35c:
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00a9d380;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a9d380:
        bVar4 = false;
      }
      if (!bVar4) goto code_r0x00a9d388;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar14 = (long *)(lVar9 + -0x28);
        FUN_00d3c698(plVar14,1);
        lVar9 = *(long *)(lVar9 + 0x70);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar12 == 0) goto LAB_00a9d3dc;
      }
    }
LAB_00a9cdc0:
    auVar41._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0xc),0);
    auVar41._12_4_ = 0;
    *(undefined1 *)((long)param_1 + 0x135) = 0;
    FUN_00d6f7c8(auVar41,param_2,param_1 + 0x48,param_1 + 0x49,param_1 + 0x40,param_1 + 0x44,
                 param_1 + 0x4a);
  }
  if ((((DAT_04837999 != '\0') && (*(char *)((long)param_2 + 0x11f) == '\0')) &&
      (*(char *)(param_1 + 0x4e) != '\0')) && (*(char *)((long)param_2 + 0x11a) == '\0')) {
    if (param_1[0xd] < param_1[0x49] + *(float *)(param_2 + 0x1f)) {
      cVar3 = *(char *)((long)param_2 + 0x119);
    }
    else {
      cVar3 = (char)param_2[0x23];
    }
    if (cVar3 == '\0') {
      auVar35._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0x2c),0);
      auVar35._12_4_ = 0;
      auVar44._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0x38),0);
      auVar44._12_4_ = 0;
      FUN_00d707f0(auVar35,auVar44,param_1,param_2);
      lVar9 = param_2[0x10];
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar12 = *(short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar12) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00a9d438;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a9d438:
            bVar4 = false;
          }
          if (bVar4) {
            lVar9 = *(long *)(lVar9 + 0x10);
            if (lVar9 != 0) {
              plVar14 = (long *)(lVar9 + -0x28);
              FUN_00d3c698(plVar14,1);
              lVar9 = *(long *)(lVar9 + 0x70);
              psVar1 = (short *)(lVar9 + 0x1a);
              do {
                sVar12 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar12 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*plVar14 + 0x50))(plVar14);
              }
              else if (sVar12 == 0) {
LAB_00a9d3dc:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar12 = sVar2;
        } while (sVar2 != 0);
      }
      auVar36._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0xc),0);
      auVar36._12_4_ = 0;
      *(undefined1 *)((long)param_1 + 0x135) = 0;
      FUN_00d6f7c8(auVar36,param_2,param_1 + 0x48,param_1 + 0x49,param_1 + 0x40,param_1 + 0x44,
                   param_1 + 0x4a);
    }
  }
  fVar37 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar10 = (ulong)((fVar37 / *(float *)PTR_FloatDegree180_047d2390) * 10.0);
  auVar41 = *(undefined1 (*) [16])(param_1 + 8);
  auVar31 = auVar41._0_12_;
  fVar45 = auVar41._0_4_;
  fVar47 = auVar41._4_4_;
  fVar49 = auVar41._8_4_;
  fVar50 = auVar41._12_4_;
  auVar18._0_4_ = fVar45 * fVar45 + fVar47 * fVar47;
  auVar18._4_4_ = fVar49 * fVar49 + fVar50 * fVar50;
  auVar18._8_4_ = fVar45 * fVar45 + fVar47 * fVar47;
  auVar18._12_4_ = fVar49 * fVar49 + fVar50 * fVar50;
  auVar41 = NEON_ext(auVar18,auVar18,4,1);
  auVar19._0_4_ = auVar41._0_4_ + auVar41._4_4_;
  auVar19._4_4_ = auVar41._8_4_ + auVar41._12_4_;
  auVar19._8_4_ = auVar41._0_4_ + auVar41._4_4_;
  auVar19._12_4_ = auVar41._8_4_ + auVar41._12_4_;
  auVar41 = NEON_frsqrte(auVar19,4);
  auVar86._0_4_ = auVar19._0_4_ * auVar41._0_4_;
  auVar86._4_4_ = auVar19._4_4_ * auVar41._4_4_;
  auVar86._8_4_ = auVar19._8_4_ * auVar41._8_4_;
  auVar86._12_4_ = auVar19._12_4_ * auVar41._12_4_;
  auVar63 = NEON_frsqrts(auVar41,auVar86,4);
  auVar65._0_4_ = auVar41._0_4_ * auVar63._0_4_;
  auVar65._4_4_ = auVar41._4_4_ * auVar63._4_4_;
  auVar65._8_4_ = auVar41._8_4_ * auVar63._8_4_;
  auVar65._12_4_ = auVar41._12_4_ * auVar63._12_4_;
  auVar87._0_4_ = auVar19._0_4_ * auVar65._0_4_;
  auVar87._4_4_ = auVar19._4_4_ * auVar65._4_4_;
  auVar87._8_4_ = auVar19._8_4_ * auVar65._8_4_;
  auVar87._12_4_ = auVar19._12_4_ * auVar65._12_4_;
  iVar61 = -(uint)(auVar19._0_4_ == 0.0);
  iVar78 = -(uint)(auVar19._4_4_ == 0.0);
  iVar80 = -(uint)(auVar19._8_4_ == 0.0);
  auVar41 = NEON_frsqrts(auVar65,auVar87,4);
  fVar37 = fVar45 * auVar65._0_4_ * auVar41._0_4_;
  fVar56 = fVar47 * auVar65._4_4_ * auVar41._4_4_;
  fVar58 = fVar49 * auVar65._8_4_ * auVar41._8_4_;
  fVar37 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar61)));
  auVar39._0_8_ =
       CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                         CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar78 >> 8),
                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar78,fVar37))));
  auVar39[8] = SUB41(fVar58,0) & ~(byte)iVar80;
  auVar39[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar80 >> 8);
  auVar39[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
  auVar39[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
  fVar37 = fVar37 * (float)_DAT_03cabe60;
  fVar56 = (float)((ulong)auVar39._0_8_ >> 0x20) * (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar58 = auVar39._8_4_ * (float)_UNK_03cabe68;
  fVar60 = (float)((ulong)_UNK_03cabe68 >> 0x20) * 0.0;
  auVar20._0_4_ = fVar37 + fVar56;
  auVar20._4_4_ = fVar58 + fVar60;
  auVar20._8_4_ = fVar37 + fVar56;
  auVar20._12_4_ = fVar58 + fVar60;
  auVar41 = NEON_ext(auVar20,auVar20,4,1);
  fVar102 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar10 >> 0x18 & 0xff) * 0x10) +
            *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar10 >> 0x18 & 0xff) * 0x10) + 8)
            * (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
  fVar37 = auVar41._0_4_ + auVar41._4_4_;
  fVar56 = (float)DAT_03cab620;
  fVar58 = (float)((ulong)DAT_03cab620 >> 0x20);
  fVar60 = (float)DAT_03cab628;
  fVar100 = (float)((ulong)DAT_03cab628 >> 0x20);
  if (fVar37 <= fVar102) {
    if (fVar37 < -fVar102) {
      auVar23._0_4_ = fVar56 + fVar58;
      auVar23._4_4_ = fVar60 + fVar100;
      auVar23._8_4_ = fVar56 + fVar58;
      auVar23._12_4_ = fVar60 + fVar100;
      auVar41 = NEON_ext(auVar23,auVar23,4,1);
      auVar24._0_4_ = auVar41._0_4_ + auVar41._4_4_;
      auVar24._4_4_ = auVar41._8_4_ + auVar41._12_4_;
      auVar24._8_4_ = auVar41._0_4_ + auVar41._4_4_;
      auVar24._12_4_ = auVar41._8_4_ + auVar41._12_4_;
      auVar41 = NEON_frsqrte(auVar24,4);
      auVar68._0_4_ = auVar24._0_4_ * auVar41._0_4_;
      auVar68._4_4_ = auVar24._4_4_ * auVar41._4_4_;
      auVar68._8_4_ = auVar24._8_4_ * auVar41._8_4_;
      auVar68._12_4_ = auVar24._12_4_ * auVar41._12_4_;
      auVar63 = NEON_frsqrts(auVar41,auVar68,4);
      auVar53._0_4_ = auVar41._0_4_ * auVar63._0_4_;
      auVar53._4_4_ = auVar41._4_4_ * auVar63._4_4_;
      auVar53._8_4_ = auVar41._8_4_ * auVar63._8_4_;
      auVar53._12_4_ = auVar41._12_4_ * auVar63._12_4_;
      auVar69._0_4_ = auVar24._0_4_ * auVar53._0_4_;
      auVar69._4_4_ = auVar24._4_4_ * auVar53._4_4_;
      auVar69._8_4_ = auVar24._8_4_ * auVar53._8_4_;
      auVar69._12_4_ = auVar24._12_4_ * auVar53._12_4_;
      iVar61 = -(uint)(auVar24._0_4_ == 0.0);
      iVar78 = -(uint)(auVar24._4_4_ == 0.0);
      iVar80 = -(uint)(auVar24._8_4_ == 0.0);
      auVar41 = NEON_frsqrts(auVar53,auVar69,4);
      fVar56 = auVar53._0_4_ * auVar41._0_4_ * fVar56;
      fVar58 = auVar53._4_4_ * auVar41._4_4_ * fVar58;
      fVar60 = auVar53._8_4_ * auVar41._8_4_ * fVar60;
      auVar40[0] = SUB41(fVar56,0) & ~(byte)iVar61;
      auVar40[1] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar61 >> 8);
      auVar40[2] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      auVar40[3] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      auVar40[4] = SUB41(fVar58,0) & ~(byte)iVar78;
      auVar40[5] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar78 >> 8);
      auVar40[6] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
      auVar40[7] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
      auVar40[8] = SUB41(fVar60,0) & ~(byte)iVar80;
      auVar40[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar80 >> 8);
      auVar40[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
      auVar40[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
      fVar37 = _DAT_03caa7d0;
      fVar56 = _UNK_03caa7d4;
      fVar58 = _UNK_03caa7d8;
      fVar60 = _UNK_03caa7dc;
      goto LAB_00a9cf7c;
    }
  }
  else {
    auVar21._0_4_ = fVar56 + fVar58;
    auVar21._4_4_ = fVar60 + fVar100;
    auVar21._8_4_ = fVar56 + fVar58;
    auVar21._12_4_ = fVar60 + fVar100;
    auVar41 = NEON_ext(auVar21,auVar21,4,1);
    auVar22._0_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar22._4_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar22._8_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar22._12_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar41 = NEON_frsqrte(auVar22,4);
    auVar66._0_4_ = auVar22._0_4_ * auVar41._0_4_;
    auVar66._4_4_ = auVar22._4_4_ * auVar41._4_4_;
    auVar66._8_4_ = auVar22._8_4_ * auVar41._8_4_;
    auVar66._12_4_ = auVar22._12_4_ * auVar41._12_4_;
    auVar63 = NEON_frsqrts(auVar41,auVar66,4);
    auVar52._0_4_ = auVar41._0_4_ * auVar63._0_4_;
    auVar52._4_4_ = auVar41._4_4_ * auVar63._4_4_;
    auVar52._8_4_ = auVar41._8_4_ * auVar63._8_4_;
    auVar52._12_4_ = auVar41._12_4_ * auVar63._12_4_;
    auVar67._0_4_ = auVar22._0_4_ * auVar52._0_4_;
    auVar67._4_4_ = auVar22._4_4_ * auVar52._4_4_;
    auVar67._8_4_ = auVar22._8_4_ * auVar52._8_4_;
    auVar67._12_4_ = auVar22._12_4_ * auVar52._12_4_;
    iVar61 = -(uint)(auVar22._0_4_ == 0.0);
    iVar78 = -(uint)(auVar22._4_4_ == 0.0);
    iVar80 = -(uint)(auVar22._8_4_ == 0.0);
    auVar41 = NEON_frsqrts(auVar52,auVar67,4);
    fVar56 = auVar52._0_4_ * auVar41._0_4_ * fVar56;
    fVar58 = auVar52._4_4_ * auVar41._4_4_ * fVar58;
    fVar60 = auVar52._8_4_ * auVar41._8_4_ * fVar60;
    auVar40[0] = SUB41(fVar56,0) & ~(byte)iVar61;
    auVar40[1] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar61 >> 8);
    auVar40[2] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    auVar40[3] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    auVar40[4] = SUB41(fVar58,0) & ~(byte)iVar78;
    auVar40[5] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar78 >> 8);
    auVar40[6] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
    auVar40[7] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
    auVar40[8] = SUB41(fVar60,0) & ~(byte)iVar80;
    auVar40[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar80 >> 8);
    auVar40[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
    auVar40[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
    fVar37 = _DAT_03cabf60;
    fVar56 = _UNK_03cabf64;
    fVar58 = _UNK_03cabf68;
    fVar60 = _UNK_03cabf6c;
LAB_00a9cf7c:
    auVar42._0_4_ = auVar40._0_4_ * fVar37;
    auVar42._4_4_ = auVar40._4_4_ * fVar56;
    auVar42._8_4_ = auVar40._8_4_ * fVar58;
    auVar42._12_4_ = fVar60 * 1.0;
    fVar37 = param_1[0xc];
    fVar56 = param_1[0xd];
    fVar58 = param_1[0xe];
    fVar60 = param_1[0xf];
    auVar41 = NEON_ext(auVar42,auVar42,0xc,1);
    auVar70._4_12_ = auVar41._4_12_;
    auVar70._0_4_ = auVar42._0_4_;
    auVar72._12_4_ = auVar41._12_4_;
    auVar72._0_8_ = auVar70._0_8_;
    auVar72._8_4_ = auVar42._4_4_;
    auVar71._8_8_ = auVar72._8_8_;
    auVar71._4_4_ = auVar41._0_4_;
    auVar71._0_4_ = auVar42._0_4_;
    auVar73._0_12_ = auVar71._0_12_;
    auVar73._12_4_ = auVar41._4_4_;
    fVar57 = auVar42._4_4_ * auVar42._4_4_ + auVar42._4_4_ * auVar42._4_4_;
    fVar59 = auVar42._8_4_ * auVar42._8_4_ + auVar42._8_4_ * auVar42._8_4_;
    auVar63 = NEON_fmov(0x3f800000,4);
    auVar88._4_4_ = auVar42._8_4_;
    auVar88._0_4_ = auVar42._8_4_;
    auVar88._8_4_ = auVar42._4_4_;
    auVar88._12_4_ = auVar42._12_4_;
    auVar41 = NEON_ext(auVar73,auVar73,8,1);
    fVar100 = auVar63._0_4_ - (auVar42._0_4_ * auVar42._0_4_ + auVar42._0_4_ * auVar42._0_4_);
    fVar102 = auVar63._4_4_ - fVar57;
    fVar38 = auVar42._0_4_ * auVar42._12_4_ + auVar42._0_4_ * auVar42._12_4_;
    fVar46 = auVar42._4_4_ * auVar42._12_4_ + auVar42._4_4_ * auVar42._12_4_;
    fVar48 = auVar42._8_4_ * auVar42._12_4_ + auVar42._8_4_ * auVar42._12_4_;
    fVar62 = auVar41._0_4_ * auVar42._8_4_;
    fVar79 = auVar41._4_4_ * auVar42._8_4_;
    fVar81 = auVar41._8_4_ * auVar42._4_4_;
    auVar89._4_12_ = auVar88._4_12_;
    auVar89._0_4_ = fVar100;
    auVar91._0_8_ = auVar89._0_8_;
    auVar91._8_4_ = fVar102;
    auVar91._12_4_ = auVar42._12_4_;
    auVar90._8_8_ = auVar91._8_8_;
    auVar90._4_4_ = fVar100;
    auVar90._0_4_ = fVar100;
    auVar92._0_12_ = auVar90._0_12_;
    auVar92._12_4_ = fVar102;
    fVar62 = fVar62 + fVar62;
    fVar79 = fVar79 + fVar79;
    fVar81 = fVar81 + fVar81;
    auVar41 = NEON_ext(auVar92,auVar92,0xc,1);
    fVar101 = fVar62 + fVar38;
    fVar103 = fVar79 + fVar46;
    fVar105 = fVar81 + fVar48;
    fVar84 = auVar41._0_4_ - fVar59;
    fVar59 = auVar41._4_4_ - fVar59;
    fVar57 = auVar41._8_4_ - fVar57;
    fVar100 = *param_1;
    fVar102 = param_1[1];
    fVar104 = param_1[2];
    fVar106 = param_1[3];
    fVar114 = param_1[4];
    fVar119 = param_1[5];
    fVar121 = param_1[6];
    fVar7 = param_1[7];
    fVar62 = fVar62 - fVar38;
    fVar79 = fVar79 - fVar46;
    fVar81 = fVar81 - fVar48;
    fVar115 = fVar100 * fVar81 + fVar114 * fVar59 + fVar45 * fVar101 + fVar37 * 0.0;
    fVar120 = fVar102 * fVar81 + fVar119 * fVar59 + fVar47 * fVar101 + fVar56 * 0.0;
    fVar122 = fVar104 * fVar81 + fVar121 * fVar59 + fVar49 * fVar101 + fVar58 * 0.0;
    fVar123 = fVar106 * fVar81 + fVar7 * fVar59 + fVar50 * fVar101 + fVar60 * 0.0;
    fVar59 = fVar100 * fVar84 + fVar114 * fVar105 + fVar45 * fVar79 + fVar37 * 0.0;
    fVar81 = fVar102 * fVar84 + fVar119 * fVar105 + fVar47 * fVar79 + fVar56 * 0.0;
    fVar101 = fVar104 * fVar84 + fVar121 * fVar105 + fVar49 * fVar79 + fVar58 * 0.0;
    fVar79 = fVar106 * fVar84 + fVar7 * fVar105 + fVar50 * fVar79 + fVar60 * 0.0;
    auVar25._0_4_ = fVar115 * fVar115 + fVar120 * fVar120;
    auVar25._4_4_ = fVar122 * fVar122 + fVar123 * fVar123;
    auVar25._8_4_ = fVar115 * fVar115 + fVar120 * fVar120;
    auVar25._12_4_ = fVar122 * fVar122 + fVar123 * fVar123;
    auVar41 = NEON_ext(auVar25,auVar25,4,1);
    auVar26._0_4_ = fVar59 * fVar59 + fVar81 * fVar81;
    auVar26._4_4_ = fVar101 * fVar101 + fVar79 * fVar79;
    auVar26._8_4_ = fVar59 * fVar59 + fVar81 * fVar81;
    auVar26._12_4_ = fVar101 * fVar101 + fVar79 * fVar79;
    auVar63 = NEON_ext(auVar26,auVar26,4,1);
    fVar38 = fVar100 * fVar103 + fVar114 * fVar62 + fVar45 * fVar57 + fVar37 * 0.0;
    fVar46 = fVar102 * fVar103 + fVar119 * fVar62 + fVar47 * fVar57 + fVar56 * 0.0;
    fVar48 = fVar104 * fVar103 + fVar121 * fVar62 + fVar49 * fVar57 + fVar58 * 0.0;
    fVar57 = fVar106 * fVar103 + fVar7 * fVar62 + fVar50 * fVar57 + fVar60 * 0.0;
    auVar27._0_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar27._4_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar27._8_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar27._12_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar28._0_4_ = auVar63._0_4_ + auVar63._4_4_;
    auVar28._4_4_ = auVar63._8_4_ + auVar63._12_4_;
    auVar28._8_4_ = auVar63._0_4_ + auVar63._4_4_;
    auVar28._12_4_ = auVar63._8_4_ + auVar63._12_4_;
    auVar63 = NEON_frsqrte(auVar27,4);
    auVar108 = NEON_frsqrte(auVar28,4);
    auVar29._0_4_ = fVar38 * fVar38 + fVar46 * fVar46;
    auVar29._4_4_ = fVar48 * fVar48 + fVar57 * fVar57;
    auVar29._8_4_ = fVar38 * fVar38 + fVar46 * fVar46;
    auVar29._12_4_ = fVar48 * fVar48 + fVar57 * fVar57;
    auVar125._0_4_ = auVar27._0_4_ * auVar63._0_4_;
    auVar125._4_4_ = auVar27._4_4_ * auVar63._4_4_;
    auVar125._8_4_ = auVar27._8_4_ * auVar63._8_4_;
    auVar125._12_4_ = auVar27._12_4_ * auVar63._12_4_;
    auVar41 = NEON_ext(auVar29,auVar29,4,1);
    auVar30._0_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar30._4_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar30._8_4_ = auVar41._0_4_ + auVar41._4_4_;
    auVar30._12_4_ = auVar41._8_4_ + auVar41._12_4_;
    auVar41 = NEON_frsqrts(auVar63,auVar125,4);
    auVar74._0_4_ = auVar63._0_4_ * auVar41._0_4_;
    auVar74._4_4_ = auVar63._4_4_ * auVar41._4_4_;
    auVar74._8_4_ = auVar63._8_4_ * auVar41._8_4_;
    auVar74._12_4_ = auVar63._12_4_ * auVar41._12_4_;
    auVar126._0_4_ = auVar28._0_4_ * auVar108._0_4_;
    auVar126._4_4_ = auVar28._4_4_ * auVar108._4_4_;
    auVar126._8_4_ = auVar28._8_4_ * auVar108._8_4_;
    auVar126._12_4_ = auVar28._12_4_ * auVar108._12_4_;
    auVar41 = NEON_frsqrts(auVar108,auVar126,4);
    auVar109._0_4_ = auVar108._0_4_ * auVar41._0_4_;
    auVar109._4_4_ = auVar108._4_4_ * auVar41._4_4_;
    auVar109._8_4_ = auVar108._8_4_ * auVar41._8_4_;
    auVar109._12_4_ = auVar108._12_4_ * auVar41._12_4_;
    auVar127._0_4_ = auVar27._0_4_ * auVar74._0_4_;
    auVar127._4_4_ = auVar27._4_4_ * auVar74._4_4_;
    auVar127._8_4_ = auVar27._8_4_ * auVar74._8_4_;
    auVar127._12_4_ = auVar27._12_4_ * auVar74._12_4_;
    iVar83 = -(uint)(auVar27._0_4_ == 0.0);
    iVar97 = -(uint)(auVar27._4_4_ == 0.0);
    iVar98 = -(uint)(auVar27._8_4_ == 0.0);
    iVar99 = -(uint)(auVar27._12_4_ == 0.0);
    auVar41 = NEON_frsqrts(auVar74,auVar127,4);
    auVar128._0_4_ = auVar28._0_4_ * auVar109._0_4_;
    auVar128._4_4_ = auVar28._4_4_ * auVar109._4_4_;
    auVar128._8_4_ = auVar28._8_4_ * auVar109._8_4_;
    auVar128._12_4_ = auVar28._12_4_ * auVar109._12_4_;
    iVar61 = -(uint)(auVar28._0_4_ == 0.0);
    iVar78 = -(uint)(auVar28._4_4_ == 0.0);
    iVar80 = -(uint)(auVar28._8_4_ == 0.0);
    iVar82 = -(uint)(auVar28._12_4_ == 0.0);
    auVar63 = NEON_frsqrts(auVar109,auVar128,4);
    fVar115 = fVar115 * auVar74._0_4_ * auVar41._0_4_;
    fVar120 = fVar120 * auVar74._4_4_ * auVar41._4_4_;
    fVar122 = fVar122 * auVar74._8_4_ * auVar41._8_4_;
    fVar123 = fVar123 * auVar74._12_4_ * auVar41._12_4_;
    auVar108 = NEON_frsqrte(auVar30,4);
    auVar75._0_4_ = auVar30._0_4_ * auVar108._0_4_;
    auVar75._4_4_ = auVar30._4_4_ * auVar108._4_4_;
    auVar75._8_4_ = auVar30._8_4_ * auVar108._8_4_;
    auVar75._12_4_ = auVar30._12_4_ * auVar108._12_4_;
    fVar59 = auVar109._0_4_ * auVar63._0_4_ * fVar59;
    fVar81 = auVar109._4_4_ * auVar63._4_4_ * fVar81;
    fVar101 = auVar109._8_4_ * auVar63._8_4_ * fVar101;
    fVar79 = auVar109._12_4_ * auVar63._12_4_ * fVar79;
    auVar41 = NEON_frsqrts(auVar108,auVar75,4);
    *(byte *)(param_1 + 2) = SUB41(fVar101,0) & ~(byte)iVar80;
    *(byte *)((long)param_1 + 9) = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar80 >> 8);
    *(byte *)((long)param_1 + 10) = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
    *(byte *)((long)param_1 + 0xb) = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
    *(byte *)(param_1 + 3) = SUB41(fVar79,0) & ~(byte)iVar82;
    *(byte *)((long)param_1 + 0xd) = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar82 >> 8);
    *(byte *)((long)param_1 + 0xe) = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
    *(byte *)((long)param_1 + 0xf) = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
    *(byte *)param_1 = SUB41(fVar59,0) & ~(byte)iVar61;
    *(byte *)((long)param_1 + 1) = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar61 >> 8);
    *(byte *)((long)param_1 + 2) = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    *(byte *)((long)param_1 + 3) = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    *(byte *)(param_1 + 1) = SUB41(fVar81,0) & ~(byte)iVar78;
    *(byte *)((long)param_1 + 5) = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar78 >> 8);
    *(byte *)((long)param_1 + 6) = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
    *(byte *)((long)param_1 + 7) = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
    *(byte *)(param_1 + 6) = SUB41(fVar122,0) & ~(byte)iVar98;
    *(byte *)((long)param_1 + 0x19) = (byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar98 >> 8);
    *(byte *)((long)param_1 + 0x1a) = (byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
    *(byte *)((long)param_1 + 0x1b) = (byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
    *(byte *)(param_1 + 7) = SUB41(fVar123,0) & ~(byte)iVar99;
    *(byte *)((long)param_1 + 0x1d) = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)iVar99 >> 8);
    *(byte *)((long)param_1 + 0x1e) = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10);
    *(byte *)((long)param_1 + 0x1f) = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18);
    *(byte *)(param_1 + 4) = SUB41(fVar115,0) & ~(byte)iVar83;
    *(byte *)((long)param_1 + 0x11) = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar83 >> 8);
    *(byte *)((long)param_1 + 0x12) = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
    *(byte *)((long)param_1 + 0x13) = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
    *(byte *)(param_1 + 5) = SUB41(fVar120,0) & ~(byte)iVar97;
    *(byte *)((long)param_1 + 0x15) = (byte)((uint)fVar120 >> 8) & ~(byte)((uint)iVar97 >> 8);
    *(byte *)((long)param_1 + 0x16) = (byte)((uint)fVar120 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
    *(byte *)((long)param_1 + 0x17) = (byte)((uint)fVar120 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
    auVar76._0_4_ = auVar108._0_4_ * auVar41._0_4_;
    auVar76._4_4_ = auVar108._4_4_ * auVar41._4_4_;
    auVar76._8_4_ = auVar108._8_4_ * auVar41._8_4_;
    auVar76._12_4_ = auVar108._12_4_ * auVar41._12_4_;
    auVar93._0_4_ = auVar30._0_4_ * auVar76._0_4_;
    auVar93._4_4_ = auVar30._4_4_ * auVar76._4_4_;
    auVar93._8_4_ = auVar30._8_4_ * auVar76._8_4_;
    auVar93._12_4_ = auVar30._12_4_ * auVar76._12_4_;
    iVar61 = -(uint)(auVar30._0_4_ == 0.0);
    iVar78 = -(uint)(auVar30._4_4_ == 0.0);
    iVar80 = -(uint)(auVar30._8_4_ == 0.0);
    iVar82 = -(uint)(auVar30._12_4_ == 0.0);
    auVar41 = NEON_frsqrts(auVar76,auVar93,4);
    fVar38 = fVar38 * auVar76._0_4_ * auVar41._0_4_;
    fVar46 = fVar46 * auVar76._4_4_ * auVar41._4_4_;
    fVar48 = fVar48 * auVar76._8_4_ * auVar41._8_4_;
    fVar57 = fVar57 * auVar76._12_4_ * auVar41._12_4_;
    auVar31._0_8_ =
         CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                  CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                           CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar78 >> 8),
                                    CONCAT14(SUB41(fVar46,0) & ~(byte)iVar78,
                                             CONCAT13((byte)((uint)fVar38 >> 0x18) &
                                                      ~(byte)((uint)iVar61 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                               ~(byte)((uint)iVar61 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar38 >> 8) &
                                                                        ~(byte)((uint)iVar61 >> 8),
                                                                        SUB41(fVar38,0) &
                                                                        ~(byte)iVar61)))))));
    auVar31[8] = SUB41(fVar48,0) & ~(byte)iVar80;
    auVar31[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar80 >> 8);
    auVar31[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
    auVar31[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
    auVar32[0xc] = SUB41(fVar57,0) & ~(byte)iVar82;
    auVar32._0_12_ = auVar31;
    auVar32[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar82 >> 8);
    auVar32[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
    *(long *)(param_1 + 10) = auVar32._8_8_;
    *(undefined8 *)(param_1 + 8) = auVar31._0_8_;
    param_1[0xe] = fVar58 + fVar104 * 0.0 + fVar121 * 0.0 + fVar49 * 0.0;
    param_1[0xf] = fVar60 + fVar106 * 0.0 + fVar7 * 0.0 + fVar50 * 0.0;
    param_1[0xc] = fVar37 + fVar100 * 0.0 + fVar114 * 0.0 + fVar45 * 0.0;
    param_1[0xd] = fVar56 + fVar102 * 0.0 + fVar119 * 0.0 + fVar47 * 0.0;
  }
  if (*(char *)((long)param_2 + 0x11d) != '\0') {
    if (*(int *)(&DAT_03d30718 + (long)(int)param_1[0x4c] * 0x1c) == 2) {
      puVar11 = (uint *)((long)param_2 + 0x114);
    }
    else if (*(int *)(&DAT_03d30718 + (long)(int)param_1[0x4c] * 0x1c) == 1) {
      puVar11 = (uint *)(param_2 + 0x22);
    }
    else {
      puVar11 = (uint *)((long)param_2 + 0x10c);
    }
    if (((0x2100240U >> ((ulong)*puVar11 & 0x3f) & 1) != 0) &&
       (*(char *)((long)param_2 + 0x11e) != '\0')) {
      fVar37 = *param_1;
      auVar41 = *(undefined1 (*) [16])(param_1 + 4);
      auVar63 = NEON_fmov(0x3f800000,4);
      fVar58 = -auVar31._0_4_;
      fVar60 = -auVar31._4_4_;
      fVar45 = auVar31._8_4_;
      fVar56 = auVar41._4_4_;
      fVar47 = ((auVar63._0_4_ - (float)_DAT_03cab3a0 * fVar37) + (float)_DAT_03cac210 * fVar56) -
               (float)_DAT_03cabb00 * fVar45;
      fVar49 = ((auVar63._4_4_ - (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar37) +
               (float)((ulong)_DAT_03cac210 >> 0x20) * fVar56) -
               (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar45;
      fVar50 = ((auVar63._8_4_ - (float)_UNK_03cab3a8 * fVar37) + (float)_UNK_03cac218 * fVar56) -
               (float)_UNK_03cabb08 * fVar45;
      fVar45 = ((auVar63._12_4_ - (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar37) +
               (float)((ulong)_UNK_03cac218 >> 0x20) * fVar56) -
               (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar45;
      auVar94._0_4_ = -fVar37;
      auVar94._4_4_ = -param_1[1];
      auVar94._8_4_ = -param_1[2];
      auVar94._12_4_ = -param_1[3];
      fVar56 = auVar41._0_4_;
      auVar41 = NEON_ext(auVar41,auVar41,8,1);
      auVar108 = NEON_ext(auVar94,auVar94,8,1);
      auVar63 = NEON_fmov(0x40800000,4);
      fVar37 = auVar41._0_4_;
      auVar129._0_4_ = SQRT(fVar47) * 0.5 * auVar63._0_4_;
      auVar129._4_4_ = SQRT(fVar49) * 0.5 * auVar63._4_4_;
      auVar129._8_4_ = SQRT(fVar50) * 0.5 * auVar63._8_4_;
      auVar129._12_4_ = SQRT(fVar45) * 0.5 * auVar63._12_4_;
      auVar41 = NEON_frecpe(auVar129,4);
      auVar63 = NEON_frecps(auVar41,auVar129,4);
      auVar132._4_4_ = fVar49;
      auVar132._0_4_ = fVar49;
      auVar132._8_4_ = fVar49;
      auVar132._12_4_ = fVar49;
      auVar77._4_4_ = fVar47;
      auVar77._0_4_ = fVar47;
      auVar77._8_4_ = fVar47;
      auVar77._12_4_ = fVar47;
      auVar95._0_4_ = auVar41._0_4_ * auVar63._0_4_;
      auVar95._4_4_ = auVar41._4_4_ * auVar63._4_4_;
      auVar95._8_4_ = auVar41._8_4_ * auVar63._8_4_;
      auVar95._12_4_ = auVar41._12_4_ * auVar63._12_4_;
      auVar117._4_4_ = fVar50;
      auVar117._0_4_ = fVar50;
      auVar117._8_4_ = fVar50;
      auVar117._12_4_ = fVar50;
      auVar5._4_4_ = -(uint)(fVar47 <= fVar49);
      auVar5._0_4_ = -(uint)(fVar47 <= fVar49);
      auVar5._8_4_ = -(uint)(fVar47 <= fVar49);
      auVar5._12_4_ = -(uint)(fVar47 <= fVar49);
      auVar77 = auVar77 ^ (auVar77 ^ auVar132) & auVar5;
      auVar41 = NEON_frecps(auVar95,auVar129,4);
      auVar130._0_4_ = -(uint)(auVar77._0_4_ <= fVar50);
      auVar130._4_4_ = -(uint)(auVar77._4_4_ <= fVar50);
      auVar130._8_4_ = -(uint)(auVar77._8_4_ <= fVar50);
      auVar130._12_4_ = -(uint)(auVar77._12_4_ <= fVar50);
      auVar77 = auVar77 ^ (auVar77 ^ auVar117) & auVar130;
      fVar100 = auVar95._0_4_ * auVar41._0_4_;
      fVar102 = auVar95._4_4_ * auVar41._4_4_;
      fVar104 = auVar95._8_4_ * auVar41._8_4_;
      fVar106 = auVar95._12_4_ * auVar41._12_4_;
      auVar54._0_4_ = (auVar94._4_4_ + fVar56) * fVar102;
      auVar54._4_4_ = fVar102 * 0.0;
      auVar54._8_4_ = (fVar37 + fVar60) * fVar102;
      auVar54._12_4_ = (fVar58 + -auVar94._8_4_) * fVar102;
      auVar6._4_8_ = auVar117._8_8_;
      auVar6._0_4_ = (fVar56 + auVar94._4_4_) * fVar100;
      auVar118._0_8_ = auVar6._0_8_ << 0x20;
      auVar118._8_4_ = (auVar108._0_4_ + fVar58) * fVar100;
      auVar118._12_4_ = (fVar37 + -fVar60) * fVar100;
      auVar110._0_4_ = (auVar108._0_4_ + fVar58) * fVar104;
      auVar110._4_4_ = (fVar37 + fVar60) * fVar104;
      auVar110._12_4_ = (auVar94._4_4_ - fVar56) * fVar104;
      auVar96._0_4_ = (fVar37 - fVar60) * fVar106;
      auVar96._4_4_ = (fVar58 - auVar94._8_4_) * fVar106;
      auVar96._8_4_ = (auVar94._4_4_ - fVar56) * fVar106;
      auVar34._4_12_ = auVar118._4_12_;
      auVar34._0_4_ = SQRT(fVar47) * 0.5;
      auVar55._8_8_ = auVar54._8_8_;
      auVar55._4_4_ = SQRT(fVar49) * 0.5;
      auVar55._0_4_ = auVar54._0_4_;
      auVar110._8_4_ = SQRT(fVar50) * 0.5;
      auVar96._12_4_ = SQRT(fVar45) * 0.5;
      auVar33._12_4_ = -(uint)(fVar47 <= fVar49);
      auVar33._8_4_ = -(uint)(fVar47 <= fVar49);
      auVar33._4_4_ = -(uint)(fVar47 <= fVar49);
      auVar33._0_4_ = -(uint)(fVar47 <= fVar49);
      auVar43._0_4_ = -(uint)(auVar77._0_4_ <= fVar45);
      auVar43._4_4_ = -(uint)(auVar77._4_4_ <= fVar45);
      auVar43._8_4_ = -(uint)(auVar77._8_4_ <= fVar45);
      auVar43._12_4_ = -(uint)(auVar77._12_4_ <= fVar45);
      auVar34 = auVar34 ^ (auVar34 ^ auVar55) & auVar33;
      auVar34 = auVar34 ^ (auVar34 ^ auVar110) & auVar130;
      auVar34 = auVar34 ^ (auVar34 ^ auVar96) & auVar43;
      plVar13[0x1b] = auVar34._8_8_;
      plVar13[0x1a] = auVar34._0_8_;
      if (*(char *)((long)plVar13 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar13 + 0xf4) = 1;
        (**(code **)(*plVar13 + 0x78))(plVar13);
      }
      goto LAB_00a9d288;
    }
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
LAB_00a9d288:
                    /* WARNING: Could not recover jumptable at 0x00a9d2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x60))(plVar13);
  return;
code_r0x00a9d388:
  sVar12 = sVar2;
  if (sVar2 == 0) goto LAB_00a9cdc0;
  goto LAB_00a9d35c;
}


