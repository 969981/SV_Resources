/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185742c; name: FUN_0185742c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0185742c(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                 float param_7,long *param_8)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined3 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  float *pfVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  byte *pbVar22;
  code *pcVar23;
  undefined8 *puVar24;
  short sVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  int *piVar29;
  long lVar30;
  long *plVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined6 uVar46;
  byte bVar61;
  float fVar62;
  undefined1 auVar47 [12];
  float fVar59;
  byte bVar60;
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined2 uVar63;
  byte bVar69;
  byte bVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  float fVar78;
  undefined1 auVar77 [16];
  float fVar79;
  undefined8 uVar80;
  undefined1 auVar81 [12];
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar102;
  float fVar103;
  undefined1 auVar101 [16];
  int iVar104;
  int iVar105;
  float fVar107;
  float fVar108;
  undefined1 auVar106 [16];
  float fVar109;
  int iVar110;
  int iVar113;
  int iVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00c9e664(&local_c0,*param_8 + 0xe8);
  if (CONCAT44(fStack_bc,local_c0) == 0) {
    auVar43._8_8_ = _UNK_03cabe58;
    auVar43._0_8_ = _DAT_03cabe50;
  }
  else {
    if (CONCAT44(fStack_b4,fStack_b8) == 0) {
      plVar27 = (long *)0x0;
    }
    else {
      plVar27 = *(long **)(CONCAT44(fStack_b4,fStack_b8) + 0x48);
    }
    pfVar17 = (float *)(**(code **)(*plVar27 + 0x68))();
    fVar45 = *pfVar17;
    fVar59 = pfVar17[1];
    fVar62 = pfVar17[2];
    fVar71 = pfVar17[3];
    fVar74 = pfVar17[4];
    fVar102 = pfVar17[5];
    fVar103 = pfVar17[6];
    fVar79 = pfVar17[7];
    fVar86 = pfVar17[8];
    fVar87 = pfVar17[9];
    fVar75 = pfVar17[10];
    fVar78 = pfVar17[0xb] * pfVar17[0xb];
    auVar66._0_4_ = fVar74 * fVar74 + fVar102 * fVar102;
    auVar66._4_4_ = fVar103 * fVar103 + fVar79 * fVar79;
    auVar66._8_4_ = fVar74 * fVar74 + fVar102 * fVar102;
    auVar66._12_4_ = fVar103 * fVar103 + fVar79 * fVar79;
    auVar82._0_4_ = fVar86 * fVar86 + fVar87 * fVar87;
    auVar82._4_4_ = fVar75 * fVar75 + fVar78;
    auVar82._8_4_ = fVar86 * fVar86 + fVar87 * fVar87;
    auVar82._12_4_ = fVar75 * fVar75 + fVar78;
    auVar120._0_4_ = fVar45 * fVar45 + fVar59 * fVar59;
    auVar120._4_4_ = fVar62 * fVar62 + fVar71 * fVar71;
    auVar120._8_4_ = fVar45 * fVar45 + fVar59 * fVar59;
    auVar120._12_4_ = fVar62 * fVar62 + fVar71 * fVar71;
    auVar65 = NEON_ext(auVar66,auVar66,4,1);
    auVar66 = NEON_ext(auVar82,auVar82,4,1);
    auVar39 = NEON_ext(auVar120,auVar120,4,1);
    auVar33._0_4_ = auVar65._0_4_ + auVar65._4_4_;
    auVar33._4_4_ = auVar65._8_4_ + auVar65._12_4_;
    auVar33._8_4_ = auVar65._0_4_ + auVar65._4_4_;
    auVar33._12_4_ = auVar65._8_4_ + auVar65._12_4_;
    auVar34._0_4_ = auVar66._0_4_ + auVar66._4_4_;
    auVar34._4_4_ = auVar66._8_4_ + auVar66._12_4_;
    auVar34._8_4_ = auVar66._0_4_ + auVar66._4_4_;
    auVar34._12_4_ = auVar66._8_4_ + auVar66._12_4_;
    auVar35._0_4_ = auVar39._0_4_ + auVar39._4_4_;
    auVar35._4_4_ = auVar39._8_4_ + auVar39._12_4_;
    auVar35._8_4_ = auVar39._0_4_ + auVar39._4_4_;
    auVar35._12_4_ = auVar39._8_4_ + auVar39._12_4_;
    auVar66 = NEON_frsqrte(auVar33,4);
    auVar82 = NEON_frsqrte(auVar34,4);
    auVar115._0_4_ = auVar33._0_4_ * auVar66._0_4_;
    auVar115._4_4_ = auVar33._4_4_ * auVar66._4_4_;
    auVar115._8_4_ = auVar33._8_4_ * auVar66._8_4_;
    auVar115._12_4_ = auVar33._12_4_ * auVar66._12_4_;
    auVar39 = NEON_frsqrte(auVar35,4);
    auVar119._0_4_ = auVar34._0_4_ * auVar82._0_4_;
    auVar119._4_4_ = auVar34._4_4_ * auVar82._4_4_;
    auVar119._8_4_ = auVar34._8_4_ * auVar82._8_4_;
    auVar119._12_4_ = auVar34._12_4_ * auVar82._12_4_;
    auVar97._0_4_ = auVar35._0_4_ * auVar39._0_4_;
    auVar97._4_4_ = auVar35._4_4_ * auVar39._4_4_;
    auVar97._8_4_ = auVar35._8_4_ * auVar39._8_4_;
    auVar97._12_4_ = auVar35._12_4_ * auVar39._12_4_;
    auVar120 = NEON_frsqrts(auVar82,auVar119,4);
    iVar110 = -(uint)(auVar34._0_4_ == 0.0);
    iVar113 = -(uint)(auVar34._4_4_ == 0.0);
    iVar114 = -(uint)(auVar34._8_4_ == 0.0);
    iVar10 = -(uint)(auVar33._0_4_ == 0.0);
    iVar11 = -(uint)(auVar33._4_4_ == 0.0);
    iVar104 = -(uint)(auVar33._8_4_ == 0.0);
    iVar105 = -(uint)(auVar33._12_4_ == 0.0);
    iVar16 = -(uint)(auVar35._0_4_ == 0.0);
    iVar5 = -(uint)(auVar35._4_4_ == 0.0);
    iVar6 = -(uint)(auVar35._8_4_ == 0.0);
    iVar7 = -(uint)(auVar35._12_4_ == 0.0);
    auVar65 = NEON_frsqrts(auVar39,auVar97,4);
    auVar83._0_4_ = auVar39._0_4_ * auVar65._0_4_;
    auVar83._4_4_ = auVar39._4_4_ * auVar65._4_4_;
    auVar83._8_4_ = auVar39._8_4_ * auVar65._8_4_;
    auVar83._12_4_ = auVar39._12_4_ * auVar65._12_4_;
    auVar65 = NEON_frsqrts(auVar66,auVar115,4);
    auVar116._0_4_ = auVar35._0_4_ * auVar83._0_4_;
    auVar116._4_4_ = auVar35._4_4_ * auVar83._4_4_;
    auVar116._8_4_ = auVar35._8_4_ * auVar83._8_4_;
    auVar116._12_4_ = auVar35._12_4_ * auVar83._12_4_;
    auVar39 = NEON_fmov(0x3f800000,4);
    auVar98._0_4_ = auVar66._0_4_ * auVar65._0_4_;
    auVar98._4_4_ = auVar66._4_4_ * auVar65._4_4_;
    auVar98._8_4_ = auVar66._8_4_ * auVar65._8_4_;
    auVar98._12_4_ = auVar66._12_4_ * auVar65._12_4_;
    auVar101._0_4_ = auVar82._0_4_ * auVar120._0_4_;
    auVar101._4_4_ = auVar82._4_4_ * auVar120._4_4_;
    auVar101._8_4_ = auVar82._8_4_ * auVar120._8_4_;
    auVar101._12_4_ = auVar82._12_4_ * auVar120._12_4_;
    auVar82 = NEON_frsqrts(auVar83,auVar116,4);
    auVar77._0_4_ = auVar34._0_4_ * auVar101._0_4_;
    auVar77._4_4_ = auVar34._4_4_ * auVar101._4_4_;
    auVar77._8_4_ = auVar34._8_4_ * auVar101._8_4_;
    auVar77._12_4_ = auVar34._12_4_ * auVar101._12_4_;
    auVar76._0_4_ = auVar33._0_4_ * auVar98._0_4_;
    auVar76._4_4_ = auVar33._4_4_ * auVar98._4_4_;
    auVar76._8_4_ = auVar33._8_4_ * auVar98._8_4_;
    auVar76._12_4_ = auVar33._12_4_ * auVar98._12_4_;
    auVar66 = NEON_frsqrts(auVar101,auVar77,4);
    auVar65 = NEON_frsqrts(auVar98,auVar76,4);
    fVar45 = fVar45 * auVar83._0_4_ * auVar82._0_4_;
    fVar59 = fVar59 * auVar83._4_4_ * auVar82._4_4_;
    fVar62 = fVar62 * auVar83._8_4_ * auVar82._8_4_;
    fVar71 = fVar71 * auVar83._12_4_ * auVar82._12_4_;
    fVar78 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                             CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                      CONCAT11((byte)((uint)fVar45 >> 8) &
                                               ~(byte)((uint)iVar16 >> 8),
                                               SUB41(fVar45,0) & ~(byte)iVar16)));
    uVar80 = CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                      CONCAT16((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                               CONCAT15((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                        CONCAT14(SUB41(fVar59,0) & ~(byte)iVar5,fVar78))));
    auVar81._0_10_ =
         CONCAT19((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar6 >> 8),
                  CONCAT18(SUB41(fVar62,0) & ~(byte)iVar6,uVar80));
    auVar81[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    auVar81[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
    auVar84[0xc] = SUB41(fVar71,0) & ~(byte)iVar7;
    auVar84._0_12_ = auVar81;
    auVar84[0xd] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar7 >> 8);
    auVar84[0xe] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    auVar84[0xf] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    fVar86 = fVar86 * auVar101._0_4_ * auVar66._0_4_;
    fVar87 = fVar87 * auVar101._4_4_ * auVar66._4_4_;
    fVar75 = fVar75 * auVar101._8_4_ * auVar66._8_4_;
    fVar74 = fVar74 * auVar98._0_4_ * auVar65._0_4_;
    fVar102 = fVar102 * auVar98._4_4_ * auVar65._4_4_;
    fVar103 = fVar103 * auVar98._8_4_ * auVar65._8_4_;
    fVar79 = fVar79 * auVar98._12_4_ * auVar65._12_4_;
    auVar65 = NEON_ext(auVar84,auVar84,8,1);
    fVar86 = (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar110 >> 0x18),
                             CONCAT12((byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar110 >> 0x10),
                                      CONCAT11((byte)((uint)fVar86 >> 8) &
                                               ~(byte)((uint)iVar110 >> 8),
                                               SUB41(fVar86,0) & ~(byte)iVar110)));
    uVar46 = CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar113 >> 8),
                      CONCAT14(SUB41(fVar87,0) & ~(byte)iVar113,fVar86));
    bVar60 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10);
    bVar61 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18);
    auVar47._0_8_ = CONCAT17(bVar61,CONCAT16(bVar60,uVar46));
    auVar47[8] = SUB41(fVar75,0) & ~(byte)iVar114;
    auVar47[9] = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar114 >> 8);
    auVar47[10] = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar114 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18);
    uVar63 = CONCAT11((byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar10 >> 8),
                      SUB41(fVar74,0) & ~(byte)iVar10);
    bVar69 = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    bVar70 = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    fVar87 = (float)CONCAT13(bVar70,CONCAT12(bVar69,uVar63));
    auVar67._0_8_ =
         CONCAT17((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                  CONCAT16((byte)((uint)fVar102 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                           CONCAT15((byte)((uint)fVar102 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                    CONCAT14(SUB41(fVar102,0) & ~(byte)iVar11,fVar87))));
    auVar67[8] = SUB41(fVar103,0) & ~(byte)iVar104;
    auVar67[9] = (byte)((uint)fVar103 >> 8) & ~(byte)((uint)iVar104 >> 8);
    auVar67[10] = (byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar104 >> 0x10);
    auVar67[0xb] = (byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18);
    auVar67[0xc] = SUB41(fVar79,0) & ~(byte)iVar105;
    auVar67[0xd] = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar105 >> 8);
    auVar67[0xe] = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10);
    auVar67[0xf] = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18);
    fVar75 = (float)((ulong)uVar80 >> 0x20);
    fVar62 = (float)((ulong)auVar67._0_8_ >> 0x20);
    fVar59 = auVar47._8_4_;
    fVar45 = auVar39._0_4_ + (float)_DAT_03cab3a0 * fVar78 + (float)_DAT_03cac210 * fVar62 +
             (float)_DAT_03cabb00 * fVar59;
    fVar74 = auVar39._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar78 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar62 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar59;
    fVar102 = auVar39._8_4_ + (float)_UNK_03cab3a8 * fVar78 + (float)_UNK_03cac218 * fVar62 +
              (float)_UNK_03cabb08 * fVar59;
    fVar103 = auVar39._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar78 +
              (float)((ulong)_UNK_03cac218 >> 0x20) * fVar62 +
              (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar59;
    fVar79 = (float)((ulong)auVar47._0_8_ >> 0x20);
    uVar8 = (undefined2)((uint6)uVar46 >> 0x20);
    auVar39 = NEON_ext(auVar67,auVar67,8,1);
    fVar71 = auVar39._0_4_;
    auVar85._4_4_ = fVar45;
    auVar85._0_4_ = fVar45;
    auVar85._8_4_ = fVar45;
    auVar85._12_4_ = fVar45;
    auVar117._4_4_ = fVar74;
    auVar117._0_4_ = fVar74;
    auVar117._8_4_ = fVar74;
    auVar117._12_4_ = fVar74;
    auVar121._0_4_ = -(uint)(fVar45 <= fVar74);
    auVar121._4_4_ = -(uint)(fVar45 <= fVar74);
    auVar121._8_4_ = -(uint)(fVar45 <= fVar74);
    auVar121._12_4_ = -(uint)(fVar45 <= fVar74);
    auVar85 = auVar85 ^ (auVar85 ^ auVar117) & auVar121;
    auVar111._4_4_ = fVar102;
    auVar111._0_4_ = fVar102;
    auVar111._8_4_ = fVar102;
    auVar111._12_4_ = fVar102;
    fVar78 = SQRT(fVar45) * 0.5;
    auVar39 = NEON_fmov(0x40800000,4);
    auVar118._0_4_ = -(uint)(auVar85._0_4_ <= fVar102);
    auVar118._4_4_ = -(uint)(auVar85._4_4_ <= fVar102);
    auVar118._8_4_ = -(uint)(auVar85._8_4_ <= fVar102);
    auVar118._12_4_ = -(uint)(auVar85._12_4_ <= fVar102);
    auVar106._0_4_ = fVar78 * auVar39._0_4_;
    auVar106._4_4_ = SQRT(fVar74) * 0.5 * auVar39._4_4_;
    auVar106._8_4_ = SQRT(fVar102) * 0.5 * auVar39._8_4_;
    auVar106._12_4_ = SQRT(fVar103) * 0.5 * auVar39._12_4_;
    auVar85 = auVar85 ^ (auVar85 ^ auVar111) & auVar118;
    auVar66 = NEON_frecpe(auVar106,4);
    auVar39 = NEON_frecps(auVar66,auVar106,4);
    auVar42._0_4_ = -(uint)(auVar85._0_4_ <= fVar103);
    auVar42._4_4_ = -(uint)(auVar85._4_4_ <= fVar103);
    auVar42._8_4_ = -(uint)(auVar85._8_4_ <= fVar103);
    auVar42._12_4_ = -(uint)(auVar85._12_4_ <= fVar103);
    auVar112._0_4_ = auVar66._0_4_ * auVar39._0_4_;
    auVar112._4_4_ = auVar66._4_4_ * auVar39._4_4_;
    auVar112._8_4_ = auVar66._8_4_ * auVar39._8_4_;
    auVar112._12_4_ = auVar66._12_4_ * auVar39._12_4_;
    auVar39 = NEON_frecps(auVar112,auVar106,4);
    fVar62 = auVar112._0_4_ * auVar39._0_4_;
    fVar107 = auVar112._4_4_ * auVar39._4_4_;
    fVar108 = auVar112._8_4_ * auVar39._8_4_;
    fVar109 = auVar112._12_4_ * auVar39._12_4_;
    fVar45 = (fVar75 + (float)CONCAT13(bVar70,CONCAT12(bVar69,uVar63))) * fVar62;
    uVar88 = (undefined1)((uint)fVar45 >> 8);
    uVar89 = (undefined1)((uint)fVar45 >> 0x10);
    uVar90 = (undefined1)((uint)fVar45 >> 0x18);
    fVar59 = (auVar65._0_4_ + fVar86) * fVar62;
    uVar91 = (undefined1)((uint)fVar59 >> 8);
    uVar92 = (undefined1)((uint)fVar59 >> 0x10);
    uVar93 = (undefined1)((uint)fVar59 >> 0x18);
    fVar62 = (fVar71 + -fVar79) * fVar62;
    uVar94 = (undefined1)((uint)fVar62 >> 8);
    uVar95 = (undefined1)((uint)fVar62 >> 0x10);
    uVar96 = (undefined1)((uint)fVar62 >> 0x18);
    auVar99._0_4_ = (fVar75 + fVar87) * fVar107;
    auVar99._4_4_ = fVar107 * 0.0;
    auVar99._8_4_ = (fVar71 + (float)CONCAT13(bVar61,CONCAT12(bVar60,uVar8))) * fVar107;
    auVar99._12_4_ = (fVar86 + -auVar81._8_4_) * fVar107;
    auVar58._0_4_ = (auVar65._0_4_ + fVar86) * fVar108;
    auVar58._4_4_ = (fVar71 + fVar79) * fVar108;
    auVar58._12_4_ = (fVar75 - fVar87) * fVar108;
    auVar100._8_8_ = auVar99._8_8_;
    auVar100._4_4_ = SQRT(fVar74) * 0.5;
    auVar100._0_4_ = auVar99._0_4_;
    auVar58._8_4_ = SQRT(fVar102) * 0.5;
    auVar39[4] = SUB41(fVar45,0);
    auVar39._0_4_ = fVar78;
    auVar39[5] = uVar88;
    auVar39[6] = uVar89;
    auVar39[7] = uVar90;
    auVar39[8] = SUB41(fVar59,0);
    auVar39[9] = uVar91;
    auVar39[10] = uVar92;
    auVar39[0xb] = uVar93;
    auVar39[0xc] = SUB41(fVar62,0);
    auVar39[0xd] = uVar94;
    auVar39[0xe] = uVar95;
    auVar39[0xf] = uVar96;
    auVar65[4] = SUB41(fVar45,0);
    auVar65._0_4_ = fVar78;
    auVar65[5] = uVar88;
    auVar65[6] = uVar89;
    auVar65[7] = uVar90;
    auVar65[8] = SUB41(fVar59,0);
    auVar65[9] = uVar91;
    auVar65[10] = uVar92;
    auVar65[0xb] = uVar93;
    auVar65[0xc] = SUB41(fVar62,0);
    auVar65[0xd] = uVar94;
    auVar65[0xe] = uVar95;
    auVar65[0xf] = uVar96;
    auVar58 = auVar58 ^ (auVar58 ^ auVar65 ^ (auVar39 ^ auVar100) & auVar121) & ~auVar118;
    uVar9 = CONCAT12(auVar81[10],(short)((unkuint10)auVar81._0_10_ >> 0x40));
    fVar45 = (float)CONCAT13(auVar81[0xb],uVar9);
    auVar68._0_4_ = (fVar71 - (float)CONCAT13(bVar61,CONCAT12(bVar60,uVar8))) * fVar109;
    auVar68._4_4_ = (fVar86 - fVar45) * fVar109;
    auVar68._8_4_ = (fVar75 - fVar87) * fVar109;
    auVar68._12_4_ = SQRT(fVar103) * 0.5;
    auVar43 = auVar58 ^ (auVar58 ^ auVar68) & auVar42;
  }
  plVar27 = (long *)CONCAT44(fStack_b4,fStack_b8);
  fStack_e8 = auVar43._8_4_;
  fStack_e4 = auVar43._12_4_;
  local_f0 = auVar43._0_4_;
  fStack_ec = auVar43._4_4_;
  if (plVar27 != (long *)0x0) {
    plVar19 = plVar27 + 5;
    do {
      lVar26 = *plVar19;
      iVar16 = (int)lVar26 + -1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar13) {
        *(int *)plVar19 = iVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
    else if ((int)lVar26 == 0) goto LAB_01857ff4;
  }
  if ((long *)CONCAT44(fStack_bc,local_c0) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(fStack_bc,local_c0) + 0x60))();
  }
  FUN_00c9e664(&local_c0,*param_8 + 0xe8);
  if (CONCAT44(fStack_bc,local_c0) == 0) {
    fVar45 = 0.0;
    fVar59 = 0.0;
    fVar62 = 0.0;
  }
  else {
    lVar26 = (**(code **)(**(long **)(CONCAT44(fStack_b4,fStack_b8) + 0x48) + 0x68))();
    fVar45 = *(float *)(lVar26 + 0x30);
    fVar59 = *(float *)(lVar26 + 0x34);
    fVar62 = *(float *)(lVar26 + 0x38);
  }
  plVar27 = (long *)CONCAT44(fStack_b4,fStack_b8);
  if (plVar27 != (long *)0x0) {
    plVar19 = plVar27 + 5;
    do {
      lVar26 = *plVar19;
      iVar16 = (int)lVar26 + -1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar13) {
        *(int *)plVar19 = iVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
    else if ((int)lVar26 == 0) {
LAB_01857ff4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  auVar38._4_4_ = fStack_e8;
  auVar38._0_4_ = fStack_e8;
  auVar38._8_4_ = fStack_e8;
  auVar38._12_4_ = fStack_e8;
  auVar39 = NEON_ext(auVar38,auVar43,0xc,1);
  auVar64._4_4_ = fStack_ec;
  auVar64._0_4_ = fStack_ec;
  auVar64._8_4_ = fStack_ec;
  auVar64._12_4_ = fStack_ec;
  fVar74 = (float)_DAT_03cab640;
  fVar102 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar103 = (float)_UNK_03cab648;
  fVar71 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar65 = NEON_ext(auVar64,auVar39,0xc,1);
  fVar79 = -local_f0;
  fVar86 = -fStack_ec;
  fVar87 = -fStack_e8;
  auVar72._0_4_ =
       (float)_DAT_03cab1c0 * fStack_e4 + (float)_DAT_03cab5c0 * local_f0 * fVar74 +
       (float)_DAT_03cab1d0 * auVar65._0_4_ * fVar74 + (float)_DAT_03cac000 * auVar39._0_4_;
  auVar72._4_4_ =
       (float)((ulong)_DAT_03cab1c0 >> 0x20) * fStack_e4 +
       (float)((ulong)_DAT_03cab5c0 >> 0x20) * fStack_ec * fVar102 +
       (float)((ulong)_DAT_03cab1d0 >> 0x20) * auVar65._4_4_ * fVar102 +
       (float)((ulong)_DAT_03cac000 >> 0x20) * auVar39._4_4_;
  auVar72._8_4_ =
       (float)_UNK_03cab1c8 * fStack_e4 + (float)_UNK_03cab5c8 * fStack_e8 * fVar103 +
       (float)_UNK_03cab1d8 * auVar65._8_4_ * fVar103 + (float)_UNK_03cac008 * auVar39._8_4_;
  auVar72._12_4_ =
       (float)((ulong)_UNK_03cab1c8 >> 0x20) * fStack_e4 +
       (float)((ulong)_UNK_03cab5c8 >> 0x20) * local_f0 * fVar71 +
       (float)((ulong)_UNK_03cab1d8 >> 0x20) * auVar65._12_4_ * fVar71 +
       (float)((ulong)_UNK_03cac008 >> 0x20) * auVar39._12_4_;
  auVar48._4_4_ = fVar87;
  auVar48._0_4_ = fVar87;
  auVar48._8_4_ = fVar87;
  auVar48._12_4_ = fVar87;
  auVar40._4_4_ = auVar72._8_4_;
  auVar40._0_4_ = auVar72._8_4_;
  auVar40._8_4_ = auVar72._8_4_;
  auVar40._12_4_ = auVar72._8_4_;
  auVar49._4_12_ = auVar48._4_12_;
  auVar49._0_4_ = fVar79;
  auVar51._0_8_ = auVar49._0_8_;
  auVar51._8_4_ = fVar86;
  auVar51._12_4_ = fVar87;
  auVar50._8_8_ = auVar51._8_8_;
  auVar50._4_4_ = fVar87;
  auVar50._0_4_ = fVar79;
  auVar52._0_12_ = auVar50._0_12_;
  auVar52._12_4_ = fVar87;
  uVar88 = SUB41(auVar72._4_4_,0);
  uVar89 = (undefined1)((uint)auVar72._4_4_ >> 8);
  uVar90 = (undefined1)((uint)auVar72._4_4_ >> 0x10);
  uVar91 = (undefined1)((uint)auVar72._4_4_ >> 0x18);
  auVar66 = NEON_ext(auVar52,auVar52,8,1);
  fVar71 = auVar66._0_4_;
  auVar53._4_12_ = auVar52._4_12_;
  auVar53._0_4_ = fVar71;
  auVar55._0_8_ = auVar53._0_8_;
  auVar55._8_4_ = auVar66._8_4_;
  auVar55._12_4_ = fVar87;
  auVar54._8_8_ = auVar55._8_8_;
  auVar54._4_4_ = fVar79;
  auVar54._0_4_ = fVar71;
  auVar56._0_12_ = auVar54._0_12_;
  auVar56._12_4_ = fVar86;
  auVar39 = NEON_ext(auVar40,auVar72,0xc,1);
  auVar65 = NEON_ext(auVar56,auVar66,8,1);
  auVar4[4] = uVar88;
  auVar4._0_4_ = auVar72._4_4_;
  auVar4[5] = uVar89;
  auVar4[6] = uVar90;
  auVar4[7] = uVar91;
  auVar4[8] = uVar88;
  auVar4[9] = uVar89;
  auVar4[10] = uVar90;
  auVar4[0xb] = uVar91;
  auVar4[0xc] = uVar88;
  auVar4[0xd] = uVar89;
  auVar4[0xe] = uVar90;
  auVar4[0xf] = uVar91;
  auVar82 = NEON_ext(auVar4,auVar39,0xc,1);
  auVar65 = NEON_ext(auVar65,auVar65,0xc,1);
  fVar79 = (fVar79 * auVar72._12_4_ + fStack_e4 * auVar72._0_4_ * fVar74 +
           auVar65._0_4_ * auVar82._0_4_ * fVar74) - auVar39._0_4_ * fVar71;
  fVar102 = (fVar86 * auVar72._12_4_ + fStack_e4 * auVar72._4_4_ * fVar102 +
            auVar65._4_4_ * auVar82._4_4_ * fVar102) - auVar39._4_4_ * auVar66._4_4_;
  fVar103 = (fVar87 * auVar72._12_4_ + fStack_e4 * auVar72._8_4_ * fVar103 +
            auVar65._8_4_ * auVar82._8_4_ * fVar103) - auVar39._8_4_ * auVar66._8_4_;
  fVar71 = fVar79 * param_7;
  fVar74 = fVar102 * param_7;
  auVar73._8_4_ = fVar103 * param_7;
  auVar73._12_4_ = param_7 * 0.0;
  if ((long *)CONCAT44(fStack_bc,local_c0) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(fStack_bc,local_c0) + 0x60))();
  }
  pbVar22 = PTR_DAT_047d7b48;
  local_b0 = CONCAT44(fVar74,fVar71);
  auVar73._0_8_ = local_b0;
  fVar86 = *(float *)(*param_8 + 0x184) + 1.0;
  local_c0 = fVar45 + fVar79 * fVar86;
  fStack_bc = fVar59 + fVar102 * fVar86;
  fStack_b8 = fVar62 + fVar103 * fVar86;
  fStack_b4 = fVar86 * 0.0 + 0.0;
  uStack_a8 = auVar73._8_8_;
  auVar32._0_4_ = fVar71 * fVar71 + fVar74 * fVar74;
  auVar32._4_4_ = auVar73._8_4_ * auVar73._8_4_ + auVar73._12_4_ * auVar73._12_4_;
  auVar32._8_4_ = fVar71 * fVar71 + fVar74 * fVar74;
  auVar32._12_4_ = auVar73._8_4_ * auVar73._8_4_ + auVar73._12_4_ * auVar73._12_4_;
  auVar39 = NEON_ext(auVar32,auVar32,4,1);
  local_a0 = SQRT(auVar39._0_4_ + auVar39._4_4_);
  auVar57 = ZEXT816(0xb4000000);
  bVar13 = false;
  bVar14 = true;
  bVar15 = false;
  if (local_a0 < 1.1920929e-07) {
    bVar13 = false;
    bVar14 = false;
    bVar15 = true;
    fVar45 = auVar57._0_4_;
    if (!NAN(local_a0) && !NAN(fVar45)) {
      bVar13 = local_a0 < fVar45;
      bVar14 = local_a0 == fVar45;
      bVar15 = false;
    }
  }
  if (bVar14 || bVar13 != bVar15) {
    auVar41._0_8_ = CONCAT44(fVar74 / local_a0,fVar71 / local_a0);
    auVar41._8_4_ = auVar73._8_4_ / local_a0;
    auVar41._12_4_ = auVar73._12_4_ / local_a0;
    uStack_a8 = auVar41._8_8_;
    local_b0 = auVar41._0_8_;
  }
  if (((*PTR_DAT_047d7b48 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar16 != 0)) {
    FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7b48);
  }
  puVar28 = (undefined8 *)PTR_DAT_047d7b58;
  puVar24 = (undefined8 *)PTR_DAT_047d7b50;
  lVar26 = *(long *)PTR_DAT_047d7b50;
  *(long *)PTR_DAT_047d7b58 = lVar26;
  plVar27 = *(long **)(lVar26 + 0x58);
  if (((*pbVar22 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar16 != 0)) {
    FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7b48);
  }
  *puVar28 = *puVar24;
  if (plVar27 != (long *)0x0) {
    local_f0 = param_7 * param_7;
    do {
      piVar29 = (int *)plVar27[6];
      if (*piVar29 == 4) {
        if (piVar29[1] == 0 || piVar29[1] == 5) {
          lVar26 = *(long *)(piVar29 + 10);
          if (lVar26 != 0) {
            if (*(short *)(lVar26 + 0x1a) != 0) {
              psVar1 = (short *)(lVar26 + 0x1a);
              sVar25 = *(short *)(lVar26 + 0x1a);
              do {
                sVar2 = *psVar1;
                if (sVar2 == sVar25) {
                  cVar3 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar13) {
                    *psVar1 = sVar25 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_01857aa0;
                  bVar13 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01857aa0:
                  bVar13 = false;
                }
                if (bVar13) {
                  lVar26 = *(long *)(lVar26 + 0x10);
                  if (lVar26 != 0) {
                    local_d0 = (undefined8 *)0x0;
                    uStack_c8 = 0;
                    FUN_00ca1a48(&local_d0,plVar27[6] + 0x28);
                    plVar19 = (long *)(lVar26 + 0xe8);
                    lVar30 = *plVar19;
                    lVar18 = nn::os::GetCurrentThread();
                    if (lVar18 == lVar30) {
                      bVar13 = true;
                      goto LAB_01857b04;
                    }
                    lVar18 = nn::os::GetCurrentThread();
                    goto LAB_01857af0;
                  }
                  break;
                }
                sVar25 = sVar2;
              } while (sVar2 != 0);
            }
LAB_01858030:
            pbVar22 = PTR_DAT_047d7b48;
            puVar24 = (undefined8 *)PTR_DAT_047d7b50;
            puVar28 = (undefined8 *)PTR_DAT_047d7b58;
          }
        }
      }
LAB_018576b8:
      plVar27 = (long *)*plVar27;
      if (((*pbVar22 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar22), iVar16 != 0)) {
        FUN_00100190(&LAB_00aa519c,puVar24,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar22);
      }
      *puVar28 = *puVar24;
    } while (plVar27 != (long *)0x0);
  }
  return;
LAB_01857af0:
  if (*plVar19 == 0) goto code_r0x01857af8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xf0));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xf0));
        while (*plVar19 == 0) {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar13) {
            *plVar19 = lVar18;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01857b00;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar13) {
      *plVar19 = lVar18;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01857b00:
  bVar13 = false;
LAB_01857b04:
  plVar19 = (long *)FUN_013217a0(*(undefined8 *)(lVar26 + 0x100),*(undefined8 *)(lVar26 + 0x108));
  if ((*(long **)(lVar26 + 0x108) == plVar19) || (*plVar19 == 0)) {
    plVar19 = (long *)FUN_013217a0(*(undefined8 *)(lVar26 + 0x138),*(undefined8 *)(lVar26 + 0x140));
    if (*(long **)(lVar26 + 0x140) == plVar19) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if (*plVar19 != 0) {
        lVar18 = *plVar19 + -0x20;
      }
    }
  }
  else {
    lVar18 = *plVar19 + -0x20;
  }
  plVar19 = (long *)(lVar26 + -0x28);
  if (!bVar13) {
    *(undefined8 *)(lVar26 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0xf0));
  }
  if (lVar18 == 0) {
LAB_01857ce4:
    local_78 = (long *)0x0;
    local_90 = (undefined8 *)&DAT_a8bd1e5eb87a9f71;
    pcStack_88 = "FieldPokemonRecvHit";
    uStack_80 = 0x13;
    FUN_00fe3ff4(local_68,plVar19,&local_90);
    puVar24 = local_68[0];
    plVar31 = (long *)0x0;
    if (local_68[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_68[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_68[0] + 0x1a);
        sVar25 = *(short *)((long)local_68[0] + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar25) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar25 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_018583e0;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_018583e0:
            bVar13 = false;
          }
          if (bVar13) {
            plVar31 = (long *)0x0;
            if (local_68[0][2] != 0) {
              plVar31 = (long *)(local_68[0][2] + -0x28);
            }
            goto LAB_01858408;
          }
          sVar25 = sVar2;
          if (sVar2 == 0) break;
        } while( true );
      }
      plVar31 = (long *)0x0;
LAB_01858408:
      psVar1 = (short *)(local_68[0] + 3);
      do {
        sVar25 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar25 == 1) {
        piVar29 = (int *)((long)local_68[0] + 0x1c);
        do {
          iVar16 = *piVar29;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_58 = *puVar24;
          FUN_00c44438(lVar18 + 0x8040,&local_58);
        }
      }
      else if (sVar25 == 0) goto LAB_01857e80;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    uStack_148 = 0;
    uStack_144 = 0;
    local_150 = 0;
    uStack_14c = 0;
    fStack_138 = 0.0;
    uStack_134 = 0;
    local_140 = 0.0;
    fStack_13c = 0.0;
    if (plVar31 != (long *)0x0) {
      plVar21 = plVar31 + 0x22;
      lVar30 = *plVar21;
      lVar18 = nn::os::GetCurrentThread();
      if (lVar18 != lVar30) {
        lVar18 = nn::os::GetCurrentThread();
LAB_01857d58:
        if (*plVar21 == 0) goto code_r0x01857d60;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x23));
        do {
          if (*plVar21 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x23));
              while (*plVar21 == 0) {
                cVar3 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar13) {
                  *plVar21 = lVar18;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_01857d68;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar13) {
            *plVar21 = lVar18;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_01857d68:
        bVar13 = false;
        goto LAB_01857d6c;
      }
      bVar13 = true;
LAB_01857d6c:
      plVar21 = (long *)FUN_013217a0(plVar31[0x25],plVar31[0x26]);
      if (((long *)plVar31[0x26] == plVar21) || (*plVar21 == 0)) {
        plVar21 = (long *)FUN_013217a0(plVar31[0x2c],plVar31[0x2d]);
        if ((long *)plVar31[0x2d] == plVar21) {
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          if (*plVar21 != 0) {
            lVar18 = *plVar21 + -0x20;
          }
        }
      }
      else {
        lVar18 = *plVar21 + -0x20;
      }
      if (!bVar13) {
        plVar31[0x22] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar31 + 0x23));
      }
      if (lVar18 != 0) {
        local_78 = (long *)0x0;
        local_90 = (undefined8 *)0xec275cf90293e392;
        pcStack_88 = "PokeBodyCol";
        uStack_80 = 0xb;
        FUN_01fa0720(local_68,lVar18,&local_90);
        puVar24 = local_68[0];
        plVar21 = (long *)0x0;
        if (local_68[0] != (undefined8 *)0x0) {
          if (*(short *)((long)local_68[0] + 0x1a) != 0) {
            psVar1 = (short *)((long)local_68[0] + 0x1a);
            sVar25 = *(short *)((long)local_68[0] + 0x1a);
            do {
              sVar2 = *psVar1;
              if (sVar2 == sVar25) {
                cVar3 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar13) {
                  *psVar1 = sVar25 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_018582a0;
                bVar13 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_018582a0:
                bVar13 = false;
              }
              if (bVar13) {
                plVar21 = (long *)0x0;
                if (local_68[0][2] != 0) {
                  plVar21 = (long *)(local_68[0][2] + -0x28);
                }
                goto LAB_018582c8;
              }
              sVar25 = sVar2;
              if (sVar2 == 0) break;
            } while( true );
          }
          plVar21 = (long *)0x0;
LAB_018582c8:
          psVar1 = (short *)(local_68[0] + 3);
          do {
            sVar25 = *psVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar25 == 1) {
            piVar29 = (int *)((long)local_68[0] + 0x1c);
            do {
              iVar16 = *piVar29;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar16 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_58 = *puVar24;
              FUN_00c44438(lVar18 + 0x8040,&local_58);
            }
          }
          else if (sVar25 == 0) goto LAB_01857e80;
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (plVar21 != (long *)0x0) {
          auVar39 = FUN_00ff0430(plVar21);
          uStack_148 = auVar39._8_4_;
          uStack_144 = auVar39._12_4_;
          local_150 = auVar39._0_4_;
          uStack_14c = auVar39._4_4_;
          fStack_138 = auVar57._8_4_;
          uStack_134 = auVar57._12_4_;
          local_140 = auVar57._0_4_;
          fStack_13c = auVar57._4_4_;
          lVar18 = plVar21[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar25 = *psVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar25 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar21 + 0x50))(plVar21);
          }
          else if (sVar25 == 0) goto LAB_01857c68;
          lVar18 = plVar31[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar25 = *psVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_01857bd4;
        }
      }
      lVar18 = plVar31[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar25 != 1) {
        uStack_148 = 0;
        uStack_144 = 0;
        local_150 = 0;
        uStack_14c = 0;
        fStack_138 = 0.0;
        uStack_134 = 0;
        local_140 = 0.0;
        fStack_13c = 0.0;
        goto LAB_01857bdc;
      }
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar31 + 0x50))(plVar31);
      uStack_148 = 0;
      uStack_144 = 0;
      local_150 = 0;
      uStack_14c = 0;
      fStack_138 = 0.0;
      uStack_134 = 0;
      local_140 = 0.0;
      fStack_13c = 0.0;
    }
  }
  else {
    FUN_00d52990(&local_90,lVar18,0);
    puVar24 = local_90;
    if (local_90 == (undefined8 *)0x0) {
LAB_01857b64:
      local_78 = (long *)0x0;
      local_90 = (undefined8 *)0x6a80aa644050026b;
      pcStack_88 = "PokeCharaCol";
      uStack_80 = 0xc;
      FUN_01fa05d8(local_68,lVar18,&local_90);
      puVar24 = local_68[0];
      plVar31 = (long *)0x0;
      if (local_68[0] != (undefined8 *)0x0) {
        if (*(short *)((long)local_68[0] + 0x1a) != 0) {
          psVar1 = (short *)((long)local_68[0] + 0x1a);
          sVar25 = *(short *)((long)local_68[0] + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar25) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar25 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_018581ac;
              bVar13 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_018581ac:
              bVar13 = false;
            }
            if (bVar13) {
              plVar31 = (long *)0x0;
              if (local_68[0][2] != 0) {
                plVar31 = (long *)(local_68[0][2] + -0x28);
              }
              goto LAB_01858248;
            }
            sVar25 = sVar2;
            if (sVar2 == 0) break;
          } while( true );
        }
        plVar31 = (long *)0x0;
LAB_01858248:
        psVar1 = (short *)(local_68[0] + 3);
        do {
          sVar25 = *psVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar25 == 1) {
          piVar29 = (int *)((long)local_68[0] + 0x1c);
          do {
            iVar16 = *piVar29;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar13) {
              *piVar29 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar16 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_58 = *puVar24;
            FUN_00c44438(lVar18 + 0x8040,&local_58);
          }
        }
        else if (sVar25 == 0) goto LAB_01857e80;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (plVar31 == (long *)0x0) goto LAB_01857ce4;
      auVar39 = FUN_01fa0254(plVar31);
      uStack_148 = auVar39._8_4_;
      uStack_144 = auVar39._12_4_;
      local_150 = auVar39._0_4_;
      uStack_14c = auVar39._4_4_;
      fStack_138 = auVar57._8_4_;
      uStack_134 = auVar57._12_4_;
      local_140 = auVar57._0_4_;
      fStack_13c = auVar57._4_4_;
      lVar18 = plVar31[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01857bd4:
      if (sVar25 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        pcVar23 = *(code **)(*plVar31 + 0x50);
LAB_018580d4:
        (*pcVar23)(plVar31);
        goto LAB_01857be0;
      }
    }
    else {
      if (*(short *)((long)local_90 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_90 + 0x1a);
        sVar25 = *(short *)((long)local_90 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar25) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar25 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01858160;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01858160:
            bVar13 = false;
          }
          if (bVar13) {
            plVar31 = (long *)0x0;
            if (local_90[2] != 0) {
              plVar31 = (long *)(local_90[2] + -0x28);
            }
            goto LAB_018581d4;
          }
          sVar25 = sVar2;
          if (sVar2 == 0) break;
        } while( true );
      }
      plVar31 = (long *)0x0;
LAB_018581d4:
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar25 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar25 == 1) {
        piVar29 = (int *)((long)local_90 + 0x1c);
        do {
          iVar16 = *piVar29;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar16 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_68[0] = (undefined8 *)*puVar24;
          FUN_00c44438(lVar30 + 0x8040,local_68);
        }
      }
      else if (sVar25 == 0) goto LAB_01857e80;
      if (plVar31 == (long *)0x0) goto LAB_01857b64;
      auVar39 = FUN_01fa0254(plVar31);
      uStack_148 = auVar39._8_4_;
      uStack_144 = auVar39._12_4_;
      local_150 = auVar39._0_4_;
      uStack_14c = auVar39._4_4_;
      fStack_138 = auVar57._8_4_;
      uStack_134 = auVar57._12_4_;
      local_140 = auVar57._0_4_;
      fStack_13c = auVar57._4_4_;
      lVar18 = plVar31[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar25 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        pcVar23 = *(code **)(*plVar31 + 0x50);
        goto LAB_018580d4;
      }
    }
LAB_01857bdc:
    if (sVar25 == 0) goto LAB_01857c68;
  }
LAB_01857be0:
  local_90 = (undefined8 *)CONCAT44(uStack_14c,local_150);
  auVar57._8_4_ = uStack_148;
  auVar57._0_8_ = local_90;
  auVar57._12_4_ = uStack_144;
  uStack_80 = CONCAT44(fStack_13c,local_140);
  auVar12._8_4_ = fStack_138;
  auVar12._0_8_ = uStack_80;
  auVar12._12_4_ = uStack_134;
  pcStack_88 = auVar57._8_8_;
  local_78 = auVar12._8_8_;
  uVar20 = FUN_01fa030c(&local_90);
  if ((uVar20 & 1) != 0) {
    auVar57 = param_3;
    uVar20 = FUN_01fa0340(param_2,param_3,param_4,param_5,&local_90);
    if ((uVar20 & 1) != 0) {
      lVar18 = (**(code **)(*plVar19 + 0x68))(plVar19);
      auVar44._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar18 + 0x30),0);
      auVar44._12_4_ = 0;
      auVar39 = FUN_01fa0868(auVar44,&local_c0,0);
      fStack_138 = auVar39._8_4_;
      local_140 = auVar39._0_4_;
      fStack_13c = auVar39._4_4_;
      lVar18 = (**(code **)(*plVar19 + 0x68))(plVar19);
      local_140 = local_140 - *(float *)(lVar18 + 0x30);
      fStack_13c = fStack_13c - *(float *)(lVar18 + 0x34);
      fStack_138 = fStack_138 - *(float *)(lVar18 + 0x38);
      local_140 = local_140 * local_140;
      fStack_13c = fStack_13c * fStack_13c;
      fStack_138 = fStack_138 * fStack_138;
      auVar36._0_4_ = local_140 + fStack_13c;
      auVar36._4_4_ = fStack_138 + 0.0;
      auVar36._8_4_ = local_140 + fStack_13c;
      auVar36._12_4_ = fStack_138 + 0.0;
      auVar39 = NEON_ext(auVar36,auVar36,4,1);
      auVar37._0_4_ = auVar39._0_4_ + auVar39._4_4_;
      auVar37._4_4_ = auVar39._8_4_ + auVar39._12_4_;
      auVar37._8_4_ = auVar39._0_4_ + auVar39._4_4_;
      auVar37._12_4_ = auVar39._8_4_ + auVar39._12_4_;
      auVar57 = auVar37;
      if (auVar37._0_4_ < local_f0) {
        FUN_00ca1a48(param_1,&local_d0);
        local_f0 = auVar37._0_4_;
      }
    }
  }
  puVar24 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
    do {
      sVar25 = *psVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar25 == 1) {
      piVar29 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar16 = *piVar29;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_90 = (undefined8 *)*puVar24;
        FUN_00c44438(lVar18 + 0x8040,&local_90);
      }
    }
    else if (sVar25 == 0) {
LAB_01857e80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar26 = *(long *)(lVar26 + 8);
  psVar1 = (short *)(lVar26 + 0x1a);
  do {
    sVar25 = *psVar1;
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar25 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar25 == 1) {
    *(undefined8 *)(lVar26 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
    goto LAB_01858030;
  }
  pbVar22 = PTR_DAT_047d7b48;
  puVar24 = (undefined8 *)PTR_DAT_047d7b50;
  puVar28 = (undefined8 *)PTR_DAT_047d7b58;
  if (sVar25 == 0) {
LAB_01857c68:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_018576b8;
code_r0x01857af8:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar13) {
    *plVar19 = lVar18;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01857b00;
  goto LAB_01857af0;
code_r0x01857d60:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar13) {
    *plVar21 = lVar18;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01857d68;
  goto LAB_01857d58;
}


