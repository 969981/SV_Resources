/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01141d30; name: FUN_01141d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01141d30(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined *puVar31;
  long lVar32;
  long lVar33;
  bool bVar34;
  short sVar35;
  long *plVar36;
  float fVar37;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  byte bVar47;
  float fVar48;
  byte bVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar62;
  ulong uVar53;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar63;
  ulong uVar64;
  int iVar77;
  float fVar79;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  byte bVar78;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar80;
  int iVar81;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar82;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  ulong uVar88;
  int iVar91;
  undefined8 in_register_00005168;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar92 [12];
  undefined8 in_register_00005188;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  int iVar106;
  undefined1 auVar107 [12];
  int iVar113;
  undefined1 auVar109 [16];
  undefined1 auVar108 [12];
  undefined1 auVar110 [16];
  int iVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar117;
  undefined1 auVar115 [16];
  float fVar118;
  undefined1 auVar116 [16];
  char cVar119;
  undefined8 in_register_000052c8;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar129;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined8 in_register_00005328;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  param_1[2] = 0;
  puVar31 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar31 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar106 = __cxa_guard_acquire(&DAT_04865a38), iVar106 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar32 = nn::os::GetTlsValue(DAT_04865a30);
  puVar31 = PTR_DAT_047d8c78;
  if (lVar32 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = 0;
    if (*(long *)(lVar32 + 0x80) != 0) {
      lVar33 = *(long *)(lVar32 + *(long *)(lVar32 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar33;
  param_1[4] = (long)(puVar31 + 0x88);
  plVar36 = param_1 + 5;
  *plVar36 = (long)(puVar31 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar36);
  *param_1 = (long)&PTR_FUN_0459c608;
  param_1[4] = (long)&PTR_LAB_0459c680;
  *plVar36 = (long)&DAT_0459c6d0;
  plVar36 = param_1 + 8;
  *plVar36 = 0;
  param_1[9] = 0;
  FUN_00d0a71c(plVar36,param_2);
  memset(param_1 + 10,0,0x50);
  lVar33 = _UNK_03caa988;
  lVar32 = _DAT_03caa980;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = lVar33;
  param_1[0x14] = lVar32;
  param_1[0x17] = lVar33;
  param_1[0x16] = lVar32;
  lVar32 = *plVar36;
  if ((lVar32 != 0) && (*(short *)(lVar32 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar32 + 0x1a);
    sVar35 = *(short *)(lVar32 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar35) {
        cVar119 = '\x01';
        bVar34 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar34) {
          *psVar1 = sVar35 + 1;
          cVar119 = ExclusiveMonitorsStatus();
        }
        if (cVar119 != '\0') goto LAB_01141ee0;
        bVar34 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01141ee0:
        bVar34 = false;
      }
      if (bVar34) {
        lVar32 = *(long *)(lVar32 + 0x10);
        if (lVar32 != 0) {
          lVar33 = *(long *)(lVar32 + 0xb8);
          lVar27 = *(long *)(lVar32 + 0xc0);
          *(undefined1 *)(param_1 + 0x1c) = 1;
          param_1[0xb] = lVar27;
          param_1[10] = lVar33;
          fVar37 = *(float *)(lVar32 + 0xa8);
          fVar42 = *(float *)(lVar32 + 0xac);
          fVar43 = *(float *)(lVar32 + 0xb0);
          fVar117 = *(float *)(lVar32 + 0xb4);
          auVar45 = NEON_fmov(0x3f800000,4);
          auVar125 = NEON_fmov(0xbf800000,4);
          fVar99 = fVar42 * fVar117 + fVar42 * fVar117;
          fVar100 = fVar43 * fVar117 + fVar43 * fVar117;
          fVar101 = fVar117 * 0.0 + fVar117 * 0.0;
          fVar79 = fVar43 * fVar43 + fVar43 * fVar43;
          *(undefined1 *)(param_1 + 0x1c) = 1;
          fVar44 = auVar45._0_4_;
          fVar48 = auVar45._4_4_;
          fVar50 = auVar45._8_4_;
          fVar102 = fVar37 * fVar43 + fVar37 * fVar43;
          fVar103 = fVar37 * fVar42 + fVar37 * fVar42;
          fVar104 = (fVar44 - (fVar42 * fVar42 + fVar42 * fVar42)) - fVar79;
          fVar105 = (fVar48 - (fVar37 * fVar37 + fVar37 * fVar37)) -
                    (fVar42 * fVar42 + fVar42 * fVar42);
          fVar79 = (fVar50 - (fVar37 * fVar37 + fVar37 * fVar37)) - fVar79;
          auVar135._4_4_ = fVar104;
          auVar135._0_4_ = fVar104;
          auVar135._8_4_ = fVar104;
          auVar135._12_4_ = fVar104;
          fVar82 = (fVar37 * fVar117 + fVar37 * fVar117) - (fVar42 * fVar43 + fVar42 * fVar43);
          fVar85 = fVar99 - fVar102;
          fVar86 = fVar100 - fVar103;
          fVar87 = fVar101 - 0.0;
          cVar119 = (char)((uint)fVar86 >> 0x18);
          auVar24._8_4_ = (int)cVar119 >> 7;
          auVar24._4_4_ = (int)cVar119 >> 7;
          auVar65._8_4_ = 0xff800000;
          auVar65._0_8_ = 0xff80000000000000;
          auVar65._12_4_ = 0xff800000;
          auVar29._4_8_ = in_register_000052c8;
          auVar29._0_4_ = -(uint)(0.0 <= fVar86 / fVar104);
          auVar120._0_8_ = auVar29._0_8_ << 0x20;
          auVar120._8_4_ = -(uint)(0.0 <= fVar86 / fVar104);
          auVar120._12_4_ = -(uint)(0.0 <= fVar86 / fVar104);
          auVar115._0_4_ = ABS(fVar86 / fVar104);
          auVar115._4_4_ = ABS(fVar86 / fVar104);
          auVar115._8_4_ = ABS(fVar86 / fVar104);
          auVar115._12_4_ = ABS(fVar86 / fVar104);
          iVar106 = -(uint)(fVar86 == -INFINITY);
          bVar78 = (byte)((uint)iVar106 >> 8);
          bVar47 = (byte)((uint)iVar106 >> 0x10);
          bVar49 = (byte)((uint)iVar106 >> 0x18);
          iVar113 = -(uint)(fVar86 == -INFINITY);
          bVar57 = (byte)((uint)iVar113 >> 8);
          bVar58 = (byte)((uint)iVar113 >> 0x10);
          bVar59 = (byte)((uint)iVar113 >> 0x18);
          iVar114 = -(uint)(fVar86 == -INFINITY);
          bVar60 = (byte)((uint)iVar114 >> 8);
          bVar61 = (byte)((uint)iVar114 >> 0x10);
          bVar62 = (byte)((uint)iVar114 >> 0x18);
          iVar91 = -(uint)(fVar86 == INFINITY);
          auVar30._4_8_ = in_register_00005168;
          auVar30._0_4_ = iVar91;
          auVar89._0_8_ = auVar30._0_8_ << 0x20;
          auVar89._8_4_ = -(uint)(fVar86 == INFINITY);
          auVar89._12_4_ = -(uint)(fVar86 == INFINITY);
          auVar6._1_11_ = auVar89._5_11_;
          auVar6[0] = ~(byte)iVar91;
          auVar90._0_5_ = auVar6._0_5_ << 0x20;
          auVar90[5] = ~(byte)((uint)iVar91 >> 8);
          auVar90[6] = ~(byte)((uint)iVar91 >> 0x10);
          auVar90[7] = ~(byte)((uint)iVar91 >> 0x18);
          auVar90[8] = ~(byte)auVar89._8_4_;
          auVar90[9] = ~(byte)((uint)auVar89._8_4_ >> 8);
          auVar90[10] = ~(byte)((uint)auVar89._8_4_ >> 0x10);
          auVar90[0xb] = ~(byte)((uint)auVar89._8_4_ >> 0x18);
          auVar90[0xc] = ~(byte)auVar89._12_4_;
          auVar90[0xd] = ~(byte)((uint)auVar89._12_4_ >> 8);
          auVar90[0xe] = ~(byte)((uint)auVar89._12_4_ >> 0x10);
          auVar90[0xf] = ~(byte)((uint)auVar89._12_4_ >> 0x18);
          iVar91 = -(uint)(auVar115._4_4_ <= 0.41421354);
          iVar80 = -(uint)(auVar115._8_4_ <= 0.41421354);
          iVar81 = -(uint)(auVar115._12_4_ <= 0.41421354);
          bVar141 = (byte)((uint)iVar81 >> 8);
          bVar142 = (byte)((uint)iVar81 >> 0x10);
          bVar143 = (byte)((uint)iVar81 >> 0x18);
          auVar25[8] = (byte)iVar81;
          auVar25._4_4_ = iVar80;
          auVar25[9] = bVar141;
          auVar25[10] = bVar142;
          auVar25[0xb] = bVar143;
          auVar25._0_4_ = iVar91;
          auVar25._12_4_ = 0;
          auVar7._4_8_ = in_register_00005188;
          auVar7._0_4_ = -(uint)(auVar115._4_4_ <= 2.4142137);
          auVar93._0_8_ = auVar7._0_8_ << 0x20;
          auVar93._8_4_ = -(uint)(auVar115._8_4_ <= 2.4142137);
          auVar93._12_4_ = -(uint)(auVar115._12_4_ <= 2.4142137);
          auVar96._8_8_ = auVar93._8_8_;
          auVar96._0_8_ = auVar93._0_8_;
          auVar121 = auVar125 ^ (auVar125 ^ auVar45) & auVar120;
          auVar8._4_8_ = in_register_00005328;
          auVar8._0_4_ = -auVar121._4_4_;
          auVar97._0_8_ = auVar8._0_8_ << 0x20;
          auVar97._8_4_ = -auVar121._8_4_;
          auVar97._12_4_ = -auVar121._12_4_;
          iVar77 = -(uint)(fVar104 == -INFINITY);
          auVar9._4_8_ = auVar65._8_8_;
          auVar9._0_4_ = iVar77;
          auVar66._0_8_ = auVar9._0_8_ << 0x20;
          auVar66._8_4_ = -(uint)(fVar104 == -INFINITY);
          auVar66._12_4_ = -(uint)(fVar104 == -INFINITY);
          fVar99 = fVar99 + fVar102;
          fVar100 = fVar100 + fVar103;
          fVar101 = fVar101 + 0.0;
          auVar10._1_11_ = auVar66._5_11_;
          auVar10[0] = ~(byte)iVar77;
          auVar67._0_5_ = auVar10._0_5_ << 0x20;
          auVar67[5] = ~(byte)((uint)iVar77 >> 8);
          auVar67[6] = ~(byte)((uint)iVar77 >> 0x10);
          auVar67[7] = ~(byte)((uint)iVar77 >> 0x18);
          auVar67[8] = ~(byte)auVar66._8_4_;
          auVar67[9] = ~(byte)((uint)auVar66._8_4_ >> 8);
          auVar67[10] = ~(byte)((uint)auVar66._8_4_ >> 0x10);
          auVar67[0xb] = ~(byte)((uint)auVar66._8_4_ >> 0x18);
          auVar67[0xc] = ~(byte)auVar66._12_4_;
          auVar67[0xd] = ~(byte)((uint)auVar66._12_4_ >> 8);
          auVar67[0xe] = ~(byte)((uint)auVar66._12_4_ >> 0x10);
          auVar67[0xf] = ~(byte)((uint)auVar66._12_4_ >> 0x18);
          auVar97 = auVar97 ^ (auVar97 ^ auVar121) & auVar96;
          fVar103 = auVar115._4_4_ + auVar125._4_4_;
          auVar11._4_8_ = auVar121._8_8_;
          auVar11._0_4_ = fVar103;
          auVar122._0_8_ = auVar11._0_8_ << 0x20;
          auVar122._8_4_ = auVar115._8_4_ + auVar125._8_4_;
          auVar122._12_4_ = auVar115._12_4_ + auVar125._12_4_;
          fVar102 = auVar45._12_4_;
          auVar51._0_4_ = fVar37 * fVar37 + fVar42 * fVar42;
          auVar51._4_4_ = fVar43 * fVar43 + fVar117 * fVar117;
          auVar51._8_4_ = fVar37 * fVar37 + fVar42 * fVar42;
          auVar51._12_4_ = fVar43 * fVar43 + fVar117 * fVar117;
          auVar51 = NEON_ext(auVar51,auVar51,4,1);
          auVar12._4_8_ = auVar122._8_8_;
          auVar12._0_4_ = fVar103 / (auVar115._4_4_ + fVar48);
          auVar123._0_8_ = auVar12._0_8_ << 0x20;
          auVar123._8_4_ = auVar122._8_4_ / (auVar115._8_4_ + fVar50);
          auVar123._12_4_ = auVar122._12_4_ / (auVar115._12_4_ + fVar102);
          auVar121 = NEON_frecpe(auVar115,4);
          auVar134 = NEON_frecps(auVar121,auVar115,4);
          auVar131._0_4_ = auVar121._0_4_ * auVar134._0_4_;
          auVar131._4_4_ = auVar121._4_4_ * auVar134._4_4_;
          auVar131._8_4_ = auVar121._8_4_ * auVar134._8_4_;
          auVar131._12_4_ = auVar121._12_4_ * auVar134._12_4_;
          auVar121 = NEON_frecps(auVar131,auVar115,4);
          auVar13._4_8_ = auVar131._8_8_;
          auVar13._0_4_ = auVar131._4_4_ * auVar121._4_4_;
          auVar132._0_8_ = auVar13._0_8_ << 0x20;
          auVar132._8_4_ = auVar131._8_4_ * auVar121._8_4_;
          auVar132._12_4_ = auVar131._12_4_ * auVar121._12_4_;
          auVar123 = auVar123 ^ (auVar123 ^ auVar132) & ~auVar93;
          auVar123 = auVar123 ^ (auVar123 ^ auVar115) & auVar25 << 0x20;
          fVar37 = auVar123._4_4_;
          fVar117 = fVar37 * fVar37;
          fVar42 = auVar123._8_4_;
          fVar103 = fVar42 * fVar42;
          fVar43 = auVar123._12_4_;
          fVar118 = fVar43 * fVar43;
          auVar133._8_4_ = 0xbfc90fdb;
          auVar133._0_8_ = 0xbfc90fdbbfc90fdb;
          auVar133._12_4_ = 0xbfc90fdb;
          auVar124._8_4_ = 0x3f490fdb;
          auVar124._0_8_ = 0x3f490fdb3f490fdb;
          auVar124._12_4_ = 0x3f490fdb;
          auVar116._8_8_ = auVar93._8_8_;
          auVar116._0_8_ = auVar93._0_8_;
          auVar134 = auVar133 ^ (auVar133 ^ auVar124) & auVar116;
          auVar40._8_4_ = 0x40490fdb;
          auVar40._0_8_ = 0x40490fdb40490fdb;
          auVar40._12_4_ = 0x40490fdb;
          auVar24._0_4_ = (int)cVar119 >> 7;
          auVar24._12_4_ = 0;
          auVar121[8] = 0xdb;
          auVar121._0_8_ = 0xc0490fdb00000000;
          auVar121[9] = 0xf;
          auVar121[10] = 0x49;
          auVar121[0xb] = 0xc0;
          auVar121[0xc] = 0xdb;
          auVar121[0xd] = 0xf;
          auVar121[0xe] = 0x49;
          auVar121[0xf] = 0xc0;
          auVar121 = auVar40 ^ (auVar40 ^ auVar121) & auVar24 << 0x20;
          iVar77 = -(uint)(fVar104 == INFINITY);
          auVar14._4_8_ = auVar135._8_8_;
          auVar14._0_4_ = iVar77;
          auVar136._0_8_ = auVar14._0_8_ << 0x20;
          auVar136._8_4_ = -(uint)(fVar104 == INFINITY);
          auVar136._12_4_ = -(uint)(fVar104 == INFINITY);
          auVar15._1_11_ = auVar136._5_11_;
          auVar15[0] = ~(byte)iVar77;
          auVar137._0_5_ = auVar15._0_5_ << 0x20;
          auVar137[5] = ~(byte)((uint)iVar77 >> 8);
          auVar137[6] = ~(byte)((uint)iVar77 >> 0x10);
          auVar137[7] = ~(byte)((uint)iVar77 >> 0x18);
          auVar137[8] = ~(byte)auVar136._8_4_;
          auVar137[9] = ~(byte)((uint)auVar136._8_4_ >> 8);
          auVar137[10] = ~(byte)((uint)auVar136._8_4_ >> 0x10);
          auVar137[0xb] = ~(byte)((uint)auVar136._8_4_ >> 0x18);
          auVar137[0xc] = ~(byte)auVar136._12_4_;
          auVar137[0xd] = ~(byte)((uint)auVar136._12_4_ >> 8);
          auVar137[0xe] = ~(byte)((uint)auVar136._12_4_ >> 0x10);
          auVar137[0xf] = ~(byte)((uint)auVar136._12_4_ >> 0x18);
          bVar63 = (byte)((int)fVar104 >> 0x1f);
          auVar16._1_11_ = auVar93._5_11_;
          auVar16[0] = auVar121[4] & bVar63;
          auVar92._0_8_ =
               CONCAT17(auVar121[7] & bVar63,
                        CONCAT16(auVar121[6] & bVar63,
                                 CONCAT15(auVar121[5] & bVar63,auVar16._0_5_ << 0x20)));
          auVar92[8] = auVar121[8] & bVar63;
          auVar92[9] = auVar121[9] & bVar63;
          auVar92[10] = auVar121[10] & bVar63;
          auVar92[0xb] = auVar121[0xb] & bVar63;
          auVar94[0xc] = auVar121[0xc] & bVar63;
          auVar94._0_12_ = auVar92;
          auVar94[0xd] = auVar121[0xd] & bVar63;
          auVar94[0xe] = auVar121[0xe] & bVar63;
          auVar94[0xf] = auVar121[0xf] & bVar63;
          auVar17._1_11_ = auVar97._5_11_;
          auVar17[0] = ~(byte)iVar106;
          auVar98._0_5_ = auVar17._0_5_ << 0x20;
          auVar98[5] = ~bVar78;
          auVar98[6] = ~bVar47;
          auVar98[7] = ~bVar49;
          auVar98[8] = ~(byte)iVar113;
          auVar98[9] = ~bVar57;
          auVar98[10] = ~bVar58;
          auVar98[0xb] = ~bVar59;
          auVar98[0xc] = ~(byte)iVar114;
          auVar98[0xd] = ~bVar60;
          auVar98[0xe] = ~bVar61;
          auVar98[0xf] = ~bVar62;
          auVar18._4_8_ = auVar94._8_8_;
          auVar18._0_4_ =
               auVar97._4_4_ *
               ((float)CONCAT13(auVar134[7] & ~(byte)((uint)iVar91 >> 0x18),
                                CONCAT12(auVar134[6] & ~(byte)((uint)iVar91 >> 0x10),
                                         CONCAT11(auVar134[5] & ~(byte)((uint)iVar91 >> 8),
                                                  auVar134[4] & ~(byte)iVar91))) +
               (fVar48 + fVar117 * (fVar117 * (fVar117 * (fVar117 * (fVar117 * (fVar117 * 0.07692308
                                                                               + -0.09090909) +
                                                                    0.11111111) + -0.14285715) + 0.2
                                              ) + -0.33333334)) * fVar37) +
               (float)((ulong)auVar92._0_8_ >> 0x20);
          auVar95._0_8_ = auVar18._0_8_ << 0x20;
          auVar95._8_4_ =
               auVar97._8_4_ *
               ((float)CONCAT13(auVar134[0xb] & ~(byte)((uint)iVar80 >> 0x18),
                                CONCAT12(auVar134[10] & ~(byte)((uint)iVar80 >> 0x10),
                                         CONCAT11(auVar134[9] & ~(byte)((uint)iVar80 >> 8),
                                                  auVar134[8] & ~(byte)iVar80))) +
               (fVar50 + fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * 0.07692308
                                                                               + -0.09090909) +
                                                                    0.11111111) + -0.14285715) + 0.2
                                              ) + -0.33333334)) * fVar42) + auVar92._8_4_;
          auVar95._12_4_ =
               auVar97._12_4_ *
               ((float)CONCAT13(auVar134[0xf] & ~bVar143,
                                CONCAT12(auVar134[0xe] & ~bVar142,
                                         CONCAT11(auVar134[0xd] & ~bVar141,
                                                  auVar134[0xc] & ~(byte)iVar81))) +
               (fVar102 +
               fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * 0.07692308 +
                                                                     -0.09090909) + 0.11111111) +
                                               -0.14285715) + 0.2) + -0.33333334)) * fVar43) +
               auVar94._12_4_;
          auVar30 = auVar95._4_12_ ^ (auVar95._4_12_ ^ auVar133._4_12_) & ~auVar98._4_12_;
          auVar4[8] = 0xe4;
          auVar4._0_8_ = 0xc016cbe400000000;
          auVar4[9] = 0xcb;
          auVar4[10] = 0x16;
          auVar4[0xb] = 0xc0;
          auVar4[0xc] = 0xe4;
          auVar4[0xd] = 0xcb;
          auVar4[0xe] = 0x16;
          auVar4[0xf] = 0xc0;
          auVar134[8] = 0xe4;
          auVar134._0_8_ = 0x4016cbe400000000;
          auVar134[9] = 0xcb;
          auVar134[10] = 0x16;
          auVar134[0xb] = 0x40;
          auVar134[0xc] = 0xe4;
          auVar134[0xd] = 0xcb;
          auVar134[0xe] = 0x16;
          auVar134[0xf] = 0x40;
          auVar6 = auVar90._4_12_;
          auVar3[8] = 0xe4;
          auVar3._0_8_ = 0x4016cbe400000000;
          auVar3[9] = 0xcb;
          auVar3[10] = 0x16;
          auVar3[0xb] = 0x40;
          auVar3[0xc] = 0xe4;
          auVar3[0xd] = 0xcb;
          auVar3[0xe] = 0x16;
          auVar3[0xf] = 0x40;
          auVar29 = auVar3._4_12_ ^
                    (auVar134._4_12_ ^
                    auVar121._4_12_ ^ (auVar121._4_12_ ^ auVar4._4_12_) & ~auVar98._4_12_) & auVar6;
          auVar54._8_4_ = 0x3fc90fdb;
          auVar54._0_8_ = 0x3fc90fdb3fc90fdb;
          auVar54._12_4_ = 0x3fc90fdb;
          auVar29 = auVar29 ^ (auVar29 ^ auVar30 ^ (auVar30 ^ auVar54._4_12_) & ~auVar6) &
                              auVar67._4_12_;
          auVar68._0_4_ = fVar44 - fVar82 * fVar82;
          auVar68._4_4_ = fVar48 - fVar85 * fVar85;
          auVar68._8_4_ = fVar50 - fVar86 * fVar86;
          auVar68._12_4_ = fVar102 - fVar87 * fVar87;
          auVar121 = NEON_fmax(auVar68,ZEXT816(0),4);
          auVar121 = NEON_fmin(auVar121,auVar45,4);
          fVar85 = SQRT(auVar121._0_4_);
          bVar141 = cVar119 >> 7;
          auVar19._1_11_ = auVar98._5_11_;
          auVar19[0] = (byte)iVar106 & 0xdb;
          uVar88 = CONCAT17(bVar49,CONCAT16(bVar47,CONCAT15(bVar78,auVar19._0_5_ << 0x20))) &
                   0xbf490fffffffffff;
          bVar78 = bVar141 & auVar98[7] & 0x80;
          auVar69._0_11_ = ZEXT111(bVar78) << 0x38;
          auVar69[0xb] = bVar141 & auVar98[0xb] & 0x80;
          auVar69._12_3_ = 0;
          auVar69[0xf] = bVar141 & auVar98[0xf] & 0x80;
          auVar20._1_11_ = auVar69._5_11_;
          auVar20[0] = (char)(uVar88 >> 0x20);
          auVar70._0_5_ = auVar20._0_5_ << 0x20;
          auVar70[5] = (char)(uVar88 >> 0x28);
          auVar70[6] = (char)(uVar88 >> 0x30);
          auVar70[7] = bVar78 | (byte)(uVar88 >> 0x38);
          auVar70[8] = (byte)iVar113 & 0xdb;
          auVar70[9] = bVar57 & 0xf;
          auVar70[10] = bVar58 & 0x49;
          auVar70[0xb] = auVar69[0xb] | bVar59 & 0xbf;
          auVar70[0xc] = (byte)iVar114 & 0xdb;
          auVar70[0xd] = bVar60 & 0xf;
          auVar70[0xe] = bVar61 & 0x49;
          auVar70[0xf] = auVar69[0xf] | bVar62 & 0xbf;
          auVar29 = auVar29 ^ (auVar29 ^
                              auVar70._4_12_ ^ (auVar70._4_12_ ^ auVar124._4_12_) & ~auVar6) &
                              ~auVar137._4_12_;
          iVar91 = -(uint)(fVar86 == -0.0);
          iVar80 = -(uint)(fVar86 == -0.0);
          iVar81 = -(uint)(fVar86 == -0.0);
          iVar106 = -(uint)(fVar86 == 0.0);
          iVar113 = -(uint)(fVar86 == 0.0);
          iVar114 = -(uint)(fVar86 == 0.0);
          bVar78 = (byte)((uint)iVar91 >> 8);
          bVar47 = (byte)((uint)iVar91 >> 0x10);
          bVar49 = (byte)((uint)iVar91 >> 0x18);
          bVar141 = ~(byte)iVar80;
          auVar28[1] = bVar141;
          auVar28[0] = ~bVar49;
          bVar57 = (byte)((uint)iVar80 >> 8);
          bVar142 = ~bVar57;
          auVar28[2] = bVar142;
          bVar58 = (byte)((uint)iVar80 >> 0x10);
          bVar143 = ~bVar58;
          auVar28[3] = bVar143;
          bVar59 = (byte)((uint)iVar80 >> 0x18);
          auVar28[4] = ~bVar59;
          bVar144 = ~(byte)iVar81;
          auVar28[5] = bVar144;
          bVar60 = (byte)((uint)iVar81 >> 8);
          bVar145 = ~bVar60;
          auVar28[6] = bVar145;
          bVar61 = (byte)((uint)iVar81 >> 0x10);
          bVar146 = ~bVar61;
          auVar28[7] = bVar146;
          bVar62 = (byte)((uint)iVar81 >> 0x18);
          auVar28[8] = ~bVar62;
          auVar28._9_7_ = 0;
          auVar21._1_11_ = SUB1611(auVar28 << 0x38,5);
          auVar21[0] = ~(byte)iVar91 & 0xdb;
          uVar53 = CONCAT17(~bVar49,CONCAT16(~bVar47,CONCAT15(~bVar78,auVar21._0_5_ << 0x20))) &
                   0x40490fffffffffff;
          auVar22._1_11_ = auVar90._5_11_;
          auVar22[0] = (byte)iVar91 & 0xdb;
          uVar88 = CONCAT17(bVar49,CONCAT16(bVar47,CONCAT15(bVar78,auVar22._0_5_ << 0x20))) &
                   0xc0490fffffffffff;
          bVar78 = bVar49 & ~bVar63 & 0x80;
          auVar71._0_11_ = ZEXT111(bVar78) << 0x38;
          auVar71[0xb] = bVar59 & ~bVar63 & 0x80;
          auVar71._12_3_ = 0;
          auVar71[0xf] = bVar62 & ~bVar63 & 0x80;
          auVar23._1_11_ = auVar71._5_11_;
          auVar23[0] = ((byte)(uVar53 >> 0x20) | (byte)(uVar88 >> 0x20)) & bVar63;
          auVar72._0_5_ = auVar23._0_5_ << 0x20;
          auVar72[5] = ((byte)(uVar53 >> 0x28) | (byte)(uVar88 >> 0x28)) & bVar63;
          auVar72[6] = ((byte)(uVar53 >> 0x30) | (byte)(uVar88 >> 0x30)) & bVar63;
          auVar72[7] = ((byte)(uVar53 >> 0x38) | (byte)(uVar88 >> 0x38)) & bVar63 | bVar78;
          auVar72[8] = (bVar141 & 0xdb | (byte)iVar80 & 0xdb) & bVar63;
          auVar72[9] = (bVar142 & 0xf | bVar57 & 0xf) & bVar63;
          auVar72[10] = (bVar143 & 0x49 | bVar58 & 0x49) & bVar63;
          auVar72[0xb] = (~bVar59 & 0x40 | bVar59 & 0xc0) & bVar63 | auVar71[0xb];
          auVar72[0xc] = (bVar144 & 0xdb | (byte)iVar81 & 0xdb) & bVar63;
          auVar72[0xd] = (bVar145 & 0xf | bVar60 & 0xf) & bVar63;
          auVar72[0xe] = (bVar146 & 0x49 | bVar61 & 0x49) & bVar63;
          auVar72[0xf] = (~bVar62 & 0x40 | bVar62 & 0xc0) & bVar63 | auVar71[0xf];
          auVar26[1] = ~(byte)((uint)iVar106 >> 8);
          auVar26[0] = ~(byte)iVar106;
          auVar26[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar26[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar26[4] = ~(byte)iVar113;
          auVar26[5] = ~(byte)((uint)iVar113 >> 8);
          auVar26[6] = ~(byte)((uint)iVar113 >> 0x10);
          auVar26[7] = ~(byte)((uint)iVar113 >> 0x18);
          auVar26[8] = ~(byte)iVar114;
          auVar26[9] = ~(byte)((uint)iVar114 >> 8);
          auVar26[10] = ~(byte)((uint)iVar114 >> 0x10);
          auVar26[0xb] = ~(byte)((uint)iVar114 >> 0x18);
          auVar38._4_12_ = auVar29 ^ (auVar29 ^ auVar72._4_12_) & ~auVar26;
          auVar38._0_4_ = 0xbfc90fdb;
          auVar83._4_4_ = -auVar38._4_4_;
          auVar83._0_4_ = 0x3fc90fdb;
          auVar83._8_4_ = -auVar38._8_4_;
          auVar83._12_4_ = -auVar38._12_4_;
          auVar73._0_4_ = -(uint)(fVar82 < 0.0);
          auVar73._4_4_ = -(uint)(fVar82 < 0.0);
          auVar73._8_4_ = -(uint)(fVar82 < 0.0);
          auVar73._12_4_ = -(uint)(fVar82 < 0.0);
          auVar83 = auVar83 ^ (auVar83 ^ auVar38) & auVar73;
          auVar84._12_4_ = auVar83._12_4_;
          auVar84._0_8_ = auVar83._0_8_;
          auVar84._8_4_ = 0;
          auVar74._0_4_ = -(uint)(0.0 <= fVar82 / fVar85);
          auVar74._4_4_ = -(uint)(0.0 <= fVar99 / fVar105);
          auVar74._8_4_ = -(uint)(0.0 <= fVar100 / fVar79);
          auVar74._12_4_ = -(uint)(0.0 <= fVar101 / 0.0);
          auVar39._0_4_ = ABS(fVar82 / fVar85);
          auVar39._4_4_ = ABS(fVar99 / fVar105);
          auVar39._8_4_ = ABS(fVar100 / fVar79);
          auVar39._12_4_ = ABS(fVar101 / 0.0);
          auVar130._0_4_ = -(uint)(auVar39._0_4_ <= 2.4142137);
          auVar130._4_4_ = -(uint)(auVar39._4_4_ <= 2.4142137);
          auVar130._8_4_ = -(uint)(auVar39._8_4_ <= 2.4142137);
          auVar130._12_4_ = -(uint)(auVar39._12_4_ <= 2.4142137);
          auVar121 = auVar125 ^ (auVar125 ^ auVar45) & auVar74;
          auVar138._0_4_ = -auVar121._0_4_;
          auVar138._4_4_ = -auVar121._4_4_;
          auVar138._8_4_ = -auVar121._8_4_;
          auVar138._12_4_ = -auVar121._12_4_;
          auVar109._0_4_ = -(uint)(auVar39._0_4_ <= 0.41421354);
          auVar109._4_4_ = -(uint)(auVar39._4_4_ <= 0.41421354);
          auVar109._8_4_ = -(uint)(auVar39._8_4_ <= 0.41421354);
          auVar109._12_4_ = -(uint)(auVar39._12_4_ <= 0.41421354);
          auVar121 = auVar121 ^ (auVar121 ^ auVar138) & ~auVar130;
          auVar126._0_4_ = (auVar39._0_4_ + auVar125._0_4_) / (auVar39._0_4_ + fVar44);
          auVar126._4_4_ = (auVar39._4_4_ + auVar125._4_4_) / (auVar39._4_4_ + fVar48);
          auVar126._8_4_ = (auVar39._8_4_ + auVar125._8_4_) / (auVar39._8_4_ + fVar50);
          auVar126._12_4_ = (auVar39._12_4_ + auVar125._12_4_) / (auVar39._12_4_ + fVar102);
          auVar134 = NEON_frecpe(auVar39,4);
          auVar45 = NEON_frecps(auVar134,auVar39,4);
          auVar139._0_4_ = auVar134._0_4_ * auVar45._0_4_;
          auVar139._4_4_ = auVar134._4_4_ * auVar45._4_4_;
          auVar139._8_4_ = auVar134._8_4_ * auVar45._8_4_;
          auVar139._12_4_ = auVar134._12_4_ * auVar45._12_4_;
          auVar45 = NEON_frecps(auVar139,auVar39,4);
          auVar140._0_4_ = auVar139._0_4_ * auVar45._0_4_;
          auVar140._4_4_ = auVar139._4_4_ * auVar45._4_4_;
          auVar140._8_4_ = auVar139._8_4_ * auVar45._8_4_;
          auVar140._12_4_ = auVar139._12_4_ * auVar45._12_4_;
          auVar45 = auVar133 ^ (auVar133 ^ auVar124) & auVar130;
          auVar39 = auVar39 ^ (auVar39 ^ auVar126 ^ (auVar126 ^ auVar140) & ~auVar130) & ~auVar109;
          fVar86 = (float)CONCAT13(auVar45[3] & ~(byte)((uint)auVar109._0_4_ >> 0x18),
                                   CONCAT12(auVar45[2] & ~(byte)((uint)auVar109._0_4_ >> 0x10),
                                            CONCAT11(auVar45[1] & ~(byte)((uint)auVar109._0_4_ >> 8)
                                                     ,auVar45[0] & ~(byte)auVar109._0_4_)));
          auVar107._0_8_ =
               CONCAT17(auVar45[7] & ~(byte)((uint)auVar109._4_4_ >> 0x18),
                        CONCAT16(auVar45[6] & ~(byte)((uint)auVar109._4_4_ >> 0x10),
                                 CONCAT15(auVar45[5] & ~(byte)((uint)auVar109._4_4_ >> 8),
                                          CONCAT14(auVar45[4] & ~(byte)auVar109._4_4_,fVar86))));
          auVar107[8] = auVar45[8] & ~(byte)auVar109._8_4_;
          auVar107[9] = auVar45[9] & ~(byte)((uint)auVar109._8_4_ >> 8);
          auVar107[10] = auVar45[10] & ~(byte)((uint)auVar109._8_4_ >> 0x10);
          auVar107[0xb] = auVar45[0xb] & ~(byte)((uint)auVar109._8_4_ >> 0x18);
          auVar110[0xc] = auVar45[0xc] & ~(byte)auVar109._12_4_;
          auVar110._0_12_ = auVar107;
          auVar110[0xd] = auVar45[0xd] & ~(byte)((uint)auVar109._12_4_ >> 8);
          auVar110[0xe] = auVar45[0xe] & ~(byte)((uint)auVar109._12_4_ >> 0x10);
          auVar110[0xf] = auVar45[0xf] & ~(byte)((uint)auVar109._12_4_ >> 0x18);
          fVar37 = auVar39._0_4_;
          fVar103 = fVar37 * fVar37;
          fVar42 = auVar39._4_4_;
          fVar104 = fVar42 * fVar42;
          fVar43 = auVar39._8_4_;
          fVar118 = fVar43 * fVar43;
          fVar117 = auVar39._12_4_;
          fVar129 = fVar117 * fVar117;
          auVar127._0_4_ = (int)fVar82 >> 0x1f;
          auVar127._4_4_ = (int)fVar99 >> 0x1f;
          auVar127._8_4_ = (int)fVar100 >> 0x1f;
          auVar127._12_4_ = (int)fVar101 >> 0x1f;
          auVar45[8] = 0xdb;
          auVar45._0_8_ = 0xc0490fdbc0490fdb;
          auVar45[9] = 0xf;
          auVar45[10] = 0x49;
          auVar45[0xb] = 0xc0;
          auVar45[0xc] = 0xdb;
          auVar45[0xd] = 0xf;
          auVar45[0xe] = 0x49;
          auVar45[0xf] = 0xc0;
          auVar40 = auVar40 ^ (auVar40 ^ auVar45) & auVar127;
          bVar78 = (byte)((int)fVar85 >> 0x1f);
          fVar87 = (float)CONCAT13(auVar40[3] & bVar78,
                                   CONCAT12(auVar40[2] & bVar78,
                                            CONCAT11(auVar40[1] & bVar78,auVar40[0] & bVar78)));
          bVar47 = (byte)((int)fVar105 >> 0x1f);
          auVar108._0_8_ =
               CONCAT17(auVar40[7] & bVar47,
                        CONCAT16(auVar40[6] & bVar47,
                                 CONCAT15(auVar40[5] & bVar47,CONCAT14(auVar40[4] & bVar47,fVar87)))
                       );
          bVar49 = (byte)((int)fVar79 >> 0x1f);
          auVar108[8] = auVar40[8] & bVar49;
          auVar108[9] = auVar40[9] & bVar49;
          auVar108[10] = auVar40[10] & bVar49;
          auVar108[0xb] = auVar40[0xb] & bVar49;
          auVar75._0_4_ =
               auVar121._0_4_ *
               (fVar86 + (fVar44 + fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * 
                                                  0.07692308 + -0.09090909) + 0.11111111) +
                                                  -0.14285715) + 0.2) + -0.33333334)) * fVar37) +
               fVar87;
          auVar75._4_4_ =
               auVar121._4_4_ *
               ((float)((ulong)auVar107._0_8_ >> 0x20) +
               (fVar48 + fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * 0.07692308
                                                                               + -0.09090909) +
                                                                    0.11111111) + -0.14285715) + 0.2
                                              ) + -0.33333334)) * fVar42) +
               (float)((ulong)auVar108._0_8_ >> 0x20);
          auVar75._8_4_ =
               auVar121._8_4_ *
               (auVar107._8_4_ +
               (fVar50 + fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * 0.07692308
                                                                               + -0.09090909) +
                                                                    0.11111111) + -0.14285715) + 0.2
                                              ) + -0.33333334)) * fVar43) + auVar108._8_4_;
          auVar75._12_4_ =
               auVar121._12_4_ *
               (auVar110._12_4_ +
               (fVar102 +
               fVar129 * (fVar129 * (fVar129 * (fVar129 * (fVar129 * (fVar129 * 0.07692308 +
                                                                     -0.09090909) + 0.11111111) +
                                               -0.14285715) + 0.2) + -0.33333334)) * fVar117) + 0.0;
          iVar106 = -(uint)(fVar82 == -INFINITY);
          iVar113 = -(uint)(fVar99 == -INFINITY);
          iVar114 = -(uint)(fVar100 == -INFINITY);
          iVar91 = -(uint)(fVar101 == -INFINITY);
          auVar111[0] = ~(byte)iVar106;
          auVar111[1] = ~(byte)((uint)iVar106 >> 8);
          auVar111[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar111[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar111[4] = ~(byte)iVar113;
          bVar57 = (byte)((uint)iVar113 >> 8);
          auVar111[5] = ~bVar57;
          bVar58 = (byte)((uint)iVar113 >> 0x10);
          auVar111[6] = ~bVar58;
          bVar59 = (byte)((uint)iVar113 >> 0x18);
          auVar111[7] = ~bVar59;
          auVar111[8] = ~(byte)iVar114;
          bVar60 = (byte)((uint)iVar114 >> 8);
          auVar111[9] = ~bVar60;
          bVar61 = (byte)((uint)iVar114 >> 0x10);
          auVar111[10] = ~bVar61;
          bVar62 = (byte)((uint)iVar114 >> 0x18);
          auVar111[0xb] = ~bVar62;
          auVar111[0xc] = ~(byte)iVar91;
          bVar141 = (byte)((uint)iVar91 >> 8);
          auVar111[0xd] = ~bVar141;
          bVar142 = (byte)((uint)iVar91 >> 0x10);
          bVar143 = (byte)((uint)iVar91 >> 0x18);
          auVar111[0xe] = ~bVar142;
          auVar111[0xf] = ~bVar143;
          auVar5[8] = 0xe4;
          auVar5._0_8_ = 0xc016cbe4c016cbe4;
          auVar5[9] = 0xcb;
          auVar5[10] = 0x16;
          auVar5[0xb] = 0xc0;
          auVar5[0xc] = 0xe4;
          auVar5[0xd] = 0xcb;
          auVar5[0xe] = 0x16;
          auVar5[0xf] = 0xc0;
          auVar40 = auVar40 ^ (auVar40 ^ auVar5) & ~auVar111;
          uVar88 = CONCAT17(bVar59,CONCAT16(bVar58,CONCAT15(bVar57,CONCAT14((byte)iVar113,iVar106)))
                           ) & 0xbf490fdbbf490fdb;
          auVar112[8] = (byte)iVar114 & 0xdb;
          auVar112[9] = bVar60 & 0xf;
          auVar112[10] = bVar61 & 0x49;
          auVar112[0xc] = (byte)iVar91 & 0xdb;
          auVar112[0xd] = bVar141 & 0xf;
          auVar112[0xe] = bVar142 & 0x49;
          uVar53 = CONCAT17((byte)((int)fVar99 >> 0x1f) & auVar111[7],
                            (uint7)((((byte)((int)fVar82 >> 0x1f) & auVar111[3]) & 0x80) << 0x18)) &
                   0x80ffffffffffffff;
          auVar112._0_3_ = (undefined3)uVar88;
          auVar112[3] = (byte)(uVar53 >> 0x18) | (byte)(uVar88 >> 0x18);
          auVar112[4] = (undefined1)(uVar88 >> 0x20);
          auVar112[5] = (undefined1)(uVar88 >> 0x28);
          auVar112[6] = (undefined1)(uVar88 >> 0x30);
          auVar112[7] = (byte)(uVar53 >> 0x38) | (byte)(uVar88 >> 0x38);
          auVar112[0xb] = (byte)((int)fVar100 >> 0x1f) & auVar111[0xb] & 0x80 | bVar62 & 0xbf;
          auVar112[0xf] = (byte)((int)fVar101 >> 0x1f) & auVar111[0xf] & 0x80 | bVar143 & 0xbf;
          iVar106 = -(uint)(fVar82 == INFINITY);
          iVar113 = -(uint)(fVar99 == INFINITY);
          iVar114 = -(uint)(fVar100 == INFINITY);
          iVar91 = -(uint)(fVar101 == INFINITY);
          auVar128[0] = ~(byte)iVar106;
          auVar128[1] = ~(byte)((uint)iVar106 >> 8);
          auVar128[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar128[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar128[4] = ~(byte)iVar113;
          auVar128[5] = ~(byte)((uint)iVar113 >> 8);
          auVar128[6] = ~(byte)((uint)iVar113 >> 0x10);
          auVar128[7] = ~(byte)((uint)iVar113 >> 0x18);
          auVar128[8] = ~(byte)iVar114;
          auVar128[9] = ~(byte)((uint)iVar114 >> 8);
          auVar128[10] = ~(byte)((uint)iVar114 >> 0x10);
          auVar128[0xb] = ~(byte)((uint)iVar114 >> 0x18);
          auVar128[0xc] = ~(byte)iVar91;
          auVar128[0xd] = ~(byte)((uint)iVar91 >> 8);
          auVar128[0xe] = ~(byte)((uint)iVar91 >> 0x10);
          auVar128[0xf] = ~(byte)((uint)iVar91 >> 0x18);
          iVar106 = -(uint)(fVar85 == -INFINITY);
          iVar113 = -(uint)(fVar105 == -INFINITY);
          iVar114 = -(uint)(fVar79 == -INFINITY);
          auVar76[0] = ~(byte)iVar106;
          auVar76[1] = ~(byte)((uint)iVar106 >> 8);
          auVar76[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar76[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar76[4] = ~(byte)iVar113;
          auVar76[5] = ~(byte)((uint)iVar113 >> 8);
          auVar76[6] = ~(byte)((uint)iVar113 >> 0x10);
          auVar76[7] = ~(byte)((uint)iVar113 >> 0x18);
          auVar76[8] = ~(byte)iVar114;
          auVar76[9] = ~(byte)((uint)iVar114 >> 8);
          auVar76[10] = ~(byte)((uint)iVar114 >> 0x10);
          auVar76[0xb] = ~(byte)((uint)iVar114 >> 0x18);
          auVar76[0xc] = 0xff;
          auVar76[0xd] = 0xff;
          auVar76[0xe] = 0xff;
          auVar76[0xf] = 0xff;
          auVar125[8] = 0xe4;
          auVar125._0_8_ = 0x4016cbe44016cbe4;
          auVar125[9] = 0xcb;
          auVar125[10] = 0x16;
          auVar125[0xb] = 0x40;
          auVar125[0xc] = 0xe4;
          auVar125[0xd] = 0xcb;
          auVar125[0xe] = 0x16;
          auVar125[0xf] = 0x40;
          auVar40 = auVar40 ^ (auVar40 ^ auVar125) & ~auVar128;
          auVar40 = auVar40 ^ (auVar40 ^
                              auVar54 ^ (auVar54 ^ auVar75 ^ (auVar75 ^ auVar133) & ~auVar111) &
                                        auVar128) & auVar76;
          auVar52._0_4_ =
               -(uint)(ABS(ABS(fVar82) - (auVar51._0_4_ + auVar51._4_4_)) <= 1.1920929e-07);
          auVar52._4_4_ =
               -(uint)(ABS(ABS(fVar82) - (auVar51._8_4_ + auVar51._12_4_)) <= 1.1920929e-07);
          auVar52._8_4_ =
               -(uint)(ABS(ABS(fVar82) - (auVar51._0_4_ + auVar51._4_4_)) <= 1.1920929e-07);
          auVar52._12_4_ =
               -(uint)(ABS(ABS(fVar82) - (auVar51._8_4_ + auVar51._12_4_)) <= 1.1920929e-07);
          iVar106 = -(uint)(fVar85 == INFINITY);
          iVar113 = -(uint)(fVar105 == INFINITY);
          iVar114 = -(uint)(fVar79 == INFINITY);
          auVar55[0] = ~(byte)iVar106;
          auVar55[1] = ~(byte)((uint)iVar106 >> 8);
          auVar55[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar55[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar55[4] = ~(byte)iVar113;
          auVar55[5] = ~(byte)((uint)iVar113 >> 8);
          auVar55[6] = ~(byte)((uint)iVar113 >> 0x10);
          auVar55[7] = ~(byte)((uint)iVar113 >> 0x18);
          auVar55[8] = ~(byte)iVar114;
          auVar55[9] = ~(byte)((uint)iVar114 >> 8);
          auVar55[10] = ~(byte)((uint)iVar114 >> 0x10);
          auVar55[0xb] = ~(byte)((uint)iVar114 >> 0x18);
          auVar55[0xc] = 0xff;
          auVar55[0xd] = 0xff;
          auVar55[0xe] = 0xff;
          auVar55[0xf] = 0xff;
          auVar40 = auVar40 ^ (auVar40 ^ auVar112 ^ (auVar112 ^ auVar124) & ~auVar128) & ~auVar55;
          iVar106 = -(uint)(fVar82 == -0.0);
          iVar113 = -(uint)(fVar99 == -0.0);
          iVar114 = -(uint)(fVar100 == -0.0);
          bVar57 = (byte)((uint)iVar106 >> 8);
          bVar58 = (byte)((uint)iVar106 >> 0x10);
          bVar59 = (byte)((uint)iVar106 >> 0x18);
          bVar60 = (byte)((uint)iVar113 >> 8);
          bVar61 = (byte)((uint)iVar113 >> 0x10);
          bVar62 = (byte)((uint)iVar113 >> 0x18);
          bVar63 = ~(byte)iVar114;
          bVar141 = (byte)((uint)iVar114 >> 8);
          bVar142 = (byte)((uint)iVar114 >> 0x10);
          bVar143 = (byte)((uint)iVar114 >> 0x18);
          uVar88 = (ulong)CONCAT15(~bVar62,CONCAT14(~bVar61,CONCAT13(~bVar60,CONCAT12(~(byte)iVar113
                                                                                      ,CONCAT11(~
                                                  bVar59,~bVar58))))) & 0x40490fdb4049;
          uVar64 = (ulong)CONCAT13(~bVar143,CONCAT12(~bVar142,CONCAT11(~bVar141,bVar63))) &
                   0x40490fdb40490fdb;
          uVar53 = CONCAT17(bVar62 & ~bVar47,(uint7)(bVar59 & ~bVar78 & 0x80) << 0x18) &
                   0x80ffffffffffffff;
          auVar46[0] = (~(byte)iVar106 & 0xdb | (byte)iVar106 & 0xdb) & bVar78;
          auVar46[1] = (~bVar57 & 0xf | bVar57 & 0xf) & bVar78;
          auVar46[2] = ((byte)uVar88 | bVar58 & 0x49) & bVar78;
          auVar46[4] = ((byte)(uVar88 >> 0x10) | (byte)iVar113 & 0xdb) & bVar47;
          auVar46[5] = ((byte)(uVar88 >> 0x18) | bVar60 & 0xf) & bVar47;
          auVar46[6] = ((byte)(uVar88 >> 0x20) | bVar61 & 0x49) & bVar47;
          auVar46[8] = (bVar63 & 0xdb | (byte)iVar114 & 0xdb) & bVar49;
          auVar46[9] = ((byte)(uVar64 >> 8) | bVar141 & 0xf) & bVar49;
          auVar46[10] = ((byte)(uVar64 >> 0x10) | bVar142 & 0x49) & bVar49;
          auVar46[3] = ((byte)(uVar88 >> 8) | bVar59 & 0xc0) & bVar78 | (byte)(uVar53 >> 0x18);
          auVar46[7] = (~bVar62 & 0x40 | bVar62 & 0xc0) & bVar47 | (byte)(uVar53 >> 0x38);
          auVar46[0xb] = ((byte)(uVar64 >> 0x18) | bVar143 & 0xc0) & bVar49 |
                         bVar143 & ~bVar49 & 0x80;
          auVar46._12_3_ = 0;
          auVar46[0xf] = (byte)(-(uint)(fVar101 == -0.0) >> 0x18) & 0x80;
          iVar106 = -(uint)(fVar82 == 0.0);
          iVar113 = -(uint)(fVar99 == 0.0);
          iVar114 = -(uint)(fVar100 == 0.0);
          iVar91 = -(uint)(fVar101 == 0.0);
          auVar56[0] = ~(byte)iVar106;
          auVar56[1] = ~(byte)((uint)iVar106 >> 8);
          auVar56[2] = ~(byte)((uint)iVar106 >> 0x10);
          auVar56[3] = ~(byte)((uint)iVar106 >> 0x18);
          auVar56[4] = ~(byte)iVar113;
          auVar56[5] = ~(byte)((uint)iVar113 >> 8);
          auVar56[6] = ~(byte)((uint)iVar113 >> 0x10);
          auVar56[7] = ~(byte)((uint)iVar113 >> 0x18);
          auVar56[8] = ~(byte)iVar114;
          auVar56[9] = ~(byte)((uint)iVar114 >> 8);
          auVar56[10] = ~(byte)((uint)iVar114 >> 0x10);
          auVar56[0xb] = ~(byte)((uint)iVar114 >> 0x18);
          auVar56[0xc] = ~(byte)iVar91;
          auVar56[0xd] = ~(byte)((uint)iVar91 >> 8);
          auVar56[0xe] = ~(byte)((uint)iVar91 >> 0x10);
          auVar56[0xf] = ~(byte)((uint)iVar91 >> 0x18);
          auVar40 = auVar40 ^ (auVar40 ^ auVar46) & ~auVar56;
          auVar40 = auVar40 ^ (auVar40 ^ auVar84) & auVar52;
          local_80 = (float)lVar33;
          fStack_7c = (float)((ulong)lVar33 >> 0x20);
          fStack_78 = (float)lVar27;
          fStack_74 = (float)((ulong)lVar27 >> 0x20);
          param_1[0x19] =
               CONCAT44((int)((ulong)param_1[0x19] >> 0x20),(auVar40._8_4_ * 180.0) / 3.1415927);
          param_1[0x18] =
               CONCAT44((auVar40._4_4_ * 180.0) / 3.1415927,(auVar40._0_4_ * 180.0) / 3.1415927);
          lVar33 = *(long *)(lVar32 + 0x98);
          lVar27 = *(long *)(lVar32 + 0xa0);
          *(undefined1 *)(param_1 + 0x1c) = 1;
          param_1[0x15] = lVar27;
          param_1[0x14] = lVar33;
          auVar121 = *(undefined1 (*) [16])(param_1 + 0x10);
          auVar45 = *(undefined1 (*) [16])(param_1 + 0x12);
          auVar41._0_8_ =
               CONCAT44(auVar45._4_4_ + auVar121._4_4_ + fStack_7c + *(float *)((long)param_1 + 100)
                        ,auVar45._0_4_ + auVar121._0_4_ + local_80 + *(float *)(param_1 + 0xc));
          auVar41._8_4_ = auVar45._8_4_ + auVar121._8_4_ + fStack_78 + *(float *)(param_1 + 0xd);
          auVar41._12_4_ =
               auVar45._12_4_ + auVar121._12_4_ + fStack_74 + *(float *)((long)param_1 + 0x6c);
          param_1[0xf] = auVar41._8_8_;
          param_1[0xe] = auVar41._0_8_;
          (**(code **)(*(long *)(lVar32 + -0x28) + 0x60))();
        }
        break;
      }
      sVar35 = sVar2;
    } while (sVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


