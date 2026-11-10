/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011358c8; name: FUN_011358c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011358c8(ulong *param_1)

{
  short *psVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  ulong **ppuVar5;
  long *plVar6;
  short sVar7;
  bool bVar8;
  undefined2 uVar9;
  undefined3 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  float *pfVar25;
  char cVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  code *pcVar31;
  ulong **ppuVar33;
  ulong *puVar32;
  ulong *puVar34;
  short sVar35;
  bool bVar36;
  char *pcVar37;
  char *pcVar38;
  ulong uVar39;
  ulong *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long *plVar43;
  long *plVar44;
  undefined8 *puVar45;
  ulong *puVar46;
  long *plVar47;
  undefined8 *puVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  float fVar73;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  float fVar60;
  float fVar75;
  undefined1 auVar69 [16];
  float fVar74;
  float fVar76;
  float fVar77;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar78;
  undefined6 uVar79;
  int iVar82;
  byte bVar83;
  int iVar85;
  undefined1 auVar80 [16];
  byte bVar84;
  int iVar86;
  undefined1 auVar81 [16];
  undefined2 uVar87;
  byte bVar98;
  byte bVar99;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  float fVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar107 [16];
  float fVar109;
  undefined1 auVar108 [16];
  float fVar110;
  undefined1 auVar111 [12];
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  int iVar131;
  int iVar132;
  float fVar135;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  int iVar136;
  int iVar139;
  int iVar140;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  long local_170;
  undefined4 local_150;
  undefined4 uStack_14c;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  ulong *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong *local_70 [2];
  
  if (param_1[0x177] == 0) {
    return;
  }
  uVar18 = (**(code **)(*(long *)param_1[0x174] + 0xa0))();
  if (param_1[0x175] == uVar18) {
    uVar19 = param_1[0x176];
  }
  else {
    param_1[0x175] = uVar18;
    uVar19 = 0;
    if (uVar18 != 0) {
      uVar19 = FUN_00ded3a0(uVar18 + 0x108,&local_b8);
    }
    param_1[0x176] = uVar19;
  }
  if (uVar19 == 0) {
    return;
  }
  FUN_00c9e664(&local_b8,uVar19 + 0xe8);
  if (local_b8 == (ulong *)0x0) {
    auVar72._8_8_ = _UNK_03cabe58;
    auVar72._0_8_ = _DAT_03cabe50;
  }
  else {
    if (local_b0 == (long *)0x0) {
      plVar44 = (long *)0x0;
    }
    else {
      plVar44 = (long *)local_b0[9];
    }
    pfVar25 = (float *)(**(code **)(*plVar44 + 0x68))();
    fVar101 = *pfVar25;
    fVar104 = pfVar25[1];
    fVar105 = pfVar25[2];
    fVar106 = pfVar25[3];
    fVar74 = pfVar25[4];
    fVar76 = pfVar25[5];
    fVar77 = pfVar25[6];
    fVar100 = pfVar25[7];
    fVar110 = pfVar25[8];
    fVar115 = pfVar25[9];
    fVar116 = pfVar25[10];
    fVar109 = pfVar25[0xb] * pfVar25[0xb];
    auVar69._0_4_ = fVar74 * fVar74 + fVar76 * fVar76;
    auVar69._4_4_ = fVar77 * fVar77 + fVar100 * fVar100;
    auVar69._8_4_ = fVar74 * fVar74 + fVar76 * fVar76;
    auVar69._12_4_ = fVar77 * fVar77 + fVar100 * fVar100;
    auVar133._0_4_ = fVar110 * fVar110 + fVar115 * fVar115;
    auVar133._4_4_ = fVar116 * fVar116 + fVar109;
    auVar133._8_4_ = fVar110 * fVar110 + fVar115 * fVar115;
    auVar133._12_4_ = fVar116 * fVar116 + fVar109;
    auVar146._0_4_ = fVar101 * fVar101 + fVar104 * fVar104;
    auVar146._4_4_ = fVar105 * fVar105 + fVar106 * fVar106;
    auVar146._8_4_ = fVar101 * fVar101 + fVar104 * fVar104;
    auVar146._12_4_ = fVar105 * fVar105 + fVar106 * fVar106;
    auVar89 = NEON_ext(auVar69,auVar69,4,1);
    auVar69 = NEON_ext(auVar133,auVar133,4,1);
    auVar64 = NEON_ext(auVar146,auVar146,4,1);
    auVar56._0_4_ = auVar89._0_4_ + auVar89._4_4_;
    auVar56._4_4_ = auVar89._8_4_ + auVar89._12_4_;
    auVar56._8_4_ = auVar89._0_4_ + auVar89._4_4_;
    auVar56._12_4_ = auVar89._8_4_ + auVar89._12_4_;
    auVar57._0_4_ = auVar69._0_4_ + auVar69._4_4_;
    auVar57._4_4_ = auVar69._8_4_ + auVar69._12_4_;
    auVar57._8_4_ = auVar69._0_4_ + auVar69._4_4_;
    auVar57._12_4_ = auVar69._8_4_ + auVar69._12_4_;
    auVar58._0_4_ = auVar64._0_4_ + auVar64._4_4_;
    auVar58._4_4_ = auVar64._8_4_ + auVar64._12_4_;
    auVar58._8_4_ = auVar64._0_4_ + auVar64._4_4_;
    auVar58._12_4_ = auVar64._8_4_ + auVar64._12_4_;
    auVar69 = NEON_frsqrte(auVar56,4);
    auVar133 = NEON_frsqrte(auVar57,4);
    auVar141._0_4_ = auVar56._0_4_ * auVar69._0_4_;
    auVar141._4_4_ = auVar56._4_4_ * auVar69._4_4_;
    auVar141._8_4_ = auVar56._8_4_ * auVar69._8_4_;
    auVar141._12_4_ = auVar56._12_4_ * auVar69._12_4_;
    auVar64 = NEON_frsqrte(auVar58,4);
    auVar145._0_4_ = auVar57._0_4_ * auVar133._0_4_;
    auVar145._4_4_ = auVar57._4_4_ * auVar133._4_4_;
    auVar145._8_4_ = auVar57._8_4_ * auVar133._8_4_;
    auVar145._12_4_ = auVar57._12_4_ * auVar133._12_4_;
    auVar126._0_4_ = auVar58._0_4_ * auVar64._0_4_;
    auVar126._4_4_ = auVar58._4_4_ * auVar64._4_4_;
    auVar126._8_4_ = auVar58._8_4_ * auVar64._8_4_;
    auVar126._12_4_ = auVar58._12_4_ * auVar64._12_4_;
    auVar146 = NEON_frsqrts(auVar133,auVar145,4);
    iVar136 = -(uint)(auVar57._0_4_ == 0.0);
    iVar139 = -(uint)(auVar57._4_4_ == 0.0);
    iVar140 = -(uint)(auVar57._8_4_ == 0.0);
    iVar11 = -(uint)(auVar56._0_4_ == 0.0);
    iVar12 = -(uint)(auVar56._4_4_ == 0.0);
    iVar131 = -(uint)(auVar56._8_4_ == 0.0);
    iVar132 = -(uint)(auVar56._12_4_ == 0.0);
    iVar78 = -(uint)(auVar58._0_4_ == 0.0);
    iVar82 = -(uint)(auVar58._4_4_ == 0.0);
    iVar85 = -(uint)(auVar58._8_4_ == 0.0);
    iVar86 = -(uint)(auVar58._12_4_ == 0.0);
    auVar89 = NEON_frsqrts(auVar64,auVar126,4);
    auVar112._0_4_ = auVar64._0_4_ * auVar89._0_4_;
    auVar112._4_4_ = auVar64._4_4_ * auVar89._4_4_;
    auVar112._8_4_ = auVar64._8_4_ * auVar89._8_4_;
    auVar112._12_4_ = auVar64._12_4_ * auVar89._12_4_;
    auVar89 = NEON_frsqrts(auVar69,auVar141,4);
    auVar142._0_4_ = auVar58._0_4_ * auVar112._0_4_;
    auVar142._4_4_ = auVar58._4_4_ * auVar112._4_4_;
    auVar142._8_4_ = auVar58._8_4_ * auVar112._8_4_;
    auVar142._12_4_ = auVar58._12_4_ * auVar112._12_4_;
    auVar64 = NEON_fmov(0x3f800000,4);
    auVar127._0_4_ = auVar69._0_4_ * auVar89._0_4_;
    auVar127._4_4_ = auVar69._4_4_ * auVar89._4_4_;
    auVar127._8_4_ = auVar69._8_4_ * auVar89._8_4_;
    auVar127._12_4_ = auVar69._12_4_ * auVar89._12_4_;
    auVar130._0_4_ = auVar133._0_4_ * auVar146._0_4_;
    auVar130._4_4_ = auVar133._4_4_ * auVar146._4_4_;
    auVar130._8_4_ = auVar133._8_4_ * auVar146._8_4_;
    auVar130._12_4_ = auVar133._12_4_ * auVar146._12_4_;
    auVar133 = NEON_frsqrts(auVar112,auVar142,4);
    auVar108._0_4_ = auVar57._0_4_ * auVar130._0_4_;
    auVar108._4_4_ = auVar57._4_4_ * auVar130._4_4_;
    auVar108._8_4_ = auVar57._8_4_ * auVar130._8_4_;
    auVar108._12_4_ = auVar57._12_4_ * auVar130._12_4_;
    auVar107._0_4_ = auVar56._0_4_ * auVar127._0_4_;
    auVar107._4_4_ = auVar56._4_4_ * auVar127._4_4_;
    auVar107._8_4_ = auVar56._8_4_ * auVar127._8_4_;
    auVar107._12_4_ = auVar56._12_4_ * auVar127._12_4_;
    auVar69 = NEON_frsqrts(auVar130,auVar108,4);
    auVar89 = NEON_frsqrts(auVar127,auVar107,4);
    fVar101 = fVar101 * auVar112._0_4_ * auVar133._0_4_;
    fVar104 = fVar104 * auVar112._4_4_ * auVar133._4_4_;
    fVar105 = fVar105 * auVar112._8_4_ * auVar133._8_4_;
    fVar106 = fVar106 * auVar112._12_4_ * auVar133._12_4_;
    fVar109 = (float)CONCAT13((byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                              CONCAT12((byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar101 >> 8) &
                                                 ~(byte)((uint)iVar78 >> 8),
                                                 SUB41(fVar101,0) & ~(byte)iVar78)));
    uVar41 = CONCAT17((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                      CONCAT16((byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10),
                               CONCAT15((byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar82 >> 8),
                                        CONCAT14(SUB41(fVar104,0) & ~(byte)iVar82,fVar109))));
    auVar111._0_10_ =
         CONCAT19((byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar85 >> 8),
                  CONCAT18(SUB41(fVar105,0) & ~(byte)iVar85,uVar41));
    auVar111[10] = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
    auVar111[0xb] = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
    auVar113[0xc] = SUB41(fVar106,0) & ~(byte)iVar86;
    auVar113._0_12_ = auVar111;
    auVar113[0xd] = (byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar86 >> 8);
    auVar113[0xe] = (byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
    auVar113[0xf] = (byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
    fVar110 = fVar110 * auVar130._0_4_ * auVar69._0_4_;
    fVar115 = fVar115 * auVar130._4_4_ * auVar69._4_4_;
    fVar116 = fVar116 * auVar130._8_4_ * auVar69._8_4_;
    fVar74 = fVar74 * auVar127._0_4_ * auVar89._0_4_;
    fVar76 = fVar76 * auVar127._4_4_ * auVar89._4_4_;
    fVar77 = fVar77 * auVar127._8_4_ * auVar89._8_4_;
    fVar100 = fVar100 * auVar127._12_4_ * auVar89._12_4_;
    auVar89 = NEON_ext(auVar113,auVar113,8,1);
    fVar110 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18),
                              CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                       ~(byte)((uint)iVar136 >> 0x10),
                                       CONCAT11((byte)((uint)fVar110 >> 8) &
                                                ~(byte)((uint)iVar136 >> 8),
                                                SUB41(fVar110,0) & ~(byte)iVar136)));
    uVar79 = CONCAT15((byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar139 >> 8),
                      CONCAT14(SUB41(fVar115,0) & ~(byte)iVar139,fVar110));
    bVar83 = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar139 >> 0x10);
    bVar84 = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar139 >> 0x18);
    auVar61._0_8_ = CONCAT17(bVar84,CONCAT16(bVar83,uVar79));
    auVar61[8] = SUB41(fVar116,0) & ~(byte)iVar140;
    auVar61[9] = (byte)((uint)fVar116 >> 8) & ~(byte)((uint)iVar140 >> 8);
    auVar61[10] = (byte)((uint)fVar116 >> 0x10) & ~(byte)((uint)iVar140 >> 0x10);
    auVar61[0xb] = (byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar140 >> 0x18);
    uVar87 = CONCAT11((byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar11 >> 8),
                      SUB41(fVar74,0) & ~(byte)iVar11);
    bVar98 = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
    bVar99 = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
    fVar115 = (float)CONCAT13(bVar99,CONCAT12(bVar98,uVar87));
    auVar96._0_8_ =
         CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                  CONCAT16((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                           CONCAT15((byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                    CONCAT14(SUB41(fVar76,0) & ~(byte)iVar12,fVar115))));
    auVar96[8] = SUB41(fVar77,0) & ~(byte)iVar131;
    auVar96[9] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar131 >> 8);
    auVar96[10] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar131 >> 0x10);
    auVar96[0xb] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar131 >> 0x18);
    auVar96[0xc] = SUB41(fVar100,0) & ~(byte)iVar132;
    auVar96[0xd] = (byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar132 >> 8);
    auVar96[0xe] = (byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10);
    auVar96[0xf] = (byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18);
    fVar116 = (float)((ulong)uVar41 >> 0x20);
    fVar105 = (float)((ulong)auVar96._0_8_ >> 0x20);
    fVar104 = auVar61._8_4_;
    fVar101 = auVar64._0_4_ + (float)_DAT_03cab3a0 * fVar109 + (float)_DAT_03cac210 * fVar105 +
              (float)_DAT_03cabb00 * fVar104;
    fVar74 = auVar64._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar109 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar105 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar104;
    fVar76 = auVar64._8_4_ + (float)_UNK_03cab3a8 * fVar109 + (float)_UNK_03cac218 * fVar105 +
             (float)_UNK_03cabb08 * fVar104;
    fVar77 = auVar64._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar109 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar105 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar104;
    fVar100 = (float)((ulong)auVar61._0_8_ >> 0x20);
    uVar9 = (undefined2)((uint6)uVar79 >> 0x20);
    auVar64 = NEON_ext(auVar96,auVar96,8,1);
    fVar106 = auVar64._0_4_;
    auVar114._4_4_ = fVar101;
    auVar114._0_4_ = fVar101;
    auVar114._8_4_ = fVar101;
    auVar114._12_4_ = fVar101;
    auVar143._4_4_ = fVar74;
    auVar143._0_4_ = fVar74;
    auVar143._8_4_ = fVar74;
    auVar143._12_4_ = fVar74;
    auVar147._0_4_ = -(uint)(fVar101 <= fVar74);
    auVar147._4_4_ = -(uint)(fVar101 <= fVar74);
    auVar147._8_4_ = -(uint)(fVar101 <= fVar74);
    auVar147._12_4_ = -(uint)(fVar101 <= fVar74);
    auVar114 = auVar114 ^ (auVar114 ^ auVar143) & auVar147;
    auVar137._4_4_ = fVar76;
    auVar137._0_4_ = fVar76;
    auVar137._8_4_ = fVar76;
    auVar137._12_4_ = fVar76;
    fVar109 = SQRT(fVar101) * 0.5;
    auVar64 = NEON_fmov(0x40800000,4);
    auVar144._0_4_ = -(uint)(auVar114._0_4_ <= fVar76);
    auVar144._4_4_ = -(uint)(auVar114._4_4_ <= fVar76);
    auVar144._8_4_ = -(uint)(auVar114._8_4_ <= fVar76);
    auVar144._12_4_ = -(uint)(auVar114._12_4_ <= fVar76);
    auVar134._0_4_ = fVar109 * auVar64._0_4_;
    auVar134._4_4_ = SQRT(fVar74) * 0.5 * auVar64._4_4_;
    auVar134._8_4_ = SQRT(fVar76) * 0.5 * auVar64._8_4_;
    auVar134._12_4_ = SQRT(fVar77) * 0.5 * auVar64._12_4_;
    auVar114 = auVar114 ^ (auVar114 ^ auVar137) & auVar144;
    auVar69 = NEON_frecpe(auVar134,4);
    auVar64 = NEON_frecps(auVar69,auVar134,4);
    auVar71._0_4_ = -(uint)(auVar114._0_4_ <= fVar77);
    auVar71._4_4_ = -(uint)(auVar114._4_4_ <= fVar77);
    auVar71._8_4_ = -(uint)(auVar114._8_4_ <= fVar77);
    auVar71._12_4_ = -(uint)(auVar114._12_4_ <= fVar77);
    auVar138._0_4_ = auVar69._0_4_ * auVar64._0_4_;
    auVar138._4_4_ = auVar69._4_4_ * auVar64._4_4_;
    auVar138._8_4_ = auVar69._8_4_ * auVar64._8_4_;
    auVar138._12_4_ = auVar69._12_4_ * auVar64._12_4_;
    auVar64 = NEON_frecps(auVar138,auVar134,4);
    fVar105 = auVar138._0_4_ * auVar64._0_4_;
    fVar135 = auVar138._4_4_ * auVar64._4_4_;
    fVar59 = auVar138._8_4_ * auVar64._8_4_;
    fVar60 = auVar138._12_4_ * auVar64._12_4_;
    fVar101 = (fVar116 + (float)CONCAT13(bVar99,CONCAT12(bVar98,uVar87))) * fVar105;
    uVar117 = (undefined1)((uint)fVar101 >> 8);
    uVar118 = (undefined1)((uint)fVar101 >> 0x10);
    uVar119 = (undefined1)((uint)fVar101 >> 0x18);
    fVar104 = (auVar89._0_4_ + fVar110) * fVar105;
    uVar120 = (undefined1)((uint)fVar104 >> 8);
    uVar121 = (undefined1)((uint)fVar104 >> 0x10);
    uVar122 = (undefined1)((uint)fVar104 >> 0x18);
    fVar105 = (fVar106 + -fVar100) * fVar105;
    uVar123 = (undefined1)((uint)fVar105 >> 8);
    uVar124 = (undefined1)((uint)fVar105 >> 0x10);
    uVar125 = (undefined1)((uint)fVar105 >> 0x18);
    auVar128._0_4_ = (fVar116 + fVar115) * fVar135;
    auVar128._4_4_ = fVar135 * 0.0;
    auVar128._8_4_ = (fVar106 + (float)CONCAT13(bVar84,CONCAT12(bVar83,uVar9))) * fVar135;
    auVar128._12_4_ = (fVar110 + -auVar111._8_4_) * fVar135;
    auVar81._0_4_ = (auVar89._0_4_ + fVar110) * fVar59;
    auVar81._4_4_ = (fVar106 + fVar100) * fVar59;
    auVar81._12_4_ = (fVar116 - fVar115) * fVar59;
    auVar129._8_8_ = auVar128._8_8_;
    auVar129._4_4_ = SQRT(fVar74) * 0.5;
    auVar129._0_4_ = auVar128._0_4_;
    auVar81._8_4_ = SQRT(fVar76) * 0.5;
    auVar64[4] = SUB41(fVar101,0);
    auVar64._0_4_ = fVar109;
    auVar64[5] = uVar117;
    auVar64[6] = uVar118;
    auVar64[7] = uVar119;
    auVar64[8] = SUB41(fVar104,0);
    auVar64[9] = uVar120;
    auVar64[10] = uVar121;
    auVar64[0xb] = uVar122;
    auVar64[0xc] = SUB41(fVar105,0);
    auVar64[0xd] = uVar123;
    auVar64[0xe] = uVar124;
    auVar64[0xf] = uVar125;
    auVar89[4] = SUB41(fVar101,0);
    auVar89._0_4_ = fVar109;
    auVar89[5] = uVar117;
    auVar89[6] = uVar118;
    auVar89[7] = uVar119;
    auVar89[8] = SUB41(fVar104,0);
    auVar89[9] = uVar120;
    auVar89[10] = uVar121;
    auVar89[0xb] = uVar122;
    auVar89[0xc] = SUB41(fVar105,0);
    auVar89[0xd] = uVar123;
    auVar89[0xe] = uVar124;
    auVar89[0xf] = uVar125;
    auVar81 = auVar81 ^ (auVar81 ^ auVar89 ^ (auVar64 ^ auVar129) & auVar147) & ~auVar144;
    uVar10 = CONCAT12(auVar111[10],(short)((unkuint10)auVar111._0_10_ >> 0x40));
    fVar101 = (float)CONCAT13(auVar111[0xb],uVar10);
    auVar97._0_4_ = (fVar106 - (float)CONCAT13(bVar84,CONCAT12(bVar83,uVar9))) * fVar60;
    auVar97._4_4_ = (fVar110 - fVar101) * fVar60;
    auVar97._8_4_ = (fVar116 - fVar115) * fVar60;
    auVar97._12_4_ = SQRT(fVar77) * 0.5;
    auVar72 = auVar81 ^ (auVar81 ^ auVar97) & auVar71;
  }
  fStack_e8 = auVar72._8_4_;
  fStack_e4 = auVar72._12_4_;
  if (local_b0 != (long *)0x0) {
    plVar44 = local_b0 + 5;
    do {
      lVar21 = *plVar44;
      iVar78 = (int)lVar21 + -1;
      cVar26 = '\x01';
      bVar36 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar36) {
        *(int *)plVar44 = iVar78;
        cVar26 = ExclusiveMonitorsStatus();
      }
    } while (cVar26 != '\0');
    if (iVar78 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_01137b64;
  }
  if (local_b8 != (ulong *)0x0) {
    (**(code **)(*local_b8 + 0x60))();
  }
  if (param_1[0x24] != param_1[0x25]) {
    puVar40 = param_1 + 0x21;
    uVar19 = *puVar40;
    uVar18 = nn::os::GetCurrentThread();
    if (uVar18 == uVar19) {
      puVar40 = (ulong *)0x0;
      bVar36 = true;
    }
    else {
      uVar18 = nn::os::GetCurrentThread();
      do {
        if (*puVar40 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x22));
            while (*puVar40 == 0) {
              cVar26 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(puVar40,0x10);
              if (bVar36) {
                *puVar40 = uVar18;
                cVar26 = ExclusiveMonitorsStatus();
              }
              if (cVar26 == '\0') goto LAB_011359e4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar26 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(puVar40,0x10);
        if (bVar36) {
          *puVar40 = uVar18;
          cVar26 = ExclusiveMonitorsStatus();
        }
      } while (cVar26 != '\0');
LAB_011359e4:
      bVar36 = false;
    }
    pcVar37 = (char *)param_1[0x24];
    pcVar38 = (char *)param_1[0x25];
    if (pcVar37 != pcVar38) {
      do {
        if (*pcVar37 == '\0') {
          uVar41 = FUN_01fa5b10(param_1[0x2b],param_1[0x2c],pcVar37);
          FUN_01fa6050(param_1 + 0x2b,uVar41,param_1[0x2c]);
        }
        else {
          plVar44 = (long *)(pcVar37 + 8);
          if ((*plVar44 != 0) && (*(short *)(*plVar44 + 0x1a) != 0)) {
            plVar47 = (long *)param_1[1];
            plVar20 = (long *)(**(code **)(*plVar47 + 0x10))(plVar47,0x60,8);
            if (plVar20 == (long *)0x0) {
              uVar42 = 0;
              uVar41 = 0;
              plVar47 = (long *)0x0;
            }
            else {
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar78 = __cxa_guard_acquire(&DAT_04865a38), iVar78 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar21 = nn::os::GetTlsValue(DAT_04865a30);
              if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_01137b60;
              *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar47;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
              *plVar20 = 0;
              plVar20[1] = 0;
              FUN_00ca1a48(plVar20,plVar44);
              lVar29 = 0;
              if (*plVar44 != 0) {
                lVar28 = *(long *)(*plVar44 + 0x10);
                lVar29 = 0;
                if (lVar28 != 0) {
                  lVar29 = lVar28 + -0x28;
                }
              }
              plVar20[2] = lVar29;
              plVar20[3] = 0;
              plVar20[4] = 0;
              plVar20[5] = -0x100000000;
              *(undefined1 *)((long)plVar20 + 0x44) = 0;
              *(undefined2 *)((long)plVar20 + 0x5c) = 0x100;
              lVar29 = *plVar20;
              *(undefined1 *)((long)plVar20 + 0x54) = 0;
              *(undefined1 *)(plVar20 + 0xb) = 0;
              *(undefined1 *)(plVar20 + 8) = 0;
              plVar20[6] = 0;
              plVar20[7] = 0;
              if ((lVar29 != 0) && (*(short *)(lVar29 + 0x1a) != 0)) {
                psVar1 = (short *)(lVar29 + 0x1a);
                sVar35 = *(short *)(lVar29 + 0x1a);
LAB_011360f8:
                sVar7 = *psVar1;
                if (sVar7 == sVar35) {
                  cVar26 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar35 + 1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                  if (cVar26 != '\0') goto LAB_0113611c;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_0113611c:
                  bVar8 = false;
                }
                if (!bVar8) goto code_r0x01136124;
                lVar29 = *(long *)(lVar29 + 0x10);
                if (lVar29 != 0) {
                  pcVar31 = *(code **)(lVar29 + 0x450);
                  plVar43 = (long *)(lVar29 + -0x28);
                  if (pcVar31 != (code *)0x0) {
                    *(undefined8 *)(lVar29 + 0x458) = 0;
                    *(undefined8 *)(lVar29 + 0x460) = 0;
                    *(undefined8 *)(lVar29 + 0x448) = 0;
                    *(undefined8 *)(lVar29 + 0x450) = 0;
                    (*pcVar31)(lVar29 + 0x468);
                  }
                  *(code **)(lVar29 + 0x448) = FUN_01fa6880;
                  *(undefined1 **)(lVar29 + 0x450) = &LAB_02a3005c;
                  *(undefined1 **)(lVar29 + 0x458) = &LAB_02a30060;
                  *(long **)(lVar29 + 0x468) = plVar20;
                  *(undefined1 **)(lVar29 + 0x460) = &LAB_02a3006c;
                  uVar41 = *(undefined8 *)(lVar29 + 0x6b8);
                  uVar42 = *(undefined8 *)(lVar29 + 0x6c0);
                  *(undefined8 *)((long)plVar20 + 0x51) = *(undefined8 *)(lVar29 + 0x6c5);
                  *(undefined8 *)((long)plVar20 + 0x44) = uVar41;
                  *(undefined8 *)((long)plVar20 + 0x4c) = uVar42;
                  FUN_014a34f8(&local_b8,plVar43);
                  puVar32 = local_b8;
                  if (local_b8 == (ulong *)0x0) {
                    *(undefined1 *)((long)plVar20 + 0x5c) = 0;
                  }
                  else {
                    *(bool *)((long)plVar20 + 0x5c) = *(short *)((long)local_b8 + 0x1a) != 0;
                    if (local_b8 != (ulong *)0x0) {
                      puVar2 = local_b8 + 3;
                      do {
                        sVar35 = (short)*puVar2;
                        cVar26 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar8) {
                          *(short *)puVar2 = sVar35 + -1;
                          cVar26 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar26 != '\0');
                      if (sVar35 == 1) {
                        piVar4 = (int *)((long)local_b8 + 0x1c);
                        do {
                          iVar78 = *piVar4;
                          cVar26 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                          if (bVar8) {
                            *piVar4 = -1;
                            cVar26 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar26 != '\0');
                        if (iVar78 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar78 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar28 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar28;
                          local_80 = (ulong *)*puVar32;
                          FUN_00c44438(lVar28 + 0x8040,&local_80);
                        }
                      }
                      else if (sVar35 == 0) goto LAB_01137b38;
                    }
                  }
                  lVar29 = *(long *)(lVar29 + 8);
                  psVar1 = (short *)(lVar29 + 0x1a);
                  do {
                    sVar35 = *psVar1;
                    cVar26 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar35 + -1;
                      cVar26 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar26 != '\0');
                  if (sVar35 == 1) {
                    *(undefined8 *)(lVar29 + 0x10) = 0;
                    (**(code **)(*plVar43 + 0x50))(plVar43);
                  }
                  else if (sVar35 == 0) goto LAB_01137b8c;
                }
              }
LAB_01135ae0:
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
              uVar42 = 8;
              uVar41 = 0x60;
            }
            puVar48 = (undefined8 *)param_1[0x2c];
            if (puVar48 < (undefined8 *)param_1[0x2d]) {
              uVar18 = param_1[0x2e];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar78 = __cxa_guard_acquire(&DAT_04865a38), iVar78 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar21 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar21 == 0) {
                *puVar48 = plVar20;
                puVar48[1] = plVar47;
                puVar48[2] = uVar41;
                puVar48[3] = uVar42;
              }
              else {
                if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_01137b60;
                *(ulong *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar18;
                *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                *puVar48 = plVar20;
                puVar48[1] = plVar47;
                puVar48[2] = uVar41;
                puVar48[3] = uVar42;
                *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
              }
              param_1[0x2c] = (ulong)(puVar48 + 4);
            }
            else {
              uVar19 = param_1[0x2f];
              lVar21 = (long)((long)puVar48 - param_1[0x2b]) >> 5;
              uVar18 = lVar21 + 1;
              if (0x7ffffffffffffffe < uVar19) {
                uVar19 = 0x7fffffffffffffff;
              }
              if (uVar19 < uVar18) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar29 = (long)param_1[0x2d] - param_1[0x2b];
              uVar22 = lVar29 >> 4;
              if (uVar18 <= uVar22) {
                uVar18 = uVar22;
              }
              if (uVar19 >> 1 <= (ulong)(lVar29 >> 5)) {
                uVar18 = uVar19;
              }
              if (uVar18 == 0) {
                local_120 = 0;
                uStack_11c = 0;
              }
              else {
                lVar29 = (**(code **)(*(long *)param_1[0x2e] + 0x10))
                                   ((long *)param_1[0x2e],uVar18 << 5,8);
                local_120 = (undefined4)lVar29;
                uStack_11c = (undefined4)((ulong)lVar29 >> 0x20);
                if (lVar29 == 0) {
                  (**(code **)(*(long *)param_1[0x2e] + 0xe8))();
                }
              }
              puVar48 = (undefined8 *)(CONCAT44(uStack_11c,local_120) + lVar21 * 0x20);
              uVar19 = param_1[0x2e];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar78 = __cxa_guard_acquire(&DAT_04865a38), iVar78 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar21 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar21 == 0) {
                *puVar48 = plVar20;
                puVar48[1] = plVar47;
                puVar48[2] = uVar41;
                puVar48[3] = uVar42;
              }
              else {
                if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_01137b60:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(ulong *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar19;
                *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                *puVar48 = plVar20;
                puVar48[1] = plVar47;
                puVar48[2] = uVar41;
                puVar48[3] = uVar42;
                *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
              }
              plVar20 = (long *)param_1[0x2b];
              plVar47 = (long *)param_1[0x2c];
              if (plVar47 == plVar20) {
                puVar30 = puVar48;
                plVar47 = plVar20;
              }
              else {
                puVar45 = puVar48;
                do {
                  uVar19 = param_1[0x2e];
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar78 = __cxa_guard_acquire(&DAT_04865a38), iVar78 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar21 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar21 != 0) {
                    if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_01137b60;
                    *(ulong *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar19;
                    *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                  }
                  lVar29 = plVar47[-4];
                  plVar47[-4] = 0;
                  puVar45[-4] = lVar29;
                  lVar29 = plVar47[-3];
                  lVar28 = plVar47[-1];
                  puVar45[-2] = plVar47[-2];
                  puVar45[-1] = lVar28;
                  puVar30 = puVar45 + -4;
                  plVar47 = plVar47 + -4;
                  puVar45[-3] = lVar29;
                  if (lVar21 != 0) {
                    *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
                  }
                  puVar45 = puVar30;
                } while (plVar20 != plVar47);
                plVar20 = (long *)param_1[0x2c];
                plVar47 = (long *)param_1[0x2b];
              }
              param_1[0x2b] = (ulong)puVar30;
              param_1[0x2c] = (ulong)(puVar48 + 4);
              uVar19 = param_1[0x2d];
              param_1[0x2d] = CONCAT44(uStack_11c,local_120) + uVar18 * 0x20;
              if (plVar20 != plVar47) {
                do {
                  plVar43 = plVar20 + -4;
                  lVar21 = *plVar43;
                  *plVar43 = 0;
                  if (lVar21 != 0) {
                    FUN_00c4e600();
                    FUN_00c4e600();
                    lVar29 = FUN_00c4e600();
                    iVar82 = *(int *)(lVar29 + 0x12c8);
                    iVar78 = iVar82 + 1;
                    *(int *)(lVar29 + 0x12c8) = iVar78;
                    if (*(int *)(lVar29 + 0x12cc) <= iVar82) {
                      *(int *)(lVar29 + 0x12cc) = iVar78;
                    }
                    FUN_018cec38(lVar21);
                    plVar6 = (long *)plVar20[-3];
                    lVar29 = plVar20[-2];
                    lVar28 = plVar20[-1];
                    uVar18 = (**(code **)(*plVar6 + 0xf8))(plVar6);
                    if (((uVar18 & 1) == 0) ||
                       (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                      (**(code **)(*plVar6 + 0x18))(plVar6,lVar21,lVar29,lVar28);
                    }
                    else {
                      FUN_00c48fe8(plVar6,lVar21,lVar29,lVar28);
                    }
                    lVar21 = FUN_00c4e600();
                    iVar78 = *(int *)(lVar21 + 0x12c8) + -1;
                    *(int *)(lVar21 + 0x12c8) = iVar78;
                    if (iVar78 == 0) {
                      puVar32 = (ulong *)FUN_00c4e600();
                      if (puVar32[600] != 0) {
                        local_80 = puVar32 + puVar32[600] * 3;
                        local_b8 = puVar32;
                        FUN_00c4ea30(&local_b8,&local_80);
                        local_130 = (undefined4)*puVar32;
                        uStack_12c = (undefined4)(*puVar32 >> 0x20);
                        puVar2 = puVar32;
                        if (puVar32[600] != 0) {
                          puVar2 = puVar32 + puVar32[600] * 3;
                        }
                        if (puVar2 == puVar32) {
                          lVar29 = 0;
                          local_150 = 0;
                          uStack_14c = 0;
                        }
                        else {
                          lVar29 = 0;
                          local_150 = 0;
                          uStack_14c = 0;
                          puVar3 = puVar32;
                          do {
                            (**(code **)(*(long *)*puVar3 + 0xd0))();
                            if (*puVar3 != CONCAT44(uStack_12c,local_130)) {
                              (**(code **)(*(long *)CONCAT44(uStack_12c,local_130) + 0x100))
                                        ((long *)CONCAT44(uStack_12c,local_130),
                                         puVar32 + CONCAT44(uStack_14c,local_150) * 3,puVar3);
                              local_130 = (undefined4)*puVar3;
                              uStack_12c = (undefined4)(*puVar3 >> 0x20);
                              local_150 = (undefined4)lVar29;
                              uStack_14c = (undefined4)((ulong)lVar29 >> 0x20);
                            }
                            puVar3 = puVar3 + 3;
                            lVar29 = lVar29 + 1;
                          } while (puVar2 != puVar3);
                        }
                        (**(code **)(*(long *)CONCAT44(uStack_12c,local_130) + 0x100))
                                  ((long *)CONCAT44(uStack_12c,local_130),
                                   puVar32 + CONCAT44(uStack_14c,local_150) * 3,puVar32 + lVar29 * 3
                                  );
                        puVar32[600] = 0;
                      }
                      *(undefined4 *)(lVar21 + 0x12cc) = 0;
                    }
                  }
                  plVar20 = plVar43;
                } while (plVar43 != plVar47);
              }
              if (plVar47 != (long *)0x0) {
                plVar20 = (long *)param_1[0x2e];
                uVar18 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                if (((uVar18 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar20 + 0x18))(plVar20,plVar47,uVar19 - (long)plVar47,8);
                }
                else {
                  FUN_00c48fe8(plVar20,plVar47,uVar19 - (long)plVar47,8);
                }
              }
            }
            if (((*(char *)((long)param_1 + 0x101) != '\0') && (lVar21 = *plVar44, lVar21 != 0)) &&
               (*(short *)(lVar21 + 0x1a) != 0)) {
              psVar1 = (short *)(lVar21 + 0x1a);
              sVar35 = *(short *)(lVar21 + 0x1a);
LAB_01135b7c:
              sVar7 = *psVar1;
              if (sVar7 == sVar35) {
                cVar26 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar35 + 1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
                if (cVar26 != '\0') goto LAB_01135ba0;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01135ba0:
                bVar8 = false;
              }
              if (!bVar8) goto code_r0x01135ba8;
              lVar21 = *(long *)(lVar21 + 0x10);
              if (lVar21 != 0) {
                plVar44 = (long *)(lVar21 + -0x28);
                FUN_01142c28(plVar44);
                lVar21 = *(long *)(lVar21 + 8);
                psVar1 = (short *)(lVar21 + 0x1a);
                do {
                  sVar35 = *psVar1;
                  cVar26 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar35 + -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
                if (sVar35 == 1) {
                  *(undefined8 *)(lVar21 + 0x10) = 0;
                  (**(code **)(*plVar44 + 0x50))(plVar44);
                }
                else if (sVar35 == 0) goto LAB_01137b8c;
              }
            }
          }
        }
LAB_01135bd0:
        puVar17 = PTR_LAB_047d3de8;
        pcVar37 = pcVar37 + 0x18;
      } while (pcVar37 != pcVar38);
      pcVar37 = (char *)param_1[0x24];
      for (pcVar38 = (char *)param_1[0x25]; pcVar38 != pcVar37; pcVar38 = pcVar38 + -0x18) {
        puVar48 = *(undefined8 **)(pcVar38 + -0x10);
        if (puVar48 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar48 + 3);
          do {
            sVar35 = *psVar1;
            cVar26 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar35 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
          if (sVar35 == 1) {
            piVar4 = (int *)((long)puVar48 + 0x1c);
            do {
              iVar78 = *piVar4;
              cVar26 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (iVar78 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar78 != 0)) {
                FUN_00100190(puVar17,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_b8 = (ulong *)*puVar48;
              FUN_00c44438(lVar21 + 0x8040,&local_b8);
            }
          }
          else if (sVar35 == 0) {
LAB_01137b38:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    param_1[0x25] = (ulong)pcVar37;
    if (!bVar36) {
      *puVar40 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar40 + 1));
    }
  }
  if (*(char *)((long)param_1 + 0x101) != '\0') {
    return;
  }
  FUN_00c9e664(&local_b8,param_1[0x176] + 0xe8);
  fStack_d8 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  if (local_b8 != (ulong *)0x0) {
    lVar21 = (**(code **)(*(long *)local_b0[9] + 0x68))();
    local_e0 = *(float *)(lVar21 + 0x30);
    fStack_dc = *(float *)(lVar21 + 0x34);
    fStack_d8 = *(float *)(lVar21 + 0x38);
  }
  if (local_b0 != (long *)0x0) {
    plVar44 = local_b0 + 5;
    do {
      lVar21 = *plVar44;
      iVar78 = (int)lVar21 + -1;
      cVar26 = '\x01';
      bVar36 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar36) {
        *(int *)plVar44 = iVar78;
        cVar26 = ExclusiveMonitorsStatus();
      }
    } while (cVar26 != '\0');
    if (iVar78 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    else if ((int)lVar21 == 0) {
LAB_01137b64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  auVar63._4_4_ = fStack_e8;
  auVar63._0_4_ = fStack_e8;
  auVar63._8_4_ = fStack_e8;
  auVar63._12_4_ = fStack_e8;
  fVar106 = auVar72._0_4_;
  auVar64 = NEON_ext(auVar63,auVar72,0xc,1);
  fVar104 = auVar72._4_4_;
  auVar88._4_4_ = fVar104;
  auVar88._0_4_ = fVar104;
  auVar88._8_4_ = fVar104;
  auVar88._12_4_ = fVar104;
  fVar110 = -fVar106;
  fVar115 = -fVar104;
  fVar116 = -fStack_e8;
  fVar74 = (float)_DAT_03cab640;
  fVar76 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar77 = (float)_UNK_03cab648;
  fVar100 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar89 = NEON_ext(auVar88,auVar64,0xc,1);
  auVar90._4_4_ = fVar116;
  auVar90._0_4_ = fVar116;
  auVar90._8_4_ = fVar116;
  auVar90._12_4_ = fVar116;
  auVar61 = auVar90._4_12_;
  auVar67._12_4_ = auVar64._12_4_;
  fVar101 = (float)_DAT_03caa5c0 * fStack_e4 + fVar106 * fVar74 * 0.0 +
            (float)_DAT_03caa700 * auVar89._0_4_ * fVar74 + (float)_DAT_03caaa70 * auVar64._0_4_;
  fVar104 = (float)((ulong)_DAT_03caa5c0 >> 0x20) * fStack_e4 + fVar104 * fVar76 * 0.0 +
            (float)((ulong)_DAT_03caa700 >> 0x20) * auVar89._4_4_ * fVar76 +
            (float)((ulong)_DAT_03caaa70 >> 0x20) * auVar64._4_4_;
  fVar105 = (float)_UNK_03caa5c8 * fStack_e4 + fStack_e8 * fVar77 * 0.0 +
            (float)_UNK_03caa708 * auVar89._8_4_ * fVar77 + (float)_UNK_03caaa78 * auVar64._8_4_;
  fVar106 = (float)((ulong)_UNK_03caa5c8 >> 0x20) * fStack_e4 + fVar106 * fVar100 * 0.0 +
            (float)((ulong)_UNK_03caa708 >> 0x20) * auVar89._12_4_ * fVar100 +
            (float)((ulong)_UNK_03caaa78 >> 0x20) * auVar67._12_4_;
  auVar65._4_12_ = auVar64._4_12_;
  auVar65._0_4_ = fVar110;
  auVar67._0_8_ = auVar65._0_8_;
  auVar67._8_4_ = fVar115;
  auVar66._8_8_ = auVar67._8_8_;
  auVar66._4_4_ = fVar116;
  auVar66._0_4_ = fVar110;
  auVar68._0_12_ = auVar66._0_12_;
  auVar68._12_4_ = fVar116;
  auVar80._0_8_ = CONCAT44(fVar105,fVar105);
  auVar80._8_4_ = fVar105;
  auVar80._12_4_ = fVar105;
  auVar64 = NEON_ext(auVar68,auVar68,8,1);
  fStack_f8 = auVar64._8_4_;
  local_100 = auVar64._0_4_;
  fStack_fc = auVar64._4_4_;
  if (local_b8 != (ulong *)0x0) {
    (**(code **)(*local_b8 + 0x60))();
    auVar61 = auVar90._4_12_;
  }
  auVar16._4_4_ = fVar104;
  auVar16._0_4_ = fVar101;
  auVar16._8_4_ = fVar105;
  auVar16._12_4_ = fVar106;
  auVar15._8_8_ = auVar80._8_8_;
  auVar15._0_8_ = auVar80._0_8_;
  auVar89 = NEON_ext(auVar15,auVar16,0xc,1);
  auVar91._4_12_ = auVar61;
  auVar91._0_4_ = local_100;
  auVar93._12_4_ = auVar61._8_4_;
  auVar93._0_8_ = auVar91._0_8_;
  auVar93._8_4_ = fStack_f8;
  auVar92._8_8_ = auVar93._8_8_;
  auVar92._0_8_ = CONCAT44(fVar110,local_100);
  auVar94._0_12_ = auVar92._0_12_;
  auVar94._12_4_ = fVar115;
  fVar59 = *(float *)(param_1 + 0x1e);
  lVar21 = (**(code **)(*(long *)param_1[0x177] + 0x68))();
  fVar100 = *(float *)(lVar21 + 0x30);
  fVar109 = *(float *)(lVar21 + 0x34);
  fVar135 = *(float *)(lVar21 + 0x38);
  fVar60 = (local_e0 - fVar100) * (local_e0 - fVar100);
  fVar73 = (fStack_dc - fVar109) * (fStack_dc - fVar109);
  fVar75 = (fStack_d8 - fVar135) * (fStack_d8 - fVar135);
  auVar49._0_4_ = fVar60 + fVar73;
  auVar49._4_4_ = fVar75 + 0.0;
  auVar49._8_4_ = fVar60 + fVar73;
  auVar49._12_4_ = fVar75 + 0.0;
  auVar69 = NEON_ext(auVar49,auVar49,4,1);
  local_80 = DAT_03cac100;
  local_78 = DAT_03cac108;
  fVar60 = SQRT(auVar69._0_4_ + auVar69._4_4_) + 3.0;
  if (13.0 < fVar60) {
    fVar73 = fVar60 + 3.0;
    local_80 = (ulong *)CONCAT44(fVar73,fVar60);
    local_78 = CONCAT44(fVar73 + 3.0,fVar73);
  }
  auVar14._4_4_ = fVar104;
  auVar14._0_4_ = fVar104;
  auVar14._8_4_ = fVar104;
  auVar14._12_4_ = fVar104;
  auVar69 = NEON_ext(auVar14,auVar89,0xc,1);
  auVar13._8_8_ = auVar94._8_8_;
  auVar13._0_8_ = auVar92._0_8_;
  fStack_138 = auVar69._8_4_;
  local_140 = auVar69._0_4_;
  fStack_13c = auVar69._4_4_;
  auVar64 = NEON_ext(auVar13,auVar64,8,1);
  puVar48 = *(undefined8 **)(*(long *)PTR_DAT_047db018 + 0x10);
  uVar39 = param_1[0x189];
  (**(code **)(*(long *)*puVar48 + 0x40))();
  uVar22 = (**(code **)(*(long *)*puVar48 + 0x50))();
  lVar21 = (**(code **)(*(long *)*puVar48 + 0x68))();
  uVar18 = lVar21 - 0x3200000;
  uVar19 = uVar22 - uVar18;
  if (uVar22 < uVar18 || uVar19 == 0) {
    local_b8 = (ulong *)(uVar18 - uVar22 >> 0x15);
LAB_011366e4:
    local_98 = (ulong *)0x1;
    local_70[0] = (ulong *)0xa;
    ppuVar5 = local_70;
    if (local_b8 < (ulong *)0xb) {
      ppuVar5 = &local_b8;
    }
    ppuVar33 = &local_98;
    if (local_b8 != (ulong *)0x0) {
      ppuVar33 = ppuVar5;
    }
    puVar40 = *ppuVar33;
  }
  else {
    if (uVar19 >> 0x15 <= uVar39) {
      local_b8 = (ulong *)(uVar39 - (uVar19 >> 0x15));
      goto LAB_011366e4;
    }
    puVar40 = (ulong *)0x1;
  }
  fVar60 = local_140 * fVar74;
  fVar73 = fStack_13c * fVar76;
  fVar75 = fStack_138 * fVar77;
  auVar64 = NEON_ext(auVar64,auVar64,0xc,1);
  fStack_138 = auVar64._8_4_;
  local_140 = auVar64._0_4_;
  fStack_13c = auVar64._4_4_;
  if (((DAT_04859438 & 1) == 0) && (iVar78 = __cxa_guard_acquire(&DAT_04859438), iVar78 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar44 = DAT_04859430;
  (**(code **)(*DAT_04859430 + 0x48))(DAT_04859430);
  uVar22 = (**(code **)(*plVar44 + 0x60))(plVar44);
  lVar21 = (**(code **)(*plVar44 + 0x80))(plVar44);
  uVar39 = param_1[0x189];
  uVar18 = lVar21 - 0xc800000;
  uVar19 = uVar22 - uVar18;
  if (uVar22 < uVar18 || uVar19 == 0) {
    uVar18 = uVar18 - uVar22;
    local_b8 = (ulong *)(uVar18 / 0xa00000);
    local_98 = (ulong *)0x1;
    local_70[0] = (ulong *)0xa;
    ppuVar5 = local_70;
    if (uVar18 >> 0x15 < 0x37) {
      ppuVar5 = &local_b8;
    }
    ppuVar33 = &local_98;
    if (0x9fffff < uVar18) {
      ppuVar33 = ppuVar5;
    }
  }
  else {
    if (uVar39 < uVar19 / 0xa00000) {
      puVar32 = (ulong *)0x1;
      goto LAB_01136808;
    }
    local_98 = (ulong *)0x1;
    local_b8 = (ulong *)(uVar39 - uVar19 / 0xa00000);
    local_70[0] = (ulong *)0xa;
    ppuVar5 = local_70;
    if (local_b8 < (ulong *)0xb) {
      ppuVar5 = &local_b8;
    }
    ppuVar33 = &local_98;
    if (local_b8 != (ulong *)0x0) {
      ppuVar33 = ppuVar5;
    }
  }
  local_70[0] = (ulong *)0xa;
  local_98 = (ulong *)0x1;
  puVar32 = *ppuVar33;
LAB_01136808:
  if (puVar40 <= puVar32) {
    puVar32 = puVar40;
  }
  fVar101 = (fVar110 * fVar106 + fStack_e4 * fVar101 * fVar74 + local_140 * fVar60) -
            auVar89._0_4_ * local_100;
  fVar104 = (fVar115 * fVar106 + fStack_e4 * fVar104 * fVar76 + fStack_13c * fVar73) -
            auVar89._4_4_ * fStack_fc;
  fVar105 = (fVar116 * fVar106 + fStack_e4 * fVar105 * fVar77 + fStack_138 * fVar75) -
            auVar89._8_4_ * fStack_f8;
  if (puVar32 < (ulong *)param_1[0x18b]) {
    param_1[0x18b] = (ulong)puVar32;
  }
  puVar40 = (ulong *)((long)param_1 + 0xbd4);
  *(int *)((long)param_1 + 0xbcc) = (int)param_1[0x19];
  *(undefined4 *)(param_1 + 0x17a) = *(undefined4 *)((long)param_1 + 0xcc);
  *puVar40 = param_1[0x1a];
  *(int *)((long)param_1 + 0xbdc) = (int)param_1[0x1b];
  puVar32 = (ulong *)((long)param_1 + 0xbe4);
  puVar2 = (ulong *)((long)param_1 + 0xbdc);
  param_1[0x17c] = *(ulong *)((long)param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x17d) = *(undefined4 *)((long)param_1 + 0xe4);
  plVar44 = (long *)param_1[0x2b];
  puVar3 = (ulong *)((long)param_1 + 0xbcc);
  if (plVar44 != (long *)param_1[0x2c]) {
    do {
      plVar20 = (long *)*plVar44;
      lVar21 = *plVar20;
      local_88 = plVar20;
      if ((lVar21 != 0) && (*(short *)(lVar21 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar21 + 0x1a);
        sVar35 = *(short *)(lVar21 + 0x1a);
LAB_01136ae8:
        sVar7 = *psVar1;
        if (sVar7 == sVar35) {
          cVar26 = '\x01';
          bVar36 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar36) {
            *psVar1 = sVar35 + 1;
            cVar26 = ExclusiveMonitorsStatus();
          }
          if (cVar26 != '\0') goto LAB_01136b0c;
          bVar36 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01136b0c:
          bVar36 = false;
        }
        if (!bVar36) goto code_r0x01136b14;
        lVar21 = *(long *)(lVar21 + 0x10);
        if (lVar21 != 0) {
          uVar18 = (**(code **)(*(long *)plVar20[2] + 0xd8))();
          if ((uVar18 & 1) == 0) {
            if (*(char *)(plVar20[2] + 0x430) != '\0') {
              FUN_00f740a4();
            }
            if ((char)plVar20[8] == '\0') goto LAB_011371b8;
            goto LAB_01136d38;
          }
          if ((*(char *)((long)plVar20 + 0x5d) == '\0') ||
             (lVar29 = plVar20[2], *(char *)(lVar29 + 0x430) != '\0')) goto LAB_01136d38;
          if (plVar20[3] != 0) {
            if (*(short *)(plVar20[3] + 0x1a) != 0) goto LAB_01136c78;
            lVar29 = local_88[2];
          }
          plVar20 = (long *)(lVar29 + 0x110);
          lVar24 = *plVar20;
          lVar28 = nn::os::GetCurrentThread();
          if (lVar28 == lVar24) {
            bVar36 = true;
          }
          else {
            lVar28 = nn::os::GetCurrentThread();
            do {
              if (*plVar20 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x118));
                  while (*plVar20 == 0) {
                    cVar26 = '\x01';
                    bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                    if (bVar36) {
                      *plVar20 = lVar28;
                      cVar26 = ExclusiveMonitorsStatus();
                    }
                    if (cVar26 == '\0') goto LAB_01136b9c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar26 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar36) {
                *plVar20 = lVar28;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
LAB_01136b9c:
            bVar36 = false;
          }
          plVar20 = (long *)FUN_00ff4780(*(undefined8 *)(lVar29 + 0x128),
                                         *(undefined8 *)(lVar29 + 0x130));
          if ((*(long **)(lVar29 + 0x130) == plVar20) || (*plVar20 == 0)) {
            plVar20 = (long *)FUN_00ff4780(*(undefined8 *)(lVar29 + 0x160),
                                           *(undefined8 *)(lVar29 + 0x168));
            if (*(long **)(lVar29 + 0x168) == plVar20) {
              lVar28 = 0;
            }
            else {
              lVar28 = 0;
              if (*plVar20 != 0) {
                lVar28 = *plVar20 + -0x20;
              }
            }
          }
          else {
            lVar28 = *plVar20 + -0x20;
          }
          if (!bVar36) {
            *(undefined8 *)(lVar29 + 0x110) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0x118));
          }
          if (lVar28 != 0) {
            local_b8 = (ulong *)0x0;
            local_b0 = (long *)0x0;
            FUN_00c43ef0(&local_b8,lVar28 + 0x98);
            local_98 = (ulong *)0x0;
            uStack_90 = 0;
            if (local_b8[2] == lVar28 + 0x28U) {
              FUN_00d94688(&local_98,&local_b8);
            }
            puVar23 = local_b8;
            if (local_b8 != (ulong *)0x0) {
              puVar34 = local_b8 + 3;
              do {
                sVar35 = (short)*puVar34;
                cVar26 = '\x01';
                bVar36 = (bool)ExclusiveMonitorPass(puVar34,0x10);
                if (bVar36) {
                  *(short *)puVar34 = sVar35 + -1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              if (sVar35 == 1) {
                piVar4 = (int *)((long)local_b8 + 0x1c);
                do {
                  iVar78 = *piVar4;
                  cVar26 = '\x01';
                  bVar36 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar36) {
                    *piVar4 = -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
                if (iVar78 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar78 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar29 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar29;
                  local_70[0] = (ulong *)*puVar23;
                  FUN_00c44438(lVar29 + 0x8040,local_70);
                }
              }
              else if (sVar35 == 0) goto LAB_01137b38;
            }
            FUN_00d48230(local_88 + 3,&local_98);
            puVar23 = local_98;
            if (local_98 != (ulong *)0x0) {
              puVar34 = local_98 + 3;
              do {
                sVar35 = (short)*puVar34;
                cVar26 = '\x01';
                bVar36 = (bool)ExclusiveMonitorPass(puVar34,0x10);
                if (bVar36) {
                  *(short *)puVar34 = sVar35 + -1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              if (sVar35 == 1) {
                piVar4 = (int *)((long)local_98 + 0x1c);
                do {
                  iVar78 = *piVar4;
                  cVar26 = '\x01';
                  bVar36 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar36) {
                    *piVar4 = -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
                if (iVar78 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar78 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar29 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar29;
                  local_b8 = (ulong *)*puVar23;
                  FUN_00c44438(lVar29 + 0x8040,&local_b8);
                }
              }
              else if (sVar35 == 0) goto LAB_01137b38;
            }
          }
LAB_01136c78:
          if (local_88[7] == 0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar78 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            plVar20 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            local_150 = (undefined4)*(undefined8 *)PTR_DAT_047d3e30;
            uStack_14c = (undefined4)((ulong)*(undefined8 *)PTR_DAT_047d3e30 >> 0x20);
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            plVar43 = local_88;
            lVar24 = local_88[2];
            plVar47 = (long *)(lVar24 + 0x110);
            lVar28 = *plVar47;
            lVar29 = nn::os::GetCurrentThread();
            if (lVar29 == lVar28) {
              bVar36 = true;
            }
            else {
              lVar29 = nn::os::GetCurrentThread();
              do {
                if (*plVar47 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x118));
                    while (*plVar47 == 0) {
                      cVar26 = '\x01';
                      bVar36 = (bool)ExclusiveMonitorPass(plVar47,0x10);
                      if (bVar36) {
                        *plVar47 = lVar29;
                        cVar26 = ExclusiveMonitorsStatus();
                      }
                      if (cVar26 == '\0') goto LAB_01136cf0;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar26 = '\x01';
                bVar36 = (bool)ExclusiveMonitorPass(plVar47,0x10);
                if (bVar36) {
                  *plVar47 = lVar29;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
LAB_01136cf0:
              bVar36 = false;
            }
            plVar47 = (long *)FUN_01fa69d0(*(undefined8 *)(lVar24 + 0x128),
                                           *(undefined8 *)(lVar24 + 0x130));
            if ((*(long **)(lVar24 + 0x130) == plVar47) || (*plVar47 == 0)) {
              plVar47 = (long *)FUN_01fa69d0(*(undefined8 *)(lVar24 + 0x160),
                                             *(undefined8 *)(lVar24 + 0x168));
              if (*(long **)(lVar24 + 0x168) == plVar47) {
                lVar29 = 0;
              }
              else {
                lVar29 = 0;
                if (*plVar47 != 0) {
                  lVar29 = *plVar47 + -0x20;
                }
              }
            }
            else {
              lVar29 = *plVar47 + -0x20;
            }
            if (!bVar36) {
              *(undefined8 *)(lVar24 + 0x110) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x118));
            }
            if (lVar29 == 0) {
              *(undefined1 *)((long)plVar43 + 0x5d) = 0;
              plVar47 = plVar20;
            }
            else {
              local_a0 = 0;
              local_b8 = (ulong *)&DAT_afc4d6c05abef19e;
              local_b0 = (long *)0x3c7b602;
              uStack_a8 = 7;
              lVar29 = FUN_00e3d7fc(lVar29,&local_b8);
              local_150 = (undefined4)*(undefined8 *)(lVar29 + 8);
              uStack_14c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 8) >> 0x20);
              plVar47 = *(long **)(lVar29 + 0x20);
              if (plVar47 != (long *)0x0) {
                (**(code **)(*plVar47 + 0x18))(plVar47);
              }
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
            }
            lVar24 = plVar43[2];
            plVar20 = (long *)(lVar24 + 0x110);
            lVar28 = *plVar20;
            lVar29 = nn::os::GetCurrentThread();
            if (lVar29 == lVar28) {
              bVar36 = true;
            }
            else {
              lVar29 = nn::os::GetCurrentThread();
              do {
                if (*plVar20 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x118));
                    while (*plVar20 == 0) {
                      cVar26 = '\x01';
                      bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                      if (bVar36) {
                        *plVar20 = lVar29;
                        cVar26 = ExclusiveMonitorsStatus();
                      }
                      if (cVar26 == '\0') goto LAB_01137080;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar26 = '\x01';
                bVar36 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar36) {
                  *plVar20 = lVar29;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
LAB_01137080:
              bVar36 = false;
            }
            plVar20 = (long *)FUN_01fa6ab0(*(undefined8 *)(lVar24 + 0x128),
                                           *(undefined8 *)(lVar24 + 0x130));
            if ((*(long **)(lVar24 + 0x130) == plVar20) || (*plVar20 == 0)) {
              plVar20 = (long *)FUN_01fa6ab0(*(undefined8 *)(lVar24 + 0x160),
                                             *(undefined8 *)(lVar24 + 0x168));
              if (*(long **)(lVar24 + 0x168) == plVar20) {
                lVar29 = 0;
              }
              else {
                lVar29 = 0;
                if (*plVar20 != 0) {
                  lVar29 = *plVar20 + -0x20;
                }
              }
            }
            else {
              lVar29 = *plVar20 + -0x20;
            }
            if (!bVar36) {
              *(undefined8 *)(lVar24 + 0x110) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x118));
            }
            plVar20 = plVar47;
            if ((lVar29 == 0) && (lVar29 = FUN_010777c0(plVar43[2] + 0x108,&local_b8), lVar29 != 0))
            {
              local_150 = (undefined4)*(undefined8 *)(lVar29 + 0x218);
              uStack_14c = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x218) >> 0x20);
              plVar20 = *(long **)(lVar29 + 0x230);
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
              if (plVar47 != (long *)0x0) {
                (**(code **)(*plVar47 + 0x20))(plVar47);
              }
            }
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar78 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar78 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            if (CONCAT44(uStack_14c,local_150) != *(long *)PTR_DAT_047d3e30) {
              local_88[7] = CONCAT44(uStack_14c,local_150);
            }
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
          }
LAB_01136d38:
          plVar20 = local_88;
          if ((*(byte *)((long)local_88 + 0x34) & 3) == 0) {
            if (*(char *)((long)local_88 + 0x5c) == '\0') {
              auVar61 = SUB1612(*(undefined1 (*) [16])((long *)local_88[2] + 0x1c),0);
            }
            else {
              lVar29 = (**(code **)(*(long *)local_88[2] + 0x68))();
              auVar61 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x30),0);
            }
            fVar106 = (local_e0 + fVar101 * fVar59) - auVar61._0_4_;
            fVar74 = (fStack_dc + fVar104 * fVar59) - auVar61._4_4_;
            fVar76 = (fStack_d8 + fVar105 * fVar59) - auVar61._8_4_;
            fVar106 = fVar106 * fVar106;
            fVar74 = fVar74 * fVar74;
            fVar76 = fVar76 * fVar76;
            auVar51._0_4_ = fVar106 + fVar74;
            auVar51._4_4_ = fVar76 + 0.0;
            auVar51._8_4_ = fVar106 + fVar74;
            auVar51._12_4_ = fVar76 + 0.0;
            auVar64 = NEON_ext(auVar51,auVar51,4,1);
            if (auVar64._0_4_ + auVar64._4_4_ <= *(float *)((long)param_1 + 0xec)) {
              fVar106 = fVar100 - auVar61._0_4_;
              fVar74 = fVar109 - auVar61._4_4_;
              fVar76 = fVar135 - auVar61._8_4_;
              fVar106 = fVar106 * fVar106;
              fVar74 = fVar74 * fVar74;
              fVar76 = fVar76 * fVar76;
              auVar52._0_4_ = fVar106 + fVar74;
              auVar52._4_4_ = fVar76 + 0.0;
              auVar52._8_4_ = fVar106 + fVar74;
              auVar52._12_4_ = fVar76 + 0.0;
              auVar64 = NEON_ext(auVar52,auVar52,4,1);
              fVar106 = SQRT(auVar64._0_4_ + auVar64._4_4_);
              *(float *)(plVar20 + 5) = fVar106;
              uVar27 = (uint)fVar106;
              *(uint *)((long)plVar20 + 0x2c) = uVar27;
              if (uVar27 < 0x2d) {
                puVar23 = param_1 + (ulong)uVar27 * 7 + 0x32;
              }
              else {
                puVar23 = param_1 + 0x16d;
              }
              FUN_01fa64d0(puVar23,&local_88);
            }
            else if (((char)((long *)plVar20[2])[0x86] == '\0') &&
                    (uVar18 = (**(code **)(*(long *)plVar20[2] + 0xd8))(), (uVar18 & 1) != 0)) {
              FUN_01142c28(plVar20[2]);
            }
          }
          else {
            if (*(char *)(local_88[2] + 0x430) != '\0') {
              FUN_00f740a4();
            }
            if ((char)plVar20[8] != '\0') {
              lVar29 = plVar20[2];
              uVar41 = *(undefined8 *)((long)plVar20 + 0x51);
              uVar42 = *(undefined8 *)((long)plVar20 + 0x4c);
              *(undefined8 *)(lVar29 + 0x6e0) = *(undefined8 *)((long)plVar20 + 0x44);
              *(undefined8 *)(lVar29 + 0x6e8) = uVar42;
              *(undefined8 *)(lVar29 + 0x6ed) = uVar41;
              FUN_00e5a938(lVar29,1);
              *(undefined1 *)(plVar20 + 8) = 0;
            }
            if (*(char *)((long)plVar20 + 0x5c) == '\0') {
              auVar61 = SUB1612(*(undefined1 (*) [16])((long *)plVar20[2] + 0x1c),0);
            }
            else {
              lVar29 = (**(code **)(*(long *)plVar20[2] + 0x68))();
              auVar61 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x30),0);
            }
            fVar106 = fVar100 - auVar61._0_4_;
            fVar74 = fVar109 - auVar61._4_4_;
            fVar76 = fVar135 - auVar61._8_4_;
            fVar106 = fVar106 * fVar106;
            fVar74 = fVar74 * fVar74;
            fVar76 = fVar76 * fVar76;
            auVar50._0_4_ = fVar106 + fVar74;
            auVar50._4_4_ = fVar76 + 0.0;
            auVar50._8_4_ = fVar106 + fVar74;
            auVar50._12_4_ = fVar76 + 0.0;
            auVar64 = NEON_ext(auVar50,auVar50,4,1);
            *(float *)(plVar20 + 5) = SQRT(auVar64._0_4_ + auVar64._4_4_);
            uVar18 = (ulong)(uint)param_1[5];
            *(undefined4 *)(plVar20 + 6) = 0;
            if ((plVar20[3] != 0) && (*(short *)(plVar20[3] + 0x1a) != 0)) {
              fVar106 = *(float *)(plVar20 + 5);
              if ((*(float *)(param_1 + uVar18 * 9 + 7) <= fVar106) &&
                 ((*(int *)(plVar20 + 6) = (int)param_1[uVar18 * 9 + 8],
                  *(float *)((long)param_1 + uVar18 * 0x48 + 0x44) <= fVar106 &&
                  (*(undefined4 *)(plVar20 + 6) =
                        *(undefined4 *)((long)param_1 + uVar18 * 0x48 + 0x4c),
                  *(float *)(param_1 + uVar18 * 9 + 10) <= fVar106)))) {
                *(int *)(plVar20 + 6) = (int)param_1[uVar18 * 9 + 0xb];
              }
              iVar78 = *(int *)puVar3;
              if (iVar78 == 0) {
                iVar78 = *(int *)puVar40;
                if (iVar78 != 0) {
                  lVar29 = 1;
                  puVar23 = puVar40;
                  goto LAB_01137190;
                }
                iVar78 = *(int *)puVar2;
                if (iVar78 != 0) {
                  lVar29 = 2;
                  puVar23 = puVar2;
                  goto LAB_01137190;
                }
                iVar78 = *(int *)puVar32;
                uVar27 = 0;
                if (iVar78 != 0) {
                  lVar29 = 3;
                  puVar23 = puVar32;
                  goto LAB_01137190;
                }
              }
              else {
                lVar29 = 0;
                puVar23 = puVar3;
LAB_01137190:
                *(int *)puVar23 = iVar78 + -1;
                uVar27 = (uint)param_1[lVar29 + 0x17a];
              }
              if (uVar27 <= *(uint *)(plVar20 + 6)) {
                uVar27 = *(uint *)(plVar20 + 6);
              }
              if ((*(uint *)((long)plVar20 + 0x34) & 4) != 0) {
                uVar27 = 0;
              }
              *(uint *)(plVar20 + 6) = uVar27;
            }
          }
LAB_011371b8:
          lVar29 = *(long *)(lVar21 + 8);
          plVar44 = plVar44 + 4;
          psVar1 = (short *)(lVar29 + 0x1a);
          do {
            sVar35 = *psVar1;
            cVar26 = '\x01';
            bVar36 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar36) {
              *psVar1 = sVar35 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
          if (sVar35 == 1) {
            *(undefined8 *)(lVar29 + 0x10) = 0;
            (**(code **)(*(long *)(lVar21 + -0x28) + 0x50))();
          }
          else if (sVar35 == 0) {
LAB_01137b8c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_01136ac8;
        }
      }
LAB_011368c8:
      plVar43 = (long *)param_1[0x2c];
      plVar20 = plVar44 + 4;
      plVar47 = plVar44;
      if (plVar20 != plVar43) {
        do {
          lVar21 = *plVar20;
          *plVar20 = 0;
          lVar29 = *plVar47;
          *plVar47 = lVar21;
          if (lVar29 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar21 = FUN_00c4e600();
            iVar82 = *(int *)(lVar21 + 0x12c8);
            iVar78 = iVar82 + 1;
            *(int *)(lVar21 + 0x12c8) = iVar78;
            if (*(int *)(lVar21 + 0x12cc) <= iVar82) {
              *(int *)(lVar21 + 0x12cc) = iVar78;
            }
            FUN_018cec38(lVar29);
            plVar6 = (long *)plVar47[1];
            lVar21 = plVar47[2];
            lVar28 = plVar47[3];
            uVar18 = (**(code **)(*plVar6 + 0xf8))(plVar6);
            if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
              (**(code **)(*plVar6 + 0x18))(plVar6,lVar29,lVar21,lVar28);
            }
            else {
              FUN_00c48fe8(plVar6,lVar29,lVar21,lVar28);
            }
            lVar21 = FUN_00c4e600();
            iVar78 = *(int *)(lVar21 + 0x12c8) + -1;
            *(int *)(lVar21 + 0x12c8) = iVar78;
            if (iVar78 == 0) {
              puVar23 = (ulong *)FUN_00c4e600();
              if (puVar23[600] != 0) {
                local_98 = puVar23 + puVar23[600] * 3;
                local_b8 = puVar23;
                FUN_00c4ea30(&local_b8,&local_98);
                local_150 = (undefined4)*puVar23;
                uStack_14c = (undefined4)(*puVar23 >> 0x20);
                puVar34 = puVar23;
                if (puVar23[600] != 0) {
                  puVar34 = puVar23 + puVar23[600] * 3;
                }
                if (puVar34 == puVar23) {
                  lVar29 = 0;
                  local_170 = 0;
                }
                else {
                  lVar29 = 0;
                  local_170 = 0;
                  puVar46 = puVar23;
                  do {
                    (**(code **)(*(long *)*puVar46 + 0xd0))();
                    if (*puVar46 != CONCAT44(uStack_14c,local_150)) {
                      (**(code **)(*(long *)CONCAT44(uStack_14c,local_150) + 0x100))
                                ((long *)CONCAT44(uStack_14c,local_150),puVar23 + local_170 * 3,
                                 puVar46);
                      local_150 = (undefined4)*puVar46;
                      uStack_14c = (undefined4)(*puVar46 >> 0x20);
                      local_170 = lVar29;
                    }
                    puVar46 = puVar46 + 3;
                    lVar29 = lVar29 + 1;
                  } while (puVar34 != puVar46);
                }
                (**(code **)(*(long *)CONCAT44(uStack_14c,local_150) + 0x100))
                          ((long *)CONCAT44(uStack_14c,local_150),puVar23 + local_170 * 3,
                           puVar23 + lVar29 * 3);
                puVar23[600] = 0;
              }
              *(undefined4 *)(lVar21 + 0x12cc) = 0;
            }
          }
          plVar6 = plVar20 + 1;
          lVar21 = plVar20[2];
          lVar29 = plVar20[3];
          plVar20 = plVar20 + 4;
          plVar47[1] = *plVar6;
          plVar47[2] = lVar21;
          plVar47[3] = lVar29;
          plVar47 = plVar47 + 4;
        } while (plVar20 != plVar43);
      }
      FUN_018ce7fc(param_1 + 0x2b,plVar47);
LAB_01136ac8:
    } while (plVar44 != (long *)param_1[0x2c]);
    uVar39 = param_1[0x189];
  }
  *(undefined4 *)(param_1 + 0x179) = 0;
  if (uVar39 != 0) {
    plVar44 = (long *)param_1[0x184];
    while (plVar44 != (long *)0x0) {
      plVar20 = (long *)param_1[0x185];
      plVar47 = (long *)*plVar44;
      uVar18 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar18 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar44,0x20,8);
        plVar44 = plVar47;
      }
      else {
        FUN_00c48fe8(plVar20,plVar44,0x20,8);
        plVar44 = plVar47;
      }
    }
    uVar18 = param_1[0x17f];
    param_1[0x184] = 0;
    if (uVar18 != 0) {
      uVar19 = uVar18 & 3;
      if (uVar18 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          *(undefined8 *)(param_1[0x17e] + uVar22 * 8) = 0;
          *(undefined8 *)(param_1[0x17e] + uVar22 * 8 + 8) = 0;
          *(undefined8 *)(param_1[0x17e] + uVar22 * 8 + 0x10) = 0;
          lVar21 = uVar22 * 8;
          uVar22 = uVar22 + 4;
          *(undefined8 *)(param_1[0x17e] + lVar21 + 0x18) = 0;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar19 != 0) {
        lVar21 = uVar22 << 3;
        do {
          *(undefined8 *)(param_1[0x17e] + lVar21) = 0;
          uVar19 = uVar19 - 1;
          lVar21 = lVar21 + 8;
        } while (uVar19 != 0);
      }
    }
    param_1[0x189] = 0;
  }
  local_b0 = &local_80;
  puVar23 = param_1 + 0x32;
  local_b8 = param_1;
  do {
    plVar44 = (long *)*puVar23;
    plVar20 = (long *)puVar23[1];
    if (plVar44 != plVar20) {
      if ((uint)param_1[0x179] < (uint)param_1[0x1d]) {
        do {
          FUN_010129b4(&local_b8,plVar44);
          lVar21 = *plVar44;
          if ((uint)param_1[0x179] < (uint)param_1[0x1d]) {
            plVar47 = *(long **)(lVar21 + 0x10);
            if (*(char *)(lVar21 + 0x5c) == '\0') {
              fVar106 = *(float *)(plVar47 + 0x1c);
              fVar74 = *(float *)((long)plVar47 + 0xe4);
              fVar76 = *(float *)(plVar47 + 0x1d);
              fVar77 = *(float *)((long)plVar47 + 0xec);
            }
            else {
              lVar29 = (**(code **)(*plVar47 + 0x68))();
              lVar21 = *plVar44;
              fVar106 = *(float *)(lVar29 + 0x30);
              fVar74 = *(float *)(lVar29 + 0x34);
              fVar76 = *(float *)(lVar29 + 0x38);
              plVar47 = *(long **)(lVar21 + 0x10);
              fVar77 = 0.0;
            }
            fVar106 = fVar106 - local_e0;
            fVar74 = fVar74 - fStack_dc;
            fVar76 = fVar76 - fStack_d8;
            fVar77 = fVar77 - 0.0;
            cVar26 = (char)plVar47[0x86];
            auVar53._0_4_ = fVar106 * fVar106 + fVar74 * fVar74;
            auVar53._4_4_ = fVar76 * fVar76 + fVar77 * fVar77;
            auVar53._8_4_ = fVar106 * fVar106 + fVar74 * fVar74;
            auVar53._12_4_ = fVar76 * fVar76 + fVar77 * fVar77;
            auVar64 = NEON_ext(auVar53,auVar53,4,1);
            auVar54._0_4_ = auVar64._0_4_ + auVar64._4_4_;
            auVar54._4_4_ = auVar64._8_4_ + auVar64._12_4_;
            auVar54._8_4_ = auVar64._0_4_ + auVar64._4_4_;
            auVar54._12_4_ = auVar64._8_4_ + auVar64._12_4_;
            auVar64 = NEON_frsqrte(auVar54,4);
            auVar102._0_4_ = auVar54._0_4_ * auVar64._0_4_;
            auVar102._4_4_ = auVar54._4_4_ * auVar64._4_4_;
            auVar102._8_4_ = auVar54._8_4_ * auVar64._8_4_;
            auVar102._12_4_ = auVar54._12_4_ * auVar64._12_4_;
            auVar89 = NEON_frsqrts(auVar64,auVar102,4);
            auVar95._0_4_ = auVar64._0_4_ * auVar89._0_4_;
            auVar95._4_4_ = auVar64._4_4_ * auVar89._4_4_;
            auVar95._8_4_ = auVar64._8_4_ * auVar89._8_4_;
            auVar95._12_4_ = auVar64._12_4_ * auVar89._12_4_;
            auVar103._0_4_ = auVar54._0_4_ * auVar95._0_4_;
            auVar103._4_4_ = auVar54._4_4_ * auVar95._4_4_;
            auVar103._8_4_ = auVar54._8_4_ * auVar95._8_4_;
            auVar103._12_4_ = auVar54._12_4_ * auVar95._12_4_;
            iVar78 = -(uint)(auVar54._0_4_ == 0.0);
            iVar82 = -(uint)(auVar54._4_4_ == 0.0);
            iVar85 = -(uint)(auVar54._8_4_ == 0.0);
            iVar86 = -(uint)(auVar54._12_4_ == 0.0);
            auVar64 = NEON_frsqrts(auVar95,auVar103,4);
            fVar106 = fVar106 * auVar95._0_4_ * auVar64._0_4_;
            fVar74 = fVar74 * auVar95._4_4_ * auVar64._4_4_;
            fVar76 = fVar76 * auVar95._8_4_ * auVar64._8_4_;
            fVar77 = fVar77 * auVar95._12_4_ * auVar64._12_4_;
            fVar106 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                                      CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                               ~(byte)((uint)iVar78 >> 0x10),
                                               CONCAT11((byte)((uint)fVar106 >> 8) &
                                                        ~(byte)((uint)iVar78 >> 8),
                                                        SUB41(fVar106,0) & ~(byte)iVar78)));
            auVar62._0_8_ =
                 CONCAT17((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                          CONCAT16((byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10),
                                   CONCAT15((byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar82 >> 8),
                                            CONCAT14(SUB41(fVar74,0) & ~(byte)iVar82,fVar106))));
            auVar62[8] = SUB41(fVar76,0) & ~(byte)iVar85;
            auVar62[9] = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar85 >> 8);
            auVar62[10] = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
            auVar62[0xb] = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
            auVar70[0xc] = SUB41(fVar77,0) & ~(byte)iVar86;
            auVar70._0_12_ = auVar62;
            auVar70[0xd] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar86 >> 8);
            auVar70[0xe] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
            auVar70[0xf] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
            fVar106 = fVar101 * fVar106;
            fVar74 = fVar104 * (float)((ulong)auVar62._0_8_ >> 0x20);
            fVar76 = fVar105 * auVar62._8_4_;
            fVar77 = auVar70._12_4_ * 0.0;
            auVar55._0_4_ = fVar106 + fVar74;
            auVar55._4_4_ = fVar76 + fVar77;
            auVar55._8_4_ = fVar106 + fVar74;
            auVar55._12_4_ = fVar76 + fVar77;
            auVar64 = NEON_ext(auVar55,auVar55,4,1);
            if (auVar64._0_4_ + auVar64._4_4_ < 0.70710677) goto LAB_01137598;
            if (cVar26 != '\0') {
              FUN_00f740a4();
              lVar21 = *plVar44;
            }
            uVar18 = (ulong)(uint)param_1[5];
            *(undefined4 *)(lVar21 + 0x30) = 0;
            if ((*(long *)(lVar21 + 0x18) != 0) &&
               (*(short *)(*(long *)(lVar21 + 0x18) + 0x1a) != 0)) {
              fVar106 = *(float *)(lVar21 + 0x28);
              if ((*(float *)(param_1 + uVar18 * 9 + 7) <= fVar106) &&
                 ((*(int *)(lVar21 + 0x30) = (int)param_1[uVar18 * 9 + 8],
                  *(float *)((long)param_1 + uVar18 * 0x48 + 0x44) <= fVar106 &&
                  (*(undefined4 *)(lVar21 + 0x30) =
                        *(undefined4 *)((long)param_1 + uVar18 * 0x48 + 0x4c),
                  *(float *)(param_1 + uVar18 * 9 + 10) <= fVar106)))) {
                *(int *)(lVar21 + 0x30) = (int)param_1[uVar18 * 9 + 0xb];
              }
              iVar78 = *(int *)puVar3;
              if (iVar78 == 0) {
                iVar78 = *(int *)puVar40;
                if (iVar78 != 0) {
                  lVar29 = 1;
                  puVar34 = puVar40;
                  goto LAB_01137678;
                }
                iVar78 = *(int *)puVar2;
                if (iVar78 != 0) {
                  lVar29 = 2;
                  puVar34 = puVar2;
                  goto LAB_01137678;
                }
                iVar78 = *(int *)puVar32;
                uVar27 = 0;
                if (iVar78 != 0) {
                  lVar29 = 3;
                  puVar34 = puVar32;
                  goto LAB_01137678;
                }
              }
              else {
                lVar29 = 0;
                puVar34 = puVar3;
LAB_01137678:
                *(int *)puVar34 = iVar78 + -1;
                uVar27 = (uint)param_1[lVar29 + 0x17a];
              }
              if (uVar27 <= *(uint *)(lVar21 + 0x30)) {
                uVar27 = *(uint *)(lVar21 + 0x30);
              }
              if ((*(uint *)(lVar21 + 0x34) & 4) != 0) {
                uVar27 = 0;
              }
              *(uint *)(lVar21 + 0x30) = uVar27;
            }
            uVar18 = (**(code **)(**(long **)(*plVar44 + 0x10) + 0xd8))();
            if ((uVar18 & 1) != 0) {
              *(int *)(param_1 + 0x179) = (int)param_1[0x179] + 1;
            }
          }
          else {
            plVar47 = *(long **)(lVar21 + 0x10);
            cVar26 = (char)plVar47[0x86];
LAB_01137598:
            if ((cVar26 == '\0') && (uVar18 = (**(code **)(*plVar47 + 0xd8))(), (uVar18 & 1) != 0))
            {
              FUN_01142c28(*(undefined8 *)(lVar21 + 0x10));
            }
          }
          plVar44 = plVar44 + 1;
        } while (plVar20 != plVar44);
      }
      else {
        do {
          FUN_010129b4(&local_b8,plVar44);
          lVar21 = *plVar44;
          plVar47 = *(long **)(lVar21 + 0x10);
          if (((char)plVar47[0x86] == '\0') &&
             (uVar18 = (**(code **)(*plVar47 + 0xd8))(), (uVar18 & 1) != 0)) {
            FUN_01142c28(*(undefined8 *)(lVar21 + 0x10));
          }
          plVar44 = plVar44 + 1;
        } while (plVar20 != plVar44);
      }
      puVar23[1] = *puVar23;
    }
    puVar23 = puVar23 + 7;
    if (puVar23 == param_1 + 0x174) {
      return;
    }
  } while( true );
code_r0x01136124:
  sVar35 = sVar7;
  if (sVar7 == 0) goto LAB_01135ae0;
  goto LAB_011360f8;
code_r0x01135ba8:
  sVar35 = sVar7;
  if (sVar7 == 0) goto LAB_01135bd0;
  goto LAB_01135b7c;
code_r0x01136b14:
  sVar35 = sVar7;
  if (sVar7 == 0) goto LAB_011368c8;
  goto LAB_01136ae8;
}


