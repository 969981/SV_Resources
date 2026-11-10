/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0e2d0; name: FUN_02f0e2d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f0e2d0(long param_1,uint *param_2,int param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  byte *pbVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar51;
  undefined1 auVar44 [12];
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar59;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  ulong uVar62;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar68;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  uint uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  uint uVar83;
  float fVar84;
  float fVar85;
  uint uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  float fStack_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  float fStack_58;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar23 = _UNK_03cabe6c;
  uVar22 = _UNK_03cabe68;
  uVar21 = _UNK_03cabe64;
  uVar20 = _DAT_03cabe60;
  uVar19 = DAT_03cab628._4_4_;
  uVar18 = DAT_03cab620._4_4_;
  uVar17 = (uint)DAT_03cab620;
  uVar63 = _UNK_03caa5b8;
  uVar16 = _UNK_03caa5b4;
  uVar15 = _DAT_03caa5b0;
  pbVar27 = (byte *)(param_1 + 0x20);
  bVar1 = *pbVar27;
  if (bVar1 - 0x13 < 2) {
    do {
      plVar26 = (long *)(param_1 + 0x28);
      lVar24 = *plVar26;
      param_1 = 0;
      if (lVar24 != 0) {
        param_1 = lVar24 + (long)plVar26;
      }
      bVar1 = *(byte *)(param_1 + 0x20);
    } while (bVar1 - 0x13 < 2);
    pbVar27 = (byte *)(param_1 + 0x20);
  }
  if (bVar1 < 0x13) {
    uVar40 = -(uint)(param_3 == 0);
    uVar83 = (uint)_UNK_03cabe58;
    uVar86 = (uint)((ulong)_UNK_03cabe58 >> 0x20);
    uVar11 = param_2[8];
    uVar12 = param_2[9];
    uVar13 = param_2[10];
    uVar14 = param_2[0xb];
    uVar7 = param_2[0xc];
    uVar8 = param_2[0xd];
    uVar9 = param_2[0xe];
    uVar10 = param_2[0xf];
    uVar78 = (uint)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    uVar6 = param_2[7];
    uVar37 = (uint)_UNK_03caa5b8;
    uVar39 = (uint)((ulong)_UNK_03caa5b8 >> 0x20);
    fVar30 = (float)(uVar7 ^ (uVar7 ^ _DAT_03cabe50) & uVar40);
    fVar33 = (float)(uVar8 ^ (uVar8 ^ _UNK_03cabe54) & uVar40);
    fVar35 = (float)(uVar9 ^ (uVar9 ^ uVar83) & uVar40);
    fVar36 = (float)(uVar10 ^ (uVar10 ^ uVar86) & uVar40);
    fVar90 = (float)(uVar11 ^ (uVar11 ^ _DAT_03caa5b0) & uVar40);
    fVar91 = (float)(uVar12 ^ (uVar12 ^ _UNK_03caa5b4) & uVar40);
    fVar92 = (float)(uVar13 ^ (uVar13 ^ uVar37) & uVar40);
    fVar93 = (float)(uVar14 ^ (uVar14 ^ uVar39) & uVar40);
    fVar94 = (float)(uVar3 ^ (uVar3 ^ _DAT_03cabe60) & uVar40);
    fVar95 = (float)(uVar4 ^ (uVar4 ^ _UNK_03cabe64) & uVar40);
    fVar96 = (float)(uVar5 ^ (uVar5 ^ _UNK_03cabe68) & uVar40);
    fVar97 = (float)(uVar6 ^ (uVar6 ^ _UNK_03cabe6c) & uVar40);
    fVar98 = (float)(*param_2 ^ (*param_2 ^ (uint)DAT_03cab620) & uVar40);
    fVar99 = (float)(param_2[1] ^ (param_2[1] ^ DAT_03cab620._4_4_) & uVar40);
    fVar100 = (float)(param_2[2] ^ (param_2[2] ^ (uint)DAT_03cab628) & uVar40);
    fVar101 = (float)(uVar78 ^ (uVar78 ^ DAT_03cab628._4_4_) & uVar40);
    fVar32 = (float)(_DAT_03cabe50 ^ (_DAT_03cabe50 ^ uVar7) & uVar40);
    fVar34 = (float)(_UNK_03cabe54 ^ (_UNK_03cabe54 ^ uVar8) & uVar40);
    fVar77 = (float)(uVar83 ^ (uVar83 ^ uVar9) & uVar40);
    fVar102 = (float)(uVar86 ^ (uVar86 ^ uVar10) & uVar40);
    fVar103 = (float)(_DAT_03caa5b0 ^ (_DAT_03caa5b0 ^ uVar11) & uVar40);
    fVar104 = (float)(_UNK_03caa5b4 ^ (_UNK_03caa5b4 ^ uVar12) & uVar40);
    fVar105 = (float)(uVar37 ^ (uVar37 ^ uVar13) & uVar40);
    fVar106 = (float)(uVar39 ^ (uVar39 ^ uVar14) & uVar40);
    fVar60 = (float)(_DAT_03cabe60 ^ (_DAT_03cabe60 ^ uVar3) & uVar40);
    fVar87 = (float)(_UNK_03cabe64 ^ (_UNK_03cabe64 ^ uVar4) & uVar40);
    fVar88 = (float)(_UNK_03cabe68 ^ (_UNK_03cabe68 ^ uVar5) & uVar40);
    fVar89 = (float)(_UNK_03cabe6c ^ (_UNK_03cabe6c ^ uVar6) & uVar40);
    fVar28 = (float)((uint)DAT_03cab620 ^ ((uint)DAT_03cab620 ^ *param_2) & uVar40);
    fVar43 = (float)(DAT_03cab620._4_4_ ^ (DAT_03cab620._4_4_ ^ param_2[1]) & uVar40);
    fVar38 = (float)((uint)DAT_03cab628 ^ ((uint)DAT_03cab628 ^ param_2[2]) & uVar40);
    fVar51 = (float)(DAT_03cab628._4_4_ ^ (DAT_03cab628._4_4_ ^ uVar78) & uVar40);
    switch(bVar1) {
    case 0:
    case 6:
      fVar49 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar50 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      fVar29 = *(float *)(param_1 + 0x50);
      fVar31 = *(float *)(param_1 + 0x54);
      fVar42 = *(float *)(param_1 + 0x58);
      *(float *)(param_1 + 0x48) = fVar77 + fVar105 * fVar49 + fVar38 * fVar50 + fVar88 * fVar41;
      *(float *)(param_1 + 0x4c) = fVar102 + fVar106 * fVar49 + fVar51 * fVar50 + fVar89 * fVar41;
      *(float *)(param_1 + 0x40) = fVar32 + fVar103 * fVar49 + fVar28 * fVar50 + fVar60 * fVar41;
      *(float *)(param_1 + 0x44) = fVar34 + fVar104 * fVar49 + fVar43 * fVar50 + fVar87 * fVar41;
      *(ulong *)(param_1 + 0x58) =
           CONCAT44(fVar36 + fVar93 * fVar42 + fVar101 * fVar29 + fVar97 * fVar31,
                    fVar35 + fVar92 * fVar42 + fVar100 * fVar29 + fVar96 * fVar31);
      *(ulong *)(param_1 + 0x50) =
           CONCAT44(fVar33 + fVar91 * fVar42 + fVar99 * fVar29 + fVar95 * fVar31,
                    fVar30 + fVar90 * fVar42 + fVar98 * fVar29 + fVar94 * fVar31);
      break;
    case 1:
      memcpy(auStack_70,(void *)(param_1 + 0x40),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0x80),0x40);
      fVar29 = (float)local_40;
      fVar42 = (float)((ulong)local_40 >> 0x20);
      fVar31 = fVar103 * (float)uStack_38;
      fVar50 = fVar104 * (float)uStack_38;
      fVar41 = fVar90 * (float)uStack_78;
      fVar49 = fVar91 * (float)uStack_78;
      uStack_38 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar42,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar42);
      local_40 = CONCAT44(fVar34 + fVar50 + fVar43 * fVar29 + fVar87 * fVar42,
                          fVar32 + fVar31 + fVar28 * fVar29 + fVar60 * fVar42);
      uStack_78 = CONCAT44(fVar36 + fVar93 * (float)uStack_78 +
                                    fVar101 * (float)local_80 + fVar97 * local_80._4_4_,
                           fVar35 + fVar92 * (float)uStack_78 +
                                    fVar100 * (float)local_80 + fVar96 * local_80._4_4_);
      local_80 = CONCAT44(fVar33 + fVar49 + fVar99 * (float)local_80 + fVar95 * local_80._4_4_,
                          fVar30 + fVar41 + fVar98 * (float)local_80 + fVar94 * local_80._4_4_);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      auVar64._0_8_ =
           CONCAT44(fVar104 * fVar35 + fVar43 * fVar30 + fVar87 * fVar33,
                    fVar103 * fVar35 + fVar28 * fVar30 + fVar60 * fVar33);
      auVar64._8_4_ = fVar105 * fVar35 + fVar38 * fVar30 + fVar88 * fVar33;
      auVar64._12_4_ = fVar106 * fVar35 + fVar51 * fVar30 + fVar89 * fVar33;
      fVar38 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar28 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      uStack_c8 = CONCAT44(fVar93 * fVar38 + fVar101 * fVar28 + fVar97 * fVar43,
                           fVar92 * fVar38 + fVar100 * fVar28 + fVar96 * fVar43);
      local_d0 = CONCAT44(fVar91 * fVar38 + fVar99 * fVar28 + fVar95 * fVar43,
                          fVar90 * fVar38 + fVar98 * fVar28 + fVar94 * fVar43);
      uStack_b8 = auVar64._8_8_;
      local_c0 = auVar64._0_8_;
      FUN_02f11744(param_1,&local_40,&local_80,&local_c0,&local_d0);
      break;
    case 2:
      memcpy(auStack_70,(void *)(param_1 + 0x40),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0x80),0x40);
      fVar29 = (float)local_40;
      fVar42 = (float)((ulong)local_40 >> 0x20);
      fVar31 = fVar103 * (float)uStack_38;
      fVar50 = fVar104 * (float)uStack_38;
      fVar41 = fVar90 * (float)uStack_78;
      fVar49 = fVar91 * (float)uStack_78;
      local_c0._0_4_ = (float)*(undefined8 *)(param_1 + 0x40);
      local_c0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      uStack_b8._0_4_ = (float)*(undefined8 *)(param_1 + 0x48);
      fVar52 = fVar103 * (float)uStack_b8;
      fVar59 = fVar104 * (float)uStack_b8;
      local_e0._0_4_ = auStack_70._16_4_;
      local_e0._4_4_ = auStack_70._20_4_;
      uStack_38 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar42,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar42);
      local_40 = CONCAT44(fVar34 + fVar50 + fVar43 * fVar29 + fVar87 * fVar42,
                          fVar32 + fVar31 + fVar28 * fVar29 + fVar60 * fVar42);
      fVar32 = auStack_b0._16_4_;
      fVar34 = auStack_b0._20_4_;
      local_d0._0_4_ = (float)*(undefined8 *)(param_1 + 0x80);
      local_d0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      uStack_c8._0_4_ = (float)*(undefined8 *)(param_1 + 0x88);
      uStack_78 = CONCAT44(fVar36 + fVar93 * (float)uStack_78 +
                                    fVar101 * (float)local_80 + fVar97 * local_80._4_4_,
                           fVar35 + fVar92 * (float)uStack_78 +
                                    fVar100 * (float)local_80 + fVar96 * local_80._4_4_);
      local_80 = CONCAT44(fVar33 + fVar49 + fVar99 * (float)local_80 + fVar95 * local_80._4_4_,
                          fVar30 + fVar41 + fVar98 * (float)local_80 + fVar94 * local_80._4_4_);
      uStack_b8 = CONCAT44(fVar106 * (float)uStack_b8 +
                           fVar51 * (float)local_c0 + fVar89 * local_c0._4_4_,
                           fVar105 * (float)uStack_b8 +
                           fVar38 * (float)local_c0 + fVar88 * local_c0._4_4_);
      local_c0 = CONCAT44(fVar59 + fVar43 * (float)local_c0 + fVar87 * local_c0._4_4_,
                          fVar52 + fVar28 * (float)local_c0 + fVar60 * local_c0._4_4_);
      auVar69._0_8_ =
           CONCAT44(fVar104 * fStack_58 + fVar43 * (float)local_e0 + fVar87 * local_e0._4_4_,
                    fVar103 * fStack_58 + fVar28 * (float)local_e0 + fVar60 * local_e0._4_4_);
      auVar69._8_4_ = fVar105 * fStack_58 + fVar38 * (float)local_e0 + fVar88 * local_e0._4_4_;
      auVar69._12_4_ = fVar106 * fStack_58 + fVar51 * (float)local_e0 + fVar89 * local_e0._4_4_;
      auVar53._0_8_ =
           CONCAT44(fVar91 * (float)uStack_c8 + fVar99 * (float)local_d0 + fVar95 * local_d0._4_4_,
                    fVar90 * (float)uStack_c8 + fVar98 * (float)local_d0 + fVar94 * local_d0._4_4_);
      auVar53._8_4_ =
           fVar92 * (float)uStack_c8 + fVar100 * (float)local_d0 + fVar96 * local_d0._4_4_;
      auVar53._12_4_ =
           fVar93 * (float)uStack_c8 + fVar101 * (float)local_d0 + fVar97 * local_d0._4_4_;
      uStack_e8 = CONCAT44(fVar93 * fStack_98 + fVar101 * fVar32 + fVar97 * fVar34,
                           fVar92 * fStack_98 + fVar100 * fVar32 + fVar96 * fVar34);
      local_f0 = CONCAT44(fVar91 * fStack_98 + fVar99 * fVar32 + fVar95 * fVar34,
                          fVar90 * fStack_98 + fVar98 * fVar32 + fVar94 * fVar34);
      uStack_d8 = auVar69._8_8_;
      uStack_c8 = auVar53._8_8_;
      local_e0 = auVar69._0_8_;
      local_d0 = auVar53._0_8_;
      FUN_02f0f634(param_1,&local_40,&local_80,&local_c0,&local_d0,&local_e0,&local_f0);
      break;
    case 3:
      memcpy(auStack_70,(void *)(param_1 + 0x60),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0xa0),0x40);
      fVar29 = (float)local_40;
      fVar31 = (float)((ulong)local_40 >> 0x20);
      local_f0._0_4_ = (float)local_80;
      local_f0._4_4_ = (float)((ulong)local_80 >> 0x20);
      local_e0._0_4_ = auStack_70._16_4_;
      local_e0._4_4_ = auStack_70._20_4_;
      local_d0._0_4_ = (float)*(undefined8 *)(param_1 + 0x60);
      local_d0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      uStack_c8._0_4_ = (float)*(undefined8 *)(param_1 + 0x68);
      fVar42 = fVar103 * (float)uStack_c8;
      fVar50 = fVar104 * (float)uStack_c8;
      uStack_b8 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar31,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar31);
      local_c0 = CONCAT44(fVar34 + fVar104 * (float)uStack_38 + fVar43 * fVar29 + fVar87 * fVar31,
                          fVar32 + fVar103 * (float)uStack_38 + fVar28 * fVar29 + fVar60 * fVar31);
      fVar77 = (float)*(undefined8 *)(param_1 + 0xa8);
      fVar32 = (float)*(undefined8 *)(param_1 + 0xa0);
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
      auVar65._0_8_ =
           CONCAT44(fVar104 * fStack_58 + fVar43 * (float)local_e0 + fVar87 * local_e0._4_4_,
                    fVar103 * fStack_58 + fVar28 * (float)local_e0 + fVar60 * local_e0._4_4_);
      auVar65._8_4_ = fVar105 * fStack_58 + fVar38 * (float)local_e0 + fVar88 * local_e0._4_4_;
      auVar65._12_4_ = fVar106 * fStack_58 + fVar51 * (float)local_e0 + fVar89 * local_e0._4_4_;
      local_110._0_4_ = auStack_b0._16_4_;
      local_110._4_4_ = auStack_b0._20_4_;
      uStack_c8 = CONCAT44(fVar106 * (float)uStack_c8 +
                           fVar51 * (float)local_d0 + fVar89 * local_d0._4_4_,
                           fVar105 * (float)uStack_c8 +
                           fVar38 * (float)local_d0 + fVar88 * local_d0._4_4_);
      local_d0 = CONCAT44(fVar50 + fVar43 * (float)local_d0 + fVar87 * local_d0._4_4_,
                          fVar42 + fVar28 * (float)local_d0 + fVar60 * local_d0._4_4_);
      auVar73._0_8_ =
           CONCAT44(fVar91 * fStack_98 + fVar99 * (float)local_110 + fVar95 * local_110._4_4_,
                    fVar90 * fStack_98 + fVar98 * (float)local_110 + fVar94 * local_110._4_4_);
      auVar73._8_4_ = fVar92 * fStack_98 + fVar100 * (float)local_110 + fVar96 * local_110._4_4_;
      auVar73._12_4_ = fVar93 * fStack_98 + fVar101 * (float)local_110 + fVar97 * local_110._4_4_;
      auVar54._0_8_ =
           CONCAT44(fVar33 + fVar91 * (float)uStack_78 +
                             fVar99 * (float)local_f0 + fVar95 * local_f0._4_4_,
                    fVar30 + fVar90 * (float)uStack_78 +
                             fVar98 * (float)local_f0 + fVar94 * local_f0._4_4_);
      auVar54._8_4_ =
           fVar35 + fVar92 * (float)uStack_78 + fVar100 * (float)local_f0 + fVar96 * local_f0._4_4_;
      auVar54._12_4_ =
           fVar36 + fVar93 * (float)uStack_78 + fVar101 * (float)local_f0 + fVar97 * local_f0._4_4_;
      uStack_e8 = auVar54._8_8_;
      uStack_d8 = auVar65._8_8_;
      uStack_108 = auVar73._8_8_;
      uStack_f8 = CONCAT44(fVar93 * fVar77 + fVar101 * fVar32 + fVar97 * fVar34,
                           fVar92 * fVar77 + fVar100 * fVar32 + fVar96 * fVar34);
      local_100 = CONCAT44(fVar91 * fVar77 + fVar99 * fVar32 + fVar95 * fVar34,
                           fVar90 * fVar77 + fVar98 * fVar32 + fVar94 * fVar34);
      local_110 = auVar73._0_8_;
      local_f0 = auVar54._0_8_;
      local_e0 = auVar65._0_8_;
      FUN_02f1473c(param_1,&local_c0,&local_f0,&local_d0,&local_100,&local_e0,&local_110);
      (**(code **)(*(long *)PTR_DAT_047e4050 + (ulong)*pbVar27 * 0x80 + 0x78))(param_1);
      break;
    case 4:
      memcpy(auStack_70,(void *)(param_1 + 0x40),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0x80),0x40);
      fVar29 = (float)local_40;
      fVar31 = (float)((ulong)local_40 >> 0x20);
      local_f0._0_4_ = (float)local_80;
      local_f0._4_4_ = (float)((ulong)local_80 >> 0x20);
      local_e0._0_4_ = auStack_70._16_4_;
      local_e0._4_4_ = auStack_70._20_4_;
      local_d0._0_4_ = (float)*(undefined8 *)(param_1 + 0x40);
      local_d0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      uStack_c8._0_4_ = (float)*(undefined8 *)(param_1 + 0x48);
      fVar42 = fVar103 * (float)uStack_c8;
      fVar50 = fVar104 * (float)uStack_c8;
      uStack_b8 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar31,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar31);
      local_c0 = CONCAT44(fVar34 + fVar104 * (float)uStack_38 + fVar43 * fVar29 + fVar87 * fVar31,
                          fVar32 + fVar103 * (float)uStack_38 + fVar28 * fVar29 + fVar60 * fVar31);
      fVar77 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar32 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      auVar66._0_8_ =
           CONCAT44(fVar104 * fStack_58 + fVar43 * (float)local_e0 + fVar87 * local_e0._4_4_,
                    fVar103 * fStack_58 + fVar28 * (float)local_e0 + fVar60 * local_e0._4_4_);
      auVar66._8_4_ = fVar105 * fStack_58 + fVar38 * (float)local_e0 + fVar88 * local_e0._4_4_;
      auVar66._12_4_ = fVar106 * fStack_58 + fVar51 * (float)local_e0 + fVar89 * local_e0._4_4_;
      local_110._0_4_ = auStack_b0._16_4_;
      local_110._4_4_ = auStack_b0._20_4_;
      uStack_c8 = CONCAT44(fVar106 * (float)uStack_c8 +
                           fVar51 * (float)local_d0 + fVar89 * local_d0._4_4_,
                           fVar105 * (float)uStack_c8 +
                           fVar38 * (float)local_d0 + fVar88 * local_d0._4_4_);
      local_d0 = CONCAT44(fVar50 + fVar43 * (float)local_d0 + fVar87 * local_d0._4_4_,
                          fVar42 + fVar28 * (float)local_d0 + fVar60 * local_d0._4_4_);
      auVar74._0_8_ =
           CONCAT44(fVar91 * fStack_98 + fVar99 * (float)local_110 + fVar95 * local_110._4_4_,
                    fVar90 * fStack_98 + fVar98 * (float)local_110 + fVar94 * local_110._4_4_);
      auVar74._8_4_ = fVar92 * fStack_98 + fVar100 * (float)local_110 + fVar96 * local_110._4_4_;
      auVar74._12_4_ = fVar93 * fStack_98 + fVar101 * (float)local_110 + fVar97 * local_110._4_4_;
      auVar55._0_8_ =
           CONCAT44(fVar33 + fVar91 * (float)uStack_78 +
                             fVar99 * (float)local_f0 + fVar95 * local_f0._4_4_,
                    fVar30 + fVar90 * (float)uStack_78 +
                             fVar98 * (float)local_f0 + fVar94 * local_f0._4_4_);
      auVar55._8_4_ =
           fVar35 + fVar92 * (float)uStack_78 + fVar100 * (float)local_f0 + fVar96 * local_f0._4_4_;
      auVar55._12_4_ =
           fVar36 + fVar93 * (float)uStack_78 + fVar101 * (float)local_f0 + fVar97 * local_f0._4_4_;
      uStack_e8 = auVar55._8_8_;
      uStack_d8 = auVar66._8_8_;
      uStack_108 = auVar74._8_8_;
      uStack_f8 = CONCAT44(fVar93 * fVar77 + fVar101 * fVar32 + fVar97 * fVar34,
                           fVar92 * fVar77 + fVar100 * fVar32 + fVar96 * fVar34);
      local_100 = CONCAT44(fVar91 * fVar77 + fVar99 * fVar32 + fVar95 * fVar34,
                           fVar90 * fVar77 + fVar98 * fVar32 + fVar94 * fVar34);
      local_110 = auVar74._0_8_;
      local_f0 = auVar55._0_8_;
      local_e0 = auVar66._0_8_;
      FUN_02f161e0(param_1,&local_c0,&local_f0,&local_e0,&local_110,&local_d0,&local_100);
      break;
    case 5:
    case 0x12:
      fVar29 = *(float *)(param_1 + 0x60);
      fVar31 = *(float *)(param_1 + 100);
      fVar42 = *(float *)(param_1 + 0x68);
      fVar49 = (float)*(undefined8 *)(param_1 + 0x78);
      fVar50 = (float)*(undefined8 *)(param_1 + 0x70);
      fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      fVar84 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar79 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar81 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      fVar76 = (float)*(undefined8 *)(param_1 + 0x58);
      fVar52 = (float)*(undefined8 *)(param_1 + 0x50);
      fVar59 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
      fVar85 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar80 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar82 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      *(float *)(param_1 + 0x68) = fVar105 * fVar42 + fVar38 * fVar29 + fVar88 * fVar31;
      *(float *)(param_1 + 0x6c) = fVar106 * fVar42 + fVar51 * fVar29 + fVar89 * fVar31;
      *(float *)(param_1 + 0x60) = fVar103 * fVar42 + fVar28 * fVar29 + fVar60 * fVar31;
      *(float *)(param_1 + 100) = fVar104 * fVar42 + fVar43 * fVar29 + fVar87 * fVar31;
      *(ulong *)(param_1 + 0x78) =
           CONCAT44(fVar102 + fVar106 * fVar49 + fVar51 * fVar50 + fVar89 * fVar41,
                    fVar77 + fVar105 * fVar49 + fVar38 * fVar50 + fVar88 * fVar41);
      *(ulong *)(param_1 + 0x70) =
           CONCAT44(fVar34 + fVar104 * fVar49 + fVar43 * fVar50 + fVar87 * fVar41,
                    fVar32 + fVar103 * fVar49 + fVar28 * fVar50 + fVar60 * fVar41);
      *(float *)(param_1 + 0x48) = fVar105 * fVar84 + fVar38 * fVar79 + fVar88 * fVar81;
      *(float *)(param_1 + 0x4c) = fVar106 * fVar84 + fVar51 * fVar79 + fVar89 * fVar81;
      *(float *)(param_1 + 0x40) = fVar103 * fVar84 + fVar28 * fVar79 + fVar60 * fVar81;
      *(float *)(param_1 + 0x44) = fVar104 * fVar84 + fVar43 * fVar79 + fVar87 * fVar81;
      *(float *)(param_1 + 0x58) = fVar105 * fVar76 + fVar38 * fVar52 + fVar88 * fVar59;
      *(float *)(param_1 + 0x5c) = fVar106 * fVar76 + fVar51 * fVar52 + fVar89 * fVar59;
      *(float *)(param_1 + 0x50) = fVar103 * fVar76 + fVar28 * fVar52 + fVar60 * fVar59;
      *(float *)(param_1 + 0x54) = fVar104 * fVar76 + fVar43 * fVar52 + fVar87 * fVar59;
      fVar51 = *(float *)(param_1 + 0xa0);
      fVar60 = *(float *)(param_1 + 0xa4);
      fVar87 = *(float *)(param_1 + 0xa8);
      fVar28 = *(float *)(param_1 + 0xb0);
      fVar43 = *(float *)(param_1 + 0xb4);
      fVar38 = *(float *)(param_1 + 0xb8);
      *(float *)(param_1 + 0x88) = fVar92 * fVar85 + fVar100 * fVar80 + fVar96 * fVar82;
      *(float *)(param_1 + 0x8c) = fVar93 * fVar85 + fVar101 * fVar80 + fVar97 * fVar82;
      *(float *)(param_1 + 0x80) = fVar90 * fVar85 + fVar98 * fVar80 + fVar94 * fVar82;
      *(float *)(param_1 + 0x84) = fVar91 * fVar85 + fVar99 * fVar80 + fVar95 * fVar82;
      fVar88 = *(float *)(param_1 + 0x90);
      fVar89 = *(float *)(param_1 + 0x94);
      fVar32 = *(float *)(param_1 + 0x98);
      *(float *)(param_1 + 0x98) = fVar92 * fVar32 + fVar100 * fVar88 + fVar96 * fVar89;
      *(float *)(param_1 + 0x9c) = fVar93 * fVar32 + fVar101 * fVar88 + fVar97 * fVar89;
      *(float *)(param_1 + 0x90) = fVar90 * fVar32 + fVar98 * fVar88 + fVar94 * fVar89;
      *(float *)(param_1 + 0x94) = fVar91 * fVar32 + fVar99 * fVar88 + fVar95 * fVar89;
      *(ulong *)(param_1 + 0xa8) =
           CONCAT44(fVar93 * fVar87 + fVar101 * fVar51 + fVar97 * fVar60,
                    fVar92 * fVar87 + fVar100 * fVar51 + fVar96 * fVar60);
      *(ulong *)(param_1 + 0xa0) =
           CONCAT44(fVar91 * fVar87 + fVar99 * fVar51 + fVar95 * fVar60,
                    fVar90 * fVar87 + fVar98 * fVar51 + fVar94 * fVar60);
      *(ulong *)(param_1 + 0xb8) =
           CONCAT44(fVar36 + fVar93 * fVar38 + fVar101 * fVar28 + fVar97 * fVar43,
                    fVar35 + fVar92 * fVar38 + fVar100 * fVar28 + fVar96 * fVar43);
      *(ulong *)(param_1 + 0xb0) =
           CONCAT44(fVar33 + fVar91 * fVar38 + fVar99 * fVar28 + fVar95 * fVar43,
                    fVar30 + fVar90 * fVar38 + fVar98 * fVar28 + fVar94 * fVar43);
      break;
    case 7:
      memcpy(auStack_70,(void *)(param_1 + 0x40),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0x80),0x40);
      fVar29 = (float)local_40;
      fVar31 = (float)((ulong)local_40 >> 0x20);
      local_d0._0_4_ = auStack_70._16_4_;
      local_d0._4_4_ = auStack_70._20_4_;
      fVar41 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      local_110._0_4_ = (float)local_80;
      local_110._4_4_ = (float)((ulong)local_80 >> 0x20);
      auVar70._0_8_ =
           CONCAT44(fVar104 * fVar41 + fVar43 * fVar42 + fVar87 * fVar50,
                    fVar103 * fVar41 + fVar28 * fVar42 + fVar60 * fVar50);
      auVar70._8_4_ = fVar105 * fVar41 + fVar38 * fVar42 + fVar88 * fVar50;
      auVar70._12_4_ = fVar106 * fVar41 + fVar51 * fVar42 + fVar89 * fVar50;
      fVar41 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      fVar49 = auStack_b0._16_4_;
      fVar52 = auStack_b0._20_4_;
      uStack_d8 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar31,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar31);
      local_e0 = CONCAT44(fVar34 + fVar104 * (float)uStack_38 + fVar43 * fVar29 + fVar87 * fVar31,
                          fVar32 + fVar103 * (float)uStack_38 + fVar28 * fVar29 + fVar60 * fVar31);
      auVar45._0_8_ =
           CONCAT44(fVar91 * fVar41 + fVar99 * fVar42 + fVar95 * fVar50,
                    fVar90 * fVar41 + fVar98 * fVar42 + fVar94 * fVar50);
      auVar45._8_4_ = fVar92 * fVar41 + fVar100 * fVar42 + fVar96 * fVar50;
      auVar45._12_4_ = fVar93 * fVar41 + fVar101 * fVar42 + fVar97 * fVar50;
      uStack_c8 = CONCAT44(fVar106 * fStack_58 + fVar51 * (float)local_d0 + fVar89 * local_d0._4_4_,
                           fVar105 * fStack_58 + fVar38 * (float)local_d0 + fVar88 * local_d0._4_4_)
      ;
      local_d0 = CONCAT44(fVar104 * fStack_58 + fVar43 * (float)local_d0 + fVar87 * local_d0._4_4_,
                          fVar103 * fStack_58 + fVar28 * (float)local_d0 + fVar60 * local_d0._4_4_);
      uStack_b8 = auVar70._8_8_;
      uStack_108 = CONCAT44(fVar36 + fVar93 * (float)uStack_78 +
                                     fVar101 * (float)local_110 + fVar97 * local_110._4_4_,
                            fVar35 + fVar92 * (float)uStack_78 +
                                     fVar100 * (float)local_110 + fVar96 * local_110._4_4_);
      local_110 = CONCAT44(fVar33 + fVar91 * (float)uStack_78 +
                                    fVar99 * (float)local_110 + fVar95 * local_110._4_4_,
                           fVar30 + fVar90 * (float)uStack_78 +
                                    fVar98 * (float)local_110 + fVar94 * local_110._4_4_);
      uStack_f8 = CONCAT44(fVar93 * fStack_98 + fVar101 * fVar49 + fVar97 * fVar52,
                           fVar92 * fStack_98 + fVar100 * fVar49 + fVar96 * fVar52);
      local_100 = CONCAT44(fVar91 * fStack_98 + fVar99 * fVar49 + fVar95 * fVar52,
                           fVar90 * fStack_98 + fVar98 * fVar49 + fVar94 * fVar52);
      uStack_e8 = auVar45._8_8_;
      local_f0 = auVar45._0_8_;
      local_c0 = auVar70._0_8_;
      FUN_02f17338(param_1,&local_e0,&local_110,&local_c0,&local_f0,&local_d0,&local_100);
      break;
    case 0xc:
      fVar29 = *(float *)(param_1 + 0x70);
      fVar31 = *(float *)(param_1 + 0x74);
      fVar42 = *(float *)(param_1 + 0x78);
      bVar1 = *(byte *)(param_1 + 0xc2);
      lVar24 = param_1 + (ulong)bVar1 * 0x10;
      fVar50 = *(float *)(param_1 + 0xb0);
      fVar41 = *(float *)(param_1 + 0xb4);
      fVar49 = *(float *)(param_1 + 0xb8);
      fVar52 = *(float *)(lVar24 + 0x80);
      fVar59 = *(float *)(lVar24 + 0x84);
      fVar76 = *(float *)(lVar24 + 0x88);
      lVar24 = param_1 + 0x80;
      *(uint *)(param_1 + 0x48) = (uint)DAT_03cab628;
      *(uint *)(param_1 + 0x4c) = uVar19;
      *(uint *)(param_1 + 0x40) = uVar17;
      *(uint *)(param_1 + 0x44) = uVar18;
      *(uint *)(param_1 + 0x58) = uVar22;
      *(uint *)(param_1 + 0x5c) = uVar23;
      *(uint *)(param_1 + 0x50) = uVar20;
      *(uint *)(param_1 + 0x54) = uVar21;
      auVar56._8_8_ = _UNK_03caaa68;
      auVar56._0_8_ = _DAT_03caaa60;
      *(undefined8 *)(param_1 + 0x68) = uVar63;
      *(uint *)(param_1 + 0x60) = uVar15;
      *(uint *)(param_1 + 100) = uVar16;
      *(float *)(param_1 + 0x78) = fVar77 + fVar105 * fVar42 + fVar38 * fVar29 + fVar88 * fVar31;
      *(float *)(param_1 + 0x7c) = fVar102 + fVar106 * fVar42 + fVar51 * fVar29 + fVar89 * fVar31;
      *(float *)(param_1 + 0x70) = fVar32 + fVar103 * fVar42 + fVar28 * fVar29 + fVar60 * fVar31;
      *(float *)(param_1 + 0x74) = fVar34 + fVar104 * fVar42 + fVar43 * fVar29 + fVar87 * fVar31;
      *(float *)(param_1 + 0xb8) = fVar35 + fVar92 * fVar49 + fVar100 * fVar50 + fVar96 * fVar41;
      *(float *)(param_1 + 0xbc) = fVar36 + fVar93 * fVar49 + fVar101 * fVar50 + fVar97 * fVar41;
      *(float *)(param_1 + 0xb0) = fVar30 + fVar90 * fVar49 + fVar98 * fVar50 + fVar94 * fVar41;
      *(float *)(param_1 + 0xb4) = fVar33 + fVar91 * fVar49 + fVar99 * fVar50 + fVar95 * fVar41;
      fVar43 = fVar90 * fVar76 + fVar98 * fVar52 + fVar94 * fVar59;
      fVar51 = fVar91 * fVar76 + fVar99 * fVar52 + fVar95 * fVar59;
      auVar44._0_8_ = CONCAT44(fVar51,fVar43);
      auVar44._8_4_ = fVar92 * fVar76 + fVar100 * fVar52 + fVar96 * fVar59;
      auVar46._12_4_ = fVar93 * fVar76 + fVar101 * fVar52 + fVar97 * fVar59;
      auVar46._0_12_ = auVar44;
      puVar2 = (undefined8 *)(lVar24 + (ulong)(uint)bVar1 * 0x10);
      puVar2[1] = auVar46._8_8_;
      *puVar2 = auVar44._0_8_;
      uVar25 = (ulong)((bVar1 + 1) % 3);
      auVar75._12_4_ = 0;
      auVar75._0_12_ = auVar44;
      auVar71._8_8_ = _UNK_03cabbb8;
      auVar71._0_8_ = _DAT_03cabbb0;
      auVar57 = a64_TBL(ZEXT816(0),auVar75,auVar56);
      auVar46 = a64_TBL(ZEXT816(0),auVar75,auVar71);
      fVar38 = auVar46._0_4_;
      auVar72._0_4_ = fVar38 * fVar38;
      auVar72._4_4_ = auVar46._4_4_ * auVar46._4_4_;
      auVar72._8_4_ = auVar46._8_4_ * auVar46._8_4_;
      auVar72._12_4_ = auVar46._12_4_ * auVar46._12_4_;
      auVar75 = NEON_ext(auVar72,auVar72,8,1);
      fVar28 = auVar75._0_4_ + auVar75._4_4_;
      auVar58._4_12_ = auVar57._4_12_;
      auVar58._0_4_ = -auVar57._0_4_;
      auVar57._4_12_ = auVar46._4_12_;
      auVar57._0_4_ = -fVar38;
      uVar62 = CONCAT44(-(uint)(fVar43 * fVar43 + fVar51 * fVar51 <
                               auVar72._0_4_ + auVar72._4_4_ + fVar28),
                        -(uint)(fVar43 * fVar43 + fVar51 * fVar51 <
                               auVar72._0_4_ + auVar72._4_4_ + fVar28)) & 0x100000001;
      iVar61 = (int)uVar62;
      iVar68 = (int)(uVar62 >> 0x20);
      auVar67._0_4_ = (iVar61 << 0x1f) >> 0x1f;
      auVar67._4_4_ = (iVar68 << 0x1f) >> 0x1f;
      auVar67._8_4_ = (iVar61 << 0x1f) >> 0x1f;
      auVar67._12_4_ = (iVar68 << 0x1f) >> 0x1f;
      auVar57 = auVar57 ^ (auVar57 ^ auVar58) & ~auVar67;
      fVar28 = auVar57._0_4_;
      fVar43 = auVar57._4_4_;
      fVar38 = auVar57._8_4_;
      fVar51 = fVar28 * fVar28 + fVar43 * fVar43 + fVar38 * fVar38;
      puVar2 = (undefined8 *)(lVar24 + uVar25 * 0x10);
      puVar2[1] = auVar57._8_8_;
      *puVar2 = auVar57._0_8_;
      if (fVar51 == 0.0) {
        auVar48 = ZEXT816(0);
      }
      else {
        fVar51 = SQRT(fVar51);
        fVar60 = SQRT(fVar28 * fVar28 + fVar43 * fVar43 + fVar38 * fVar38);
        auVar48._0_4_ = fVar28 / fVar51;
        auVar48._4_4_ = fVar43 / fVar60;
        auVar48._8_4_ = fVar38 / fVar51;
        auVar48._12_4_ = auVar57._12_4_ / fVar60;
      }
      puVar2 = (undefined8 *)(lVar24 + uVar25 * 0x10);
      puVar2[1] = auVar48._8_8_;
      *puVar2 = auVar48._0_8_;
      auVar46 = *(undefined1 (*) [16])(lVar24 + (ulong)bVar1 * 0x10);
      auVar75 = NEON_ext(auVar46,auVar46,8,1);
      uVar63 = NEON_ext(auVar46._0_8_,auVar75._0_8_,4,1);
      auVar75 = NEON_ext(auVar48,auVar48,4,1);
      auVar47._0_4_ = auVar46._0_4_ * auVar75._0_4_ - auVar48._0_4_ * (float)uVar63;
      auVar47._4_4_ = auVar46._4_4_ * auVar75._4_4_ - auVar48._4_4_ * (float)((ulong)uVar63 >> 0x20)
      ;
      auVar47._8_4_ = auVar46._8_4_ * auVar48._0_4_ - auVar48._8_4_ * auVar46._0_4_;
      auVar47._12_4_ = auVar46._12_4_ * auVar48._4_4_ - auVar48._12_4_ * auVar46._4_4_;
      auVar46 = NEON_ext(auVar47,auVar47,4,1);
      puVar2 = (undefined8 *)(lVar24 + (ulong)((bVar1 + 2) % 3) * 0x10);
      puVar2[1] = (ulong)(uint)auVar47._0_4_;
      *puVar2 = auVar46._0_8_;
      break;
    case 0xf:
      memcpy(auStack_70,(void *)(param_1 + 0x40),0x40);
      memcpy(auStack_b0,(void *)(param_1 + 0x80),0x40);
      fVar29 = (float)local_40;
      fVar31 = (float)((ulong)local_40 >> 0x20);
      uStack_b8 = CONCAT44(fVar102 + fVar106 * (float)uStack_38 + fVar51 * fVar29 + fVar89 * fVar31,
                           fVar77 + fVar105 * (float)uStack_38 + fVar38 * fVar29 + fVar88 * fVar31);
      local_c0 = CONCAT44(fVar34 + fVar104 * (float)uStack_38 + fVar43 * fVar29 + fVar87 * fVar31,
                          fVar32 + fVar103 * (float)uStack_38 + fVar28 * fVar29 + fVar60 * fVar31);
      fVar32 = (float)local_80;
      fVar34 = (float)((ulong)local_80 >> 0x20);
      uStack_c8 = CONCAT44(fVar36 + fVar93 * (float)uStack_78 + fVar101 * fVar32 + fVar97 * fVar34,
                           fVar35 + fVar92 * (float)uStack_78 + fVar100 * fVar32 + fVar96 * fVar34);
      local_d0 = CONCAT44(fVar33 + fVar91 * (float)uStack_78 + fVar99 * fVar32 + fVar95 * fVar34,
                          fVar30 + fVar90 * (float)uStack_78 + fVar98 * fVar32 + fVar94 * fVar34);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      uStack_d8 = CONCAT44(fVar93 * fVar35 + fVar101 * fVar30 + fVar97 * fVar33,
                           fVar92 * fVar35 + fVar100 * fVar30 + fVar96 * fVar33);
      local_e0 = CONCAT44(fVar91 * fVar35 + fVar99 * fVar30 + fVar95 * fVar33,
                          fVar90 * fVar35 + fVar98 * fVar30 + fVar94 * fVar33);
      fVar32 = (float)*(undefined8 *)(param_1 + 0x128);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x120);
      fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x158);
      fVar33 = (float)*(undefined8 *)(param_1 + 0x150);
      fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
      uStack_f8 = CONCAT44(fVar93 * fVar34 + fVar101 * fVar33 + fVar97 * fVar36,
                           fVar92 * fVar34 + fVar100 * fVar33 + fVar96 * fVar36);
      local_100 = CONCAT44(fVar91 * fVar34 + fVar99 * fVar33 + fVar95 * fVar36,
                           fVar90 * fVar34 + fVar98 * fVar33 + fVar94 * fVar36);
      uStack_e8 = CONCAT44(fVar106 * fVar32 + fVar51 * fVar30 + fVar89 * fVar35,
                           fVar105 * fVar32 + fVar38 * fVar30 + fVar88 * fVar35);
      local_f0 = CONCAT44(fVar104 * fVar32 + fVar43 * fVar30 + fVar87 * fVar35,
                          fVar103 * fVar32 + fVar28 * fVar30 + fVar60 * fVar35);
      fVar38 = (float)*(undefined8 *)(param_1 + 0x168);
      fVar28 = (float)*(undefined8 *)(param_1 + 0x160);
      fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20);
      uStack_108 = CONCAT44(fVar93 * fVar38 + fVar101 * fVar28 + fVar97 * fVar43,
                            fVar92 * fVar38 + fVar100 * fVar28 + fVar96 * fVar43);
      local_110 = CONCAT44(fVar91 * fVar38 + fVar99 * fVar28 + fVar95 * fVar43,
                           fVar90 * fVar38 + fVar98 * fVar28 + fVar94 * fVar43);
      FUN_02f19e64(param_1,&local_c0,&local_d0,&local_f0,&local_100,&local_e0,&local_110);
    }
  }
  return;
}


