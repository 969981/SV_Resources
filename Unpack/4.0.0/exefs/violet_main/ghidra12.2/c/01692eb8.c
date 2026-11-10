/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01692eb8; name: FUN_01692eb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01692eb8(long param_1)

{
  char cVar1;
  byte bVar2;
  void *__src;
  short *psVar3;
  int *piVar4;
  undefined2 *puVar5;
  uint uVar6;
  void *__dest;
  short sVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  size_t sVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined1 (*pauVar30) [16];
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint uVar36;
  long lVar37;
  ushort *puVar38;
  ushort uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  short sVar42;
  long lVar43;
  undefined8 *puVar44;
  long lVar45;
  undefined8 *puVar46;
  ushort *puVar47;
  long *plVar48;
  long *plVar49;
  ushort *puVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar60;
  int iVar61;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar63;
  float fVar64;
  int iVar65;
  int iVar67;
  int iVar68;
  undefined1 auVar66 [16];
  int iVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [12];
  float fVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [12];
  float fVar91;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar92;
  float fVar96;
  float fVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar98;
  undefined4 unaff_s9;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar107;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 local_160;
  uint local_140;
  undefined4 uStack_13c;
  undefined2 local_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_b8;
  undefined8 local_98;
  uint local_90 [4];
  
  uVar18 = _UNK_03cac218;
  uVar17 = _DAT_03cac210;
  uVar16 = _UNK_03cabb08;
  uVar15 = _DAT_03cabb00;
  uVar35 = _UNK_03cab3a8;
  uVar34 = _DAT_03cab3a0;
  if (*(long *)(param_1 + 0x40) != 0) {
    __dest = *(void **)(param_1 + 200);
    if (__dest != *(void **)(param_1 + 0xd0)) {
      auVar57 = NEON_fmov(0x3f800000,4);
      __src = (void *)((long)__dest + 2);
      auVar58 = NEON_fmov(0x40800000,4);
      do {
        FUN_016957dc(&local_140,param_1,__dest);
        uVar25 = local_c8;
        uVar24 = local_d0;
        uVar23 = local_f8;
        uVar22 = local_fc;
        uVar56 = local_100;
        uVar107 = local_108;
        uVar21 = local_10a;
        uVar20 = local_10c;
        uVar54 = local_110;
        uVar33 = local_118;
        uVar19 = local_130;
        if ((((char)local_140 == '\0') || (local_b8 == (undefined8 *)0x0)) || (local_b8[2] == 0)) {
          sVar11 = *(long *)(param_1 + 0xd0) - (long)__src;
          if (sVar11 != 0) {
            memmove(__dest,__src,sVar11);
          }
          *(size_t *)(param_1 + 0xd0) = (long)__dest + sVar11;
          iVar28 = 3;
        }
        else {
          plVar48 = (long *)(local_b8[2] + -0x28);
          lVar37 = (**(code **)(*plVar48 + 0x68))(plVar48);
          auVar12 = *(undefined1 (*) [16])(lVar37 + 0x30);
          pauVar30 = (undefined1 (*) [16])(**(code **)(*plVar48 + 0x68))(plVar48);
          auVar59 = *pauVar30;
          uVar13 = *(undefined8 *)pauVar30[1];
          uVar14 = *(undefined8 *)(pauVar30[1] + 8);
          auVar71 = pauVar30[2];
          FUN_016947d8(&local_160);
          puVar44 = local_160;
          if (local_160 == (undefined8 *)0x0) {
            uVar33 = 0;
            lVar37 = 0;
          }
          else {
            uVar32 = local_160[2];
            lVar37 = local_160[3];
            if (lVar37 + 1U <= uVar32) {
              *(undefined1 *)(local_160[1] + lVar37) = 1;
              uVar32 = local_160[2];
              lVar37 = local_160[3] + 1;
              local_160[3] = lVar37;
            }
            if (lVar37 + 0x62U <= uVar32) {
              *(undefined1 *)(local_160[1] + lVar37) = 0xbc;
              local_160[3] = local_160[3] + 1;
              local_98 = 0x60;
              FUN_0111b0ac(local_90,&local_98,local_160 + 1);
              if (local_90[0] == 0) {
                local_210 = auVar59._0_4_;
                fStack_20c = auVar59._4_4_;
                fStack_208 = auVar59._8_4_;
                fStack_204 = auVar59._12_4_;
                fStack_200 = (float)uVar13;
                fStack_1fc = (float)((ulong)uVar13 >> 0x20);
                fStack_1f8 = (float)uVar14;
                fStack_1f4 = (float)((ulong)uVar14 >> 0x20);
                local_1f0 = auVar71._0_4_;
                fStack_1ec = auVar71._4_4_;
                fStack_1e8 = auVar71._8_4_;
                fStack_1e4 = auVar71._12_4_;
                auVar59._0_4_ = fStack_200 * fStack_200 + fStack_1fc * fStack_1fc;
                auVar59._4_4_ = fStack_1f8 * fStack_1f8 + fStack_1f4 * fStack_1f4;
                auVar59._8_4_ = fStack_200 * fStack_200 + fStack_1fc * fStack_1fc;
                auVar59._12_4_ = fStack_1f8 * fStack_1f8 + fStack_1f4 * fStack_1f4;
                auVar71._0_4_ = local_1f0 * local_1f0 + fStack_1ec * fStack_1ec;
                auVar71._4_4_ = fStack_1e8 * fStack_1e8 + fStack_1e4 * fStack_1e4;
                auVar71._8_4_ = local_1f0 * local_1f0 + fStack_1ec * fStack_1ec;
                auVar71._12_4_ = fStack_1e8 * fStack_1e8 + fStack_1e4 * fStack_1e4;
                auVar83._0_4_ = local_210 * local_210 + fStack_20c * fStack_20c;
                auVar83._4_4_ = fStack_208 * fStack_208 + fStack_204 * fStack_204;
                auVar83._8_4_ = local_210 * local_210 + fStack_20c * fStack_20c;
                auVar83._12_4_ = fStack_208 * fStack_208 + fStack_204 * fStack_204;
                auVar66 = NEON_ext(auVar59,auVar59,4,1);
                auVar71 = NEON_ext(auVar71,auVar71,4,1);
                auVar59 = NEON_ext(auVar83,auVar83,4,1);
                auVar52._0_4_ = auVar66._0_4_ + auVar66._4_4_;
                auVar52._4_4_ = auVar66._8_4_ + auVar66._12_4_;
                auVar52._8_4_ = auVar66._0_4_ + auVar66._4_4_;
                auVar52._12_4_ = auVar66._8_4_ + auVar66._12_4_;
                auVar66._0_4_ = auVar71._0_4_ + auVar71._4_4_;
                auVar66._4_4_ = auVar71._8_4_ + auVar71._12_4_;
                auVar66._8_4_ = auVar71._0_4_ + auVar71._4_4_;
                auVar66._12_4_ = auVar71._8_4_ + auVar71._12_4_;
                auVar53._0_4_ = auVar59._0_4_ + auVar59._4_4_;
                auVar53._4_4_ = auVar59._8_4_ + auVar59._12_4_;
                auVar53._8_4_ = auVar59._0_4_ + auVar59._4_4_;
                auVar53._12_4_ = auVar59._8_4_ + auVar59._12_4_;
                auVar83 = NEON_frsqrte(auVar52,4);
                puVar5 = (undefined2 *)(puVar44[1] + puVar44[3]);
                auVar93 = NEON_frsqrte(auVar66,4);
                auVar59 = NEON_frsqrte(auVar53,4);
                auVar86._0_4_ = auVar52._0_4_ * auVar83._0_4_;
                auVar86._4_4_ = auVar52._4_4_ * auVar83._4_4_;
                auVar86._8_4_ = auVar52._8_4_ * auVar83._8_4_;
                auVar86._12_4_ = auVar52._12_4_ * auVar83._12_4_;
                auVar79._0_4_ = auVar53._0_4_ * auVar59._0_4_;
                auVar79._4_4_ = auVar53._4_4_ * auVar59._4_4_;
                auVar79._8_4_ = auVar53._8_4_ * auVar59._8_4_;
                auVar79._12_4_ = auVar53._12_4_ * auVar59._12_4_;
                auVar71 = NEON_frsqrts(auVar59,auVar79,4);
                auVar75._0_4_ = auVar59._0_4_ * auVar71._0_4_;
                auVar75._4_4_ = auVar59._4_4_ * auVar71._4_4_;
                auVar75._8_4_ = auVar59._8_4_ * auVar71._8_4_;
                auVar75._12_4_ = auVar59._12_4_ * auVar71._12_4_;
                auVar59 = NEON_frsqrts(auVar83,auVar86,4);
                auVar87._0_4_ = auVar66._0_4_ * auVar93._0_4_;
                auVar87._4_4_ = auVar66._4_4_ * auVar93._4_4_;
                auVar87._8_4_ = auVar66._8_4_ * auVar93._8_4_;
                auVar87._12_4_ = auVar66._12_4_ * auVar93._12_4_;
                auVar99._0_4_ = auVar53._0_4_ * auVar75._0_4_;
                auVar99._4_4_ = auVar53._4_4_ * auVar75._4_4_;
                auVar99._8_4_ = auVar53._8_4_ * auVar75._8_4_;
                auVar99._12_4_ = auVar53._12_4_ * auVar75._12_4_;
                auVar80._0_4_ = auVar83._0_4_ * auVar59._0_4_;
                auVar80._4_4_ = auVar83._4_4_ * auVar59._4_4_;
                auVar80._8_4_ = auVar83._8_4_ * auVar59._8_4_;
                auVar80._12_4_ = auVar83._12_4_ * auVar59._12_4_;
                auVar59 = NEON_frsqrts(auVar93,auVar87,4);
                auVar71 = NEON_frsqrts(auVar75,auVar99,4);
                auVar100._0_4_ = auVar52._0_4_ * auVar80._0_4_;
                auVar100._4_4_ = auVar52._4_4_ * auVar80._4_4_;
                auVar100._8_4_ = auVar52._8_4_ * auVar80._8_4_;
                auVar100._12_4_ = auVar52._12_4_ * auVar80._12_4_;
                auVar84._0_4_ = auVar93._0_4_ * auVar59._0_4_;
                auVar84._4_4_ = auVar93._4_4_ * auVar59._4_4_;
                auVar84._8_4_ = auVar93._8_4_ * auVar59._8_4_;
                auVar84._12_4_ = auVar93._12_4_ * auVar59._12_4_;
                iVar65 = -(uint)(auVar52._0_4_ == 0.0);
                iVar67 = -(uint)(auVar52._4_4_ == 0.0);
                iVar68 = -(uint)(auVar52._8_4_ == 0.0);
                iVar69 = -(uint)(auVar52._12_4_ == 0.0);
                auVar59 = NEON_frsqrts(auVar80,auVar100,4);
                auVar94._0_4_ = auVar66._0_4_ * auVar84._0_4_;
                auVar94._4_4_ = auVar66._4_4_ * auVar84._4_4_;
                auVar94._8_4_ = auVar66._8_4_ * auVar84._8_4_;
                auVar94._12_4_ = auVar66._12_4_ * auVar84._12_4_;
                iVar28 = -(uint)(auVar53._0_4_ == 0.0);
                iVar29 = -(uint)(auVar53._4_4_ == 0.0);
                iVar61 = -(uint)(auVar53._8_4_ == 0.0);
                iVar63 = -(uint)(auVar53._12_4_ == 0.0);
                local_210 = local_210 * auVar75._0_4_ * auVar71._0_4_;
                fStack_20c = fStack_20c * auVar75._4_4_ * auVar71._4_4_;
                fStack_208 = fStack_208 * auVar75._8_4_ * auVar71._8_4_;
                fStack_204 = fStack_204 * auVar75._12_4_ * auVar71._12_4_;
                auVar71 = NEON_frsqrts(auVar84,auVar94,4);
                fStack_200 = fStack_200 * auVar80._0_4_ * auVar59._0_4_;
                fStack_1fc = fStack_1fc * auVar80._4_4_ * auVar59._4_4_;
                fStack_1f8 = fStack_1f8 * auVar80._8_4_ * auVar59._8_4_;
                fStack_1f4 = fStack_1f4 * auVar80._12_4_ * auVar59._12_4_;
                fVar92 = (float)CONCAT13((byte)((uint)local_210 >> 0x18) &
                                         ~(byte)((uint)iVar28 >> 0x18),
                                         CONCAT12((byte)((uint)local_210 >> 0x10) &
                                                  ~(byte)((uint)iVar28 >> 0x10),
                                                  CONCAT11((byte)((uint)local_210 >> 8) &
                                                           ~(byte)((uint)iVar28 >> 8),
                                                           SUB41(local_210,0) & ~(byte)iVar28)));
                auVar85._0_8_ =
                     CONCAT17((byte)((uint)fStack_20c >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                              CONCAT16((byte)((uint)fStack_20c >> 0x10) &
                                       ~(byte)((uint)iVar29 >> 0x10),
                                       CONCAT15((byte)((uint)fStack_20c >> 8) &
                                                ~(byte)((uint)iVar29 >> 8),
                                                CONCAT14(SUB41(fStack_20c,0) & ~(byte)iVar29,fVar92)
                                               )));
                auVar85[8] = SUB41(fStack_208,0) & ~(byte)iVar61;
                auVar85[9] = (byte)((uint)fStack_208 >> 8) & ~(byte)((uint)iVar61 >> 8);
                auVar85[10] = (byte)((uint)fStack_208 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
                auVar85[0xb] = (byte)((uint)fStack_208 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
                auVar88[0xc] = SUB41(fStack_204,0) & ~(byte)iVar63;
                auVar88._0_12_ = auVar85;
                auVar88[0xd] = (byte)((uint)fStack_204 >> 8) & ~(byte)((uint)iVar63 >> 8);
                auVar88[0xe] = (byte)((uint)fStack_204 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
                auVar88[0xf] = (byte)((uint)fStack_204 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
                iVar28 = -(uint)(auVar66._0_4_ == 0.0);
                iVar29 = -(uint)(auVar66._4_4_ == 0.0);
                iVar61 = -(uint)(auVar66._8_4_ == 0.0);
                fVar70 = (float)CONCAT13((byte)((uint)fStack_200 >> 0x18) &
                                         ~(byte)((uint)iVar65 >> 0x18),
                                         CONCAT12((byte)((uint)fStack_200 >> 0x10) &
                                                  ~(byte)((uint)iVar65 >> 0x10),
                                                  CONCAT11((byte)((uint)fStack_200 >> 8) &
                                                           ~(byte)((uint)iVar65 >> 8),
                                                           SUB41(fStack_200,0) & ~(byte)iVar65)));
                auVar72._0_8_ =
                     CONCAT17((byte)((uint)fStack_1fc >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                              CONCAT16((byte)((uint)fStack_1fc >> 0x10) &
                                       ~(byte)((uint)iVar67 >> 0x10),
                                       CONCAT15((byte)((uint)fStack_1fc >> 8) &
                                                ~(byte)((uint)iVar67 >> 8),
                                                CONCAT14(SUB41(fStack_1fc,0) & ~(byte)iVar67,fVar70)
                                               )));
                auVar72[8] = SUB41(fStack_1f8,0) & ~(byte)iVar68;
                auVar72[9] = (byte)((uint)fStack_1f8 >> 8) & ~(byte)((uint)iVar68 >> 8);
                auVar72[10] = (byte)((uint)fStack_1f8 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
                auVar72[0xb] = (byte)((uint)fStack_1f8 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
                auVar72[0xc] = SUB41(fStack_1f4,0) & ~(byte)iVar69;
                auVar72[0xd] = (byte)((uint)fStack_1f4 >> 8) & ~(byte)((uint)iVar69 >> 8);
                auVar72[0xe] = (byte)((uint)fStack_1f4 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
                auVar72[0xf] = (byte)((uint)fStack_1f4 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
                auVar83 = NEON_ext(auVar88,auVar88,8,1);
                fVar91 = (float)((ulong)auVar85._0_8_ >> 0x20);
                local_1f0 = local_1f0 * auVar84._0_4_ * auVar71._0_4_;
                fStack_1ec = fStack_1ec * auVar84._4_4_ * auVar71._4_4_;
                fStack_1e8 = fStack_1e8 * auVar84._8_4_ * auVar71._8_4_;
                local_180 = auVar57._0_4_;
                fStack_17c = auVar57._4_4_;
                fStack_178 = auVar57._8_4_;
                fStack_174 = auVar57._12_4_;
                local_170 = (float)uVar34;
                fStack_16c = (float)((ulong)uVar34 >> 0x20);
                fStack_168 = (float)uVar35;
                fStack_164 = (float)((ulong)uVar35 >> 0x20);
                fVar77 = (float)CONCAT13((byte)((uint)local_1f0 >> 0x18) &
                                         ~(byte)((uint)iVar28 >> 0x18),
                                         CONCAT12((byte)((uint)local_1f0 >> 0x10) &
                                                  ~(byte)((uint)iVar28 >> 0x10),
                                                  CONCAT11((byte)((uint)local_1f0 >> 8) &
                                                           ~(byte)((uint)iVar28 >> 8),
                                                           SUB41(local_1f0,0) & ~(byte)iVar28)));
                auVar78._0_8_ =
                     CONCAT17((byte)((uint)fStack_1ec >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                              CONCAT16((byte)((uint)fStack_1ec >> 0x10) &
                                       ~(byte)((uint)iVar29 >> 0x10),
                                       CONCAT15((byte)((uint)fStack_1ec >> 8) &
                                                ~(byte)((uint)iVar29 >> 8),
                                                CONCAT14(SUB41(fStack_1ec,0) & ~(byte)iVar29,fVar77)
                                               )));
                auVar78[8] = SUB41(fStack_1e8,0) & ~(byte)iVar61;
                auVar78[9] = (byte)((uint)fStack_1e8 >> 8) & ~(byte)((uint)iVar61 >> 8);
                auVar78[10] = (byte)((uint)fStack_1e8 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
                auVar78[0xb] = (byte)((uint)fStack_1e8 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
                local_190 = (float)uVar17;
                fStack_18c = (float)((ulong)uVar17 >> 0x20);
                fStack_188 = (float)uVar18;
                fStack_184 = (float)((ulong)uVar18 >> 0x20);
                fVar82 = (float)((ulong)auVar78._0_8_ >> 0x20);
                fVar51 = (float)((ulong)auVar72._0_8_ >> 0x20);
                local_1b0 = auVar58._0_4_;
                fStack_1ac = auVar58._4_4_;
                fStack_1a8 = auVar58._8_4_;
                fStack_1a4 = auVar58._12_4_;
                fStack_1a0 = (float)uVar15;
                fStack_19c = (float)((ulong)uVar15 >> 0x20);
                fStack_198 = (float)uVar16;
                fStack_194 = (float)((ulong)uVar16 >> 0x20);
                *(undefined4 *)(puVar5 + 6) = uVar54;
                puVar5[9] = uVar21;
                *puVar5 = uVar19;
                *(undefined8 *)(puVar5 + 2) = uVar33;
                puVar5[8] = uVar20;
                *(undefined8 *)(puVar5 + 10) = uVar107;
                fVar64 = auVar78._8_4_;
                fVar55 = local_180 + local_170 * fVar92 + local_190 * fVar51 + fStack_1a0 * fVar64;
                fVar60 = fStack_17c + fStack_16c * fVar92 + fStack_18c * fVar51 +
                         fStack_19c * fVar64;
                fVar62 = fStack_178 + fStack_168 * fVar92 + fStack_188 * fVar51 +
                         fStack_198 * fVar64;
                fVar64 = fStack_174 + fStack_164 * fVar92 + fStack_184 * fVar51 +
                         fStack_194 * fVar64;
                auVar59 = NEON_ext(auVar72,auVar72,8,1);
                auVar101._0_4_ = SQRT(fVar55) * 0.5 * local_1b0;
                auVar101._4_4_ = SQRT(fVar60) * 0.5 * fStack_1ac;
                auVar101._8_4_ = SQRT(fVar62) * 0.5 * fStack_1a8;
                auVar101._12_4_ = SQRT(fVar64) * 0.5 * fStack_1a4;
                auVar71 = NEON_frecpe(auVar101,4);
                fVar51 = auVar59._0_4_;
                auVar59 = NEON_frecps(auVar71,auVar101,4);
                auVar95._0_4_ = auVar71._0_4_ * auVar59._0_4_;
                auVar95._4_4_ = auVar71._4_4_ * auVar59._4_4_;
                auVar95._8_4_ = auVar71._8_4_ * auVar59._8_4_;
                auVar95._12_4_ = auVar71._12_4_ * auVar59._12_4_;
                auVar59 = NEON_frecps(auVar95,auVar101,4);
                fVar92 = auVar95._0_4_ * auVar59._0_4_;
                fVar96 = auVar95._4_4_ * auVar59._4_4_;
                fVar97 = auVar95._8_4_ * auVar59._8_4_;
                fVar98 = auVar95._12_4_ * auVar59._12_4_;
                auVar90._4_4_ = fVar55;
                auVar90._0_4_ = fVar55;
                auVar90._8_4_ = fVar55;
                auVar90._12_4_ = fVar55;
                auVar105._4_4_ = fVar60;
                auVar105._0_4_ = fVar60;
                auVar105._8_4_ = fVar60;
                auVar105._12_4_ = fVar60;
                uVar33 = CONCAT44(-(uint)(fVar55 <= fVar60),-(uint)(fVar55 <= fVar60));
                uVar107 = CONCAT44(-(uint)(fVar55 <= fVar60),-(uint)(fVar55 <= fVar60));
                auVar73._8_8_ = uVar107;
                auVar73._0_8_ = uVar33;
                auVar104._4_4_ = fVar62;
                auVar104._0_4_ = fVar62;
                auVar104._8_4_ = fVar62;
                auVar104._12_4_ = fVar62;
                auVar74._4_4_ = (fVar91 + fVar70) * fVar92;
                auVar74._8_4_ = (auVar83._0_4_ + fVar77) * fVar92;
                auVar74._12_4_ = (fVar51 + -fVar82) * fVar92;
                auVar89._8_8_ = uVar107;
                auVar89._0_8_ = uVar33;
                auVar81._0_4_ = (auVar83._0_4_ + fVar77) * fVar97;
                auVar81._4_4_ = (fVar51 + fVar82) * fVar97;
                auVar81._12_4_ = (fVar91 - fVar70) * fVar97;
                auVar90 = auVar90 ^ (auVar90 ^ auVar105) & auVar89;
                auVar102._0_4_ = (fVar91 + fVar70) * fVar96;
                auVar102._4_4_ = fVar96 * 0.0;
                auVar102._8_4_ = (fVar51 + fVar82) * fVar96;
                auVar102._12_4_ = (fVar77 + -auVar85._8_4_) * fVar96;
                auVar74._0_4_ = SQRT(fVar55) * 0.5;
                auVar81._8_4_ = SQRT(fVar62) * 0.5;
                auVar76._0_4_ = (fVar51 - fVar82) * fVar98;
                auVar76._4_4_ = (fVar77 - auVar85._8_4_) * fVar98;
                auVar76._8_4_ = (fVar91 - fVar70) * fVar98;
                auVar106._0_4_ = -(uint)(auVar90._0_4_ <= fVar62);
                auVar106._4_4_ = -(uint)(auVar90._4_4_ <= fVar62);
                auVar106._8_4_ = -(uint)(auVar90._8_4_ <= fVar62);
                auVar106._12_4_ = -(uint)(auVar90._12_4_ <= fVar62);
                auVar103._8_8_ = auVar102._8_8_;
                auVar103._4_4_ = SQRT(fVar60) * 0.5;
                auVar103._0_4_ = auVar102._0_4_;
                auVar76._12_4_ = SQRT(fVar64) * 0.5;
                auVar74 = auVar74 ^ (auVar74 ^ auVar103) & auVar73;
                auVar74 = auVar74 ^ (auVar74 ^ auVar81) & auVar106;
                auVar90 = auVar90 ^ (auVar90 ^ auVar104) & auVar106;
                *(undefined4 *)(puVar5 + 0xe) = uVar56;
                *(undefined4 *)(puVar5 + 0x10) = uVar22;
                auVar93._0_4_ = -(uint)(auVar90._0_4_ <= fVar64);
                auVar93._4_4_ = -(uint)(auVar90._4_4_ <= fVar64);
                auVar93._8_4_ = -(uint)(auVar90._8_4_ <= fVar64);
                auVar93._12_4_ = -(uint)(auVar90._12_4_ <= fVar64);
                auVar74 = auVar74 ^ (auVar74 ^ auVar76) & auVar93;
                *(ulong *)(puVar5 + 0x1c) = (ulong)auVar12._8_4_;
                *(long *)(puVar5 + 0x18) = auVar12._0_8_;
                *(long *)(puVar5 + 0x24) = auVar74._8_8_;
                *(long *)(puVar5 + 0x20) = auVar74._0_8_;
                *(undefined4 *)(puVar5 + 0x12) = uVar23;
                *(undefined4 *)(puVar5 + 0x28) = uVar24;
                *(undefined8 *)(puVar5 + 0x2c) = uVar25;
                lVar37 = puVar44[3] + 0x60;
                puVar44[3] = lVar37;
              }
              else {
                local_90[0] = 0;
                lVar37 = puVar44[3];
              }
            }
            uVar33 = *puVar44;
          }
          uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))
                             (*(long **)(param_1 + 0x40),uVar33,lVar37);
          if ((uVar32 & 1) == 0) {
            iVar28 = 1;
          }
          else {
            sVar11 = *(long *)(param_1 + 0xd0) - (long)__src;
            if (sVar11 != 0) {
              memmove(__dest,__src,sVar11);
            }
            iVar28 = 0;
            *(size_t *)(param_1 + 0xd0) = (long)__dest + sVar11;
          }
          FUN_01694aa8(&local_160);
        }
        puVar44 = local_b8;
        if ((char)local_140 != '\0') {
          if (local_b8 != (undefined8 *)0x0) {
            psVar3 = (short *)(local_b8 + 3);
            do {
              sVar42 = *psVar3;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar10) {
                *psVar3 = sVar42 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (sVar42 == 1) {
              piVar4 = (int *)((long)local_b8 + 0x1c);
              do {
                iVar29 = *piVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar10) {
                  *piVar4 = -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar29 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar29 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar29 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar37 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar37;
                local_160 = (undefined8 *)*puVar44;
                FUN_00c44438(lVar37 + 0x8040,&local_160);
              }
            }
            else if (sVar42 == 0) goto LAB_01693dfc;
          }
          local_140 = local_140 & 0xffffff00;
        }
      } while (((iVar28 == 3) || (iVar28 == 0)) && (__dest != *(void **)(param_1 + 0xd0)));
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_01692f04;
    }
    puVar50 = *(ushort **)(param_1 + 0x100);
    puVar38 = *(ushort **)(param_1 + 0x108);
    while (puVar50 != puVar38) {
      uVar39 = *puVar50;
      local_98._4_4_ = (undefined4)(local_98 >> 0x20);
      local_98 = CONCAT44(local_98._4_4_,(uint)uVar39 | (uint)uVar39 << 0xe) & 0xffffffffffff0003;
      FUN_016947d8(&local_140);
      puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
      if (puVar44 == (undefined8 *)0x0) {
        uVar34 = 0;
        lVar37 = 0;
      }
      else {
        if (puVar44[3] + 1 <= (ulong)puVar44[2]) {
          *(undefined1 *)(puVar44[1] + puVar44[3]) = 2;
          puVar44[3] = puVar44[3] + 1;
        }
        lVar31 = FUN_0111b030(uVar39 & 3);
        uVar26 = 0xffffff80;
        if (0x3ff < uVar39) {
          uVar26 = 0xffffff81;
        }
        uVar27 = (uint)(uVar39 >> 2);
        if (0x1ff < uVar39) {
          uVar27 = uVar26;
        }
        lVar45 = FUN_0111b030(uVar27);
        lVar37 = puVar44[3];
        if ((ulong)puVar44[2] < lVar31 + lVar45 + lVar37 + 2U) {
          local_160 = (undefined8 *)CONCAT44(local_160._4_4_,0xd);
        }
        else {
          FUN_016948f8(&local_160,&local_98,puVar44 + 1);
          lVar37 = puVar44[3];
        }
        uVar34 = *puVar44;
      }
      uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))
                         (*(long **)(param_1 + 0x40),uVar34,lVar37);
      if ((uVar32 & 1) == 0) {
        FUN_01694aa8(&local_140);
        break;
      }
      sVar11 = *(long *)(param_1 + 0x108) - (long)(puVar50 + 1);
      if (sVar11 != 0) {
        memmove(puVar50,puVar50 + 1,sVar11);
      }
      *(size_t *)(param_1 + 0x108) = (long)puVar50 + sVar11;
      FUN_01694aa8(&local_140);
      puVar38 = *(ushort **)(param_1 + 0x108);
    }
  }
LAB_01692f04:
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar50 = *(ushort **)(param_1 + 0x50);
    puVar38 = *(ushort **)(param_1 + 0x58);
    if (puVar50 != puVar38) {
LAB_01692f30:
      uVar26 = ((byte)puVar50[0x48] + 1) % 0xf;
      *(char *)(puVar50 + 0x48) = (char)uVar26;
      if (uVar26 == 0) {
        puVar47 = puVar50 + 0x3c;
        if ((*(long *)puVar47 == 0) || (*(short *)(*(long *)puVar47 + 0x1a) == 0))
        goto LAB_01692f50;
        uVar54 = FUN_01695474(param_1,puVar47);
        lVar37 = *(long *)(param_1 + 0x50);
        lVar31 = *(long *)(param_1 + 0x58);
        if (lVar37 != lVar31) {
          do {
            if (((*(long *)(lVar37 + 0x78) != 0) &&
                (*(short *)(*(long *)(lVar37 + 0x78) + 0x1a) != 0)) &&
               (*(long *)(lVar37 + 0x78) == *(long *)puVar47)) goto LAB_01693e40;
            lVar37 = lVar37 + 0xd0;
          } while (lVar31 != lVar37);
          lVar37 = lVar31;
LAB_01693e40:
          if (lVar37 == *(long *)(param_1 + 0x58)) goto LAB_016940cc;
          lVar37 = *(long *)(lVar37 + 0x98);
          if ((lVar37 != 0) && (*(short *)(lVar37 + 0x1a) != 0)) {
            psVar3 = (short *)(lVar37 + 0x1a);
            sVar42 = *(short *)(lVar37 + 0x1a);
            do {
              sVar7 = *psVar3;
              if (sVar7 == sVar42) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar10) {
                  *psVar3 = sVar42 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 != '\0') goto LAB_01694574;
                bVar10 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01694574:
                bVar10 = false;
              }
              if (bVar10) {
                lVar37 = *(long *)(lVar37 + 0x10);
                if (lVar37 != 0) {
                  plVar48 = (long *)(lVar37 + -0x28);
                  FUN_00e92dbc(&local_140,plVar48);
                  puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
                  if (puVar44 == (undefined8 *)0x0) goto LAB_016945b4;
                  if (*(short *)((long)puVar44 + 0x1a) == 0) goto LAB_01694688;
                  psVar3 = (short *)((long)puVar44 + 0x1a);
                  sVar42 = *(short *)((long)puVar44 + 0x1a);
                  goto LAB_01694654;
                }
                break;
              }
              sVar42 = sVar7;
            } while (sVar7 != 0);
          }
          goto LAB_01693e54;
        }
LAB_016940cc:
        lVar37 = *(long *)(param_1 + 0x88);
        lVar31 = *(long *)(param_1 + 0x90);
        unaff_s9 = 0;
        if (lVar37 != lVar31) {
          do {
            if (((*(long *)(lVar37 + 0x78) != 0) &&
                (*(short *)(*(long *)(lVar37 + 0x78) + 0x1a) != 0)) &&
               (*(long *)(lVar37 + 0x78) == *(long *)puVar47)) goto LAB_016941b8;
            lVar37 = lVar37 + 0xc0;
          } while (lVar31 != lVar37);
          lVar37 = lVar31;
LAB_016941b8:
          unaff_s9 = 0;
          if (lVar37 != *(long *)(param_1 + 0x90)) {
            unaff_s9 = *(undefined4 *)(lVar37 + 0x94);
          }
        }
        goto LAB_01693e58;
      }
      goto LAB_01692f50;
    }
  }
LAB_01692fd8:
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar37 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar37;
  if (lVar37 != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    if ((*(char *)(param_1 + 0xc0) != '\0') && (*(char *)(param_1 + 0xc4) == '\0')) {
      if ((*(long *)(lVar37 + 0x70) != 0) &&
         ((*(long *)PTR_DAT_047d0860 != 0 && ((*(byte *)(param_1 + 0xc2) & 3) < DAT_045dfcb0)))) {
        local_160 = (undefined8 *)0x0;
        FUN_00da4118(&local_140,*(long *)PTR_DAT_047d0860,&local_160);
        if (local_140 == 0) {
          if (local_160 != (undefined8 *)0x0) {
            FUN_016947d8(&local_140);
            puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
            if ((puVar44 != (undefined8 *)0x0) && (puVar44[3] + 1 <= (ulong)puVar44[2])) {
              *(undefined1 *)(puVar44[1] + puVar44[3]) = 4;
              puVar44[3] = puVar44[3] + 1;
            }
            uVar39 = *(ushort *)(param_1 + 0xc2);
            local_90[0] = ((uint)uVar39 | (uint)uVar39 << 0xe) & 0xffff0003;
            if (puVar44 == (undefined8 *)0x0) {
              uVar34 = 0;
              lVar37 = 0;
            }
            else {
              lVar31 = FUN_0111b030(uVar39 & 3);
              uVar26 = 0xffffff80;
              if (0x3ff < uVar39) {
                uVar26 = 0xffffff81;
              }
              uVar27 = (uint)(uVar39 >> 2);
              if (0x1ff < uVar39) {
                uVar27 = uVar26;
              }
              lVar45 = FUN_0111b030(uVar27);
              lVar37 = puVar44[3];
              if ((ulong)puVar44[2] < lVar31 + lVar45 + lVar37 + 2U) {
                local_98 = CONCAT44(local_98._4_4_,0xd);
              }
              else {
                FUN_016948f8(&local_98,local_90,puVar44 + 1);
                lVar37 = puVar44[3];
              }
              uVar34 = *puVar44;
            }
            uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                               (*(long **)(param_1 + 0x40),uVar34,lVar37,&local_160);
            if ((uVar32 & 1) != 0) {
              *(undefined1 *)(param_1 + 0xc4) = 1;
            }
            FUN_01694aa8(&local_140);
          }
          goto LAB_01693014;
        }
      }
      local_160 = (undefined8 *)0x0;
    }
  }
LAB_01693014:
  if (*(long *)(param_1 + 0x40) != 0) {
    if ((*(char *)(param_1 + 0x2c0) != '\0') && (*(char *)(param_1 + 0x2e0) == '\0')) {
      FUN_016947d8(&local_140);
      puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
      if (puVar44 == (undefined8 *)0x0) {
        uVar34 = 0;
        uVar54 = 0;
      }
      else {
        if (puVar44[3] + 1 <= (ulong)puVar44[2]) {
          *(undefined1 *)(puVar44[1] + puVar44[3]) = 5;
          puVar44[3] = puVar44[3] + 1;
        }
        FUN_01694a28(&local_160,param_1 + 0x2d8,puVar44 + 1);
        uVar34 = *puVar44;
        uVar54 = *(undefined4 *)(puVar44 + 3);
      }
      uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                         (*(long **)(param_1 + 0x40),uVar34,uVar54,param_1 + 0x2d0);
      if ((uVar32 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2e0) = 1;
      }
      FUN_01694aa8(&local_140);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    }
    puVar44 = *(undefined8 **)(param_1 + 0x3a8);
    if (puVar44 != *(undefined8 **)(param_1 + 0x3b0)) {
      do {
        local_160 = (undefined8 *)*puVar44;
        local_98 = puVar44[1];
        FUN_016947d8(&local_140);
        puVar41 = (undefined8 *)CONCAT44(uStack_13c,local_140);
        if (puVar41 == (undefined8 *)0x0) {
          uVar34 = 0;
          uVar35 = 0;
        }
        else {
          if (puVar41[3] + 1 <= (ulong)puVar41[2]) {
            *(undefined1 *)(puVar41[1] + puVar41[3]) = 6;
            puVar41[3] = puVar41[3] + 1;
          }
          FUN_01694a28(local_90,&local_98,puVar41 + 1);
          uVar34 = *puVar41;
          uVar35 = puVar41[3];
        }
        uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                           (*(long **)(param_1 + 0x40),uVar34,uVar35,&local_160);
        puVar41 = puVar44 + 2;
        if ((uVar32 & 1) != 0) {
          puVar46 = *(undefined8 **)(param_1 + 0x3b0);
          puVar41 = puVar44;
          if (puVar44 + 2 != puVar46) {
            puVar41 = puVar44 + 2;
            *puVar44 = *puVar41;
            puVar44[1] = puVar44[3];
            if (puVar44 + 4 != puVar46) {
              puVar41 = puVar44 + 4;
              puVar44[2] = *puVar41;
              puVar44[3] = puVar44[5];
              if (puVar44 + 6 != puVar46) {
                puVar40 = puVar44;
                do {
                  puVar41 = puVar40;
                  puVar41[4] = puVar41[6];
                  puVar41[5] = puVar41[7];
                  puVar40 = puVar41 + 2;
                } while (puVar46 + -6 != puVar41 + 2);
                puVar41 = puVar41 + 6;
              }
            }
          }
          *(undefined8 **)(param_1 + 0x3b0) = puVar41;
          puVar41 = puVar44;
        }
        puVar44 = puVar41;
        FUN_01694aa8(&local_140);
      } while (puVar44 != *(undefined8 **)(param_1 + 0x3b0));
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    }
    puVar44 = *(undefined8 **)(param_1 + 0x370);
    if (puVar44 != *(undefined8 **)(param_1 + 0x378)) {
      do {
        puVar46 = (undefined8 *)puVar44[1];
        local_160 = puVar46;
        FUN_016947d8(&local_140);
        puVar41 = (undefined8 *)CONCAT44(uStack_13c,local_140);
        if (puVar41 == (undefined8 *)0x0) {
          uVar34 = 0;
          uVar35 = 0;
        }
        else {
          if (puVar41[3] + 1 <= (ulong)puVar41[2]) {
            *(undefined1 *)(puVar41[1] + puVar41[3]) = 7;
            puVar41[3] = puVar41[3] + 1;
          }
          FUN_01694a28(&local_98,&local_160,puVar41 + 1);
          uVar34 = *puVar41;
          uVar35 = puVar41[3];
        }
        uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))
                           (*(long **)(param_1 + 0x40),uVar34,uVar35);
        puVar41 = puVar44 + 2;
        if ((uVar32 & 1) != 0) {
          puVar40 = *(undefined8 **)(param_1 + 0x378);
          if (puVar41 == puVar40) {
            uVar26 = (uint)((ulong)puVar46 >> 0x10);
            uVar39 = (ushort)((ulong)puVar46 >> 0x20);
            puVar41 = puVar44;
            sVar42 = (short)((ulong)puVar46 >> 0x30);
          }
          else {
            puVar41 = puVar44 + 2;
            *puVar44 = *puVar41;
            puVar44[1] = puVar44[3];
            if (puVar44 + 4 != puVar40) {
              puVar41 = puVar44 + 4;
              puVar44[2] = *puVar41;
              puVar44[3] = puVar44[5];
              if (puVar44 + 6 != puVar40) {
                puVar46 = puVar44;
                do {
                  puVar41 = puVar46;
                  puVar41[4] = puVar41[6];
                  puVar41[5] = puVar41[7];
                  puVar46 = puVar41 + 2;
                } while (puVar40 + -6 != puVar41 + 2);
                puVar41 = puVar41 + 6;
              }
            }
            puVar46 = (undefined8 *)((ulong)local_160 & 0xff);
            uVar26 = (uint)local_160._2_2_;
            uVar39 = (ushort)local_160._4_1_;
            sVar42 = local_160._6_2_;
          }
          *(undefined8 **)(param_1 + 0x378) = puVar41;
          local_98 = CONCAT62(local_98._2_6_,(ushort)puVar46 & 3 | (ushort)(uVar26 << 2));
          local_90[0] = CONCAT22(local_90[0]._2_2_,uVar39 & 3 | sVar42 << 2);
          FUN_01695a1c(param_1,&local_98,local_90,0);
          puVar41 = puVar44;
        }
        FUN_01694aa8(&local_140);
        puVar44 = puVar41;
      } while (puVar41 != *(undefined8 **)(param_1 + 0x378));
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    }
    if ((*(char *)(param_1 + 0x3e0) != '\0') && (*(char *)(param_1 + 0x3f2) == '\0')) {
      FUN_016947d8(&local_140);
      puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
      if ((puVar44 != (undefined8 *)0x0) && (puVar44[3] + 1 <= (ulong)puVar44[2])) {
        *(undefined1 *)(puVar44[1] + puVar44[3]) = 8;
        puVar44[3] = puVar44[3] + 1;
      }
      uVar39 = *(ushort *)(param_1 + 0x3f0);
      local_98 = CONCAT44(local_98._4_4_,(uint)uVar39 | (uint)uVar39 << 0xe) & 0xffffffffffff0003;
      if (puVar44 == (undefined8 *)0x0) {
        uVar34 = 0;
        lVar37 = 0;
      }
      else {
        lVar31 = FUN_0111b030(uVar39 & 3);
        uVar26 = 0xffffff80;
        if (0x3ff < uVar39) {
          uVar26 = 0xffffff81;
        }
        uVar27 = (uint)(uVar39 >> 2);
        if (0x1ff < uVar39) {
          uVar27 = uVar26;
        }
        lVar45 = FUN_0111b030(uVar27);
        lVar37 = puVar44[3];
        if ((ulong)puVar44[2] < lVar31 + lVar45 + lVar37 + 2U) {
          local_160 = (undefined8 *)CONCAT44(local_160._4_4_,0xd);
        }
        else {
          FUN_016948f8(&local_160,&local_98,puVar44 + 1);
          lVar37 = puVar44[3];
        }
        uVar34 = *puVar44;
      }
      uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                         (*(long **)(param_1 + 0x40),uVar34,lVar37,param_1 + 1000);
      if ((uVar32 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3f2) = 1;
      }
      FUN_01694aa8(&local_140);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    }
    puVar44 = *(undefined8 **)(param_1 + 0x430);
    if (puVar44 != *(undefined8 **)(param_1 + 0x438)) {
      do {
        local_160 = (undefined8 *)*puVar44;
        uVar39 = *(ushort *)(puVar44 + 1);
        FUN_016947d8(&local_140);
        puVar41 = (undefined8 *)CONCAT44(uStack_13c,local_140);
        if ((puVar41 != (undefined8 *)0x0) && (puVar41[3] + 1 <= (ulong)puVar41[2])) {
          *(undefined1 *)(puVar41[1] + puVar41[3]) = 9;
          puVar41[3] = puVar41[3] + 1;
        }
        local_90[0] = ((uint)uVar39 | (uint)uVar39 << 0xe) & 0xffff0003;
        if (puVar41 == (undefined8 *)0x0) {
          uVar34 = 0;
          lVar37 = 0;
        }
        else {
          lVar31 = FUN_0111b030(uVar39 & 3);
          uVar26 = 0xffffff80;
          if (0x3ff < uVar39) {
            uVar26 = 0xffffff81;
          }
          uVar27 = (uint)(uVar39 >> 2);
          if (0x1ff < uVar39) {
            uVar27 = uVar26;
          }
          lVar45 = FUN_0111b030(uVar27);
          lVar37 = puVar41[3];
          if ((ulong)puVar41[2] < lVar31 + lVar45 + lVar37 + 2U) {
            local_98 = CONCAT44(local_98._4_4_,0xd);
          }
          else {
            FUN_016948f8(&local_98,local_90,puVar41 + 1);
            lVar37 = puVar41[3];
          }
          uVar34 = *puVar41;
        }
        uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                           (*(long **)(param_1 + 0x40),uVar34,lVar37,&local_160);
        puVar41 = puVar44 + 2;
        if ((uVar32 & 1) != 0) {
          puVar46 = *(undefined8 **)(param_1 + 0x438);
          puVar41 = puVar44;
          if (puVar44 + 2 != puVar46) {
            puVar40 = puVar44;
            do {
              puVar41 = puVar40 + 2;
              *puVar40 = *puVar41;
              *(undefined2 *)(puVar40 + 1) = *(undefined2 *)(puVar40 + 3);
              puVar40 = puVar41;
            } while (puVar46 + -2 != puVar41);
          }
          *(undefined8 **)(param_1 + 0x438) = puVar41;
          puVar41 = puVar44;
        }
        FUN_01694aa8(&local_140);
        puVar44 = puVar41;
      } while (puVar41 != *(undefined8 **)(param_1 + 0x438));
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0169306c;
    }
    puVar44 = *(undefined8 **)(param_1 + 0x3f8);
    if (puVar44 != *(undefined8 **)(param_1 + 0x400)) {
      do {
        puVar46 = (undefined8 *)puVar44[1];
        local_160 = puVar46;
        FUN_016947d8(&local_140);
        puVar41 = (undefined8 *)CONCAT44(uStack_13c,local_140);
        if (puVar41 == (undefined8 *)0x0) {
          uVar34 = 0;
          uVar35 = 0;
        }
        else {
          if (puVar41[3] + 1 <= (ulong)puVar41[2]) {
            *(undefined1 *)(puVar41[1] + puVar41[3]) = 10;
            puVar41[3] = puVar41[3] + 1;
          }
          FUN_01694a28(&local_98,&local_160,puVar41 + 1);
          uVar34 = *puVar41;
          uVar35 = puVar41[3];
        }
        uVar32 = (**(code **)(**(long **)(param_1 + 0x40) + 0x70))
                           (*(long **)(param_1 + 0x40),uVar34,uVar35);
        puVar41 = puVar44 + 2;
        if ((uVar32 & 1) != 0) {
          puVar41 = *(undefined8 **)(param_1 + 0x400);
          if (puVar44 + 2 == puVar41) {
            uVar26 = (uint)((ulong)puVar46 >> 0x10);
            uVar39 = (ushort)((ulong)puVar46 >> 0x20);
            puVar40 = puVar44;
            sVar42 = (short)((ulong)puVar46 >> 0x30);
          }
          else {
            puVar40 = puVar44 + 2;
            *puVar44 = *puVar40;
            puVar44[1] = puVar44[3];
            if (puVar44 + 4 != puVar41) {
              puVar40 = puVar44 + 4;
              puVar44[2] = *puVar40;
              puVar44[3] = puVar44[5];
              if (puVar44 + 6 != puVar41) {
                puVar46 = puVar44;
                do {
                  puVar40 = puVar46;
                  puVar40[4] = puVar40[6];
                  puVar40[5] = puVar40[7];
                  puVar46 = puVar40 + 2;
                } while (puVar41 + -6 != puVar40 + 2);
                puVar40 = puVar40 + 6;
              }
            }
            puVar46 = (undefined8 *)((ulong)local_160 & 0xff);
            uVar26 = (uint)local_160._2_2_;
            uVar39 = (ushort)local_160._4_1_;
            sVar42 = local_160._6_2_;
          }
          *(undefined8 **)(param_1 + 0x400) = puVar40;
          local_98 = CONCAT62(local_98._2_6_,(ushort)puVar46 & 3 | (ushort)(uVar26 << 2));
          local_90[0] = CONCAT22(local_90[0]._2_2_,uVar39 & 3 | sVar42 << 2);
          FUN_01695a1c(param_1,&local_98,local_90,1);
          puVar41 = puVar44;
        }
        puVar44 = puVar41;
        FUN_01694aa8(&local_140);
      } while (puVar44 != *(undefined8 **)(param_1 + 0x400));
    }
  }
LAB_0169306c:
  lVar37 = *(long *)(param_1 + 0x50);
  lVar31 = *(long *)(param_1 + 0x58);
  if (lVar37 != lVar31) {
    lVar45 = *(long *)(lVar37 + 200);
    if (lVar45 != 0) {
      bVar2 = *(char *)(lVar45 + 0x150) + 1;
      *(byte *)(lVar45 + 0x150) = bVar2;
      if ((bVar2 & 1) != 0) {
        FUN_011db9c0(lVar45);
      }
      FUN_011db6c8(lVar45);
    }
    if (lVar37 + 0xd0 != lVar31) {
      lVar45 = *(long *)(lVar37 + 0x198);
      if (lVar45 != 0) {
        bVar2 = *(char *)(lVar45 + 0x150) + 1;
        *(byte *)(lVar45 + 0x150) = bVar2;
        if ((bVar2 & 1) != 0) {
          FUN_011db9c0(lVar45);
        }
        FUN_011db6c8(lVar45);
      }
      if (lVar37 + 0x1a0 != lVar31) {
        lVar45 = *(long *)(lVar37 + 0x268);
        if (lVar45 != 0) {
          bVar2 = *(char *)(lVar45 + 0x150) + 1;
          *(byte *)(lVar45 + 0x150) = bVar2;
          if ((bVar2 & 1) != 0) {
            FUN_011db9c0(lVar45);
          }
          FUN_011db6c8(lVar45);
        }
        if (lVar37 + 0x270 != lVar31) {
          lVar45 = *(long *)(lVar37 + 0x338);
          if (lVar45 != 0) {
            bVar2 = *(char *)(lVar45 + 0x150) + 1;
            *(byte *)(lVar45 + 0x150) = bVar2;
            if ((bVar2 & 1) != 0) {
              FUN_011db9c0(lVar45);
            }
            FUN_011db6c8(lVar45);
          }
          if (lVar37 + 0x340 != lVar31) {
            lVar45 = *(long *)(lVar37 + 0x408);
            if (lVar45 != 0) {
              bVar2 = *(char *)(lVar45 + 0x150) + 1;
              *(byte *)(lVar45 + 0x150) = bVar2;
              if ((bVar2 & 1) != 0) {
                FUN_011db9c0(lVar45);
              }
              FUN_011db6c8(lVar45);
            }
            for (lVar37 = lVar37 + 0x410; lVar37 != lVar31; lVar37 = lVar37 + 0xd0) {
              lVar45 = *(long *)(lVar37 + 200);
              if (lVar45 != 0) {
                bVar2 = *(char *)(lVar45 + 0x150) + 1;
                *(byte *)(lVar45 + 0x150) = bVar2;
                if ((bVar2 & 1) != 0) {
                  FUN_011db9c0(lVar45);
                }
                FUN_011db6c8(lVar45);
              }
            }
          }
        }
      }
    }
  }
  lVar37 = *(long *)(param_1 + 0x88);
  lVar31 = *(long *)(param_1 + 0x90);
  if (lVar37 != lVar31) {
    lVar45 = *(long *)(lVar37 + 0xb8);
    if (lVar45 != 0) {
      bVar2 = *(char *)(lVar45 + 0x150) + 1;
      *(byte *)(lVar45 + 0x150) = bVar2;
      if ((bVar2 & 1) != 0) {
        FUN_011db9c0(lVar45);
      }
      FUN_011db6c8(lVar45);
    }
    while (lVar45 = lVar37 + 0xc0, lVar45 != lVar31) {
      lVar43 = *(long *)(lVar37 + 0x178);
      lVar37 = lVar45;
      if (lVar43 != 0) {
        bVar2 = *(char *)(lVar43 + 0x150) + 1;
        *(byte *)(lVar43 + 0x150) = bVar2;
        if ((bVar2 & 1) != 0) {
          FUN_011db9c0(lVar43);
        }
        FUN_011db6c8(lVar43);
      }
    }
  }
  return;
  while (sVar42 = sVar7, sVar7 != 0) {
LAB_01694654:
    sVar7 = *psVar3;
    if (sVar7 == sVar42) {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar10) {
        *psVar3 = sVar42 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 != '\0') goto LAB_01694678;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01694678:
      bVar10 = false;
    }
    if (bVar10) {
      plVar49 = (long *)0x0;
      if (puVar44[2] != 0) {
        plVar49 = (long *)(puVar44[2] + -0x28);
      }
      goto LAB_0169468c;
    }
  }
LAB_01694688:
  plVar49 = (long *)0x0;
LAB_0169468c:
  psVar3 = (short *)(puVar44 + 3);
  do {
    sVar42 = *psVar3;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar10) {
      *psVar3 = sVar42 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar42 == 1) {
    piVar4 = (int *)((long)puVar44 + 0x1c);
    do {
      iVar28 = *piVar4;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar10) {
        *piVar4 = -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar28 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar31 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar31;
      local_160 = (undefined8 *)*puVar44;
      FUN_00c44438(lVar31 + 0x8040,&local_160);
    }
  }
  else if (sVar42 == 0) {
LAB_01693dfc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar49 == (long *)0x0) {
LAB_016945b4:
    bVar10 = true;
  }
  else {
    unaff_s9 = FUN_01ebd484(plVar49);
    lVar31 = plVar49[6];
    psVar3 = (short *)(lVar31 + 0x1a);
    do {
      sVar42 = *psVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar10) {
        *psVar3 = sVar42 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar42 == 1) {
      *(undefined8 *)(lVar31 + 0x10) = 0;
      (**(code **)(*plVar49 + 0x50))(plVar49);
    }
    else if (sVar42 == 0) goto LAB_016946e8;
    bVar10 = false;
  }
  lVar37 = *(long *)(lVar37 + 0x70);
  psVar3 = (short *)(lVar37 + 0x1a);
  do {
    sVar42 = *psVar3;
    cVar9 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar8) {
      *psVar3 = sVar42 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar42 == 1) {
    *(undefined8 *)(lVar37 + 0x10) = 0;
    (**(code **)(*plVar48 + 0x50))(plVar48);
  }
  else if (sVar42 == 0) {
LAB_016946e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (bVar10) {
LAB_01693e54:
    unaff_s9 = 0;
  }
LAB_01693e58:
  uVar26 = FUN_01694e64(param_1,puVar47);
  uVar56 = FUN_016951d4(param_1,puVar47);
  uVar27 = FUN_01695008(param_1,puVar47);
  FUN_016947d8(&local_140);
  puVar44 = (undefined8 *)CONCAT44(uStack_13c,local_140);
  if ((puVar44 != (undefined8 *)0x0) && (puVar44[3] + 1 <= (ulong)puVar44[2])) {
    *(undefined1 *)(puVar44[1] + puVar44[3]) = 3;
    puVar44[3] = puVar44[3] + 1;
  }
  uVar39 = *puVar50;
  local_98 = CONCAT44(local_98._4_4_,(uint)uVar39 | (uint)uVar39 << 0xe) & 0xffffffffffff0003;
  if (puVar44 == (undefined8 *)0x0) {
    uVar34 = 0;
    lVar37 = 0;
    goto LAB_016940b0;
  }
  lVar37 = FUN_0111b030(uVar39 & 3);
  uVar36 = 0xffffff80;
  if (0x3ff < uVar39) {
    uVar36 = 0xffffff81;
  }
  uVar6 = (uint)(uVar39 >> 2);
  if (0x1ff < uVar39) {
    uVar6 = uVar36;
  }
  lVar31 = FUN_0111b030(uVar6);
  plVar48 = puVar44 + 3;
  if ((ulong)puVar44[2] < lVar37 + lVar31 + *plVar48 + 2U) {
    local_160 = (undefined8 *)CONCAT44(local_160._4_4_,0xd);
  }
  else {
    FUN_016948f8(&local_160,&local_98,puVar44 + 1);
  }
  cVar9 = (char)uVar26;
  sVar42 = (short)uVar26;
  if (uVar26 + 0x40 < 0xc0) {
    uVar36 = uVar26;
  }
  else {
    uVar36 = 0x84;
    if ((uVar26 != (int)cVar9) && (uVar36 = 0xffffff85, uVar26 != (int)sVar42)) {
      uVar36 = 0xffffff86;
    }
  }
  lVar31 = FUN_0111b030(uVar36);
  cVar1 = (char)uVar27;
  sVar7 = (short)uVar27;
  if (uVar27 + 0x40 < 0xc0) {
    uVar36 = uVar27;
  }
  else {
    uVar36 = 0x84;
    if ((uVar27 != (int)cVar1) && (uVar36 = 0xffffff85, uVar27 != (int)sVar7)) {
      uVar36 = 0xffffff86;
    }
  }
  lVar45 = FUN_0111b030(uVar36);
  lVar37 = puVar44[3];
  if (lVar31 + lVar45 + lVar37 + 0x11U <= (ulong)puVar44[2]) {
    plVar49 = puVar44 + 1;
    *(undefined1 *)(*plVar49 + lVar37) = 0xb9;
    *plVar48 = *plVar48 + 1;
    local_160 = (undefined8 *)&DAT_00000005;
    FUN_0111b0ac(&local_98,&local_160,plVar49);
    if ((int)local_98 == 0) {
      *(undefined1 *)(*plVar49 + *plVar48) = 0x88;
      lVar37 = *plVar48;
      *plVar48 = lVar37 + 1;
      *(undefined4 *)(*plVar49 + lVar37 + 1) = uVar54;
      lVar37 = *plVar48;
      *plVar48 = lVar37 + 4;
      *(undefined1 *)(*plVar49 + lVar37 + 4) = 0x88;
      lVar37 = *plVar48;
      *plVar48 = lVar37 + 1;
      *(undefined4 *)(*plVar49 + lVar37 + 1) = unaff_s9;
      lVar37 = *plVar48;
      *plVar48 = lVar37 + 4;
      *(undefined1 *)(*plVar49 + lVar37 + 4) = 0x88;
      lVar37 = *plVar48;
      *plVar48 = lVar37 + 1;
      *(undefined4 *)(*plVar49 + lVar37 + 1) = uVar56;
      lVar37 = *plVar48 + 4;
      *plVar48 = lVar37;
      if (uVar26 + 0x40 < 0xc0) {
        *(char *)(*plVar49 + lVar37) = cVar9;
        uVar36 = uVar26 & 0xff;
        lVar37 = *plVar48 + 1;
        *plVar48 = lVar37;
        if (uVar36 == 0x85) {
LAB_01694380:
          *(short *)(*plVar49 + lVar37) = sVar42;
          lVar37 = 2;
          goto LAB_0169438c;
        }
        if (uVar36 == 0x86) goto LAB_01694400;
        if (uVar36 == 0x84) goto LAB_0169422c;
      }
      else {
        if (uVar26 == (int)cVar9) {
          *(undefined1 *)(*plVar49 + lVar37) = 0x84;
          lVar37 = *plVar48 + 1;
          *plVar48 = lVar37;
LAB_0169422c:
          *(char *)(*plVar49 + lVar37) = cVar9;
          lVar37 = 1;
        }
        else {
          if (uVar26 == (int)sVar42) {
            *(undefined1 *)(*plVar49 + lVar37) = 0x85;
            lVar37 = *plVar48 + 1;
            *plVar48 = lVar37;
            goto LAB_01694380;
          }
          *(undefined1 *)(*plVar49 + lVar37) = 0x86;
          lVar37 = *plVar48 + 1;
          *plVar48 = lVar37;
LAB_01694400:
          *(uint *)(*plVar49 + lVar37) = uVar26;
          lVar37 = 4;
        }
LAB_0169438c:
        lVar37 = *plVar48 + lVar37;
        *plVar48 = lVar37;
      }
      if (uVar27 + 0x40 < 0xc0) {
        *(char *)(*plVar49 + lVar37) = cVar1;
        lVar37 = *plVar48 + 1;
        uVar26 = uVar27 & 0xff;
        *plVar48 = lVar37;
        if (uVar26 != 0x85) {
          if (uVar26 == 0x86) goto LAB_01694428;
          if (uVar26 == 0x84) goto LAB_01694260;
          goto LAB_016940a8;
        }
LAB_016943bc:
        *(short *)(*plVar49 + lVar37) = sVar7;
        lVar37 = *plVar48 + 2;
      }
      else if (uVar27 == (int)cVar1) {
        *(undefined1 *)(*plVar49 + lVar37) = 0x84;
        lVar37 = *plVar48 + 1;
        *plVar48 = lVar37;
LAB_01694260:
        *(char *)(*plVar49 + lVar37) = cVar1;
        lVar37 = *plVar48 + 1;
      }
      else {
        if (uVar27 == (int)sVar7) {
          *(undefined1 *)(*plVar49 + lVar37) = 0x85;
          lVar37 = *plVar48 + 1;
          *plVar48 = lVar37;
          goto LAB_016943bc;
        }
        *(undefined1 *)(*plVar49 + lVar37) = 0x86;
        lVar37 = *plVar48 + 1;
        *plVar48 = lVar37;
LAB_01694428:
        *(uint *)(*plVar49 + lVar37) = uVar27;
        lVar37 = *plVar48 + 4;
      }
      *plVar48 = lVar37;
    }
    else {
      local_98 = local_98 & 0xffffffff00000000;
      lVar37 = *plVar48;
    }
  }
LAB_016940a8:
  uVar34 = *puVar44;
LAB_016940b0:
  (**(code **)(**(long **)(param_1 + 0x48) + 0x70))(*(long **)(param_1 + 0x48),uVar34,lVar37);
  FUN_01694aa8(&local_140);
LAB_01692f50:
  puVar50 = puVar50 + 0x68;
  if (puVar50 == puVar38) goto LAB_01692fd8;
  goto LAB_01692f30;
}


