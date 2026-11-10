/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01412980; name: FUN_01412980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01412980(undefined1 param_1 [16],long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  uint *puVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
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
  int iVar32;
  ulong uVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  int iVar43;
  int iVar45;
  int iVar46;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar48 [12];
  undefined8 uVar47;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar69;
  float fVar70;
  undefined1 auVar61 [12];
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined8 uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uVar106;
  undefined8 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  iVar32 = *(int *)(param_4 + 0x130);
  fStack_58 = param_1._8_4_;
  fStack_54 = param_1._12_4_;
  local_60 = param_1._0_4_;
  fStack_5c = param_1._4_4_;
  if (*(int *)(&DAT_03d30718 + (long)iVar32 * 0x1c) == 2) {
    puVar9 = (uint *)(param_3 + 0x114);
  }
  else if (*(int *)(&DAT_03d30718 + (long)iVar32 * 0x1c) == 1) {
    puVar9 = (uint *)(param_3 + 0x110);
  }
  else {
    puVar9 = (uint *)(param_3 + 0x10c);
  }
  uVar2 = *puVar9;
  FUN_01413910(param_4,param_3,param_5);
  auVar35 = *(undefined1 (*) [16])(param_2 + 0x10);
  auVar65._0_4_ = auVar35._0_4_;
  auVar65._8_8_ = auVar35._8_8_;
  if ((0x20c2UL >> ((long)iVar32 & 0x3fU) & 1) == 0) {
    local_60 = auVar65._0_4_ - local_60;
    fStack_5c = auVar35._4_4_ - fStack_5c;
    fStack_58 = auVar35._8_4_ - fStack_58;
    fStack_54 = auVar35._12_4_ - fStack_54;
    auVar98._0_4_ = local_60 * local_60 + fStack_5c * fStack_5c;
    auVar98._4_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar98._8_4_ = local_60 * local_60 + fStack_5c * fStack_5c;
    auVar98._12_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar35 = NEON_ext(auVar98,auVar98,4,1);
    auVar104._0_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar104._4_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar104._8_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar104._12_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar35 = NEON_frsqrte(auVar104,4);
    auVar55._8_8_ = _UNK_03cabe68;
    auVar55._0_8_ = _DAT_03cabe60;
    auVar80._0_4_ = auVar104._0_4_ * auVar35._0_4_;
    auVar80._4_4_ = auVar104._4_4_ * auVar35._4_4_;
    auVar80._8_4_ = auVar104._8_4_ * auVar35._8_4_;
    auVar80._12_4_ = auVar104._12_4_ * auVar35._12_4_;
    auVar65 = NEON_frsqrts(auVar35,auVar80,4);
    auVar66._0_4_ = auVar35._0_4_ * auVar65._0_4_;
    auVar66._4_4_ = auVar35._4_4_ * auVar65._4_4_;
    auVar66._8_4_ = auVar35._8_4_ * auVar65._8_4_;
    auVar66._12_4_ = auVar35._12_4_ * auVar65._12_4_;
    auVar81._0_4_ = auVar104._0_4_ * auVar66._0_4_;
    auVar81._4_4_ = auVar104._4_4_ * auVar66._4_4_;
    auVar81._8_4_ = auVar104._8_4_ * auVar66._8_4_;
    auVar81._12_4_ = auVar104._12_4_ * auVar66._12_4_;
    iVar32 = -(uint)(auVar104._0_4_ == 0.0);
    iVar43 = -(uint)(auVar104._4_4_ == 0.0);
    iVar45 = -(uint)(auVar104._8_4_ == 0.0);
    iVar46 = -(uint)(auVar104._12_4_ == 0.0);
    auVar35 = NEON_frsqrts(auVar66,auVar81,4);
    local_60 = local_60 * auVar66._0_4_ * auVar35._0_4_;
    fStack_5c = fStack_5c * auVar66._4_4_ * auVar35._4_4_;
    fStack_58 = fStack_58 * auVar66._8_4_ * auVar35._8_4_;
    fStack_54 = fStack_54 * auVar66._12_4_ * auVar35._12_4_;
    fVar13 = (float)CONCAT13((byte)((uint)local_60 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)local_60 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10)
                                      ,CONCAT11((byte)((uint)local_60 >> 8) &
                                                ~(byte)((uint)iVar32 >> 8),
                                                SUB41(local_60,0) & ~(byte)iVar32)));
    auVar20._0_8_ =
         CONCAT17((byte)((uint)fStack_5c >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                  CONCAT16((byte)((uint)fStack_5c >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                           CONCAT15((byte)((uint)fStack_5c >> 8) & ~(byte)((uint)iVar43 >> 8),
                                    CONCAT14(SUB41(fStack_5c,0) & ~(byte)iVar43,fVar13))));
    auVar20[8] = SUB41(fStack_58,0) & ~(byte)iVar45;
    auVar20[9] = (byte)((uint)fStack_58 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar20[10] = (byte)((uint)fStack_58 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar20[0xb] = (byte)((uint)fStack_58 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    auVar24[0xc] = SUB41(fStack_54,0) & ~(byte)iVar46;
    auVar24._0_12_ = auVar20;
    auVar24[0xd] = (byte)((uint)fStack_54 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar24[0xe] = (byte)((uint)fStack_54 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar24[0xf] = (byte)((uint)fStack_54 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    uVar97 = a64_TBL(ZEXT816(0),auVar55,DAT_03cb56c8);
    uVar79 = a64_TBL(ZEXT816(0),auVar55,DAT_03cb54d8);
    uVar47 = a64_TBL(ZEXT816(0),auVar55,DAT_03cb5488);
    uVar53 = a64_TBL(ZEXT816(0),auVar55,DAT_03cb54c0);
    uVar107 = a64_TBL(ZEXT816(0),auVar24,DAT_03cb54d8);
    uVar60 = a64_TBL(ZEXT816(0),auVar24,DAT_03cb5488);
    uVar101 = a64_TBL(ZEXT816(0),auVar24,DAT_03cb54c0);
    uVar106 = a64_TBL(ZEXT816(0),auVar24,DAT_03cb56c8);
    fVar77 = (float)((ulong)uVar60 >> 0x20);
    fVar57 = (float)((ulong)uVar101 >> 0x20);
    fVar86 = (float)((ulong)uVar106 >> 0x20);
    fVar69 = (float)((ulong)uVar107 >> 0x20);
    fVar56 = (float)uVar97 * (float)uVar60 - (float)uVar47 * (float)uVar106;
    fVar71 = (float)((ulong)uVar97 >> 0x20) * fVar77 - (float)((ulong)uVar47 >> 0x20) * fVar86;
    fVar78 = (float)uVar79 * (float)uVar101 - (float)uVar53 * (float)uVar107;
    fVar87 = (float)((ulong)uVar79 >> 0x20) * fVar57 - (float)((ulong)uVar53 >> 0x20) * fVar69;
    fVar59 = (float)((ulong)auVar20._0_8_ >> 0x20);
    auVar16._0_4_ = fVar56 * fVar56 + fVar71 * fVar71;
    auVar16._4_4_ = fVar78 * fVar78 + fVar87 * fVar87;
    auVar16._8_4_ = fVar56 * fVar56 + fVar71 * fVar71;
    auVar16._12_4_ = fVar78 * fVar78 + fVar87 * fVar87;
    auVar35 = NEON_ext(auVar16,auVar16,4,1);
    auVar17._0_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar17._4_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar17._8_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar17._12_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar35 = NEON_frsqrte(auVar17,4);
    auVar99._0_4_ = auVar17._0_4_ * auVar35._0_4_;
    auVar99._4_4_ = auVar17._4_4_ * auVar35._4_4_;
    auVar99._8_4_ = auVar17._8_4_ * auVar35._8_4_;
    auVar99._12_4_ = auVar17._12_4_ * auVar35._12_4_;
    auVar65 = NEON_frsqrts(auVar35,auVar99,4);
    auVar82._0_4_ = auVar35._0_4_ * auVar65._0_4_;
    auVar82._4_4_ = auVar35._4_4_ * auVar65._4_4_;
    auVar82._8_4_ = auVar35._8_4_ * auVar65._8_4_;
    auVar82._12_4_ = auVar35._12_4_ * auVar65._12_4_;
    auVar100._0_4_ = auVar17._0_4_ * auVar82._0_4_;
    auVar100._4_4_ = auVar17._4_4_ * auVar82._4_4_;
    auVar100._8_4_ = auVar17._8_4_ * auVar82._8_4_;
    auVar100._12_4_ = auVar17._12_4_ * auVar82._12_4_;
    iVar32 = -(uint)(auVar17._0_4_ == 0.0);
    iVar43 = -(uint)(auVar17._4_4_ == 0.0);
    iVar45 = -(uint)(auVar17._8_4_ == 0.0);
    iVar46 = -(uint)(auVar17._12_4_ == 0.0);
    auVar35 = NEON_frsqrts(auVar82,auVar100,4);
    fVar56 = fVar56 * auVar82._0_4_ * auVar35._0_4_;
    fVar71 = fVar71 * auVar82._4_4_ * auVar35._4_4_;
    fVar78 = fVar78 * auVar82._8_4_ * auVar35._8_4_;
    fVar87 = fVar87 * auVar82._12_4_ * auVar35._12_4_;
    fVar44 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar56 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar56,0) & ~(byte)iVar32)));
    auVar34._0_8_ =
         CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                  CONCAT16((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                           CONCAT15((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                    CONCAT14(SUB41(fVar71,0) & ~(byte)iVar43,fVar44))));
    auVar34[8] = SUB41(fVar78,0) & ~(byte)iVar45;
    auVar34[9] = (byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar34[10] = (byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar34[0xb] = (byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    auVar39[0xc] = SUB41(fVar87,0) & ~(byte)iVar46;
    auVar39._0_12_ = auVar34;
    auVar39[0xd] = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar39[0xe] = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar39[0xf] = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    uVar53 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb5488);
    uVar97 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb54c0);
    uVar47 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb56c8);
    uVar79 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb54d8);
    fVar78 = (float)uVar106 * (float)uVar53 - (float)uVar60 * (float)uVar47;
    fVar87 = fVar86 * (float)((ulong)uVar53 >> 0x20) - fVar77 * (float)((ulong)uVar47 >> 0x20);
    fVar56 = (float)uVar107 * (float)uVar97 - (float)uVar101 * (float)uVar79;
    fVar71 = fVar69 * (float)((ulong)uVar97 >> 0x20) - fVar57 * (float)((ulong)uVar79 >> 0x20);
    auVar18._0_4_ = fVar78 * fVar78 + fVar87 * fVar87;
    auVar18._4_4_ = fVar56 * fVar56 + fVar71 * fVar71;
    auVar18._8_4_ = fVar78 * fVar78 + fVar87 * fVar87;
    auVar18._12_4_ = fVar56 * fVar56 + fVar71 * fVar71;
    auVar35 = NEON_ext(auVar18,auVar18,4,1);
    auVar19._0_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar19._4_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar19._8_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar19._12_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar35 = NEON_fmov(0x3f800000,4);
    auVar65 = NEON_frsqrte(auVar19,4);
    auVar83._0_4_ = auVar19._0_4_ * auVar65._0_4_;
    auVar83._4_4_ = auVar19._4_4_ * auVar65._4_4_;
    auVar83._8_4_ = auVar19._8_4_ * auVar65._8_4_;
    auVar83._12_4_ = auVar19._12_4_ * auVar65._12_4_;
    auVar63 = NEON_frsqrts(auVar65,auVar83,4);
    auVar74._0_4_ = auVar65._0_4_ * auVar63._0_4_;
    auVar74._4_4_ = auVar65._4_4_ * auVar63._4_4_;
    auVar74._8_4_ = auVar65._8_4_ * auVar63._8_4_;
    auVar74._12_4_ = auVar65._12_4_ * auVar63._12_4_;
    auVar95._0_4_ = auVar19._0_4_ * auVar74._0_4_;
    auVar95._4_4_ = auVar19._4_4_ * auVar74._4_4_;
    auVar95._8_4_ = auVar19._8_4_ * auVar74._8_4_;
    auVar95._12_4_ = auVar19._12_4_ * auVar74._12_4_;
    iVar32 = -(uint)(auVar19._0_4_ == 0.0);
    iVar43 = -(uint)(auVar19._4_4_ == 0.0);
    iVar45 = -(uint)(auVar19._8_4_ == 0.0);
    iVar46 = -(uint)(auVar19._12_4_ == 0.0);
    auVar65 = NEON_frsqrts(auVar74,auVar95,4);
    auVar63 = NEON_fmov(0x40800000,4);
    fVar78 = fVar78 * auVar74._0_4_ * auVar65._0_4_;
    fVar87 = fVar87 * auVar74._4_4_ * auVar65._4_4_;
    fVar56 = fVar56 * auVar74._8_4_ * auVar65._8_4_;
    fVar71 = fVar71 * auVar74._12_4_ * auVar65._12_4_;
    auVar65 = NEON_ext(auVar39,auVar39,8,1);
    fVar86 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar78 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar78,0) & ~(byte)iVar32)));
    auVar67._0_8_ =
         CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                  CONCAT16((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                           CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                    CONCAT14(SUB41(fVar87,0) & ~(byte)iVar43,fVar86))));
    auVar67[8] = SUB41(fVar56,0) & ~(byte)iVar45;
    auVar67[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar67[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar67[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    auVar67[0xc] = SUB41(fVar71,0) & ~(byte)iVar46;
    auVar67[0xd] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar67[0xe] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar67[0xf] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    fVar77 = (float)((ulong)auVar67._0_8_ >> 0x20);
    fVar56 = auVar20._8_4_;
    fVar71 = auVar35._0_4_ + (float)_DAT_03cab3a0 * fVar44 + (float)_DAT_03cac210 * fVar77 +
             (float)_DAT_03cabb00 * fVar56;
    fVar78 = auVar35._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar44 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar77 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar56;
    fVar87 = auVar35._8_4_ + (float)_UNK_03cab3a8 * fVar44 + (float)_UNK_03cac218 * fVar77 +
             (float)_UNK_03cabb08 * fVar56;
    fVar77 = auVar35._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar44 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar77 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar56;
    fVar44 = (float)((ulong)auVar34._0_8_ >> 0x20);
    auVar35 = NEON_ext(auVar67,auVar67,8,1);
    fVar56 = auVar35._0_4_;
    fVar57 = SQRT(fVar77) * 0.5;
    auVar96._0_4_ = SQRT(fVar71) * 0.5 * auVar63._0_4_;
    auVar96._4_4_ = SQRT(fVar78) * 0.5 * auVar63._4_4_;
    auVar96._8_4_ = SQRT(fVar87) * 0.5 * auVar63._8_4_;
    auVar96._12_4_ = fVar57 * auVar63._12_4_;
    auVar35 = NEON_frecpe(auVar96,4);
    auVar63 = NEON_frecps(auVar35,auVar96,4);
    auVar25._4_4_ = fVar78;
    auVar25._0_4_ = fVar78;
    auVar25._8_4_ = fVar78;
    auVar25._12_4_ = fVar78;
    auVar75._0_4_ = -(uint)(fVar71 <= fVar78);
    auVar75._4_4_ = -(uint)(fVar71 <= fVar78);
    auVar75._8_4_ = -(uint)(fVar71 <= fVar78);
    auVar75._12_4_ = -(uint)(fVar71 <= fVar78);
    auVar92._0_4_ = auVar35._0_4_ * auVar63._0_4_;
    auVar92._4_4_ = auVar35._4_4_ * auVar63._4_4_;
    auVar92._8_4_ = auVar35._8_4_ * auVar63._8_4_;
    auVar92._12_4_ = auVar35._12_4_ * auVar63._12_4_;
    auVar35._4_4_ = fVar71;
    auVar35._0_4_ = fVar71;
    auVar35._8_4_ = fVar71;
    auVar35._12_4_ = fVar71;
    auVar25 = auVar25 ^ (auVar25 ^ auVar35) & ~auVar75;
    auVar109._0_4_ = -(uint)(auVar25._0_4_ <= fVar87);
    auVar109._4_4_ = -(uint)(auVar25._4_4_ <= fVar87);
    auVar109._8_4_ = -(uint)(auVar25._8_4_ <= fVar87);
    auVar109._12_4_ = -(uint)(auVar25._12_4_ <= fVar87);
    auVar35 = NEON_frecps(auVar92,auVar96,4);
    fVar69 = auVar92._0_4_ * auVar35._0_4_;
    fVar88 = auVar92._4_4_ * auVar35._4_4_;
    fVar70 = auVar92._8_4_ * auVar35._8_4_;
    fVar89 = auVar92._12_4_ * auVar35._12_4_;
    auVar63._4_4_ = fVar87;
    auVar63._0_4_ = fVar87;
    auVar63._8_4_ = fVar87;
    auVar63._12_4_ = fVar87;
    auVar35 = auVar25 ^ (auVar25 ^ auVar63) & auVar109;
    auVar7._4_8_ = auVar25._8_8_;
    auVar7._0_4_ = (fVar44 + fVar86) * fVar69;
    auVar26._0_8_ = auVar7._0_8_ << 0x20;
    auVar26._8_4_ = (fVar13 + auVar65._0_4_) * fVar69;
    auVar26._12_4_ = (-fVar59 + fVar56) * fVar69;
    auVar40._0_4_ = (fVar44 + fVar86) * fVar88;
    auVar40._4_4_ = fVar88 * 0.0;
    auVar40._8_4_ = (fVar59 + fVar56) * fVar88;
    auVar40._12_4_ = (-auVar34._8_4_ + fVar13) * fVar88;
    auVar68._0_4_ = (fVar13 + auVar65._0_4_) * fVar70;
    auVar68._4_4_ = (fVar59 + fVar56) * fVar70;
    auVar68._12_4_ = (fVar44 - fVar86) * fVar70;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = SQRT(fVar71) * 0.5;
    auVar41._8_8_ = auVar40._8_8_;
    auVar41._4_4_ = SQRT(fVar78) * 0.5;
    auVar41._0_4_ = auVar40._0_4_;
    auVar68._8_4_ = SQRT(fVar87) * 0.5;
    auVar27 = auVar27 ^ (auVar27 ^ auVar41) & auVar75;
    auVar23 = auVar27 ^ (auVar27 ^ auVar68) & auVar109;
    auVar61._4_4_ = fVar13 - auVar34._8_4_;
    auVar61._0_4_ = fVar56 - fVar59;
    auVar61._8_4_ = fVar44 - fVar86;
    uVar33 = (ulong)CONCAT16(~-(auVar35._12_4_ <= fVar77),
                             (uint6)CONCAT14(~-(auVar35._8_4_ <= fVar77),
                                             (uint)CONCAT12(~-(auVar35._4_4_ <= fVar77),
                                                            (ushort)(byte)~-(auVar35._0_4_ <= fVar77
                                                                            ))));
    auVar48._4_4_ = fVar89;
    auVar48._0_4_ = fVar89;
    auVar48._8_4_ = fVar89;
  }
  else {
    auVar65._4_4_ = 0;
    local_60 = auVar65._0_4_ - local_60;
    fStack_58 = auVar35._8_4_ - fStack_58;
    fStack_54 = auVar35._12_4_ - fStack_54;
    auVar14._0_4_ = local_60 * local_60 + 0.0;
    auVar14._4_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar14._8_4_ = local_60 * local_60 + 0.0;
    auVar14._12_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar35 = NEON_ext(auVar14,auVar14,4,1);
    auVar15._0_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar15._4_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar15._8_4_ = auVar35._0_4_ + auVar35._4_4_;
    auVar15._12_4_ = auVar35._8_4_ + auVar35._12_4_;
    auVar35 = NEON_frsqrte(auVar15,4);
    auVar62._0_4_ = auVar15._0_4_ * auVar35._0_4_;
    auVar62._4_4_ = auVar15._4_4_ * auVar35._4_4_;
    auVar62._8_4_ = auVar15._8_4_ * auVar35._8_4_;
    auVar62._12_4_ = auVar15._12_4_ * auVar35._12_4_;
    auVar63 = NEON_frsqrts(auVar35,auVar62,4);
    auVar54._0_4_ = auVar35._0_4_ * auVar63._0_4_;
    auVar54._4_4_ = auVar35._4_4_ * auVar63._4_4_;
    auVar54._8_4_ = auVar35._8_4_ * auVar63._8_4_;
    auVar54._12_4_ = auVar35._12_4_ * auVar63._12_4_;
    auVar64._0_4_ = auVar15._0_4_ * auVar54._0_4_;
    auVar64._4_4_ = auVar15._4_4_ * auVar54._4_4_;
    auVar64._8_4_ = auVar15._8_4_ * auVar54._8_4_;
    auVar64._12_4_ = auVar15._12_4_ * auVar54._12_4_;
    iVar32 = -(uint)(auVar15._0_4_ == 0.0);
    iVar43 = -(uint)(auVar15._4_4_ == 0.0);
    iVar45 = -(uint)(auVar15._8_4_ == 0.0);
    iVar46 = -(uint)(auVar15._12_4_ == 0.0);
    auVar35 = NEON_frsqrts(auVar54,auVar64,4);
    local_60 = local_60 * auVar54._0_4_ * auVar35._0_4_;
    fVar56 = auVar54._4_4_ * auVar35._4_4_ * 0.0;
    fStack_58 = fStack_58 * auVar54._8_4_ * auVar35._8_4_;
    fStack_54 = fStack_54 * auVar54._12_4_ * auVar35._12_4_;
    auVar36[0] = SUB41(local_60,0) & ~(byte)iVar32;
    auVar36[1] = (byte)((uint)local_60 >> 8) & ~(byte)((uint)iVar32 >> 8);
    auVar36[2] = (byte)((uint)local_60 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    auVar36[3] = (byte)((uint)local_60 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    auVar36[4] = SUB41(fVar56,0) & ~(byte)iVar43;
    auVar36[5] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar43 >> 8);
    auVar36[6] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
    auVar36[7] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
    auVar36[8] = SUB41(fStack_58,0) & ~(byte)iVar45;
    auVar36[9] = (byte)((uint)fStack_58 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar36[10] = (byte)((uint)fStack_58 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar36[0xb] = (byte)((uint)fStack_58 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    auVar36[0xc] = SUB41(fStack_54,0) & ~(byte)iVar46;
    auVar36[0xd] = (byte)((uint)fStack_54 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar36[0xe] = (byte)((uint)fStack_54 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar36[0xf] = (byte)((uint)fStack_54 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    auVar35 = FUN_01413118(param_4,param_3);
    fVar78 = auVar65._0_4_;
    fVar87 = auVar65._4_4_;
    fVar77 = auVar65._8_4_;
    fVar44 = auVar36._0_4_;
    fVar71 = auVar36._4_4_;
    fVar56 = auVar35._0_4_;
    fVar13 = auVar35._4_4_;
    fVar59 = auVar35._8_4_;
    fVar70 = (float)((ulong)_DAT_03cabb00 >> 0x20);
    fVar89 = (float)((ulong)_UNK_03cabb08 >> 0x20);
    fVar57 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
    fVar86 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
    fVar69 = (float)((ulong)_DAT_03cac210 >> 0x20);
    fVar88 = (float)((ulong)_UNK_03cac218 >> 0x20);
    if ((0x2100240U >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
      auVar65 = NEON_fmov(0x3f800000,4);
      auVar63 = NEON_ext(auVar36,auVar36,8,1);
      auVar98 = NEON_ext(auVar35,auVar35,8,1);
      auVar35 = NEON_fmov(0x40800000,4);
      fVar58 = auVar65._0_4_ + (float)_DAT_03cab3a0 * fVar56 + (float)_DAT_03cac210 * fVar71 +
               (float)_DAT_03cabb00 * fVar77;
      fVar69 = auVar65._4_4_ + fVar57 * fVar56 + fVar69 * fVar71 + fVar70 * fVar77;
      fVar70 = auVar65._8_4_ + (float)_UNK_03cab3a8 * fVar56 + (float)_UNK_03cac218 * fVar71 +
               (float)_UNK_03cabb08 * fVar77;
      fVar71 = auVar65._12_4_ + fVar86 * fVar56 + fVar88 * fVar71 + fVar89 * fVar77;
      fVar57 = SQRT(fVar71) * 0.5;
      fVar56 = auVar63._0_4_;
      auVar90._0_4_ = SQRT(fVar58) * 0.5 * auVar35._0_4_;
      auVar90._4_4_ = SQRT(fVar69) * 0.5 * auVar35._4_4_;
      auVar90._8_4_ = SQRT(fVar70) * 0.5 * auVar35._8_4_;
      auVar90._12_4_ = fVar57 * auVar35._12_4_;
      auVar35 = NEON_frecpe(auVar90,4);
      auVar65 = NEON_frecps(auVar35,auVar90,4);
      auVar21._4_4_ = fVar58;
      auVar21._0_4_ = fVar58;
      auVar21._8_4_ = fVar58;
      auVar21._12_4_ = fVar58;
      auVar102._4_4_ = fVar69;
      auVar102._0_4_ = fVar69;
      auVar102._8_4_ = fVar69;
      auVar102._12_4_ = fVar69;
      auVar37._0_4_ = auVar35._0_4_ * auVar65._0_4_;
      auVar37._4_4_ = auVar35._4_4_ * auVar65._4_4_;
      auVar37._8_4_ = auVar35._8_4_ * auVar65._8_4_;
      auVar37._12_4_ = auVar35._12_4_ * auVar65._12_4_;
      auVar108._0_4_ = -(uint)(fVar58 <= fVar69);
      auVar108._4_4_ = -(uint)(fVar58 <= fVar69);
      auVar108._8_4_ = -(uint)(fVar58 <= fVar69);
      auVar108._12_4_ = -(uint)(fVar58 <= fVar69);
      auVar35 = NEON_frecps(auVar37,auVar90,4);
      auVar91._4_4_ = fVar70;
      auVar91._0_4_ = fVar70;
      auVar91._8_4_ = fVar70;
      auVar91._12_4_ = fVar70;
      auVar21 = auVar21 ^ (auVar21 ^ auVar102) & auVar108;
      auVar103._0_4_ = -(uint)(auVar21._0_4_ <= fVar70);
      auVar103._4_4_ = -(uint)(auVar21._4_4_ <= fVar70);
      auVar103._8_4_ = -(uint)(auVar21._8_4_ <= fVar70);
      auVar103._12_4_ = -(uint)(auVar21._12_4_ <= fVar70);
      fVar77 = auVar37._0_4_ * auVar35._0_4_;
      fVar86 = auVar37._4_4_ * auVar35._4_4_;
      fVar88 = auVar37._8_4_ * auVar35._8_4_;
      fVar89 = auVar37._12_4_ * auVar35._12_4_;
      auVar35 = auVar21 ^ (auVar21 ^ auVar91) & auVar103;
      auVar6._4_8_ = auVar21._8_8_;
      auVar6._0_4_ = (fVar44 + fVar13) * fVar77;
      auVar22._0_8_ = auVar6._0_8_ << 0x20;
      auVar22._8_4_ = (auVar98._0_4_ + fVar78) * fVar77;
      auVar22._12_4_ = (fVar56 + -fVar87) * fVar77;
      auVar72._0_4_ = (fVar13 + fVar44) * fVar86;
      auVar72._4_4_ = fVar86 * 0.0;
      auVar72._8_4_ = (fVar56 + fVar87) * fVar86;
      auVar72._12_4_ = (fVar78 + -fVar59) * fVar86;
      auVar49._0_4_ = (auVar98._0_4_ + fVar78) * fVar88;
      auVar49._4_4_ = (fVar56 + fVar87) * fVar88;
      auVar49._12_4_ = (fVar13 - fVar44) * fVar88;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = SQRT(fVar58) * 0.5;
      auVar73._8_8_ = auVar72._8_8_;
      auVar73._4_4_ = SQRT(fVar69) * 0.5;
      auVar73._0_4_ = auVar72._0_4_;
      auVar49._8_4_ = SQRT(fVar70) * 0.5;
      auVar23 = auVar23 ^ (auVar23 ^ auVar73) & auVar108;
      auVar23 = auVar23 ^ (auVar23 ^ auVar49) & auVar103;
      auVar61._4_4_ = fVar89;
      auVar61._0_4_ = fVar89;
      auVar61._8_4_ = fVar89;
      auVar48._4_4_ = fVar78 - fVar59;
      auVar48._0_4_ = fVar56 - fVar87;
      uVar33 = (ulong)CONCAT16(~-(auVar35._12_4_ <= fVar71),
                               (uint6)CONCAT14(~-(auVar35._8_4_ <= fVar71),
                                               (uint)CONCAT12(~-(auVar35._4_4_ <= fVar71),
                                                              (ushort)(byte)~-(auVar35._0_4_ <=
                                                                              fVar71))));
      auVar48._8_4_ = fVar13 - fVar44;
    }
    else {
      auVar65 = NEON_fmov(0x3f800000,4);
      auVar98 = NEON_ext(auVar36,auVar36,8,1);
      auVar63 = NEON_fmov(0x40800000,4);
      fVar78 = -fVar78;
      fVar87 = -fVar87;
      auVar28._0_4_ = -fVar56;
      auVar28._4_4_ = -fVar13;
      auVar28._8_4_ = -fVar59;
      auVar28._12_4_ = -auVar35._12_4_;
      auVar104 = NEON_ext(auVar28,auVar28,8,1);
      fVar13 = auVar98._0_4_;
      fVar59 = ((auVar65._0_4_ - (float)_DAT_03cab3a0 * fVar56) + (float)_DAT_03cac210 * fVar71) -
               (float)_DAT_03cabb00 * fVar77;
      fVar69 = ((auVar65._4_4_ - fVar57 * fVar56) + fVar69 * fVar71) - fVar70 * fVar77;
      fVar70 = ((auVar65._8_4_ - (float)_UNK_03cab3a8 * fVar56) + (float)_UNK_03cac218 * fVar71) -
               (float)_UNK_03cabb08 * fVar77;
      fVar56 = ((auVar65._12_4_ - fVar86 * fVar56) + fVar88 * fVar71) - fVar89 * fVar77;
      fVar57 = SQRT(fVar56) * 0.5;
      auVar76._0_4_ = SQRT(fVar59) * 0.5 * auVar63._0_4_;
      auVar76._4_4_ = SQRT(fVar69) * 0.5 * auVar63._4_4_;
      auVar76._8_4_ = SQRT(fVar70) * 0.5 * auVar63._8_4_;
      auVar76._12_4_ = fVar57 * auVar63._12_4_;
      auVar35 = NEON_frecpe(auVar76,4);
      auVar29._4_4_ = fVar59;
      auVar29._0_4_ = fVar59;
      auVar29._8_4_ = fVar59;
      auVar29._12_4_ = fVar59;
      auVar65 = NEON_frecps(auVar35,auVar76,4);
      auVar93._4_4_ = fVar69;
      auVar93._0_4_ = fVar69;
      auVar93._8_4_ = fVar69;
      auVar93._12_4_ = fVar69;
      auVar105._0_4_ = -(uint)(fVar59 <= fVar69);
      auVar105._4_4_ = -(uint)(fVar59 <= fVar69);
      auVar105._8_4_ = -(uint)(fVar59 <= fVar69);
      auVar105._12_4_ = -(uint)(fVar59 <= fVar69);
      auVar29 = auVar29 ^ (auVar29 ^ auVar93) & auVar105;
      auVar42._0_4_ = auVar35._0_4_ * auVar65._0_4_;
      auVar42._4_4_ = auVar35._4_4_ * auVar65._4_4_;
      auVar42._8_4_ = auVar35._8_4_ * auVar65._8_4_;
      auVar42._12_4_ = auVar35._12_4_ * auVar65._12_4_;
      auVar84._4_4_ = fVar70;
      auVar84._0_4_ = fVar70;
      auVar84._8_4_ = fVar70;
      auVar84._12_4_ = fVar70;
      auVar94._0_4_ = -(uint)(auVar29._0_4_ <= fVar70);
      auVar94._4_4_ = -(uint)(auVar29._4_4_ <= fVar70);
      auVar94._8_4_ = -(uint)(auVar29._8_4_ <= fVar70);
      auVar94._12_4_ = -(uint)(auVar29._12_4_ <= fVar70);
      auVar35 = NEON_frecps(auVar42,auVar76,4);
      fVar71 = auVar42._0_4_ * auVar35._0_4_;
      fVar77 = auVar42._4_4_ * auVar35._4_4_;
      fVar86 = auVar42._8_4_ * auVar35._8_4_;
      fVar88 = auVar42._12_4_ * auVar35._12_4_;
      auVar35 = auVar29 ^ (auVar29 ^ auVar84) & auVar94;
      auVar8._4_8_ = auVar29._8_8_;
      auVar8._0_4_ = (fVar44 + auVar28._4_4_) * fVar71;
      auVar30._0_8_ = auVar8._0_8_ << 0x20;
      auVar30._8_4_ = (auVar104._0_4_ + fVar78) * fVar71;
      auVar30._12_4_ = (fVar13 + -fVar87) * fVar71;
      auVar51._0_4_ = (auVar28._4_4_ + fVar44) * fVar77;
      auVar51._4_4_ = fVar77 * 0.0;
      auVar51._8_4_ = (fVar13 + fVar87) * fVar77;
      auVar51._12_4_ = (fVar78 + -auVar28._8_4_) * fVar77;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = SQRT(fVar59) * 0.5;
      auVar52._8_8_ = auVar51._8_8_;
      auVar52._4_4_ = SQRT(fVar69) * 0.5;
      auVar52._0_4_ = auVar51._0_4_;
      auVar85._0_4_ = (auVar104._0_4_ + fVar78) * fVar86;
      auVar85._4_4_ = (fVar13 + fVar87) * fVar86;
      auVar85._12_4_ = (auVar28._4_4_ - fVar44) * fVar86;
      auVar31 = auVar31 ^ (auVar31 ^ auVar52) & auVar105;
      auVar85._8_4_ = SQRT(fVar70) * 0.5;
      auVar61._4_4_ = fVar88;
      auVar61._0_4_ = fVar88;
      auVar61._8_4_ = fVar88;
      auVar48._4_4_ = fVar78 - auVar28._8_4_;
      auVar48._0_4_ = fVar13 - fVar87;
      auVar23 = auVar31 ^ (auVar31 ^ auVar85) & auVar94;
      auVar48._8_4_ = auVar28._4_4_ - fVar44;
      uVar33 = (ulong)CONCAT16(~-(auVar35._12_4_ <= fVar56),
                               (uint6)CONCAT14(~-(auVar35._8_4_ <= fVar56),
                                               (uint)CONCAT12(~-(auVar35._4_4_ <= fVar56),
                                                              (ushort)(byte)~-(auVar35._0_4_ <=
                                                                              fVar56))));
    }
  }
  auVar50._0_4_ = auVar48._0_4_ * auVar61._0_4_;
  auVar50._4_4_ = auVar48._4_4_ * auVar61._4_4_;
  auVar50._8_4_ = auVar48._8_4_ * auVar61._8_4_;
  auVar38._0_4_ = (int)((uint)(ushort)uVar33 << 0x1f) >> 0x1f;
  auVar38._4_4_ = (int)((uint)(ushort)(uVar33 >> 0x10) << 0x1f) >> 0x1f;
  auVar38._8_4_ = (int)((uint)(ushort)(uVar33 >> 0x20) << 0x1f) >> 0x1f;
  auVar38._12_4_ = (int)((uint)(ushort)(uVar33 >> 0x30) << 0x1f) >> 0x1f;
  auVar50._12_4_ = fVar57;
  FUN_01413048(auVar23 ^ (auVar23 ^ auVar50) & ~auVar38,*param_6);
  lVar10 = *(long *)(param_3 + 0x20);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01412f88;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01412f88:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        plVar12 = (long *)(lVar10 + -0x28);
        FUN_01e0ec5c(plVar12);
        lVar10 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01413044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x50))(plVar12);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


