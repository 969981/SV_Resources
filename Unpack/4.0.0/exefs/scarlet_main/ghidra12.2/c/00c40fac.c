/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c40fac; name: FUN_00c40fac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c40fac(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar34;
  float fVar36;
  int iVar30;
  int iVar35;
  int iVar37;
  float fVar38;
  int iVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  undefined1 auVar48 [16];
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  float fVar57;
  float fVar58;
  undefined1 in_q16 [16];
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar56 [16];
  float fVar60;
  float fVar61;
  float fVar63;
  undefined1 auVar62 [16];
  float fVar64;
  undefined1 auVar65 [16];
  float fVar66;
  float fVar72;
  float fVar73;
  undefined1 in_q22 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar82;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  float fVar85;
  float fVar91;
  float fVar92;
  undefined1 in_q25 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
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
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  fStack_58 = param_2._8_4_;
  fStack_54 = param_2._12_4_;
  lVar18 = *(long *)(param_5 + 0x38);
  fStack_48 = param_4._8_4_;
  fStack_44 = param_4._12_4_;
  FUN_00c41540(lVar18);
  local_70 = param_1._0_4_;
  fStack_6c = param_1._4_4_;
  fStack_68 = param_1._8_4_;
  fStack_64 = param_1._12_4_;
  fVar102 = param_2._0_4_;
  fVar29 = param_2._4_4_;
  *(long *)(lVar18 + 0x94) = param_2._8_8_;
  *(long *)(lVar18 + 0x8c) = param_2._0_8_;
  fVar27 = param_4._0_4_;
  fVar34 = param_4._4_4_;
  local_40 = param_3._0_4_;
  fStack_3c = param_3._4_4_;
  fStack_38 = param_3._8_4_;
  fStack_34 = param_3._12_4_;
  auVar25 = *(undefined1 (*) [16])(lVar18 + 0xdc);
  auVar26._4_12_ = in_q22._4_12_;
  auVar26._0_4_ = fStack_64;
  auVar28._12_4_ = in_q22._12_4_;
  auVar28._0_8_ = auVar26._0_8_;
  auVar28._8_4_ = fStack_34;
  auVar67._8_8_ = auVar28._8_8_;
  auVar67._4_4_ = fStack_54;
  auVar67._0_4_ = fStack_64;
  auVar65._0_12_ = auVar67._0_12_;
  auVar65._12_4_ = fStack_44;
  *(float *)(lVar18 + 0xa4) = fStack_38;
  *(float *)(lVar18 + 0xa8) = fStack_34;
  *(float *)(lVar18 + 0x9c) = local_40;
  *(float *)(lVar18 + 0xa0) = fStack_3c;
  auVar26 = *(undefined1 (*) [16])(lVar18 + 0xbc);
  auVar28 = *(undefined1 (*) [16])(lVar18 + 0xcc);
  auVar48._4_4_ = fVar102;
  auVar48._0_4_ = fVar102;
  auVar48._8_4_ = fVar102;
  auVar48._12_4_ = fVar102;
  auVar90._4_12_ = in_q16._4_12_;
  auVar90._0_4_ = local_70;
  auVar62._12_4_ = in_q16._12_4_;
  auVar62._0_8_ = auVar90._0_8_;
  auVar62._8_4_ = local_40;
  auVar81._8_8_ = auVar62._8_8_;
  auVar81._4_4_ = local_70;
  auVar81._0_4_ = local_70;
  auVar55._0_12_ = auVar81._0_12_;
  auVar55._12_4_ = local_40;
  auVar80._4_4_ = fVar29;
  auVar80._0_4_ = fVar29;
  auVar80._8_4_ = fVar29;
  auVar80._12_4_ = fVar29;
  auVar86._4_12_ = in_q25._4_12_;
  auVar86._0_4_ = fStack_6c;
  auVar88._12_4_ = in_q25._12_4_;
  auVar88._0_8_ = auVar86._0_8_;
  auVar88._8_4_ = fStack_3c;
  auVar87._8_8_ = auVar88._8_8_;
  auVar87._4_4_ = fStack_6c;
  auVar87._0_4_ = fStack_6c;
  auVar89._0_12_ = auVar87._0_12_;
  auVar89._12_4_ = fStack_3c;
  *(float *)(lVar18 + 0x84) = fStack_68;
  *(float *)(lVar18 + 0x88) = fStack_64;
  *(float *)(lVar18 + 0x7c) = local_70;
  *(float *)(lVar18 + 0x80) = fStack_6c;
  *(long *)(lVar18 + 0xb4) = param_4._8_8_;
  *(long *)(lVar18 + 0xac) = param_4._0_8_;
  if ((fStack_44 == 1.0) &&
     (auVar20._0_4_ = fStack_64 * fStack_64 + fStack_54 * fStack_54,
     auVar20._4_4_ = fStack_34 * fStack_34 + 0.0,
     auVar20._8_4_ = fStack_64 * fStack_64 + fStack_54 * fStack_54,
     auVar20._12_4_ = fStack_34 * fStack_34 + 0.0, auVar62 = NEON_ext(auVar20,auVar20,4,1),
     auVar62._0_4_ + auVar62._4_4_ == 0.0)) {
    auVar9._4_4_ = fStack_58;
    auVar9._0_4_ = fStack_58;
    auVar9._8_4_ = fStack_58;
    auVar9._12_4_ = fStack_58;
    auVar11._4_4_ = fStack_68;
    auVar11._0_4_ = fStack_68;
    auVar11._8_4_ = fStack_38;
    auVar11._12_4_ = fStack_38;
    auVar90 = NEON_ext(auVar11,auVar9,8,1);
    auVar65 = NEON_ext(auVar89,auVar80,8,1);
    auVar62 = NEON_ext(auVar55,auVar48,8,1);
    fVar43 = (fVar29 * auVar90._0_4_ - auVar65._0_4_ * fStack_58) * (float)_DAT_03cac270;
    fVar52 = (float)((ulong)_DAT_03cac270 >> 0x20);
    fVar44 = (fStack_6c * auVar90._4_4_ - auVar65._4_4_ * fStack_68) * fVar52;
    fVar63 = (fStack_6c * auVar90._8_4_ - auVar65._8_4_ * fStack_68) * (float)_UNK_03cac278;
    fVar53 = (float)((ulong)_UNK_03cac278 >> 0x20);
    fVar64 = (fStack_6c * auVar90._12_4_ - auVar65._12_4_ * fStack_68) * fVar53;
    fVar36 = local_70 * fVar43;
    fVar38 = fVar102 * fVar44;
    local_40 = local_40 * fVar63;
    fVar40 = fVar64 * 0.0;
    auVar23._0_4_ = fVar36 + fVar38;
    auVar23._4_4_ = local_40 + fVar40;
    auVar23._8_4_ = fVar36 + fVar38;
    auVar23._12_4_ = local_40 + fVar40;
    auVar48 = NEON_ext(auVar23,auVar23,4,1);
    auVar24._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar24._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar24._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar24._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frecpe(auVar24,4);
    iVar30 = -(uint)(auVar24._0_4_ == 0.0);
    iVar35 = -(uint)(auVar24._4_4_ == 0.0);
    iVar37 = -(uint)(auVar24._8_4_ == 0.0);
    iVar39 = -(uint)(auVar24._12_4_ == 0.0);
    auVar47[0] = ~(byte)iVar30;
    auVar47[1] = ~(byte)((uint)iVar30 >> 8);
    auVar47[2] = ~(byte)((uint)iVar30 >> 0x10);
    auVar47[3] = ~(byte)((uint)iVar30 >> 0x18);
    auVar47[4] = ~(byte)iVar35;
    auVar47[5] = ~(byte)((uint)iVar35 >> 8);
    auVar47[6] = ~(byte)((uint)iVar35 >> 0x10);
    auVar47[7] = ~(byte)((uint)iVar35 >> 0x18);
    auVar47[8] = ~(byte)iVar37;
    auVar47[9] = ~(byte)((uint)iVar37 >> 8);
    auVar47[10] = ~(byte)((uint)iVar37 >> 0x10);
    auVar47[0xb] = ~(byte)((uint)iVar37 >> 0x18);
    auVar47[0xc] = ~(byte)iVar39;
    auVar47[0xd] = ~(byte)((uint)iVar39 >> 8);
    auVar47[0xe] = ~(byte)((uint)iVar39 >> 0x10);
    auVar47[0xf] = ~(byte)((uint)iVar39 >> 0x18);
    auVar81 = NEON_frecps(auVar48,auVar24,4);
    auVar50._0_4_ = auVar48._0_4_ * auVar81._0_4_;
    auVar50._4_4_ = auVar48._4_4_ * auVar81._4_4_;
    auVar50._8_4_ = auVar48._8_4_ * auVar81._8_4_;
    auVar50._12_4_ = auVar48._12_4_ * auVar81._12_4_;
    auVar48 = NEON_frecps(auVar50,auVar24,4);
    fVar36 = auVar50._0_4_ * auVar48._0_4_;
    fVar38 = auVar50._4_4_ * auVar48._4_4_;
    fVar40 = auVar50._8_4_ * auVar48._8_4_;
    fVar42 = auVar50._12_4_ * auVar48._12_4_;
    auVar51._0_4_ = fVar43 * fVar36;
    auVar51._4_4_ = fVar44 * fVar38;
    auVar51._8_4_ = fVar63 * fVar40;
    auVar51._12_4_ = fVar64 * fVar42;
    auVar33._0_4_ =
         (fVar102 * auVar65._0_4_ - auVar62._0_4_ * fVar29) * (float)_DAT_03cac270 * fVar36;
    auVar33._4_4_ = (local_70 * auVar65._4_4_ - auVar62._4_4_ * fStack_6c) * fVar52 * fVar38;
    auVar33._8_4_ =
         (local_70 * auVar65._8_4_ - auVar62._8_4_ * fStack_6c) * (float)_UNK_03cac278 * fVar40;
    auVar33._12_4_ = (local_70 * auVar65._12_4_ - auVar62._12_4_ * fStack_6c) * fVar53 * fVar42;
    auVar26 = auVar26 ^ (auVar26 ^ auVar51) & auVar47;
    auVar25 = auVar25 ^ (auVar25 ^ auVar33) & auVar47;
    auVar6._4_4_ = (local_70 * auVar90._4_4_ - auVar62._4_4_ * fStack_68) *
                   (float)((ulong)_DAT_03cab860 >> 0x20) * fVar38;
    auVar6._0_4_ = (fVar102 * auVar90._0_4_ - auVar62._0_4_ * fStack_58) * (float)_DAT_03cab860 *
                   fVar36;
    auVar6._8_4_ = (local_70 * auVar90._8_4_ - auVar62._8_4_ * fStack_68) * (float)_UNK_03cab868 *
                   fVar40;
    auVar6._12_4_ =
         (local_70 * auVar90._12_4_ - auVar62._12_4_ * fStack_68) *
         (float)((ulong)_UNK_03cab868 >> 0x20) * fVar42;
    auVar28 = auVar28 ^ (auVar28 ^ auVar6) & auVar47;
    auVar32._0_4_ = -(auVar26._0_4_ * fVar27 + auVar28._0_4_ * fVar34 + auVar25._0_4_ * fStack_48);
    auVar32._4_4_ = -(auVar26._4_4_ * fVar27 + auVar28._4_4_ * fVar34 + auVar25._4_4_ * fStack_48);
    auVar32._8_4_ = -(auVar26._8_4_ * fVar27 + auVar28._8_4_ * fVar34 + auVar25._8_4_ * fStack_48);
    auVar32._12_4_ = 0x3f800000;
  }
  else {
    auVar81 = NEON_ext(auVar89,auVar80,8,1);
    auVar8._4_4_ = fStack_58;
    auVar8._0_4_ = fStack_58;
    auVar8._8_4_ = fStack_58;
    auVar8._12_4_ = fStack_58;
    auVar10._4_4_ = fStack_68;
    auVar10._0_4_ = fStack_68;
    auVar10._8_4_ = fStack_38;
    auVar10._12_4_ = fStack_38;
    auVar90 = NEON_ext(auVar10,auVar8,8,1);
    auVar68._4_12_ = auVar65._4_12_;
    auVar68._0_4_ = fStack_64;
    auVar70._0_8_ = auVar68._0_8_;
    auVar70._8_4_ = fStack_34;
    auVar70._12_4_ = fStack_44;
    auVar69._8_8_ = auVar70._8_8_;
    auVar69._4_4_ = fStack_64;
    auVar69._0_4_ = fStack_64;
    auVar71._0_12_ = auVar69._0_12_;
    auVar71._12_4_ = fStack_34;
    auVar7._4_4_ = fStack_54;
    auVar7._0_4_ = fStack_54;
    auVar7._8_4_ = fStack_54;
    auVar7._12_4_ = fStack_54;
    auVar62 = NEON_ext(auVar71,auVar7,8,1);
    fVar85 = auVar90._0_4_;
    fVar91 = auVar90._4_4_;
    fVar92 = auVar90._8_4_;
    fVar93 = auVar90._12_4_;
    fVar66 = auVar62._0_4_;
    fVar72 = auVar62._4_4_;
    fVar73 = auVar62._8_4_;
    fVar74 = auVar62._12_4_;
    fVar94 = fStack_44 * fVar85 - fStack_48 * fVar66;
    fVar95 = fStack_44 * fVar91 - fStack_48 * fVar72;
    fVar96 = fStack_44 * fVar92 - fStack_48 * fVar73;
    fVar97 = fStack_34 * fVar93 - fStack_38 * fVar74;
    fVar75 = fStack_48 * fStack_54 - fStack_58 * fStack_44;
    fVar76 = fStack_48 * fStack_64 - fStack_68 * fStack_44;
    fVar77 = fStack_48 * fStack_64 - fStack_68 * fStack_44;
    fVar78 = fStack_38 * fStack_64 - fStack_68 * fStack_34;
    auVar48 = NEON_ext(auVar55,auVar48,8,1);
    fVar98 = fStack_58 * fVar66 - fVar85 * fStack_54;
    fVar99 = fStack_68 * fVar72 - fVar91 * fStack_64;
    fVar100 = fStack_68 * fVar73 - fVar92 * fStack_64;
    fVar101 = fStack_68 * fVar74 - fVar93 * fStack_64;
    fVar108 = (float)((ulong)_UNK_03cabc08 >> 0x20);
    fVar107 = (float)((ulong)_DAT_03cabc00 >> 0x20);
    fVar36 = auVar81._0_4_;
    fVar38 = auVar81._4_4_;
    fVar40 = auVar81._8_4_;
    fVar42 = auVar81._12_4_;
    fVar63 = auVar48._0_4_;
    fVar64 = auVar48._4_4_;
    fVar52 = auVar48._8_4_;
    fVar53 = auVar48._12_4_;
    fVar54 = fVar34 * fVar63 - fVar27 * fVar36;
    fVar57 = fVar34 * fVar64 - fVar27 * fVar38;
    fVar58 = fVar34 * fVar52 - fVar27 * fVar40;
    fVar59 = fStack_3c * fVar53 - local_40 * fVar42;
    fVar79 = fVar102 * fVar36 - fVar63 * fVar29;
    fVar82 = local_70 * fVar38 - fVar64 * fStack_6c;
    fVar83 = local_70 * fVar40 - fVar52 * fStack_6c;
    fVar84 = local_70 * fVar42 - fVar53 * fStack_6c;
    fVar103 = (fVar29 * fVar94 + fVar75 * fVar36 + fVar98 * fVar34) * (float)_DAT_03cabc00;
    fVar104 = (fStack_6c * fVar95 + fVar76 * fVar38 + fVar99 * fVar34) * fVar107;
    fVar105 = (fStack_6c * fVar96 + fVar77 * fVar40 + fVar100 * fVar34) * (float)_UNK_03cabc08;
    fVar106 = (fStack_6c * fVar97 + fVar78 * fVar42 + fVar101 * fStack_3c) * fVar108;
    fVar40 = fVar27 * fVar29 - fVar102 * fVar34;
    fVar42 = fVar27 * fStack_6c - local_70 * fVar34;
    fVar43 = fVar27 * fStack_6c - local_70 * fVar34;
    fVar44 = local_40 * fStack_6c - local_70 * fStack_3c;
    fVar29 = local_70 * fVar103;
    fVar34 = fVar102 * fVar104;
    fVar36 = local_40 * fVar105;
    fVar38 = fVar27 * fVar106;
    auVar21._0_4_ = fVar29 + fVar34;
    auVar21._4_4_ = fVar36 + fVar38;
    auVar21._8_4_ = fVar29 + fVar34;
    auVar21._12_4_ = fVar36 + fVar38;
    auVar48 = NEON_ext(auVar21,auVar21,4,1);
    auVar22._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar22._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar22._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar22._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frecpe(auVar22,4);
    auVar62 = NEON_frecps(auVar48,auVar22,4);
    fVar60 = (float)((ulong)_DAT_03cac210 >> 0x20);
    fVar61 = (float)((ulong)_UNK_03cac218 >> 0x20);
    auVar45._0_4_ = auVar48._0_4_ * auVar62._0_4_;
    auVar45._4_4_ = auVar48._4_4_ * auVar62._4_4_;
    auVar45._8_4_ = auVar48._8_4_ * auVar62._8_4_;
    auVar45._12_4_ = auVar48._12_4_ * auVar62._12_4_;
    auVar48 = NEON_frecps(auVar45,auVar22,4);
    iVar30 = -(uint)(auVar22._0_4_ == 0.0);
    iVar35 = -(uint)(auVar22._4_4_ == 0.0);
    iVar37 = -(uint)(auVar22._8_4_ == 0.0);
    iVar39 = -(uint)(auVar22._12_4_ == 0.0);
    auVar31[0] = ~(byte)iVar30;
    auVar31[1] = ~(byte)((uint)iVar30 >> 8);
    auVar31[2] = ~(byte)((uint)iVar30 >> 0x10);
    auVar31[3] = ~(byte)((uint)iVar30 >> 0x18);
    auVar31[4] = ~(byte)iVar35;
    auVar31[5] = ~(byte)((uint)iVar35 >> 8);
    auVar31[6] = ~(byte)((uint)iVar35 >> 0x10);
    auVar31[7] = ~(byte)((uint)iVar35 >> 0x18);
    auVar31[8] = ~(byte)iVar37;
    auVar31[9] = ~(byte)((uint)iVar37 >> 8);
    auVar31[10] = ~(byte)((uint)iVar37 >> 0x10);
    auVar31[0xb] = ~(byte)((uint)iVar37 >> 0x18);
    auVar31[0xc] = ~(byte)iVar39;
    auVar31[0xd] = ~(byte)((uint)iVar39 >> 8);
    auVar31[0xe] = ~(byte)((uint)iVar39 >> 0x10);
    auVar31[0xf] = ~(byte)((uint)iVar39 >> 0x18);
    fVar29 = auVar45._0_4_ * auVar48._0_4_;
    fVar34 = auVar45._4_4_ * auVar48._4_4_;
    fVar36 = auVar45._8_4_ * auVar48._8_4_;
    fVar38 = auVar45._12_4_ * auVar48._12_4_;
    auVar46._0_4_ = fVar103 * fVar29;
    auVar46._4_4_ = fVar104 * fVar34;
    auVar46._8_4_ = fVar105 * fVar36;
    auVar46._12_4_ = fVar106 * fVar38;
    auVar49._0_4_ =
         (fVar102 * fVar94 + fVar75 * fVar63 + fVar98 * fVar27) * (float)_DAT_03cac210 * fVar29;
    auVar49._4_4_ = (local_70 * fVar95 + fVar76 * fVar64 + fVar99 * fVar27) * fVar60 * fVar34;
    auVar49._8_4_ =
         (local_70 * fVar96 + fVar77 * fVar52 + fVar100 * fVar27) * (float)_UNK_03cac218 * fVar36;
    auVar49._12_4_ = (local_70 * fVar97 + fVar78 * fVar53 + fVar101 * local_40) * fVar61 * fVar38;
    auVar56._0_4_ =
         (fStack_54 * fVar54 + fVar40 * fVar66 + fVar79 * fStack_44) * (float)_DAT_03cabc00 * fVar29
    ;
    auVar56._4_4_ = (fStack_64 * fVar57 + fVar42 * fVar72 + fVar82 * fStack_44) * fVar107 * fVar34;
    auVar56._8_4_ =
         (fStack_64 * fVar58 + fVar43 * fVar73 + fVar83 * fStack_44) * (float)_UNK_03cabc08 * fVar36
    ;
    auVar56._12_4_ = (fStack_64 * fVar59 + fVar44 * fVar74 + fVar84 * fStack_34) * fVar108 * fVar38;
    auVar41._0_4_ =
         (fStack_58 * fVar54 + fVar40 * fVar85 + fVar79 * fStack_48) * (float)_DAT_03cac210 * fVar29
    ;
    auVar41._4_4_ = (fStack_68 * fVar57 + fVar42 * fVar91 + fVar82 * fStack_48) * fVar60 * fVar34;
    auVar41._8_4_ =
         (fStack_68 * fVar58 + fVar43 * fVar92 + fVar83 * fStack_48) * (float)_UNK_03cac218 * fVar36
    ;
    auVar41._12_4_ = (fStack_68 * fVar59 + fVar44 * fVar93 + fVar84 * fStack_38) * fVar61 * fVar38;
    auVar26 = auVar26 ^ (auVar26 ^ auVar46) & auVar31;
    auVar28 = auVar28 ^ (auVar28 ^ auVar49) & auVar31;
    auVar25 = auVar25 ^ (auVar25 ^ auVar56) & auVar31;
    auVar32 = *(undefined1 (*) [16])(lVar18 + 0xec) ^
              (*(undefined1 (*) [16])(lVar18 + 0xec) ^ auVar41) & auVar31;
  }
  *(long *)(lVar18 + 0xc4) = auVar26._8_8_;
  *(long *)(lVar18 + 0xbc) = auVar26._0_8_;
  *(long *)(lVar18 + 0xd4) = auVar28._8_8_;
  *(long *)(lVar18 + 0xcc) = auVar28._0_8_;
  *(long *)(lVar18 + 0xe4) = auVar25._8_8_;
  *(long *)(lVar18 + 0xdc) = auVar25._0_8_;
  *(long *)(lVar18 + 0xf4) = auVar32._8_8_;
  *(long *)(lVar18 + 0xec) = auVar32._0_8_;
  *(undefined8 *)(lVar18 + 0x13c) = *(undefined8 *)(lVar18 + 0x18c);
  *(undefined8 *)(lVar18 + 0x144) = *(undefined8 *)(lVar18 + 0x194);
  if ((((0.0 < *(float *)(lVar18 + 0x110)) || (0.0 < *(float *)(lVar18 + 0x148))) ||
      (0.0 < *(float *)(lVar18 + 0x178))) || (-1 < *(int *)(lVar18 + 0x180))) {
    do {
      uVar2 = DAT_0485ac18 + 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x485ac18,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        DAT_0485ac18 = uVar2;
      }
    } while (cVar4 != '\0');
    if (uVar2 < 0x1000) {
      *(uint *)(lVar18 + 0x130) = uVar2;
      lVar12 = DAT_0485ac08;
      FUN_00c41540(DAT_0485ac08);
      fVar29 = *(float *)(lVar18 + 0x13c);
      fVar27 = *(float *)(lVar18 + 0x140);
      fVar34 = *(float *)(lVar18 + 0x144);
      fVar102 = fVar27;
      if (fVar27 <= fVar29) {
        fVar102 = fVar29;
      }
      fVar36 = fVar34;
      if (fVar34 <= fVar102) {
        fVar36 = fVar102;
      }
      lVar12 = *(long *)(lVar12 + 0x88);
      puVar1 = (uint *)(lVar12 + (ulong)uVar2 * 0x10);
      puVar1[2] = (int)((fVar29 / fVar36) * 255.0) << 0x18 |
                  ((int)((fVar27 / fVar36) * 255.0) & 0xffU) << 0x10 |
                  (int)(*(float *)(lVar18 + 0x148) * 255.0) & 0xffU |
                  ((int)((fVar34 / fVar36) * 255.0) & 0xffU) << 8;
      *puVar1 = (int)(*(float *)(lVar18 + 0x14c) * 255.0) << 0x18 |
                ((int)(*(float *)(lVar18 + 0x150) * 255.0) & 0xffU) << 0x10 |
                ((int)(*(float *)(lVar18 + 0x154) * 255.0) & 0xffU) << 8 |
                (int)(*(float *)(lVar18 + 0x158) * 255.0) & 0xffU;
      uVar3 = *(uint *)(lVar18 + 0x110);
      uVar13 = uVar3 & 0x7fffff;
      uVar14 = uVar3 >> 0x17 & 0xff;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 < 0x90) {
        iVar30 = uVar14 - 0x70;
        if (uVar14 < 0x70) {
          uVar13 = 0;
          iVar30 = 0;
        }
        uVar14 = iVar30 << 10;
      }
      else {
        uVar13 = 0;
        uVar14 = 0x7c00;
      }
      uVar17 = *(uint *)(lVar18 + 0x15c);
      uVar15 = uVar17 & 0x7fffff;
      uVar16 = uVar17 >> 0x17 & 0xff;
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      else if (uVar16 < 0x90) {
        iVar30 = uVar16 - 0x70;
        if (uVar16 < 0x70) {
          uVar15 = 0;
          iVar30 = 0;
        }
        uVar16 = iVar30 << 10;
      }
      else {
        uVar15 = 0;
        uVar16 = 0x7c00;
      }
      *(uint *)(lVar12 + (ulong)uVar2 * 0x10 + 4) =
           uVar14 & 0xffff | uVar3 >> 0x10 & 0x8000 | uVar13 >> 0xd |
           (uVar16 & 0xffff | uVar17 >> 0x10 & 0x8000 | uVar15 >> 0xd) << 0x10;
      uVar3 = *(uint *)(lVar18 + 0x118);
      uVar13 = uVar3 & 0x7fffff;
      uVar14 = uVar3 >> 0x17 & 0xff;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 < 0x90) {
        iVar30 = uVar14 - 0x70;
        if (uVar14 < 0x70) {
          uVar13 = 0;
          iVar30 = 0;
        }
        uVar14 = iVar30 << 10;
      }
      else {
        uVar13 = 0;
        uVar14 = 0x7c00;
      }
      uVar15 = (uint)fVar36 & 0x7fffff;
      uVar17 = (uint)fVar36 >> 0x17 & 0xff;
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else if (uVar17 < 0x90) {
        iVar30 = uVar17 - 0x70;
        if (uVar17 < 0x70) {
          uVar15 = 0;
          iVar30 = 0;
        }
        uVar17 = iVar30 << 10;
      }
      else {
        uVar15 = 0;
        uVar17 = 0x7c00;
      }
      lVar19 = (ulong)uVar2 * 0x10;
      *(uint *)(lVar12 + lVar19 + 0xc) =
           uVar14 & 0xffff | uVar3 >> 0x10 & 0x8000 | uVar13 >> 0xd |
           (uVar17 & 0xffff | (uint)fVar36 >> 0x10 & 0x8000 | uVar15 >> 0xd) << 0x10;
      lVar12 = DAT_0485ac10;
      FUN_00c41540(DAT_0485ac10);
      *(undefined4 *)(*(long *)(lVar12 + 0x88) + lVar19 + 4) = *(undefined4 *)(lVar18 + 0x180);
      return;
    }
  }
  *(undefined4 *)(lVar18 + 0x130) = 0;
  return;
}


