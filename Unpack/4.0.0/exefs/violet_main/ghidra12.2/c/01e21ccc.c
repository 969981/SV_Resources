/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21ccc; name: FUN_01e21ccc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e21ccc(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  long lVar12;
  short sVar13;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  undefined8 uVar55;
  float fVar61;
  float fVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar68;
  int iVar69;
  undefined1 auVar63 [16];
  int iVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar71;
  undefined8 uVar72;
  float fVar85;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar87;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  int iVar84;
  int iVar86;
  int iVar88;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [12];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [12];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  undefined8 uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined8 uVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined8 uVar137;
  undefined1 auVar138 [12];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined8 uVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [12];
  undefined1 auVar153 [12];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined8 local_60;
  float fStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_18 [2];
  
  lVar12 = *param_2;
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar13 = *(short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e21d34;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e21d34:
        bVar4 = false;
      }
      if (bVar4) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        fStack_48 = (float)param_1[1];
        fStack_44 = (float)((ulong)param_1[1] >> 0x20);
        local_50 = (float)*param_1;
        fStack_4c = (float)((ulong)*param_1 >> 0x20);
        local_40 = param_1[2];
        uStack_38 = (undefined4)param_1[3];
        uStack_34 = (undefined4)((ulong)param_1[3] >> 0x20);
        fStack_58 = SUB164(*(undefined1 (*) [16])(param_1 + 4),8);
        local_60 = SUB168(*(undefined1 (*) [16])(param_1 + 4),0);
        if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_1 + 0x26) * 0x1c) == 2) {
          param_2 = (long *)((long)param_2 + 0x114);
        }
        else if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_1 + 0x26) * 0x1c) == 1) {
          param_2 = param_2 + 0x22;
        }
        else {
          param_2 = (long *)((long)param_2 + 0x10c);
        }
        local_18[0] = (undefined4)*param_2;
        plVar14 = (long *)(lVar12 + -0x28);
        iVar11 = FUN_01e2260c(local_18);
        if (iVar11 == 0) {
          fVar54 = *(float *)(param_1 + 2);
          fVar61 = *(float *)((long)param_1 + 0x14);
          fVar62 = *(float *)(param_1 + 3);
          fVar42 = *(float *)(param_1 + 4);
          fVar51 = *(float *)((long)param_1 + 0x24);
          fVar52 = *(float *)(param_1 + 5);
          auVar15._0_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar15._4_4_ = fVar52 * fVar52 + 0.0;
          auVar15._8_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar15._12_4_ = fVar52 * fVar52 + 0.0;
          auVar63 = NEON_ext(auVar15,auVar15,4,1);
          auVar16._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar16._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar16._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar16._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar16,4);
          auVar90._0_4_ = auVar16._0_4_ * auVar63._0_4_;
          auVar90._4_4_ = auVar16._4_4_ * auVar63._4_4_;
          auVar90._8_4_ = auVar16._8_4_ * auVar63._8_4_;
          auVar90._12_4_ = auVar16._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar90,4);
          auVar73._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar73._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar73._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar73._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar92._0_4_ = auVar16._0_4_ * auVar73._0_4_;
          auVar92._4_4_ = auVar16._4_4_ * auVar73._4_4_;
          auVar92._8_4_ = auVar16._8_4_ * auVar73._8_4_;
          auVar92._12_4_ = auVar16._12_4_ * auVar73._12_4_;
          iVar11 = -(uint)(auVar16._0_4_ == 0.0);
          iVar68 = -(uint)(auVar16._4_4_ == 0.0);
          iVar69 = -(uint)(auVar16._8_4_ == 0.0);
          iVar70 = -(uint)(auVar16._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar73,auVar92,4);
          fVar42 = fVar42 * auVar73._0_4_ * auVar63._0_4_;
          fVar51 = fVar51 * auVar73._4_4_ * auVar63._4_4_;
          fVar52 = fVar52 * auVar73._8_4_ * auVar63._8_4_;
          fVar53 = auVar73._12_4_ * auVar63._12_4_ * 0.0;
          auVar46[0] = SUB41(fVar42,0) & ~(byte)iVar11;
          auVar46[1] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar11 >> 8);
          auVar46[2] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
          auVar46[3] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
          auVar46[4] = SUB41(fVar51,0) & ~(byte)iVar68;
          auVar46[5] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar68 >> 8);
          auVar46[6] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
          auVar46[7] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
          auVar46[8] = SUB41(fVar52,0) & ~(byte)iVar69;
          auVar46[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar46[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar46[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar46[0xc] = SUB41(fVar53,0) & ~(byte)iVar70;
          auVar46[0xd] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar46[0xe] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar46[0xf] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          auVar17._0_4_ = fVar54 * fVar54 + fVar61 * fVar61;
          auVar17._4_4_ = fVar62 * fVar62 + 0.0;
          auVar17._8_4_ = fVar54 * fVar54 + fVar61 * fVar61;
          auVar17._12_4_ = fVar62 * fVar62 + 0.0;
          auVar63 = NEON_ext(auVar17,auVar17,4,1);
          auVar18._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar18._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar18._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar18._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar18,4);
          auVar101._0_4_ = auVar18._0_4_ * auVar63._0_4_;
          auVar101._4_4_ = auVar18._4_4_ * auVar63._4_4_;
          auVar101._8_4_ = auVar18._8_4_ * auVar63._8_4_;
          auVar101._12_4_ = auVar18._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar101,4);
          auVar93._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar93._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar93._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar93._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar102._0_4_ = auVar18._0_4_ * auVar93._0_4_;
          auVar102._4_4_ = auVar18._4_4_ * auVar93._4_4_;
          auVar102._8_4_ = auVar18._8_4_ * auVar93._8_4_;
          auVar102._12_4_ = auVar18._12_4_ * auVar93._12_4_;
          iVar11 = -(uint)(auVar18._0_4_ == 0.0);
          iVar68 = -(uint)(auVar18._4_4_ == 0.0);
          iVar69 = -(uint)(auVar18._8_4_ == 0.0);
          iVar70 = -(uint)(auVar18._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar93,auVar102,4);
          fVar54 = fVar54 * auVar93._0_4_ * auVar63._0_4_;
          fVar61 = fVar61 * auVar93._4_4_ * auVar63._4_4_;
          fVar62 = fVar62 * auVar93._8_4_ * auVar63._8_4_;
          fVar42 = auVar93._12_4_ * auVar63._12_4_ * 0.0;
          auVar56[0] = SUB41(fVar54,0) & ~(byte)iVar11;
          auVar56[1] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar11 >> 8);
          auVar56[2] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
          auVar56[3] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
          auVar56[4] = SUB41(fVar61,0) & ~(byte)iVar68;
          auVar56[5] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar68 >> 8);
          auVar56[6] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
          auVar56[7] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
          auVar56[8] = SUB41(fVar62,0) & ~(byte)iVar69;
          auVar56[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar56[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar56[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar56[0xc] = SUB41(fVar42,0) & ~(byte)iVar70;
          auVar56[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar56[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar56[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          uVar72 = a64_TBL(ZEXT816(0),auVar56,DAT_03cb56c8);
          uVar100 = a64_TBL(ZEXT816(0),auVar56,DAT_03cb54d8);
          uVar120 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb5488);
          uVar137 = a64_TBL(ZEXT816(0),auVar56,DAT_03cb5488);
          uVar130 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54c0);
          uVar55 = a64_TBL(ZEXT816(0),auVar56,DAT_03cb54c0);
          uVar145 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb56c8);
          uVar43 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54d8);
          fVar52 = (float)uVar72 * (float)uVar120 - (float)uVar137 * (float)uVar145;
          fVar54 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar120 >> 0x20) -
                   (float)((ulong)uVar137 >> 0x20) * (float)((ulong)uVar145 >> 0x20);
          fVar42 = (float)uVar100 * (float)uVar130 - (float)uVar55 * (float)uVar43;
          fVar51 = (float)((ulong)uVar100 >> 0x20) * (float)((ulong)uVar130 >> 0x20) -
                   (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
          auVar131._8_8_ = _UNK_03cabe68;
          auVar131._0_8_ = _DAT_03cabe60;
          auVar19._0_4_ = fVar52 * fVar52 + fVar54 * fVar54;
          auVar19._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar19._8_4_ = fVar52 * fVar52 + fVar54 * fVar54;
          auVar19._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar63 = NEON_ext(auVar19,auVar19,4,1);
          uStack_38 = (undefined4)_UNK_03cabe68;
          uStack_34 = (undefined4)((ulong)_UNK_03cabe68 >> 0x20);
          local_40 = _DAT_03cabe60;
          auVar20._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar20._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar20._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar20._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar20,4);
          auVar103._0_4_ = auVar20._0_4_ * auVar63._0_4_;
          auVar103._4_4_ = auVar20._4_4_ * auVar63._4_4_;
          auVar103._8_4_ = auVar20._8_4_ * auVar63._8_4_;
          auVar103._12_4_ = auVar20._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar103,4);
          auVar74._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar74._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar74._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar74._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar104._0_4_ = auVar20._0_4_ * auVar74._0_4_;
          auVar104._4_4_ = auVar20._4_4_ * auVar74._4_4_;
          auVar104._8_4_ = auVar20._8_4_ * auVar74._8_4_;
          auVar104._12_4_ = auVar20._12_4_ * auVar74._12_4_;
          iVar11 = -(uint)(auVar20._0_4_ == 0.0);
          iVar68 = -(uint)(auVar20._4_4_ == 0.0);
          iVar69 = -(uint)(auVar20._8_4_ == 0.0);
          iVar70 = -(uint)(auVar20._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar74,auVar104,4);
          uVar130 = a64_TBL(ZEXT816(0),auVar131,DAT_03cb54c0);
          fVar52 = fVar52 * auVar74._0_4_ * auVar63._0_4_;
          fVar54 = fVar54 * auVar74._4_4_ * auVar63._4_4_;
          fVar42 = fVar42 * auVar74._8_4_ * auVar63._8_4_;
          fVar51 = fVar51 * auVar74._12_4_ * auVar63._12_4_;
          uVar100 = a64_TBL(ZEXT816(0),auVar131,DAT_03cb5488);
          local_50 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                     CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                              ~(byte)((uint)iVar11 >> 0x10),
                                              CONCAT11((byte)((uint)fVar52 >> 8) &
                                                       ~(byte)((uint)iVar11 >> 8),
                                                       SUB41(fVar52,0) & ~(byte)iVar11)));
          auVar138._0_8_ =
               CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                        CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                 CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                          CONCAT14(SUB41(fVar54,0) & ~(byte)iVar68,local_50))));
          auVar138[8] = SUB41(fVar42,0) & ~(byte)iVar69;
          auVar138[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar138[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar138[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar139[0xc] = SUB41(fVar51,0) & ~(byte)iVar70;
          auVar139._0_12_ = auVar138;
          auVar139[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar139[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar139[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          uVar43 = a64_TBL(ZEXT816(0),auVar139,DAT_03cb56c8);
          uVar55 = a64_TBL(ZEXT816(0),auVar139,DAT_03cb54d8);
          uVar137 = a64_TBL(ZEXT816(0),auVar139,DAT_03cb5488);
          uVar145 = a64_TBL(ZEXT816(0),auVar139,DAT_03cb54c0);
          uVar72 = a64_TBL(ZEXT816(0),auVar131,DAT_03cb56c8);
          uVar120 = a64_TBL(ZEXT816(0),auVar131,DAT_03cb54d8);
          auVar47._0_4_ = (float)uVar43 * (float)uVar100 - (float)uVar137 * (float)uVar72;
          auVar47._4_4_ =
               (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar100 >> 0x20) -
               (float)((ulong)uVar137 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
          fVar42 = (float)uVar55 * (float)uVar130 - (float)uVar145 * (float)uVar120;
          fVar51 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar130 >> 0x20) -
                   (float)((ulong)uVar145 >> 0x20) * (float)((ulong)uVar120 >> 0x20);
          auVar47._12_4_ = fVar51;
          auVar47._8_4_ = fVar42;
          auVar45 = auVar47._0_12_;
          auVar21._0_4_ = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_;
          auVar21._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar21._8_4_ = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_;
          auVar21._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar63 = NEON_ext(auVar21,auVar21,4,1);
          fStack_48 = auVar138._8_4_;
          fStack_4c = (float)((ulong)auVar138._0_8_ >> 0x20);
        }
        else {
          if (iVar11 == 1) {
            fVar42 = *(float *)(param_1 + 4);
            fVar51 = *(float *)((long)param_1 + 0x24);
            fVar52 = *(float *)(param_1 + 5);
            auVar63._0_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar63._4_4_ = fVar52 * fVar52 + 0.0;
            auVar63._8_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar63._12_4_ = fVar52 * fVar52 + 0.0;
            auVar63 = NEON_ext(auVar63,auVar63,4,1);
            auVar91._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar91._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar91._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar91._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar91,4);
            auVar80._0_4_ = auVar91._0_4_ * auVar63._0_4_;
            auVar80._4_4_ = auVar91._4_4_ * auVar63._4_4_;
            auVar80._8_4_ = auVar91._8_4_ * auVar63._8_4_;
            auVar80._12_4_ = auVar91._12_4_ * auVar63._12_4_;
            auVar154 = NEON_frsqrts(auVar63,auVar80,4);
            auVar66._0_4_ = auVar63._0_4_ * auVar154._0_4_;
            auVar66._4_4_ = auVar63._4_4_ * auVar154._4_4_;
            auVar66._8_4_ = auVar63._8_4_ * auVar154._8_4_;
            auVar66._12_4_ = auVar63._12_4_ * auVar154._12_4_;
            auVar81._0_4_ = auVar91._0_4_ * auVar66._0_4_;
            auVar81._4_4_ = auVar91._4_4_ * auVar66._4_4_;
            auVar81._8_4_ = auVar91._8_4_ * auVar66._8_4_;
            auVar81._12_4_ = auVar91._12_4_ * auVar66._12_4_;
            iVar11 = -(uint)(auVar91._0_4_ == 0.0);
            iVar68 = -(uint)(auVar91._4_4_ == 0.0);
            iVar69 = -(uint)(auVar91._8_4_ == 0.0);
            iVar70 = -(uint)(auVar91._12_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar66,auVar81,4);
            fVar42 = fVar42 * auVar66._0_4_ * auVar63._0_4_;
            fVar51 = fVar51 * auVar66._4_4_ * auVar63._4_4_;
            fVar52 = fVar52 * auVar66._8_4_ * auVar63._8_4_;
            fVar85 = auVar66._12_4_ * auVar63._12_4_ * 0.0;
            fVar54 = *(float *)(param_1 + 0x20);
            fVar61 = *(float *)((long)param_1 + 0x104);
            fVar62 = *(float *)(param_1 + 0x21);
            fVar53 = *(float *)((long)param_1 + 0x10c);
            auVar154._0_4_ = fVar54 * fVar54 + fVar61 * fVar61;
            auVar154._4_4_ = fVar62 * fVar62 + fVar53 * fVar53;
            auVar154._8_4_ = fVar54 * fVar54 + fVar61 * fVar61;
            auVar154._12_4_ = fVar62 * fVar62 + fVar53 * fVar53;
            auVar63 = NEON_ext(auVar154,auVar154,4,1);
            auVar30._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar30._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar30._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar30._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar30,4);
            auVar108._0_4_ = auVar30._0_4_ * auVar63._0_4_;
            auVar108._4_4_ = auVar30._4_4_ * auVar63._4_4_;
            auVar108._8_4_ = auVar30._8_4_ * auVar63._8_4_;
            auVar108._12_4_ = auVar30._12_4_ * auVar63._12_4_;
            auVar91 = NEON_frsqrts(auVar63,auVar108,4);
            auVar95._0_4_ = auVar63._0_4_ * auVar91._0_4_;
            auVar95._4_4_ = auVar63._4_4_ * auVar91._4_4_;
            auVar95._8_4_ = auVar63._8_4_ * auVar91._8_4_;
            auVar95._12_4_ = auVar63._12_4_ * auVar91._12_4_;
            auVar109._0_4_ = auVar30._0_4_ * auVar95._0_4_;
            auVar109._4_4_ = auVar30._4_4_ * auVar95._4_4_;
            auVar109._8_4_ = auVar30._8_4_ * auVar95._8_4_;
            auVar109._12_4_ = auVar30._12_4_ * auVar95._12_4_;
            iVar71 = -(uint)(auVar30._0_4_ == 0.0);
            iVar84 = -(uint)(auVar30._4_4_ == 0.0);
            iVar86 = -(uint)(auVar30._8_4_ == 0.0);
            iVar88 = -(uint)(auVar30._12_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar95,auVar109,4);
            fVar54 = fVar54 * auVar95._0_4_ * auVar63._0_4_;
            fVar61 = fVar61 * auVar95._4_4_ * auVar63._4_4_;
            fVar62 = fVar62 * auVar95._8_4_ * auVar63._8_4_;
            fVar53 = fVar53 * auVar95._12_4_ * auVar63._12_4_;
            auVar96[0] = SUB41(fVar42,0) & ~(byte)iVar11;
            auVar96[1] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar11 >> 8);
            auVar96[2] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
            auVar96[3] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
            auVar96[4] = SUB41(fVar51,0) & ~(byte)iVar68;
            auVar96[5] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar68 >> 8);
            auVar96[6] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
            auVar96[7] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
            auVar96[8] = SUB41(fVar52,0) & ~(byte)iVar69;
            auVar96[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar96[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar96[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            auVar96[0xc] = SUB41(fVar85,0) & ~(byte)iVar70;
            auVar96[0xd] = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar70 >> 8);
            auVar96[0xe] = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
            auVar96[0xf] = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
            auVar110[0] = SUB41(fVar54,0) & ~(byte)iVar71;
            auVar110[1] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar71 >> 8);
            auVar110[2] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
            auVar110[3] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
            auVar110[4] = SUB41(fVar61,0) & ~(byte)iVar84;
            auVar110[5] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar84 >> 8);
            auVar110[6] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
            auVar110[7] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
            auVar110[8] = SUB41(fVar62,0) & ~(byte)iVar86;
            auVar110[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar86 >> 8);
            auVar110[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
            auVar110[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
            auVar110[0xc] = SUB41(fVar53,0) & ~(byte)iVar88;
            auVar110[0xd] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar88 >> 8);
            auVar110[0xe] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10);
            auVar110[0xf] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18);
            uVar72 = a64_TBL(ZEXT816(0),auVar110,DAT_03cb56c8);
            uVar100 = a64_TBL(ZEXT816(0),auVar110,DAT_03cb54d8);
            uVar120 = a64_TBL(ZEXT816(0),auVar96,DAT_03cb5488);
            uVar137 = a64_TBL(ZEXT816(0),auVar110,DAT_03cb5488);
            uVar130 = a64_TBL(ZEXT816(0),auVar96,DAT_03cb54c0);
            uVar55 = a64_TBL(ZEXT816(0),auVar110,DAT_03cb54c0);
            uVar145 = a64_TBL(ZEXT816(0),auVar96,DAT_03cb56c8);
            uVar43 = a64_TBL(ZEXT816(0),auVar96,DAT_03cb54d8);
            fVar61 = (float)((ulong)uVar72 >> 0x20);
            fVar85 = (float)((ulong)uVar137 >> 0x20);
            fVar62 = (float)((ulong)uVar100 >> 0x20);
            fVar54 = (float)((ulong)uVar55 >> 0x20);
            fVar52 = (float)uVar72 * (float)uVar120 - (float)uVar137 * (float)uVar145;
            fVar53 = fVar61 * (float)((ulong)uVar120 >> 0x20) -
                     fVar85 * (float)((ulong)uVar145 >> 0x20);
            fVar42 = (float)uVar100 * (float)uVar130 - (float)uVar55 * (float)uVar43;
            fVar51 = fVar62 * (float)((ulong)uVar130 >> 0x20) -
                     fVar54 * (float)((ulong)uVar43 >> 0x20);
            auVar31._0_4_ = fVar52 * fVar52 + fVar53 * fVar53;
            auVar31._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar31._8_4_ = fVar52 * fVar52 + fVar53 * fVar53;
            auVar31._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar63 = NEON_ext(auVar31,auVar31,4,1);
            auVar32._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar32._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar32._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar32._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar32,4);
            auVar150._0_4_ = auVar32._0_4_ * auVar63._0_4_;
            auVar150._4_4_ = auVar32._4_4_ * auVar63._4_4_;
            auVar150._8_4_ = auVar32._8_4_ * auVar63._8_4_;
            auVar150._12_4_ = auVar32._12_4_ * auVar63._12_4_;
            auVar91 = NEON_frsqrts(auVar63,auVar150,4);
            auVar134._0_4_ = auVar63._0_4_ * auVar91._0_4_;
            auVar134._4_4_ = auVar63._4_4_ * auVar91._4_4_;
            auVar134._8_4_ = auVar63._8_4_ * auVar91._8_4_;
            auVar134._12_4_ = auVar63._12_4_ * auVar91._12_4_;
            auVar151._0_4_ = auVar32._0_4_ * auVar134._0_4_;
            auVar151._4_4_ = auVar32._4_4_ * auVar134._4_4_;
            auVar151._8_4_ = auVar32._8_4_ * auVar134._8_4_;
            auVar151._12_4_ = auVar32._12_4_ * auVar134._12_4_;
            iVar11 = -(uint)(auVar32._0_4_ == 0.0);
            iVar68 = -(uint)(auVar32._4_4_ == 0.0);
            iVar69 = -(uint)(auVar32._8_4_ == 0.0);
            iVar70 = -(uint)(auVar32._12_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar134,auVar151,4);
            fVar52 = fVar52 * auVar134._0_4_ * auVar63._0_4_;
            fVar53 = fVar53 * auVar134._4_4_ * auVar63._4_4_;
            fVar42 = fVar42 * auVar134._8_4_ * auVar63._8_4_;
            fVar51 = fVar51 * auVar134._12_4_ * auVar63._12_4_;
            auVar97[0] = SUB41(fVar52,0) & ~(byte)iVar11;
            auVar97[1] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar11 >> 8);
            auVar97[2] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
            auVar97[3] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
            auVar97[4] = SUB41(fVar53,0) & ~(byte)iVar68;
            auVar97[5] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar68 >> 8);
            auVar97[6] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
            auVar97[7] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
            auVar97[8] = SUB41(fVar42,0) & ~(byte)iVar69;
            auVar97[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar97[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar97[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            auVar97[0xc] = SUB41(fVar51,0) & ~(byte)iVar70;
            auVar97[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar70 >> 8);
            auVar97[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
            auVar97[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
            uVar120 = a64_TBL(ZEXT816(0),auVar97,DAT_03cb56c8);
            uVar130 = a64_TBL(ZEXT816(0),auVar97,DAT_03cb54d8);
            uVar145 = a64_TBL(ZEXT816(0),auVar97,DAT_03cb5488);
            uVar43 = a64_TBL(ZEXT816(0),auVar97,DAT_03cb54c0);
            fVar52 = (float)uVar137 * (float)uVar120 - (float)uVar72 * (float)uVar145;
            fVar61 = fVar85 * (float)((ulong)uVar120 >> 0x20) -
                     fVar61 * (float)((ulong)uVar145 >> 0x20);
            fVar42 = (float)uVar55 * (float)uVar130 - (float)uVar100 * (float)uVar43;
            fVar51 = fVar54 * (float)((ulong)uVar130 >> 0x20) -
                     fVar62 * (float)((ulong)uVar43 >> 0x20);
            auVar33._0_4_ = fVar52 * fVar52 + fVar61 * fVar61;
            auVar33._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar33._8_4_ = fVar52 * fVar52 + fVar61 * fVar61;
            auVar33._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar63 = NEON_ext(auVar33,auVar33,4,1);
            auVar34._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar34._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar34._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar34._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar34,4);
            auVar124._0_4_ = auVar34._0_4_ * auVar63._0_4_;
            auVar124._4_4_ = auVar34._4_4_ * auVar63._4_4_;
            auVar124._8_4_ = auVar34._8_4_ * auVar63._8_4_;
            auVar124._12_4_ = auVar34._12_4_ * auVar63._12_4_;
            auVar91 = NEON_frsqrts(auVar63,auVar124,4);
            auVar111._0_4_ = auVar63._0_4_ * auVar91._0_4_;
            auVar111._4_4_ = auVar63._4_4_ * auVar91._4_4_;
            auVar111._8_4_ = auVar63._8_4_ * auVar91._8_4_;
            auVar111._12_4_ = auVar63._12_4_ * auVar91._12_4_;
            auVar125._0_4_ = auVar34._0_4_ * auVar111._0_4_;
            auVar125._4_4_ = auVar34._4_4_ * auVar111._4_4_;
            auVar125._8_4_ = auVar34._8_4_ * auVar111._8_4_;
            auVar125._12_4_ = auVar34._12_4_ * auVar111._12_4_;
            iVar11 = -(uint)(auVar34._0_4_ == 0.0);
            iVar68 = -(uint)(auVar34._4_4_ == 0.0);
            iVar69 = -(uint)(auVar34._8_4_ == 0.0);
            iVar70 = -(uint)(auVar34._12_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar111,auVar125,4);
            fVar52 = fVar52 * auVar111._0_4_ * auVar63._0_4_;
            fVar61 = fVar61 * auVar111._4_4_ * auVar63._4_4_;
            fVar42 = fVar42 * auVar111._8_4_ * auVar63._8_4_;
            fVar51 = fVar51 * auVar111._12_4_ * auVar63._12_4_;
            auVar153._0_8_ =
                 CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                          CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                   CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                            CONCAT14(SUB41(fVar61,0) & ~(byte)iVar68,
                                                     CONCAT13((byte)((uint)fVar52 >> 0x18) &
                                                              ~(byte)((uint)iVar11 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar52 >> 0x10)
                                                                       & ~(byte)((uint)iVar11 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar52
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar11
                                                                                       >> 8),
                                                                                SUB41(fVar52,0) &
                                                                                ~(byte)iVar11)))))))
            ;
            auVar153[8] = SUB41(fVar42,0) & ~(byte)iVar69;
            auVar153[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar153[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar153[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            auVar157[0xc] = SUB41(fVar51,0) & ~(byte)iVar70;
            auVar157._0_12_ = auVar153;
            auVar157[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar70 >> 8);
            auVar157[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
            auVar157[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
            auVar98._8_8_ = _UNK_03cabe68;
            auVar98._0_8_ = _DAT_03cabe60;
            uVar120 = a64_TBL(ZEXT816(0),auVar157,DAT_03cb5488);
            uVar55 = a64_TBL(ZEXT816(0),auVar98,DAT_03cb56c8);
            uVar72 = a64_TBL(ZEXT816(0),auVar98,DAT_03cb54d8);
            uVar130 = a64_TBL(ZEXT816(0),auVar157,DAT_03cb54c0);
            uVar100 = a64_TBL(ZEXT816(0),auVar98,DAT_03cb5488);
            uVar43 = a64_TBL(ZEXT816(0),auVar98,DAT_03cb54c0);
            uVar137 = a64_TBL(ZEXT816(0),auVar157,DAT_03cb56c8);
            uVar145 = a64_TBL(ZEXT816(0),auVar157,DAT_03cb54d8);
            fVar61 = (float)((ulong)uVar120 >> 0x20);
            fVar62 = (float)((ulong)uVar130 >> 0x20);
            fVar53 = (float)((ulong)uVar137 >> 0x20);
            fVar85 = (float)((ulong)uVar145 >> 0x20);
            fStack_58 = auVar153._8_4_;
            fVar52 = (float)uVar55 * (float)uVar120 - (float)uVar100 * (float)uVar137;
            fVar54 = (float)((ulong)uVar55 >> 0x20) * fVar61 -
                     (float)((ulong)uVar100 >> 0x20) * fVar53;
            fVar42 = (float)uVar72 * (float)uVar130 - (float)uVar43 * (float)uVar145;
            fVar51 = (float)((ulong)uVar72 >> 0x20) * fVar62 -
                     (float)((ulong)uVar43 >> 0x20) * fVar85;
            auVar35._0_4_ = fVar52 * fVar52 + fVar54 * fVar54;
            auVar35._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar35._8_4_ = fVar52 * fVar52 + fVar54 * fVar54;
            auVar35._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar63 = NEON_ext(auVar35,auVar35,4,1);
            auVar36._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar36._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar36._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar36._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar36,4);
            auVar135._0_4_ = auVar36._0_4_ * auVar63._0_4_;
            auVar135._4_4_ = auVar36._4_4_ * auVar63._4_4_;
            auVar135._8_4_ = auVar36._8_4_ * auVar63._8_4_;
            auVar135._12_4_ = auVar36._12_4_ * auVar63._12_4_;
            auVar91 = NEON_frsqrts(auVar63,auVar135,4);
            auVar118._0_4_ = auVar63._0_4_ * auVar91._0_4_;
            auVar118._4_4_ = auVar63._4_4_ * auVar91._4_4_;
            auVar118._8_4_ = auVar63._8_4_ * auVar91._8_4_;
            auVar118._12_4_ = auVar63._12_4_ * auVar91._12_4_;
            auVar136._0_4_ = auVar36._0_4_ * auVar118._0_4_;
            auVar136._4_4_ = auVar36._4_4_ * auVar118._4_4_;
            auVar136._8_4_ = auVar36._8_4_ * auVar118._8_4_;
            auVar136._12_4_ = auVar36._12_4_ * auVar118._12_4_;
            iVar11 = -(uint)(auVar36._0_4_ == 0.0);
            iVar68 = -(uint)(auVar36._4_4_ == 0.0);
            iVar69 = -(uint)(auVar36._8_4_ == 0.0);
            iVar70 = -(uint)(auVar36._12_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar118,auVar136,4);
            fVar52 = fVar52 * auVar118._0_4_ * auVar63._0_4_;
            fVar54 = fVar54 * auVar118._4_4_ * auVar63._4_4_;
            fVar42 = fVar42 * auVar118._8_4_ * auVar63._8_4_;
            fVar51 = fVar51 * auVar118._12_4_ * auVar63._12_4_;
            local_50 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                       CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                                ~(byte)((uint)iVar11 >> 0x10),
                                                CONCAT11((byte)((uint)fVar52 >> 8) &
                                                         ~(byte)((uint)iVar11 >> 8),
                                                         SUB41(fVar52,0) & ~(byte)iVar11)));
            auVar89._0_8_ =
                 CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                          CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                   CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                            CONCAT14(SUB41(fVar54,0) & ~(byte)iVar68,local_50))));
            auVar89[8] = SUB41(fVar42,0) & ~(byte)iVar69;
            auVar89[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar89[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar89[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            auVar99[0xc] = SUB41(fVar51,0) & ~(byte)iVar70;
            auVar99._0_12_ = auVar89;
            auVar99[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar70 >> 8);
            auVar99[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
            auVar99[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
            uVar72 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb5488);
            uVar100 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb54c0);
            uVar43 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb56c8);
            uVar55 = a64_TBL(ZEXT816(0),auVar99,DAT_03cb54d8);
            fVar42 = (float)uVar137 * (float)uVar72 - (float)uVar120 * (float)uVar43;
            fVar51 = fVar53 * (float)((ulong)uVar72 >> 0x20) -
                     fVar61 * (float)((ulong)uVar43 >> 0x20);
            fVar52 = (float)uVar145 * (float)uVar100 - (float)uVar130 * (float)uVar55;
            fVar54 = fVar85 * (float)((ulong)uVar100 >> 0x20) -
                     fVar62 * (float)((ulong)uVar55 >> 0x20);
            fStack_48 = auVar89._8_4_;
            fStack_44 = 0.0;
            fStack_4c = (float)((ulong)auVar89._0_8_ >> 0x20);
            fVar54 = fVar54 * fVar54;
            auVar37._0_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar37._4_4_ = fVar52 * fVar52 + fVar54;
            auVar37._8_4_ = fVar42 * fVar42 + fVar51 * fVar51;
            auVar37._12_4_ = fVar52 * fVar52 + fVar54;
            auVar63 = NEON_ext(auVar37,auVar37,4,1);
            auVar38._0_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar38._4_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar38._8_4_ = auVar63._0_4_ + auVar63._4_4_;
            auVar38._12_4_ = auVar63._8_4_ + auVar63._12_4_;
            auVar63 = NEON_frsqrte(auVar38,4);
            auVar82._0_4_ = auVar38._0_4_ * auVar63._0_4_;
            auVar82._4_4_ = auVar38._4_4_ * auVar63._4_4_;
            auVar82._8_4_ = auVar38._8_4_ * auVar63._8_4_;
            auVar82._12_4_ = auVar38._12_4_ * auVar63._12_4_;
            auVar91 = NEON_frsqrts(auVar63,auVar82,4);
            auVar67._0_4_ = auVar63._0_4_ * auVar91._0_4_;
            auVar67._4_4_ = auVar63._4_4_ * auVar91._4_4_;
            auVar67._8_4_ = auVar63._8_4_ * auVar91._8_4_;
            auVar67._12_4_ = auVar63._12_4_ * auVar91._12_4_;
            auVar83._0_4_ = auVar38._0_4_ * auVar67._0_4_;
            auVar83._4_4_ = auVar38._4_4_ * auVar67._4_4_;
            auVar83._8_4_ = auVar38._8_4_ * auVar67._8_4_;
            auVar83._12_4_ = auVar38._12_4_ * auVar67._12_4_;
            iVar11 = -(uint)(auVar38._0_4_ == 0.0);
            iVar68 = -(uint)(auVar38._4_4_ == 0.0);
            iVar69 = -(uint)(auVar38._8_4_ == 0.0);
            auVar63 = NEON_frsqrts(auVar67,auVar83,4);
            fVar42 = fVar42 * auVar67._0_4_ * auVar63._0_4_;
            fVar51 = fVar51 * auVar67._4_4_ * auVar63._4_4_;
            fVar52 = fVar52 * auVar67._8_4_ * auVar63._8_4_;
            auVar45._0_8_ =
                 CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                          CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                   CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                            CONCAT14(SUB41(fVar51,0) & ~(byte)iVar68,
                                                     CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                                              ~(byte)((uint)iVar11 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar42 >> 0x10)
                                                                       & ~(byte)((uint)iVar11 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar42
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar11
                                                                                       >> 8),
                                                                                SUB41(fVar42,0) &
                                                                                ~(byte)iVar11)))))))
            ;
            auVar45[8] = SUB41(fVar52,0) & ~(byte)iVar69;
            auVar45[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar45[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar45[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            uStack_38 = auVar45._8_4_;
            uStack_34 = 0;
            local_60 = auVar153._0_8_;
            local_40 = auVar45._0_8_;
            goto LAB_01e21f6c;
          }
          if (iVar11 != 2) goto LAB_01e21f6c;
          fVar42 = *(float *)(param_1 + 4);
          fVar51 = *(float *)((long)param_1 + 0x24);
          fVar52 = *(float *)(param_1 + 5);
          auVar23._0_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar23._4_4_ = fVar52 * fVar52 + 0.0;
          auVar23._8_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar23._12_4_ = fVar52 * fVar52 + 0.0;
          auVar63 = NEON_ext(auVar23,auVar23,4,1);
          auVar24._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar24._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar24._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar24._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar24,4);
          auVar78._0_4_ = auVar24._0_4_ * auVar63._0_4_;
          auVar78._4_4_ = auVar24._4_4_ * auVar63._4_4_;
          auVar78._8_4_ = auVar24._8_4_ * auVar63._8_4_;
          auVar78._12_4_ = auVar24._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar78,4);
          auVar65._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar65._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar65._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar65._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar79._0_4_ = auVar24._0_4_ * auVar65._0_4_;
          auVar79._4_4_ = auVar24._4_4_ * auVar65._4_4_;
          auVar79._8_4_ = auVar24._8_4_ * auVar65._8_4_;
          auVar79._12_4_ = auVar24._12_4_ * auVar65._12_4_;
          iVar11 = -(uint)(auVar24._0_4_ == 0.0);
          iVar68 = -(uint)(auVar24._4_4_ == 0.0);
          iVar69 = -(uint)(auVar24._8_4_ == 0.0);
          iVar70 = -(uint)(auVar24._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar65,auVar79,4);
          fVar42 = fVar42 * auVar65._0_4_ * auVar63._0_4_;
          fVar51 = fVar51 * auVar65._4_4_ * auVar63._4_4_;
          fVar52 = fVar52 * auVar65._8_4_ * auVar63._8_4_;
          fVar85 = auVar65._12_4_ * auVar63._12_4_ * 0.0;
          fVar54 = *(float *)(param_1 + 0x20);
          fVar61 = *(float *)((long)param_1 + 0x104);
          fVar62 = *(float *)(param_1 + 0x21);
          fVar53 = *(float *)((long)param_1 + 0x10c);
          auVar48[0] = SUB41(fVar42,0) & ~(byte)iVar11;
          auVar48[1] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar11 >> 8);
          auVar48[2] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
          auVar48[3] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
          auVar48[4] = SUB41(fVar51,0) & ~(byte)iVar68;
          auVar48[5] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar68 >> 8);
          auVar48[6] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
          auVar48[7] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
          auVar48[8] = SUB41(fVar52,0) & ~(byte)iVar69;
          auVar48[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar48[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar48[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar48[0xc] = SUB41(fVar85,0) & ~(byte)iVar70;
          auVar48[0xd] = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar48[0xe] = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar48[0xf] = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          auVar25._0_4_ = fVar54 * fVar54 + fVar61 * fVar61;
          auVar25._4_4_ = fVar62 * fVar62 + fVar53 * fVar53;
          auVar25._8_4_ = fVar54 * fVar54 + fVar61 * fVar61;
          auVar25._12_4_ = fVar62 * fVar62 + fVar53 * fVar53;
          auVar63 = NEON_ext(auVar25,auVar25,4,1);
          auVar26._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar26._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar26._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar26._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar26,4);
          auVar106._0_4_ = auVar26._0_4_ * auVar63._0_4_;
          auVar106._4_4_ = auVar26._4_4_ * auVar63._4_4_;
          auVar106._8_4_ = auVar26._8_4_ * auVar63._8_4_;
          auVar106._12_4_ = auVar26._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar106,4);
          auVar94._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar94._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar94._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar94._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar107._0_4_ = auVar26._0_4_ * auVar94._0_4_;
          auVar107._4_4_ = auVar26._4_4_ * auVar94._4_4_;
          auVar107._8_4_ = auVar26._8_4_ * auVar94._8_4_;
          auVar107._12_4_ = auVar26._12_4_ * auVar94._12_4_;
          iVar11 = -(uint)(auVar26._0_4_ == 0.0);
          iVar68 = -(uint)(auVar26._4_4_ == 0.0);
          iVar69 = -(uint)(auVar26._8_4_ == 0.0);
          iVar70 = -(uint)(auVar26._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar94,auVar107,4);
          fVar54 = fVar54 * auVar94._0_4_ * auVar63._0_4_;
          fVar61 = fVar61 * auVar94._4_4_ * auVar63._4_4_;
          fVar62 = fVar62 * auVar94._8_4_ * auVar63._8_4_;
          fVar53 = fVar53 * auVar94._12_4_ * auVar63._12_4_;
          auVar152._0_8_ =
               CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                        CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                 CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                          CONCAT14(SUB41(fVar61,0) & ~(byte)iVar68,
                                                   CONCAT13((byte)((uint)fVar54 >> 0x18) &
                                                            ~(byte)((uint)iVar11 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                                                     ~(byte)((uint)iVar11 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar54 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar11
                                                                                     >> 8),
                                                                              SUB41(fVar54,0) &
                                                                              ~(byte)iVar11)))))));
          auVar152[8] = SUB41(fVar62,0) & ~(byte)iVar69;
          auVar152[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar152[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar152[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar156[0xc] = SUB41(fVar53,0) & ~(byte)iVar70;
          auVar156._0_12_ = auVar152;
          auVar156[0xd] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar156[0xe] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar156[0xf] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          uVar72 = a64_TBL(ZEXT816(0),auVar156,DAT_03cb56c8);
          uVar120 = a64_TBL(ZEXT816(0),auVar156,DAT_03cb54d8);
          uVar55 = a64_TBL(ZEXT816(0),auVar48,DAT_03cb5488);
          uVar137 = a64_TBL(ZEXT816(0),auVar156,DAT_03cb5488);
          uVar100 = a64_TBL(ZEXT816(0),auVar48,DAT_03cb54c0);
          uVar145 = a64_TBL(ZEXT816(0),auVar156,DAT_03cb54c0);
          uVar130 = a64_TBL(ZEXT816(0),auVar48,DAT_03cb56c8);
          uVar43 = a64_TBL(ZEXT816(0),auVar48,DAT_03cb54d8);
          fVar52 = (float)((ulong)uVar72 >> 0x20);
          fVar54 = (float)((ulong)uVar120 >> 0x20);
          fVar53 = (float)((ulong)uVar137 >> 0x20);
          fVar85 = (float)((ulong)uVar145 >> 0x20);
          fVar61 = (float)uVar72 * (float)uVar55 - (float)uVar137 * (float)uVar130;
          fVar62 = fVar52 * (float)((ulong)uVar55 >> 0x20) -
                   fVar53 * (float)((ulong)uVar130 >> 0x20);
          fVar42 = (float)uVar120 * (float)uVar100 - (float)uVar145 * (float)uVar43;
          fVar51 = fVar54 * (float)((ulong)uVar100 >> 0x20) -
                   fVar85 * (float)((ulong)uVar43 >> 0x20);
          uStack_38 = auVar152._8_4_;
          uStack_34 = 0;
          auVar27._0_4_ = fVar61 * fVar61 + fVar62 * fVar62;
          auVar27._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar27._8_4_ = fVar61 * fVar61 + fVar62 * fVar62;
          auVar27._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar63 = NEON_ext(auVar27,auVar27,4,1);
          auVar28._0_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar28._4_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar28._8_4_ = auVar63._0_4_ + auVar63._4_4_;
          auVar28._12_4_ = auVar63._8_4_ + auVar63._12_4_;
          auVar63 = NEON_frsqrte(auVar28,4);
          auVar147._0_4_ = auVar28._0_4_ * auVar63._0_4_;
          auVar147._4_4_ = auVar28._4_4_ * auVar63._4_4_;
          auVar147._8_4_ = auVar28._8_4_ * auVar63._8_4_;
          auVar147._12_4_ = auVar28._12_4_ * auVar63._12_4_;
          auVar91 = NEON_frsqrts(auVar63,auVar147,4);
          auVar128._0_4_ = auVar63._0_4_ * auVar91._0_4_;
          auVar128._4_4_ = auVar63._4_4_ * auVar91._4_4_;
          auVar128._8_4_ = auVar63._8_4_ * auVar91._8_4_;
          auVar128._12_4_ = auVar63._12_4_ * auVar91._12_4_;
          auVar148._0_4_ = auVar28._0_4_ * auVar128._0_4_;
          auVar148._4_4_ = auVar28._4_4_ * auVar128._4_4_;
          auVar148._8_4_ = auVar28._8_4_ * auVar128._8_4_;
          auVar148._12_4_ = auVar28._12_4_ * auVar128._12_4_;
          iVar11 = -(uint)(auVar28._0_4_ == 0.0);
          iVar68 = -(uint)(auVar28._4_4_ == 0.0);
          iVar69 = -(uint)(auVar28._8_4_ == 0.0);
          iVar70 = -(uint)(auVar28._12_4_ == 0.0);
          auVar63 = NEON_frsqrts(auVar128,auVar148,4);
          fVar61 = fVar61 * auVar128._0_4_ * auVar63._0_4_;
          fVar62 = fVar62 * auVar128._4_4_ * auVar63._4_4_;
          fVar42 = fVar42 * auVar128._8_4_ * auVar63._8_4_;
          fVar51 = fVar51 * auVar128._12_4_ * auVar63._12_4_;
          local_50 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                     CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                              ~(byte)((uint)iVar11 >> 0x10),
                                              CONCAT11((byte)((uint)fVar61 >> 8) &
                                                       ~(byte)((uint)iVar11 >> 8),
                                                       SUB41(fVar61,0) & ~(byte)iVar11)));
          auVar112._0_8_ =
               CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                        CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                 CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                          CONCAT14(SUB41(fVar62,0) & ~(byte)iVar68,local_50))));
          auVar112[8] = SUB41(fVar42,0) & ~(byte)iVar69;
          auVar112[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar69 >> 8);
          auVar112[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          auVar112[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          auVar115[0xc] = SUB41(fVar51,0) & ~(byte)iVar70;
          auVar115._0_12_ = auVar112;
          auVar115[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar70 >> 8);
          auVar115[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          auVar115[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          uVar43 = a64_TBL(ZEXT816(0),auVar115,DAT_03cb56c8);
          uVar55 = a64_TBL(ZEXT816(0),auVar115,DAT_03cb54d8);
          uVar100 = a64_TBL(ZEXT816(0),auVar115,DAT_03cb5488);
          uVar130 = a64_TBL(ZEXT816(0),auVar115,DAT_03cb54c0);
          auVar49._0_4_ = (float)uVar137 * (float)uVar43 - (float)uVar72 * (float)uVar100;
          auVar49._4_4_ =
               fVar53 * (float)((ulong)uVar43 >> 0x20) - fVar52 * (float)((ulong)uVar100 >> 0x20);
          fVar42 = (float)uVar145 * (float)uVar55 - (float)uVar120 * (float)uVar130;
          fVar51 = fVar85 * (float)((ulong)uVar55 >> 0x20) -
                   fVar54 * (float)((ulong)uVar130 >> 0x20);
          auVar49._12_4_ = fVar51;
          auVar49._8_4_ = fVar42;
          fStack_48 = auVar112._8_4_;
          fStack_4c = (float)((ulong)auVar112._0_8_ >> 0x20);
          auVar45 = auVar49._0_12_;
          auVar29._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_;
          auVar29._4_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar29._8_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_;
          auVar29._12_4_ = fVar42 * fVar42 + fVar51 * fVar51;
          auVar63 = NEON_ext(auVar29,auVar29,4,1);
          local_40 = auVar152._0_8_;
        }
        fStack_44 = 0.0;
        auVar22._0_4_ = auVar63._0_4_ + auVar63._4_4_;
        auVar22._4_4_ = auVar63._8_4_ + auVar63._12_4_;
        auVar22._8_4_ = auVar63._0_4_ + auVar63._4_4_;
        auVar22._12_4_ = auVar63._8_4_ + auVar63._12_4_;
        auVar63 = NEON_frsqrte(auVar22,4);
        auVar75._0_4_ = auVar22._0_4_ * auVar63._0_4_;
        auVar75._4_4_ = auVar22._4_4_ * auVar63._4_4_;
        auVar75._8_4_ = auVar22._8_4_ * auVar63._8_4_;
        auVar75._12_4_ = auVar22._12_4_ * auVar63._12_4_;
        auVar91 = NEON_frsqrts(auVar63,auVar75,4);
        auVar64._0_4_ = auVar63._0_4_ * auVar91._0_4_;
        auVar64._4_4_ = auVar63._4_4_ * auVar91._4_4_;
        auVar64._8_4_ = auVar63._8_4_ * auVar91._8_4_;
        auVar64._12_4_ = auVar63._12_4_ * auVar91._12_4_;
        auVar76._0_4_ = auVar22._0_4_ * auVar64._0_4_;
        auVar76._4_4_ = auVar22._4_4_ * auVar64._4_4_;
        auVar76._8_4_ = auVar22._8_4_ * auVar64._8_4_;
        auVar76._12_4_ = auVar22._12_4_ * auVar64._12_4_;
        iVar11 = -(uint)(auVar22._0_4_ == 0.0);
        iVar68 = -(uint)(auVar22._4_4_ == 0.0);
        iVar69 = -(uint)(auVar22._8_4_ == 0.0);
        auVar63 = NEON_frsqrts(auVar64,auVar76,4);
        fVar42 = auVar45._0_4_ * auVar64._0_4_ * auVar63._0_4_;
        fVar51 = auVar45._4_4_ * auVar64._4_4_ * auVar63._4_4_;
        fVar52 = auVar45._8_4_ * auVar64._8_4_ * auVar63._8_4_;
        auVar44._0_8_ =
             CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                      CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                               CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                        CONCAT14(SUB41(fVar51,0) & ~(byte)iVar68,
                                                 CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                                          ~(byte)((uint)iVar11 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                                   ~(byte)((uint)iVar11 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar42 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar11 >> 8),SUB41(fVar42,0) & ~(byte)iVar11))))))
                     );
        auVar44[8] = SUB41(fVar52,0) & ~(byte)iVar69;
        auVar44[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar69 >> 8);
        auVar44[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
        auVar44[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
        fStack_58 = auVar44._8_4_;
        local_60 = auVar44._0_8_;
LAB_01e21f6c:
        fVar42 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
        fVar51 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
        fVar52 = (float)((ulong)_DAT_03cac210 >> 0x20);
        fVar54 = (float)((ulong)_UNK_03cac218 >> 0x20);
        fVar61 = (float)((ulong)_DAT_03cabb00 >> 0x20);
        fVar62 = (float)((ulong)_UNK_03cabb08 >> 0x20);
        fVar53 = (float)local_40;
        fVar85 = (float)((ulong)local_40 >> 0x20);
        if (*(char *)((long)param_1 + 0x134) == '\0') {
          auVar63 = NEON_fmov(0x3f800000,4);
          auVar10._8_4_ = uStack_38;
          auVar10._0_8_ = local_40;
          auVar10._12_4_ = uStack_34;
          auVar9._4_4_ = fStack_4c;
          auVar9._0_4_ = local_50;
          auVar9._8_4_ = fStack_48;
          auVar9._12_4_ = fStack_44;
          auVar91 = NEON_ext(auVar9,auVar9,8,1);
          fVar39 = auVar63._0_4_ + (float)_DAT_03cab3a0 * local_50 + (float)_DAT_03cac210 * fVar85 +
                   (float)_DAT_03cabb00 * fStack_58;
          fVar52 = auVar63._4_4_ + fVar42 * local_50 + fVar52 * fVar85 + fVar61 * fStack_58;
          fVar61 = auVar63._8_4_ + (float)_UNK_03cab3a8 * local_50 + (float)_UNK_03cac218 * fVar85 +
                   (float)_UNK_03cabb08 * fStack_58;
          fVar51 = auVar63._12_4_ + fVar51 * local_50 + fVar54 * fVar85 + fVar62 * fStack_58;
          auVar63 = NEON_ext(auVar10,auVar10,8,1);
          fVar42 = auVar63._0_4_;
          auVar63 = NEON_fmov(0x40800000,4);
          fVar119 = (float)local_60 + auVar91._0_4_;
          auVar7._8_4_ = -local_60._4_4_ + fVar42;
          auVar7._4_4_ = fVar119;
          auVar77._0_4_ = SQRT(fVar39) * 0.5 * auVar63._0_4_;
          auVar77._4_4_ = SQRT(fVar52) * 0.5 * auVar63._4_4_;
          auVar77._8_4_ = SQRT(fVar61) * 0.5 * auVar63._8_4_;
          auVar77._12_4_ = SQRT(fVar51) * 0.5 * auVar63._12_4_;
          auVar121._4_4_ = fVar39;
          auVar121._0_4_ = fVar39;
          auVar121._8_4_ = fVar39;
          auVar121._12_4_ = fVar39;
          auVar63 = NEON_frecpe(auVar77,4);
          auVar132._4_4_ = fVar52;
          auVar132._0_4_ = fVar52;
          auVar132._8_4_ = fVar52;
          auVar132._12_4_ = fVar52;
          auVar154 = NEON_frecps(auVar63,auVar77,4);
          auVar146._0_4_ = -(uint)(fVar39 <= fVar52);
          auVar146._4_4_ = -(uint)(fVar39 <= fVar52);
          auVar146._8_4_ = -(uint)(fVar39 <= fVar52);
          auVar146._12_4_ = -(uint)(fVar39 <= fVar52);
          auVar121 = auVar121 ^ (auVar121 ^ auVar132) & auVar146;
          auVar133._0_4_ = auVar63._0_4_ * auVar154._0_4_;
          auVar133._4_4_ = auVar63._4_4_ * auVar154._4_4_;
          auVar133._8_4_ = auVar63._8_4_ * auVar154._8_4_;
          auVar133._12_4_ = auVar63._12_4_ * auVar154._12_4_;
          auVar140._4_4_ = fVar61;
          auVar140._0_4_ = fVar61;
          auVar140._8_4_ = fVar61;
          auVar140._12_4_ = fVar61;
          auVar63 = NEON_frecps(auVar133,auVar77,4);
          auVar155._0_4_ = -(uint)(auVar121._0_4_ <= fVar61);
          auVar155._4_4_ = -(uint)(auVar121._4_4_ <= fVar61);
          auVar155._8_4_ = -(uint)(auVar121._8_4_ <= fVar61);
          auVar155._12_4_ = -(uint)(auVar121._12_4_ <= fVar61);
          auVar121 = auVar121 ^ (auVar121 ^ auVar140) & auVar155;
          auVar40._0_4_ = -(uint)(auVar121._0_4_ <= fVar51);
          auVar40._4_4_ = -(uint)(auVar121._4_4_ <= fVar51);
          auVar40._8_4_ = -(uint)(auVar121._8_4_ <= fVar51);
          auVar40._12_4_ = -(uint)(auVar121._12_4_ <= fVar51);
          fVar54 = auVar133._0_4_ * auVar63._0_4_;
          fVar62 = auVar133._4_4_ * auVar63._4_4_;
          fVar85 = auVar133._8_4_ * auVar63._8_4_;
          fVar87 = auVar133._12_4_ * auVar63._12_4_;
          auVar7._0_4_ = (fVar53 + fStack_4c) * fVar54;
          auVar113._0_8_ = auVar7._0_8_ << 0x20;
          auVar113._8_4_ = fVar119 * fVar54;
          auVar113._12_4_ = (-local_60._4_4_ + fVar42) * fVar54;
          auVar126._0_4_ = (fStack_4c + fVar53) * fVar62;
          auVar126._4_4_ = fVar62 * 0.0;
          auVar126._8_4_ = (fVar42 + local_60._4_4_) * fVar62;
          auVar126._12_4_ = ((float)local_60 + -fStack_48) * fVar62;
          auVar114._4_12_ = auVar113._4_12_;
          auVar114._0_4_ = SQRT(fVar39) * 0.5;
          auVar127._8_8_ = auVar126._8_8_;
          auVar127._4_4_ = SQRT(fVar52) * 0.5;
          auVar127._0_4_ = auVar126._0_4_;
          auVar57._0_4_ = (fVar42 - local_60._4_4_) * fVar87;
          auVar57._4_4_ = ((float)local_60 - fStack_48) * fVar87;
          auVar57._8_4_ = (fStack_4c - fVar53) * fVar87;
          auVar57._12_4_ = SQRT(fVar51) * 0.5;
          auVar105._0_4_ = ((float)local_60 + auVar91._0_4_) * fVar85;
          auVar105._4_4_ = (local_60._4_4_ + fVar42) * fVar85;
          auVar105._12_4_ = (fStack_4c - fVar53) * fVar85;
          auVar105._8_4_ = SQRT(fVar61) * 0.5;
          auVar105 = auVar105 ^ (auVar105 ^ auVar114 ^ (auVar114 ^ auVar127) & auVar146) & ~auVar155
          ;
          auVar105 = auVar105 ^ (auVar105 ^ auVar57) & auVar40;
        }
        else {
          auVar63 = NEON_fmov(0x3f800000,4);
          auVar58._0_4_ = -local_50;
          auVar58._4_4_ = -fStack_4c;
          auVar58._8_4_ = -fStack_48;
          auVar58._12_4_ = -fStack_44;
          auVar6._8_4_ = uStack_38;
          auVar6._0_8_ = local_40;
          auVar5._8_4_ = uStack_38;
          auVar5._0_8_ = local_40;
          auVar5._12_4_ = uStack_34;
          auVar6._12_4_ = uStack_34;
          auVar91 = NEON_ext(auVar5,auVar6,8,1);
          local_60._0_4_ = -(float)local_60;
          local_60._4_4_ = -local_60._4_4_;
          fVar39 = auVar91._0_4_;
          fVar87 = ((auVar63._0_4_ - (float)_DAT_03cab3a0 * local_50) +
                   (float)_DAT_03cac210 * fVar85) - (float)_DAT_03cabb00 * fStack_58;
          fVar42 = ((auVar63._4_4_ - fVar42 * local_50) + fVar52 * fVar85) - fVar61 * fStack_58;
          fVar52 = ((auVar63._8_4_ - (float)_UNK_03cab3a8 * local_50) +
                   (float)_UNK_03cac218 * fVar85) - (float)_UNK_03cabb08 * fStack_58;
          fVar51 = ((auVar63._12_4_ - fVar51 * local_50) + fVar54 * fVar85) - fVar62 * fStack_58;
          auVar91 = NEON_ext(auVar58,auVar58,8,1);
          fVar54 = (float)local_60 + auVar91._0_4_;
          auVar8._8_4_ = -local_60._4_4_ + fVar39;
          auVar8._4_4_ = fVar54;
          auVar122._4_4_ = fVar87;
          auVar122._0_4_ = fVar87;
          auVar122._8_4_ = fVar87;
          auVar122._12_4_ = fVar87;
          auVar59._4_4_ = fVar42;
          auVar59._0_4_ = fVar42;
          auVar59._8_4_ = fVar42;
          auVar59._12_4_ = fVar42;
          auVar129._0_4_ = -(uint)(fVar87 <= fVar42);
          auVar129._4_4_ = -(uint)(fVar87 <= fVar42);
          auVar129._8_4_ = -(uint)(fVar87 <= fVar42);
          auVar129._12_4_ = -(uint)(fVar87 <= fVar42);
          auVar59 = auVar59 ^ (auVar59 ^ auVar122) & ~auVar129;
          auVar63 = NEON_fmov(0x40800000,4);
          auVar141._4_4_ = fVar52;
          auVar141._0_4_ = fVar52;
          auVar141._8_4_ = fVar52;
          auVar141._12_4_ = fVar52;
          auVar123._0_4_ = SQRT(fVar87) * 0.5 * auVar63._0_4_;
          auVar123._4_4_ = SQRT(fVar42) * 0.5 * auVar63._4_4_;
          auVar123._8_4_ = SQRT(fVar52) * 0.5 * auVar63._8_4_;
          auVar123._12_4_ = SQRT(fVar51) * 0.5 * auVar63._12_4_;
          auVar149._0_4_ = -(uint)(auVar59._0_4_ <= fVar52);
          auVar149._4_4_ = -(uint)(auVar59._4_4_ <= fVar52);
          auVar149._8_4_ = -(uint)(auVar59._8_4_ <= fVar52);
          auVar149._12_4_ = -(uint)(auVar59._12_4_ <= fVar52);
          auVar59 = auVar59 ^ (auVar59 ^ auVar141) & auVar149;
          auVar154 = NEON_frecpe(auVar123,4);
          auVar41._0_4_ = -(uint)(auVar59._0_4_ <= fVar51);
          auVar41._4_4_ = -(uint)(auVar59._4_4_ <= fVar51);
          auVar41._8_4_ = -(uint)(auVar59._8_4_ <= fVar51);
          auVar41._12_4_ = -(uint)(auVar59._12_4_ <= fVar51);
          auVar63 = NEON_frecps(auVar154,auVar123,4);
          auVar142._0_4_ = auVar154._0_4_ * auVar63._0_4_;
          auVar142._4_4_ = auVar154._4_4_ * auVar63._4_4_;
          auVar142._8_4_ = auVar154._8_4_ * auVar63._8_4_;
          auVar142._12_4_ = auVar154._12_4_ * auVar63._12_4_;
          auVar63 = NEON_frecps(auVar142,auVar123,4);
          fVar61 = auVar142._0_4_ * auVar63._0_4_;
          fVar62 = auVar142._4_4_ * auVar63._4_4_;
          fVar85 = auVar142._8_4_ * auVar63._8_4_;
          fVar119 = auVar142._12_4_ * auVar63._12_4_;
          auVar8._0_4_ = (fVar53 + auVar58._4_4_) * fVar61;
          auVar116._0_8_ = auVar8._0_8_ << 0x20;
          auVar116._8_4_ = fVar54 * fVar61;
          auVar116._12_4_ = (-local_60._4_4_ + fVar39) * fVar61;
          auVar143._0_4_ = (auVar58._4_4_ + fVar53) * fVar62;
          auVar143._4_4_ = fVar62 * 0.0;
          auVar143._8_4_ = (fVar39 + local_60._4_4_) * fVar62;
          auVar143._12_4_ = ((float)local_60 + -auVar58._8_4_) * fVar62;
          auVar117._4_12_ = auVar116._4_12_;
          auVar117._0_4_ = SQRT(fVar87) * 0.5;
          auVar144._8_8_ = auVar143._8_8_;
          auVar144._4_4_ = SQRT(fVar42) * 0.5;
          auVar144._0_4_ = auVar143._0_4_;
          auVar60._0_4_ = (fVar39 - local_60._4_4_) * fVar119;
          auVar60._4_4_ = ((float)local_60 - auVar58._8_4_) * fVar119;
          auVar60._8_4_ = (auVar58._4_4_ - fVar53) * fVar119;
          auVar60._12_4_ = SQRT(fVar51) * 0.5;
          auVar50._0_4_ = ((float)local_60 + auVar91._0_4_) * fVar85;
          auVar50._4_4_ = (local_60._4_4_ + fVar39) * fVar85;
          auVar50._12_4_ = (auVar58._4_4_ - fVar53) * fVar85;
          auVar50._8_4_ = SQRT(fVar52) * 0.5;
          auVar50 = auVar50 ^ (auVar50 ^ auVar117 ^ (auVar117 ^ auVar144) & auVar129) & ~auVar149;
          auVar105 = auVar50 ^ (auVar50 ^ auVar60) & auVar41;
        }
        *(long *)(lVar12 + 0xb0) = auVar105._8_8_;
        *(long *)(lVar12 + 0xa8) = auVar105._0_8_;
        if (*(char *)(lVar12 + 0xcc) == '\0') {
          *(undefined1 *)(lVar12 + 0xcc) = 1;
          (**(code **)(*plVar14 + 0x78))(plVar14);
        }
        (**(code **)(*plVar14 + 0x60))(plVar14);
        return;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


