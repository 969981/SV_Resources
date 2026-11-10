/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa0340; name: FUN_01fa0340
 */


bool FUN_01fa0340(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],float *param_5)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined3 uVar5;
  undefined2 uVar6;
  undefined3 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined5 uVar20;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar34;
  byte bVar36;
  float fVar38;
  byte bVar39;
  float fVar41;
  byte bVar37;
  byte bVar40;
  byte bVar42;
  float fVar43;
  undefined1 auVar35 [16];
  byte bVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined2 uVar47;
  float fVar48;
  byte bVar52;
  float fVar49;
  byte bVar51;
  float fVar53;
  byte bVar56;
  float fVar54;
  byte bVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar50 [16];
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  int iVar67;
  int iVar70;
  int iVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar72;
  int iVar73;
  int iVar76;
  int iVar77;
  undefined1 auVar74 [16];
  int iVar78;
  undefined1 auVar75 [16];
  float fVar79;
  float fVar82;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  int iVar85;
  int iVar90;
  int iVar91;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  
  uVar46 = param_2[0xf];
  uVar45 = param_2[0xe];
  fVar38 = param_2._8_4_;
  fVar43 = (float)(CONCAT17(param_4[0xb],
                            CONCAT16(param_4[10],CONCAT15(param_4[9],CONCAT14(param_4[8],fVar38))))
                  >> 0x20);
  fVar34 = param_1._12_4_;
  fVar48 = fVar34 - param_1._0_4_;
  uVar1 = (undefined2)(CONCAT12(param_2[0xd],CONCAT11(param_2[0xc],param_4[0xb])) >> 8);
  fVar53 = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1)) - param_2._0_4_;
  fVar41 = param_3._12_4_;
  fVar57 = fVar41 - param_3._0_4_;
  fVar13 = param_4._12_4_;
  fVar59 = fVar13 - param_4._0_4_;
  fVar9 = param_1._4_4_ + fVar34;
  fVar31 = param_2._4_4_ + (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1));
  fVar58 = param_3._4_4_ + fVar41;
  fVar10 = param_4._4_4_ + fVar13;
  fVar33 = fVar34 - param_1._4_4_;
  fVar49 = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1)) - param_2._4_4_;
  fVar54 = fVar41 - param_3._4_4_;
  fVar8 = fVar13 - param_4._4_4_;
  auVar86._0_4_ = fVar48 * fVar48 + fVar53 * fVar53;
  auVar86._4_4_ = fVar57 * fVar57 + fVar59 * fVar59;
  auVar86._8_4_ = fVar48 * fVar48 + fVar53 * fVar53;
  auVar86._12_4_ = fVar57 * fVar57 + fVar59 * fVar59;
  auVar68 = NEON_ext(auVar86,auVar86,4,1);
  fVar2 = param_1._0_4_ + fVar34;
  fVar3 = param_2._0_4_ + (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1));
  fVar32 = param_3._0_4_ + fVar41;
  fVar4 = param_4._0_4_ + fVar13;
  auVar103._0_4_ = fVar9 * fVar9 + fVar31 * fVar31;
  auVar103._4_4_ = fVar58 * fVar58 + fVar10 * fVar10;
  auVar103._8_4_ = fVar9 * fVar9 + fVar31 * fVar31;
  auVar103._12_4_ = fVar58 * fVar58 + fVar10 * fVar10;
  auVar80 = NEON_ext(auVar103,auVar103,4,1);
  auVar21._0_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar21._4_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar21._8_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar21._12_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar86 = NEON_frsqrte(auVar21,4);
  auVar22._0_4_ = auVar80._0_4_ + auVar80._4_4_;
  auVar22._4_4_ = auVar80._8_4_ + auVar80._12_4_;
  auVar22._8_4_ = auVar80._0_4_ + auVar80._4_4_;
  auVar22._12_4_ = auVar80._8_4_ + auVar80._12_4_;
  auVar80 = NEON_frsqrte(auVar22,4);
  auVar102._0_4_ = auVar21._0_4_ * auVar86._0_4_;
  auVar102._4_4_ = auVar21._4_4_ * auVar86._4_4_;
  auVar102._8_4_ = auVar21._8_4_ * auVar86._8_4_;
  auVar102._12_4_ = auVar21._12_4_ * auVar86._12_4_;
  auVar107._0_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar107._4_4_ = fVar32 * fVar32 + fVar4 * fVar4;
  auVar107._8_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar107._12_4_ = fVar32 * fVar32 + fVar4 * fVar4;
  auVar106._0_4_ = auVar22._0_4_ * auVar80._0_4_;
  auVar106._4_4_ = auVar22._4_4_ * auVar80._4_4_;
  auVar106._8_4_ = auVar22._8_4_ * auVar80._8_4_;
  auVar106._12_4_ = auVar22._12_4_ * auVar80._12_4_;
  auVar68 = NEON_ext(auVar107,auVar107,4,1);
  auVar103 = NEON_frsqrts(auVar86,auVar102,4);
  iVar93 = -(uint)(auVar21._0_4_ == 0.0);
  iVar94 = -(uint)(auVar21._4_4_ == 0.0);
  iVar95 = -(uint)(auVar21._8_4_ == 0.0);
  iVar96 = -(uint)(auVar21._12_4_ == 0.0);
  auVar107 = NEON_frsqrts(auVar80,auVar106,4);
  auVar87._0_4_ = auVar86._0_4_ * auVar103._0_4_;
  auVar87._4_4_ = auVar86._4_4_ * auVar103._4_4_;
  auVar87._8_4_ = auVar86._8_4_ * auVar103._8_4_;
  auVar87._12_4_ = auVar86._12_4_ * auVar103._12_4_;
  auVar23._0_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar23._4_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar23._8_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar23._12_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar99._0_4_ = auVar80._0_4_ * auVar107._0_4_;
  auVar99._4_4_ = auVar80._4_4_ * auVar107._4_4_;
  auVar99._8_4_ = auVar80._8_4_ * auVar107._8_4_;
  auVar99._12_4_ = auVar80._12_4_ * auVar107._12_4_;
  auVar69._0_4_ = auVar21._0_4_ * auVar87._0_4_;
  auVar69._4_4_ = auVar21._4_4_ * auVar87._4_4_;
  auVar69._8_4_ = auVar21._8_4_ * auVar87._8_4_;
  auVar69._12_4_ = auVar21._12_4_ * auVar87._12_4_;
  auVar104._0_4_ = auVar22._0_4_ * auVar99._0_4_;
  auVar104._4_4_ = auVar22._4_4_ * auVar99._4_4_;
  auVar104._8_4_ = auVar22._8_4_ * auVar99._8_4_;
  auVar104._12_4_ = auVar22._12_4_ * auVar99._12_4_;
  auVar80 = NEON_frsqrte(auVar23,4);
  auVar68 = NEON_frsqrts(auVar87,auVar69,4);
  auVar105._0_4_ = auVar23._0_4_ * auVar80._0_4_;
  auVar105._4_4_ = auVar23._4_4_ * auVar80._4_4_;
  auVar105._8_4_ = auVar23._8_4_ * auVar80._8_4_;
  auVar105._12_4_ = auVar23._12_4_ * auVar80._12_4_;
  auVar86 = NEON_frsqrts(auVar80,auVar105,4);
  fVar48 = fVar48 * auVar87._0_4_ * auVar68._0_4_;
  fVar53 = fVar53 * auVar87._4_4_ * auVar68._4_4_;
  fVar57 = fVar57 * auVar87._8_4_ * auVar68._8_4_;
  fVar59 = fVar59 * auVar87._12_4_ * auVar68._12_4_;
  auVar68 = NEON_frsqrts(auVar99,auVar104,4);
  auVar97._0_4_ = auVar80._0_4_ * auVar86._0_4_;
  auVar97._4_4_ = auVar80._4_4_ * auVar86._4_4_;
  auVar97._8_4_ = auVar80._8_4_ * auVar86._8_4_;
  auVar97._12_4_ = auVar80._12_4_ * auVar86._12_4_;
  iVar11 = -(uint)(auVar23._0_4_ == 0.0);
  iVar12 = -(uint)(auVar23._4_4_ == 0.0);
  iVar14 = -(uint)(auVar23._8_4_ == 0.0);
  iVar16 = -(uint)(auVar23._12_4_ == 0.0);
  auVar74._0_4_ = auVar23._0_4_ * auVar97._0_4_;
  auVar74._4_4_ = auVar23._4_4_ * auVar97._4_4_;
  auVar74._8_4_ = auVar23._8_4_ * auVar97._8_4_;
  auVar74._12_4_ = auVar23._12_4_ * auVar97._12_4_;
  fVar9 = fVar9 * auVar99._0_4_ * auVar68._0_4_;
  fVar31 = fVar31 * auVar99._4_4_ * auVar68._4_4_;
  fVar58 = fVar58 * auVar99._8_4_ * auVar68._8_4_;
  fVar10 = fVar10 * auVar99._12_4_ * auVar68._12_4_;
  auVar80 = NEON_frsqrts(auVar97,auVar74,4);
  auVar24._0_4_ = fVar33 * fVar33 + fVar49 * fVar49;
  auVar24._4_4_ = fVar54 * fVar54 + fVar8 * fVar8;
  auVar24._8_4_ = fVar33 * fVar33 + fVar49 * fVar49;
  auVar24._12_4_ = fVar54 * fVar54 + fVar8 * fVar8;
  auVar68 = NEON_ext(auVar24,auVar24,4,1);
  auVar25._0_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar25._4_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar25._8_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar25._12_4_ = auVar68._8_4_ + auVar68._12_4_;
  fVar2 = fVar2 * auVar97._0_4_ * auVar80._0_4_;
  fVar3 = fVar3 * auVar97._4_4_ * auVar80._4_4_;
  fVar32 = fVar32 * auVar97._8_4_ * auVar80._8_4_;
  fVar4 = fVar4 * auVar97._12_4_ * auVar80._12_4_;
  iVar73 = -(uint)(auVar22._0_4_ == 0.0);
  iVar76 = -(uint)(auVar22._4_4_ == 0.0);
  iVar77 = -(uint)(auVar22._8_4_ == 0.0);
  iVar78 = -(uint)(auVar22._12_4_ == 0.0);
  auVar68 = NEON_frsqrte(auVar25,4);
  bVar66 = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
  auVar88._0_4_ = auVar25._0_4_ * auVar68._0_4_;
  auVar88._4_4_ = auVar25._4_4_ * auVar68._4_4_;
  auVar88._8_4_ = auVar25._8_4_ * auVar68._8_4_;
  auVar88._12_4_ = auVar25._12_4_ * auVar68._12_4_;
  auVar80 = NEON_frsqrts(auVar68,auVar88,4);
  auVar81._0_4_ = auVar68._0_4_ * auVar80._0_4_;
  auVar81._4_4_ = auVar68._4_4_ * auVar80._4_4_;
  auVar81._8_4_ = auVar68._8_4_ * auVar80._8_4_;
  auVar81._12_4_ = auVar68._12_4_ * auVar80._12_4_;
  auVar89._0_4_ = auVar25._0_4_ * auVar81._0_4_;
  auVar89._4_4_ = auVar25._4_4_ * auVar81._4_4_;
  auVar89._8_4_ = auVar25._8_4_ * auVar81._8_4_;
  auVar89._12_4_ = auVar25._12_4_ * auVar81._12_4_;
  iVar67 = -(uint)(auVar25._0_4_ == 0.0);
  iVar70 = -(uint)(auVar25._4_4_ == 0.0);
  iVar71 = -(uint)(auVar25._8_4_ == 0.0);
  iVar72 = -(uint)(auVar25._12_4_ == 0.0);
  auVar68 = NEON_frsqrts(auVar81,auVar89,4);
  fVar33 = fVar33 * auVar81._0_4_ * auVar68._0_4_;
  fVar49 = fVar49 * auVar81._4_4_ * auVar68._4_4_;
  fVar54 = fVar54 * auVar81._8_4_ * auVar68._8_4_;
  fVar8 = fVar8 * auVar81._12_4_ * auVar68._12_4_;
  bVar61 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
  bVar62 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
  bVar63 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
  bVar64 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
  bVar65 = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
  fVar79 = fVar34 - param_1._8_4_;
  fVar82 = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1)) - fVar38;
  fVar83 = fVar41 - param_3._8_4_;
  fVar84 = fVar13 - fVar43;
  fVar34 = param_1._8_4_ + fVar34;
  fVar38 = fVar38 + (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar1));
  fVar41 = param_3._8_4_ + fVar41;
  fVar43 = fVar43 + fVar13;
  auVar26._0_4_ = fVar79 * fVar79 + fVar82 * fVar82;
  auVar26._4_4_ = fVar83 * fVar83 + fVar84 * fVar84;
  auVar26._8_4_ = fVar79 * fVar79 + fVar82 * fVar82;
  auVar26._12_4_ = fVar83 * fVar83 + fVar84 * fVar84;
  auVar68 = NEON_ext(auVar26,auVar26,4,1);
  auVar27._0_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar27._4_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar27._8_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar27._12_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar80 = NEON_frsqrte(auVar27,4);
  bVar44 = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
  auVar28._0_4_ = fVar34 * fVar34 + fVar38 * fVar38;
  auVar28._4_4_ = fVar41 * fVar41 + fVar43 * fVar43;
  auVar28._8_4_ = fVar34 * fVar34 + fVar38 * fVar38;
  auVar28._12_4_ = fVar41 * fVar41 + fVar43 * fVar43;
  auVar68 = NEON_ext(auVar28,auVar28,4,1);
  auVar100._0_4_ = auVar27._0_4_ * auVar80._0_4_;
  auVar100._4_4_ = auVar27._4_4_ * auVar80._4_4_;
  auVar100._8_4_ = auVar27._8_4_ * auVar80._8_4_;
  auVar100._12_4_ = auVar27._12_4_ * auVar80._12_4_;
  auVar29._0_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar29._4_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar29._8_4_ = auVar68._0_4_ + auVar68._4_4_;
  auVar29._12_4_ = auVar68._8_4_ + auVar68._12_4_;
  auVar68 = NEON_frsqrte(auVar29,4);
  auVar86 = NEON_frsqrts(auVar80,auVar100,4);
  auVar98._0_4_ = auVar80._0_4_ * auVar86._0_4_;
  auVar98._4_4_ = auVar80._4_4_ * auVar86._4_4_;
  auVar98._8_4_ = auVar80._8_4_ * auVar86._8_4_;
  auVar98._12_4_ = auVar80._12_4_ * auVar86._12_4_;
  auVar101._0_4_ = auVar27._0_4_ * auVar98._0_4_;
  auVar101._4_4_ = auVar27._4_4_ * auVar98._4_4_;
  auVar101._8_4_ = auVar27._8_4_ * auVar98._8_4_;
  auVar101._12_4_ = auVar27._12_4_ * auVar98._12_4_;
  iVar85 = -(uint)(auVar27._0_4_ == 0.0);
  iVar90 = -(uint)(auVar27._4_4_ == 0.0);
  iVar91 = -(uint)(auVar27._8_4_ == 0.0);
  iVar92 = -(uint)(auVar27._12_4_ == 0.0);
  auVar80 = NEON_frsqrts(auVar98,auVar101,4);
  fVar79 = fVar79 * auVar98._0_4_ * auVar80._0_4_;
  fVar82 = fVar82 * auVar98._4_4_ * auVar80._4_4_;
  fVar83 = fVar83 * auVar98._8_4_ * auVar80._8_4_;
  fVar84 = fVar84 * auVar98._12_4_ * auVar80._12_4_;
  fVar13 = auVar29._4_4_ * auVar68._4_4_;
  fVar15 = auVar29._8_4_ * auVar68._8_4_;
  fVar30 = auVar29._12_4_ * auVar68._12_4_;
  bVar60 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  auVar80[4] = SUB41(fVar13,0);
  auVar80._0_4_ = auVar29._0_4_ * auVar68._0_4_;
  auVar80[5] = (char)((uint)fVar13 >> 8);
  auVar80[6] = (char)((uint)fVar13 >> 0x10);
  auVar80[7] = (char)((uint)fVar13 >> 0x18);
  auVar80[8] = SUB41(fVar15,0);
  auVar80[9] = (char)((uint)fVar15 >> 8);
  auVar80[10] = (char)((uint)fVar15 >> 0x10);
  auVar80[0xb] = (char)((uint)fVar15 >> 0x18);
  auVar80[0xc] = SUB41(fVar30,0);
  auVar80[0xd] = (char)((uint)fVar30 >> 8);
  auVar80[0xe] = (char)((uint)fVar30 >> 0x10);
  auVar80[0xf] = (char)((uint)fVar30 >> 0x18);
  auVar80 = NEON_frsqrts(auVar68,auVar80,4);
  auVar50._0_4_ = auVar68._0_4_ * auVar80._0_4_;
  auVar50._4_4_ = auVar68._4_4_ * auVar80._4_4_;
  auVar50._8_4_ = auVar68._8_4_ * auVar80._8_4_;
  auVar50._12_4_ = auVar68._12_4_ * auVar80._12_4_;
  auVar75._0_4_ = auVar29._0_4_ * auVar50._0_4_;
  auVar75._4_4_ = auVar29._4_4_ * auVar50._4_4_;
  auVar75._8_4_ = auVar29._8_4_ * auVar50._8_4_;
  auVar75._12_4_ = auVar29._12_4_ * auVar50._12_4_;
  auVar68 = NEON_frsqrts(auVar50,auVar75,4);
  fVar15 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                           CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10),
                                    CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar73 >> 8),
                                             SUB41(fVar9,0) & ~(byte)iVar73)));
  fVar13 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar93 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar93)));
  fVar30 = (float)(CONCAT17(bVar44,CONCAT16((byte)((uint)fVar53 >> 0x10) &
                                            ~(byte)((uint)iVar94 >> 0x10),
                                            CONCAT15((byte)((uint)fVar53 >> 8) &
                                                     ~(byte)((uint)iVar94 >> 8),
                                                     CONCAT14(SUB41(fVar53,0) & ~(byte)iVar94,fVar13
                                                             )))) >> 0x20);
  fVar48 = (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                            CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                     CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar76 >> 8)
                                              ,CONCAT14(SUB41(fVar31,0) & ~(byte)iVar76,fVar15))))
                  >> 0x20);
  fVar34 = fVar34 * auVar50._0_4_ * auVar68._0_4_;
  fVar38 = fVar38 * auVar50._4_4_ * auVar68._4_4_;
  fVar41 = fVar41 * auVar50._8_4_ * auVar68._8_4_;
  fVar43 = fVar43 * auVar50._12_4_ * auVar68._12_4_;
  uVar47 = CONCAT11((byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar85 >> 8),
                    SUB41(fVar79,0) & ~(byte)iVar85);
  bVar51 = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
  bVar52 = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
  bVar55 = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
  bVar56 = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
  uVar20 = CONCAT14((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                    CONCAT13((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10),
                             CONCAT12((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar91 >> 8),
                                      CONCAT11(SUB41(fVar83,0) & ~(byte)iVar91,bVar56))));
  iVar73 = -(uint)(auVar29._0_4_ == 0.0);
  iVar76 = -(uint)(auVar29._4_4_ == 0.0);
  iVar85 = -(uint)(auVar29._8_4_ == 0.0);
  iVar91 = -(uint)(auVar29._12_4_ == 0.0);
  bVar36 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
  bVar37 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
  bVar39 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
  bVar40 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
  bVar42 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
  fVar9 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar11)));
  fVar31 = (float)(CONCAT17(bVar60,CONCAT16((byte)((uint)fVar3 >> 0x10) &
                                            ~(byte)((uint)iVar12 >> 0x10),
                                            CONCAT15((byte)((uint)fVar3 >> 8) &
                                                     ~(byte)((uint)iVar12 >> 8),
                                                     CONCAT14(SUB41(fVar3,0) & ~(byte)iVar12,fVar9))
                                           )) >> 0x20);
  fVar3 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   (short)(CONCAT12((byte)((uint)fVar32 >> 8) &
                                                    ~(byte)((uint)iVar14 >> 8),
                                                    CONCAT11(SUB41(fVar32,0) & ~(byte)iVar14,bVar60)
                                                   ) >> 8)));
  fVar2 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                          CONCAT12((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10),
                                   (short)(CONCAT12((byte)((uint)fVar57 >> 8) &
                                                    ~(byte)((uint)iVar95 >> 8),
                                                    CONCAT11(SUB41(fVar57,0) & ~(byte)iVar95,bVar44)
                                                   ) >> 8)));
  fVar32 = (float)(CONCAT17(bVar66,CONCAT16((byte)((uint)fVar58 >> 0x10) &
                                            ~(byte)((uint)iVar77 >> 0x10),
                                            CONCAT15((byte)((uint)fVar58 >> 8) &
                                                     ~(byte)((uint)iVar77 >> 8),
                                                     CONCAT14(SUB41(fVar58,0) & ~(byte)iVar77,fVar2)
                                                    ))) >> 0x20);
  uVar6 = CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar67 >> 8),
                   SUB41(fVar33,0) & ~(byte)iVar67);
  fVar33 = (float)((uint5)uVar20 >> 8);
  uVar17 = CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar73 >> 8),
                    SUB41(fVar34,0) & ~(byte)iVar73);
  uVar18 = CONCAT11((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar90 >> 8),
                    SUB41(fVar82,0) & ~(byte)iVar90);
  uVar19 = CONCAT11((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar76 >> 8),
                    SUB41(fVar38,0) & ~(byte)iVar76);
  fVar53 = (param_5[4] + *param_5) * 0.5;
  fVar57 = (param_5[5] + param_5[1]) * 0.5;
  fVar79 = (param_5[6] + param_5[2]) * 0.5;
  uVar1 = (undefined2)
          (CONCAT12((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar70 >> 8),
                    CONCAT11(SUB41(fVar49,0) & ~(byte)iVar70,bVar37)) >> 8);
  uVar5 = (undefined3)
          (CONCAT13((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                    CONCAT12((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar71 >> 8),
                             CONCAT11(SUB41(fVar54,0) & ~(byte)iVar71,bVar64))) >> 8);
  uVar7 = (undefined3)
          (CONCAT13((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10),
                    CONCAT12((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar85 >> 8),
                             CONCAT11(SUB41(fVar41,0) & ~(byte)iVar85,bVar40))) >> 8);
  fVar49 = param_5[4] - fVar53;
  fVar54 = param_5[5] - fVar57;
  fVar58 = param_5[6] - fVar79;
  fVar34 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar4,0) & ~(byte)iVar16))) +
           fVar9 * fVar53 + fVar31 * fVar57 + fVar3 * fVar79 +
           ABS(fVar9) * fVar49 + ABS(fVar31) * fVar54 + ABS(fVar3) * fVar58;
  fVar38 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar78 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar78))) +
           fVar15 * fVar53 + fVar48 * fVar57 + fVar32 * fVar79 +
           ABS(fVar15) * fVar49 + ABS(fVar48) * fVar54 + ABS(fVar32) * fVar58;
  fVar41 = fVar53 * 0.0 + fVar57 * 0.0 + fVar79 * 0.0 + 0.0 +
           fVar49 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0;
  auVar35._0_4_ =
       (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                       CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar72 >> 8),
                                         SUB41(fVar8,0) & ~(byte)iVar72))) +
       (float)CONCAT13(bVar62,CONCAT12(bVar61,uVar6)) * fVar53 +
       (float)CONCAT13(bVar64,CONCAT12(bVar63,uVar1)) * fVar57 +
       (float)CONCAT13(bVar65,uVar5) * fVar79 +
       ABS((float)CONCAT13(bVar62,CONCAT12(bVar61,uVar6))) * fVar49 +
       ABS((float)CONCAT13(bVar64,CONCAT12(bVar63,uVar1))) * fVar54 +
       ABS((float)CONCAT13(bVar65,uVar5)) * fVar58;
  auVar35._4_4_ =
       (float)(CONCAT18((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                        CONCAT17((byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                                 CONCAT16((byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                          CONCAT15(SUB41(fVar84,0) & ~(byte)iVar92,uVar20)))) >>
              0x28) +
       (float)CONCAT13(bVar52,CONCAT12(bVar51,uVar47)) * fVar53 +
       (float)CONCAT13(bVar56,CONCAT12(bVar55,uVar18)) * fVar57 + fVar33 * fVar79 +
       ABS((float)CONCAT13(bVar52,CONCAT12(bVar51,uVar47))) * fVar49 +
       ABS((float)CONCAT13(bVar56,CONCAT12(bVar55,uVar18))) * fVar54 + ABS(fVar33) * fVar58;
  auVar35._8_4_ =
       (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                       CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10),
                                CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar91 >> 8),
                                         SUB41(fVar43,0) & ~(byte)iVar91))) +
       (float)CONCAT13(bVar37,CONCAT12(bVar36,uVar17)) * fVar53 +
       (float)CONCAT13(bVar40,CONCAT12(bVar39,uVar19)) * fVar57 +
       (float)CONCAT13(bVar42,uVar7) * fVar79 +
       ABS((float)CONCAT13(bVar37,CONCAT12(bVar36,uVar17))) * fVar49 +
       ABS((float)CONCAT13(bVar40,CONCAT12(bVar39,uVar19))) * fVar54 +
       ABS((float)CONCAT13(bVar42,uVar7)) * fVar58;
  auVar35._12_4_ =
       fVar53 * 0.0 + fVar57 * 0.0 + fVar79 * 0.0 + 0.0 + fVar49 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0
  ;
  auVar68[4] = SUB41(fVar34,0);
  auVar68._0_4_ =
       (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                       CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10),
                                (short)(CONCAT12((byte)((uint)fVar59 >> 8) &
                                                 ~(byte)((uint)iVar96 >> 8),
                                                 CONCAT11(SUB41(fVar59,0) & ~(byte)iVar96,bVar66))
                                       >> 8))) + fVar13 * fVar53 + fVar30 * fVar57 + fVar2 * fVar79
       + ABS(fVar13) * fVar49 + ABS(fVar30) * fVar54 + ABS(fVar2) * fVar58;
  auVar68[5] = (char)((uint)fVar34 >> 8);
  auVar68[6] = (char)((uint)fVar34 >> 0x10);
  auVar68[7] = (char)((uint)fVar34 >> 0x18);
  auVar68[8] = SUB41(fVar38,0);
  auVar68[9] = (char)((uint)fVar38 >> 8);
  auVar68[10] = (char)((uint)fVar38 >> 0x10);
  auVar68[0xb] = (char)((uint)fVar38 >> 0x18);
  auVar68[0xc] = SUB41(fVar41,0);
  auVar68[0xd] = (char)((uint)fVar41 >> 8);
  auVar68[0xe] = (char)((uint)fVar41 >> 0x10);
  auVar68[0xf] = (char)((uint)fVar41 >> 0x18);
  auVar68 = NEON_fmin(auVar68,auVar35,4);
  if ((0.0 <= auVar68._0_4_) && (0.0 <= auVar68._4_4_)) {
    return 0.0 <= auVar68._8_4_;
  }
  return false;
}


