/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341cbd0; name: FUN_0341cbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0341cbd0(undefined1 param_1 [16],long *param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  unkbyte9 Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 (*pauVar15) [16];
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  unkbyte9 *pVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  uint uVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  undefined1 auVar56 [16];
  float fVar60;
  undefined8 uVar59;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  float fVar65;
  uint uVar66;
  float fVar67;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  float fVar73;
  undefined1 auVar69 [16];
  undefined8 uVar72;
  float fVar74;
  float fVar79;
  float fVar81;
  undefined1 auVar76 [16];
  int iVar75;
  int iVar80;
  int iVar82;
  float fVar83;
  int iVar84;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined4 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  
  if (((*PTR_DAT_047e6de0 & 1) == 0) &&
     (iVar75 = __cxa_guard_acquire(PTR_DAT_047e6de0), puVar13 = PTR_DAT_047e6de8, iVar75 != 0)) {
    *(undefined8 *)(PTR_DAT_047e6de8 + 8) = 0x6ce3ee006ce3ee;
    *(undefined8 *)puVar13 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(PTR_DAT_047e6de0);
  }
  uVar12 = _UNK_03cab278;
  uVar11 = _DAT_03cab270;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    fVar67 = param_1._0_4_;
    fVar5 = param_1._4_4_;
    fVar6 = param_1._8_4_;
    auVar106 = NEON_fmov(0xbf800000,4);
    auVar107 = NEON_fmov(0x3f800000,4);
    uVar19 = 0;
    pbVar16 = PTR_DAT_047e6df0;
    pbVar17 = PTR_DAT_047e6e00;
    pfVar20 = (float *)PTR_DAT_047e6de8;
    pfVar21 = (float *)PTR_DAT_047e6df8;
    pVar22 = (unkbyte9 *)PTR_DAT_047e6e08;
    do {
      lVar18 = *param_2;
      pauVar23 = *(undefined1 (**) [16])(lVar18 + (ulong)uVar19 * 8);
      pauVar24 = pauVar23;
      if (uVar19 + 1 < uVar2) {
        pauVar24 = *(undefined1 (**) [16])(lVar18 + (ulong)(uVar19 + 1) * 8);
      }
      pauVar15 = pauVar24;
      if (uVar19 + 2 < uVar2) {
        pauVar15 = *(undefined1 (**) [16])(lVar18 + (ulong)(uVar19 + 2) * 8);
      }
      pauVar25 = pauVar15;
      if (uVar19 + 3 < uVar2) {
        pauVar25 = *(undefined1 (**) [16])(lVar18 + (ulong)(uVar19 + 3) * 8);
      }
      uVar59 = *(undefined8 *)(*pauVar23 + 8);
      uVar35 = (undefined1)((ulong)uVar59 >> 8);
      uVar37 = (undefined1)((ulong)uVar59 >> 0x10);
      uVar39 = (undefined1)((ulong)uVar59 >> 0x18);
      uVar41 = (undefined1)((ulong)uVar59 >> 0x20);
      uVar43 = (undefined1)((ulong)uVar59 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar59 >> 0x30);
      uVar47 = (undefined1)((ulong)uVar59 >> 0x38);
      uVar59 = *(undefined8 *)*pauVar23;
      auVar88 = *pauVar24;
      auVar51[9] = uVar35;
      auVar51._0_9_ = *(unkbyte9 *)*pauVar23;
      auVar51[10] = uVar37;
      auVar51[0xb] = uVar39;
      auVar51[0xc] = uVar41;
      auVar51[0xd] = uVar43;
      auVar51[0xe] = uVar45;
      auVar51[0xf] = uVar47;
      auVar61 = NEON_ext(auVar88,auVar51,8,1);
      auVar51 = *pauVar15;
      auVar56[9] = uVar35;
      auVar56._0_9_ = *(unkbyte9 *)*pauVar23;
      auVar56[10] = uVar37;
      auVar56[0xb] = uVar39;
      auVar56[0xc] = uVar41;
      auVar56[0xd] = uVar43;
      auVar56[0xe] = uVar45;
      auVar56[0xf] = uVar47;
      auVar76 = NEON_ext(auVar56,auVar61,8,1);
      auVar56 = *param_3;
      auVar61 = *pauVar25;
      auVar62 = NEON_ext(auVar61,auVar51,8,1);
      auVar89 = NEON_ext(auVar51,auVar62,8,1);
      auVar68._0_8_ = CONCAT44(auVar76._8_4_,auVar76._0_4_);
      auVar68._8_4_ = auVar89._0_4_;
      auVar68._12_4_ = auVar89._8_4_;
      auVar4[8] = auVar88[0];
      auVar4._0_8_ = uVar59;
      auVar4[9] = auVar88[1];
      auVar4[10] = auVar88[2];
      auVar4[0xb] = auVar88[3];
      auVar63._0_8_ = CONCAT44(auVar4._8_4_,(float)uVar59);
      auVar63._8_4_ = auVar51._0_4_;
      auVar63._12_4_ = auVar61._0_4_;
      fVar108 = (float)((ulong)uVar59 >> 0x20);
      auVar62._0_8_ = CONCAT44(auVar88._4_4_,fVar108);
      auVar62._12_4_ = auVar61._4_4_;
      auVar62._8_4_ = auVar51._4_4_;
      fVar108 = (float)uVar59 * fVar67 + fVar5 * fVar108 + fVar6 * auVar76._0_4_;
      fVar109 = auVar4._8_4_ * fVar67 + fVar5 * auVar88._4_4_ + fVar6 * auVar76._8_4_;
      fVar110 = auVar51._0_4_ * fVar67 + fVar5 * auVar51._4_4_ + fVar6 * auVar89._0_4_;
      fVar111 = auVar61._0_4_ * fVar67 + fVar5 * auVar62._12_4_ + fVar6 * auVar89._8_4_;
      iVar75 = -(uint)(ABS(fVar108) < *pfVar20);
      iVar80 = -(uint)(ABS(fVar109) < pfVar20[1]);
      iVar82 = -(uint)(ABS(fVar110) < pfVar20[2]);
      iVar84 = -(uint)(ABS(fVar111) < pfVar20[3]);
      bVar90 = (byte)uVar11;
      bVar26 = (byte)iVar75 & bVar90;
      bVar91 = (byte)((ulong)uVar11 >> 8);
      bVar27 = (byte)((uint)iVar75 >> 8) & bVar91;
      bVar92 = (byte)((ulong)uVar11 >> 0x10);
      bVar28 = (byte)((uint)iVar75 >> 0x10) & bVar92;
      bVar93 = (byte)((ulong)uVar11 >> 0x18);
      bVar29 = (byte)((uint)iVar75 >> 0x18) & bVar93;
      bVar94 = (byte)((ulong)uVar11 >> 0x20);
      bVar30 = (byte)iVar80 & bVar94;
      bVar95 = (byte)((ulong)uVar11 >> 0x28);
      bVar31 = (byte)((uint)iVar80 >> 8) & bVar95;
      bVar96 = (byte)((ulong)uVar11 >> 0x30);
      bVar32 = (byte)((uint)iVar80 >> 0x10) & bVar96;
      bVar97 = (byte)((ulong)uVar11 >> 0x38);
      bVar33 = (byte)((uint)iVar80 >> 0x18) & bVar97;
      bVar98 = (byte)uVar12;
      bVar34 = (byte)iVar82 & bVar98;
      bVar99 = (byte)((ulong)uVar12 >> 8);
      bVar36 = (byte)((uint)iVar82 >> 8) & bVar99;
      bVar100 = (byte)((ulong)uVar12 >> 0x10);
      bVar38 = (byte)((uint)iVar82 >> 0x10) & bVar100;
      bVar101 = (byte)((ulong)uVar12 >> 0x18);
      bVar40 = (byte)((uint)iVar82 >> 0x18) & bVar101;
      bVar102 = (byte)((ulong)uVar12 >> 0x20);
      bVar42 = (byte)iVar84 & bVar102;
      bVar103 = (byte)((ulong)uVar12 >> 0x28);
      bVar44 = (byte)((uint)iVar84 >> 8) & bVar103;
      bVar104 = (byte)((ulong)uVar12 >> 0x30);
      bVar46 = (byte)((uint)iVar84 >> 0x10) & bVar104;
      bVar105 = (byte)((ulong)uVar12 >> 0x38);
      bVar48 = (byte)((uint)iVar84 >> 0x18) & bVar105;
      auVar88[1] = bVar27;
      auVar88[0] = bVar26;
      auVar88[2] = bVar28;
      auVar88[3] = bVar29;
      auVar88[4] = bVar30;
      auVar88[5] = bVar31;
      auVar88[6] = bVar32;
      auVar88[7] = bVar33;
      auVar88[8] = bVar34;
      auVar88[9] = bVar36;
      auVar88[10] = bVar38;
      auVar88[0xb] = bVar40;
      auVar88[0xc] = bVar42;
      auVar88[0xd] = bVar44;
      auVar88[0xe] = bVar46;
      auVar88[0xf] = bVar48;
      auVar61[1] = bVar27;
      auVar61[0] = bVar26;
      auVar61[2] = bVar28;
      auVar61[3] = bVar29;
      auVar61[4] = bVar30;
      auVar61[5] = bVar31;
      auVar61[6] = bVar32;
      auVar61[7] = bVar33;
      auVar61[8] = bVar34;
      auVar61[9] = bVar36;
      auVar61[10] = bVar38;
      auVar61[0xb] = bVar40;
      auVar61[0xc] = bVar42;
      auVar61[0xd] = bVar44;
      auVar61[0xe] = bVar46;
      auVar61[0xf] = bVar48;
      auVar51 = NEON_ext(auVar88,auVar61,8,1);
      if ((*pbVar16 & 1) == 0) {
        uVar72 = auVar68._8_8_;
        uVar64 = auVar63._8_8_;
        uVar59 = auVar62._8_8_;
        iVar75 = __cxa_guard_acquire(pbVar16);
        puVar14 = PTR_DAT_047e6df8;
        puVar13 = PTR_DAT_047e6df0;
        auVar62._8_8_ = uVar59;
        auVar68._8_8_ = uVar72;
        auVar63._8_8_ = uVar64;
        pbVar16 = PTR_DAT_047e6df0;
        pbVar17 = PTR_DAT_047e6e00;
        pfVar20 = (float *)PTR_DAT_047e6de8;
        pfVar21 = (float *)PTR_DAT_047e6df8;
        pVar22 = (unkbyte9 *)PTR_DAT_047e6e08;
        if (iVar75 != 0) {
          *(long *)(PTR_DAT_047e6df8 + 8) = auVar106._8_8_;
          *(long *)puVar14 = auVar106._0_8_;
          __cxa_guard_release(puVar13);
          pbVar16 = PTR_DAT_047e6df0;
          pbVar17 = PTR_DAT_047e6e00;
          pfVar20 = (float *)PTR_DAT_047e6de8;
          pfVar21 = (float *)PTR_DAT_047e6df8;
          pVar22 = (unkbyte9 *)PTR_DAT_047e6e08;
        }
      }
      fVar54 = auVar56._0_4_;
      fVar60 = auVar56._4_4_;
      auVar86._8_4_ = auVar56._8_4_;
      auVar86._0_8_ = CONCAT44(auVar86._8_4_,auVar86._8_4_);
      auVar86._12_4_ = auVar86._8_4_;
      if ((*pbVar17 & 1) == 0) {
        uVar59 = auVar86._8_8_;
        iVar75 = __cxa_guard_acquire(pbVar17);
        puVar14 = PTR_DAT_047e6e08;
        puVar13 = PTR_DAT_047e6e00;
        auVar86._8_8_ = uVar59;
        pbVar16 = PTR_DAT_047e6df0;
        pbVar17 = PTR_DAT_047e6e00;
        pfVar20 = (float *)PTR_DAT_047e6de8;
        pfVar21 = (float *)PTR_DAT_047e6df8;
        pVar22 = (unkbyte9 *)PTR_DAT_047e6e08;
        if (iVar75 != 0) {
          *(long *)(PTR_DAT_047e6e08 + 8) = auVar107._8_8_;
          *(long *)puVar14 = auVar107._0_8_;
          __cxa_guard_release(puVar13);
          pbVar16 = PTR_DAT_047e6df0;
          pbVar17 = PTR_DAT_047e6e00;
          pfVar20 = (float *)PTR_DAT_047e6de8;
          pfVar21 = (float *)PTR_DAT_047e6df8;
          pVar22 = (unkbyte9 *)PTR_DAT_047e6e08;
        }
      }
      Var10 = *pVar22;
      fVar3 = (float)*(undefined8 *)pVar22;
      fVar50 = (float)((ulong)*(undefined8 *)pVar22 >> 0x20);
      fVar52 = (float)*(undefined8 *)((long)pVar22 + 8);
      fVar53 = (float)((ulong)*(undefined8 *)((long)pVar22 + 8) >> 0x20);
      fVar74 = *pfVar21 *
               (fVar60 * auVar62._0_4_ + auVar68._0_4_ * auVar86._0_4_ + auVar63._0_4_ * fVar54) +
               auVar76._4_4_ * fVar3;
      fVar79 = pfVar21[1] *
               (fVar60 * auVar62._4_4_ + auVar68._4_4_ * auVar86._4_4_ + auVar63._4_4_ * fVar54) +
               auVar76._12_4_ * fVar50;
      fVar81 = pfVar21[2] *
               (fVar60 * auVar62._8_4_ + auVar68._8_4_ * auVar86._8_4_ + auVar63._8_4_ * fVar54) +
               auVar89._4_4_ * fVar52;
      fVar83 = pfVar21[3] *
               (fVar60 * auVar62._12_4_ + auVar68._12_4_ * auVar86._12_4_ + auVar63._12_4_ * fVar54)
               + auVar89._12_4_ * fVar53;
      bVar34 = (char)((byte)((uint)(-fVar74 + fVar108 * fVar3) >> 0x18) ^
                     (byte)((uint)fVar74 >> 0x18)) >> 7;
      auVar76[0] = bVar34 & bVar90;
      auVar76[1] = bVar34 & bVar91;
      auVar76[2] = bVar34 & bVar92;
      auVar76[3] = bVar34 & bVar93;
      bVar34 = (char)((byte)((uint)(-fVar79 + fVar109 * fVar50) >> 0x18) ^
                     (byte)((uint)fVar79 >> 0x18)) >> 7;
      auVar76[4] = bVar34 & bVar94;
      auVar76[5] = bVar34 & bVar95;
      auVar76[6] = bVar34 & bVar96;
      auVar76[7] = bVar34 & bVar97;
      bVar34 = (char)((byte)((uint)(-fVar81 + fVar110 * fVar52) >> 0x18) ^
                     (byte)((uint)fVar81 >> 0x18)) >> 7;
      auVar76[8] = bVar34 & bVar98;
      auVar76[9] = bVar34 & bVar99;
      auVar76[10] = bVar34 & bVar100;
      auVar76[0xb] = bVar34 & bVar101;
      bVar34 = (char)((byte)((uint)(-fVar83 + fVar111 * fVar53) >> 0x18) ^
                     (byte)((uint)fVar83 >> 0x18)) >> 7;
      auVar76[0xc] = bVar34 & bVar102;
      auVar76[0xd] = bVar34 & bVar103;
      auVar76[0xe] = bVar34 & bVar104;
      auVar76[0xf] = bVar34 & bVar105;
      auVar56 = NEON_ext(auVar76,auVar76,8,1);
      uVar49 = CONCAT13(auVar51[3] | bVar29 | auVar51[7] | bVar33 | auVar56[7] | auVar76[7] |
                        auVar56[3] | auVar76[3],
                        CONCAT12(auVar51[2] | bVar28 | auVar51[6] | bVar32 | auVar56[6] | auVar76[6]
                                 | auVar56[2] | auVar76[2],
                                 CONCAT11(auVar51[1] | bVar27 | auVar51[5] | bVar31 |
                                          auVar56[5] | auVar76[5] | auVar56[1] | auVar76[1],
                                          auVar51[0] | bVar26 | auVar51[4] | bVar30 |
                                          auVar56[4] | auVar76[4] | auVar56[0] | auVar76[0])));
      if (uVar49 != 0xf) {
        auVar51 = pauVar23[1];
        auVar56 = pauVar24[1];
        auVar88 = NEON_ext(auVar56,auVar51,8,1);
        pauVar1 = pauVar15 + 1;
        uVar87 = (undefined4)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20);
        fVar50 = fVar108 * fVar54 + fVar67 * fVar74;
        fVar52 = fVar109 * fVar54 + fVar67 * fVar79;
        fVar53 = fVar110 * fVar54 + fVar67 * fVar81;
        fVar54 = fVar111 * fVar54 + fVar67 * fVar83;
        fVar55 = fVar108 * fVar60 + fVar5 * fVar74;
        fVar57 = fVar109 * fVar60 + fVar5 * fVar79;
        fVar58 = fVar110 * fVar60 + fVar5 * fVar81;
        fVar60 = fVar111 * fVar60 + fVar5 * fVar83;
        fVar74 = fVar108 * auVar86._0_4_ + fVar6 * fVar74;
        fVar79 = fVar109 * auVar86._4_4_ + fVar6 * fVar79;
        fVar81 = fVar110 * auVar86._8_4_ + fVar6 * fVar81;
        fVar83 = fVar111 * auVar86._12_4_ + fVar6 * fVar83;
        auVar61 = NEON_ext(auVar51,auVar88,8,1);
        auVar88 = pauVar25[1];
        auVar89._12_4_ = uVar87;
        auVar89._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar62 = NEON_ext(auVar88,auVar89,8,1);
        auVar7._12_4_ = uVar87;
        auVar7._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar62 = NEON_ext(auVar7,auVar62,8,1);
        fVar65 = auVar51._0_4_ * fVar50 + fVar55 * auVar51._4_4_ + fVar74 * auVar61._0_4_ +
                 fVar108 * auVar61._4_4_;
        fVar70 = auVar56._0_4_ * fVar52 + fVar57 * auVar56._4_4_ + fVar79 * auVar61._8_4_ +
                 fVar109 * auVar61._12_4_;
        fVar71 = (float)*(undefined8 *)*pauVar1 * fVar53 +
                 fVar58 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) + fVar81 * auVar62._0_4_ +
                 fVar110 * auVar62._4_4_;
        fVar73 = auVar88._0_4_ * fVar54 + fVar60 * auVar88._4_4_ + fVar83 * auVar62._8_4_ +
                 fVar111 * auVar62._12_4_;
        iVar75 = -(uint)(fVar65 == 0.0);
        iVar80 = -(uint)(fVar70 == 0.0);
        iVar82 = -(uint)(fVar71 == 0.0);
        iVar84 = -(uint)(fVar73 == 0.0);
        auVar77[0] = (byte)iVar75 & bVar90;
        auVar77[1] = (byte)((uint)iVar75 >> 8) & bVar91;
        auVar77[2] = (byte)((uint)iVar75 >> 0x10) & bVar92;
        auVar77[3] = (byte)((uint)iVar75 >> 0x18) & bVar93;
        auVar77[4] = (byte)iVar80 & bVar94;
        auVar77[5] = (byte)((uint)iVar80 >> 8) & bVar95;
        auVar77[6] = (byte)((uint)iVar80 >> 0x10) & bVar96;
        auVar77[7] = (byte)((uint)iVar80 >> 0x18) & bVar97;
        auVar77[8] = (byte)iVar82 & bVar98;
        auVar77[9] = (byte)((uint)iVar82 >> 8) & bVar99;
        auVar77[10] = (byte)((uint)iVar82 >> 0x10) & bVar100;
        auVar77[0xb] = (byte)((uint)iVar82 >> 0x18) & bVar101;
        auVar77[0xc] = (byte)iVar84 & bVar102;
        auVar77[0xd] = (byte)((uint)iVar84 >> 8) & bVar103;
        auVar77[0xe] = (byte)((uint)iVar84 >> 0x10) & bVar104;
        auVar77[0xf] = (byte)((uint)iVar84 >> 0x18) & bVar105;
        auVar51 = NEON_ext(auVar77,auVar77,8,1);
        bVar26 = (char)((byte)((uint)(fVar108 - fVar65) >> 0x18) ^ (byte)((uint)fVar65 >> 0x18)) >>
                 7;
        auVar78[0] = bVar26 & bVar90;
        auVar78[1] = bVar26 & bVar91;
        auVar78[2] = bVar26 & bVar92;
        auVar78[3] = bVar26 & bVar93;
        bVar26 = (char)((byte)((uint)(fVar109 - fVar70) >> 0x18) ^ (byte)((uint)fVar70 >> 0x18)) >>
                 7;
        auVar78[4] = bVar26 & bVar94;
        auVar78[5] = bVar26 & bVar95;
        auVar78[6] = bVar26 & bVar96;
        auVar78[7] = bVar26 & bVar97;
        bVar26 = (char)((byte)((uint)(fVar110 - fVar71) >> 0x18) ^ (byte)((uint)fVar71 >> 0x18)) >>
                 7;
        auVar78[8] = bVar26 & bVar98;
        auVar78[9] = bVar26 & bVar99;
        auVar78[10] = bVar26 & bVar100;
        auVar78[0xb] = bVar26 & bVar101;
        bVar26 = (char)((byte)((uint)(fVar111 - fVar73) >> 0x18) ^ (byte)((uint)fVar73 >> 0x18)) >>
                 7;
        auVar78[0xc] = bVar26 & bVar102;
        auVar78[0xd] = bVar26 & bVar103;
        auVar78[0xe] = bVar26 & bVar104;
        auVar78[0xf] = bVar26 & bVar105;
        auVar56 = NEON_ext(auVar78,auVar78,8,1);
        uVar49 = CONCAT13(auVar56[3] | auVar78[3] | auVar56[7] | auVar78[7],
                          CONCAT12(auVar56[2] | auVar78[2] | auVar56[6] | auVar78[6],
                                   CONCAT11(auVar56[1] | auVar78[1] | auVar56[5] | auVar78[5],
                                            auVar56[0] | auVar78[0] | auVar56[4] | auVar78[4]))) &
                 (CONCAT13(auVar51[3] | auVar77[3] | auVar51[7] | auVar77[7],
                           CONCAT12(auVar51[2] | auVar77[2] | auVar51[6] | auVar77[6],
                                    CONCAT11(auVar51[1] | auVar77[1] | auVar51[5] | auVar77[5],
                                             auVar51[0] | auVar77[0] | auVar51[4] | auVar77[4]))) ^
                 0xf) | uVar49;
        if (uVar49 != 0xf) {
          auVar51 = pauVar23[2];
          auVar56 = pauVar24[2];
          auVar88 = NEON_ext(auVar56,auVar51,8,1);
          pauVar24 = pauVar15 + 2;
          uVar87 = (undefined4)((ulong)*(undefined8 *)(pauVar15[2] + 8) >> 0x20);
          auVar61 = NEON_ext(auVar51,auVar88,8,1);
          auVar88 = pauVar25[2];
          auVar8._12_4_ = uVar87;
          auVar8._0_12_ = *(undefined1 (*) [12])*pauVar24;
          auVar62 = NEON_ext(auVar88,auVar8,8,1);
          auVar9._12_4_ = uVar87;
          auVar9._0_12_ = *(undefined1 (*) [12])*pauVar24;
          auVar62 = NEON_ext(auVar9,auVar62,8,1);
          fVar85 = auVar51._0_4_ * fVar50 + fVar55 * auVar51._4_4_ + fVar74 * auVar61._0_4_ +
                   fVar108 * auVar61._4_4_;
          fVar52 = auVar56._0_4_ * fVar52 + fVar57 * auVar56._4_4_ + fVar79 * auVar61._8_4_ +
                   fVar109 * auVar61._12_4_;
          fVar53 = (float)*(undefined8 *)*pauVar24 * fVar53 +
                   fVar58 * (float)((ulong)*(undefined8 *)*pauVar24 >> 0x20) +
                   fVar81 * auVar62._0_4_ + fVar110 * auVar62._4_4_;
          fVar54 = auVar88._0_4_ * fVar54 + fVar60 * auVar88._4_4_ + fVar83 * auVar62._8_4_ +
                   fVar111 * auVar62._12_4_;
          bVar26 = (char)((byte)((uint)(fVar108 - (fVar65 + fVar85)) >> 0x18) ^
                         (byte)((uint)fVar85 >> 0x18)) >> 7;
          auVar69[0] = bVar26 & bVar90;
          auVar69[1] = bVar26 & bVar91;
          auVar69[2] = bVar26 & bVar92;
          auVar69[3] = bVar26 & bVar93;
          bVar26 = (char)((byte)((uint)(fVar109 - (fVar70 + fVar52)) >> 0x18) ^
                         (byte)((uint)fVar52 >> 0x18)) >> 7;
          auVar69[4] = bVar26 & bVar94;
          auVar69[5] = bVar26 & bVar95;
          auVar69[6] = bVar26 & bVar96;
          auVar69[7] = bVar26 & bVar97;
          bVar26 = (char)((byte)((uint)(fVar110 - (fVar71 + fVar53)) >> 0x18) ^
                         (byte)((uint)fVar53 >> 0x18)) >> 7;
          auVar69[8] = bVar26 & bVar98;
          auVar69[9] = bVar26 & bVar99;
          auVar69[10] = bVar26 & bVar100;
          auVar69[0xb] = bVar26 & bVar101;
          bVar26 = (char)((byte)((uint)(fVar111 - (fVar73 + fVar54)) >> 0x18) ^
                         (byte)((uint)fVar54 >> 0x18)) >> 7;
          auVar69[0xc] = bVar26 & bVar102;
          auVar69[0xd] = bVar26 & bVar103;
          auVar69[0xe] = bVar26 & bVar104;
          auVar69[0xf] = bVar26 & bVar105;
          auVar51 = NEON_ext(auVar69,auVar69,8,1);
          uVar66 = CONCAT13(auVar51[3] | auVar69[3],
                            CONCAT12(auVar51[2] | auVar69[2],
                                     CONCAT11(auVar51[1] | auVar69[1],auVar51[0] | auVar69[0])));
          uVar66 = (uint)(CONCAT17(auVar51[7] | auVar69[7],
                                   CONCAT16(auVar51[6] | auVar69[6],
                                            CONCAT15(auVar51[5] | auVar69[5],
                                                     CONCAT14(auVar51[4] | auVar69[4],uVar66)))) >>
                         0x20) | uVar49 | uVar66;
          if (uVar66 != 0xf) {
            auVar106._4_4_ = fVar109;
            auVar106._0_4_ = fVar108;
            auVar106._8_4_ = fVar110;
            auVar106._12_4_ = fVar111;
            auVar106 = NEON_frecpe(auVar106,4);
            iVar75 = 0;
            auVar107._4_4_ = fVar109;
            auVar107._0_4_ = fVar108;
            auVar107._8_4_ = fVar110;
            auVar107._12_4_ = fVar111;
            auVar107 = NEON_frecps(auVar107,auVar106,4);
            fVar67 = auVar106._0_4_ * fVar3 * auVar107._0_4_;
            fVar55 = fVar67 * fVar55;
            param_4[1] = CONCAT17((char)((unkuint9)Var10 >> 0x18),
                                  CONCAT16((char)((unkuint9)Var10 >> 0x10),
                                           CONCAT15((char)((unkuint9)Var10 >> 8),
                                                    CONCAT14((char)Var10,fVar67 * fVar74))));
            *param_4 = CONCAT17((char)((uint)fVar55 >> 0x18),
                                CONCAT16((char)((uint)fVar55 >> 0x10),
                                         CONCAT15((char)((uint)fVar55 >> 8),
                                                  CONCAT14(SUB41(fVar55,0),fVar67 * fVar50))));
            for (; (uVar66 & 1) != 0; uVar66 = uVar66 >> 1) {
              iVar75 = iVar75 + 1;
            }
            return *(undefined8 *)(*param_2 + (ulong)(iVar75 + uVar19) * 8);
          }
        }
      }
      uVar19 = uVar19 + 4;
    } while (uVar19 < uVar2);
  }
  return 0;
}


