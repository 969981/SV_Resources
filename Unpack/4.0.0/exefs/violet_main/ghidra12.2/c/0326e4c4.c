/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326e4c4; name: FUN_0326e4c4
 */


/* WARNING: Removing unreachable block (ram,0x0326ed5c) */
/* WARNING: Removing unreachable block (ram,0x0326e7d8) */
/* WARNING: Removing unreachable block (ram,0x0326e7bc) */
/* WARNING: Removing unreachable block (ram,0x0326e7c4) */
/* WARNING: Removing unreachable block (ram,0x0326ed50) */
/* WARNING: Removing unreachable block (ram,0x0326ed6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0326e4c4(long param_1)

{
  long *plVar1;
  undefined5 uVar2;
  undefined6 uVar3;
  undefined7 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  bool bVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  byte bVar33;
  byte bVar34;
  long lVar28;
  double dVar29;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar39;
  undefined1 auVar32 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar48 [16];
  undefined8 uVar47;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  double dVar54;
  int iVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long lVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulong uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  double dVar69;
  byte local_90;
  byte bStack_8c;
  byte bStack_89;
  byte bStack_88;
  long local_80 [5];
  uint local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  ulong local_40;
  ulong local_38;
  
  plVar1 = (long *)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x3c) & 0x7ffffffe) < 6) {
    FUN_0326fb2c(plVar1,PTR_PTR_047e61b0,6);
  }
  if (*(int *)(param_1 + 0x38) != 6) {
    *(undefined4 *)(param_1 + 0x38) = 6;
  }
  lVar17 = _UNK_03caaf08;
  lVar60 = _DAT_03caaf00;
  lVar28 = _DAT_03caa6c0;
  plVar23 = (long *)*plVar1;
  plVar23[1] = _UNK_03caa6c8;
  *plVar23 = lVar28;
  plVar23[3] = lVar17;
  plVar23[2] = lVar60;
  local_80[2] = 0x7fffff;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  uVar21 = CONCAT71(0,local_80[0] == 1);
  uVar19 = -local_80[4];
  uVar20 = (ulong)local_58 ^ 0x7ff;
  if (uVar19 < (ulong)~local_80[4]) {
    uVar20 = uVar20 + 1;
  }
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar21;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = (long)uVar19 >> 0x3f;
  plVar23[1] = 0;
  *plVar23 = uVar21 << 0xe;
  plVar23[3] = uVar19;
  plVar23[2] = uVar20 & 0x7ff;
  uVar15 = _UNK_03cab278;
  uVar47 = _DAT_03cab270;
  uVar21 = (long)uVar19 >> 0xe;
  iVar59 = (int)((long)uVar19 >> 0x3f);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar21 ^ (uVar21 ^ -uVar21) & CONCAT44(iVar59,iVar59);
  uVar21 = (long)(uVar20 << 0x35) >> 0x3f;
  local_40 = (uVar19 ^ uVar21) - uVar21;
  local_38 = (((long)(uVar20 << 0x35) >> 0x35 ^ uVar21) + ((uVar20 & 0x7ff) >> 10)) -
             (ulong)((uVar19 ^ uVar21) < uVar21);
  uVar53 = CONCAT44(0x40,LZCOUNT((uint)(local_80[0] == 1)) + 0x20);
  uVar53 = NEON_sminp(uVar53,uVar53,4);
  uVar53 = NEON_smin(uVar53,0x4000000040,4);
  iVar59 = LZCOUNT((int)(local_38 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)local_38) + 0x20;
    if (iVar59 == 0x40) {
      iVar59 = LZCOUNT((int)(local_40 >> 0x20));
      iVar25 = 0x40;
      if (iVar59 == 0x20) {
        iVar59 = LZCOUNT((int)local_40) + 0x20;
      }
      goto LAB_0326e6b8;
    }
  }
  else {
    iVar25 = 0;
LAB_0326e6b8:
    iVar59 = iVar59 + iVar25;
  }
  uVar27 = (int)uVar53 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar19 = (ulong)uVar27;
  auVar56._8_8_ = (long)(int)uVar27;
  auVar56._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      local_38 = local_40 >> ((ulong)-uVar27 & 0x3f) | local_38 << (uVar19 & 0x3f);
    }
    uVar21 = local_40 << (uVar19 & 0x3f);
  }
  else {
    uVar21 = 0;
    local_38 = local_40 << (uVar19 & 0x3f);
  }
  auVar48 = NEON_sshl(auVar48,auVar56,8);
  NEON_ext(auVar41 << 0x40,auVar41 << 0x40,8,1);
  auVar41 = NEON_sshl(auVar42 << 0x40,auVar56,8);
  dVar29 = (double)(long)(local_38 << 0x2b | uVar21 >> 0x15 & 0xffffff8000000000 |
                         uVar21 >> 0x15 & 0x7fffffffff);
  bVar66 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  bVar36 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  bVar67 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  bVar68 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  dVar40 = dVar29 * 3.725290298461914e-09;
  if ((uVar20 & 0x400) != 0) {
    dVar40 = dVar29 * -3.725290298461914e-09;
  }
  plVar23[4] = (long)((double)(auVar48._0_8_ << 4) * 1.1102230246251565e-16);
  plVar23[5] = (long)((double)(auVar48._8_8_ << 4) * 1.1102230246251565e-16);
  plVar23[6] = (long)((double)(auVar41._0_8_ << 4) * 1.1102230246251565e-16);
  plVar23[7] = (long)dVar40;
  uVar16 = _UNK_03caa9f8;
  uVar53 = _DAT_03caa9f0;
  lVar24 = *plVar1;
  *(undefined8 *)(lVar24 + 0x48) = _UNK_03caa9f8;
  *(undefined8 *)(lVar24 + 0x40) = uVar53;
  *(undefined8 *)(lVar24 + 0x58) = 0;
  *(undefined8 *)(lVar24 + 0x50) = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  uVar21 = (ulong)local_58;
  lVar28 = -(ulong)(local_80[0] == 1);
  bVar26 = (byte)lVar28 & (byte)_DAT_03cab240;
  bVar33 = (byte)((ulong)lVar28 >> 8) & (byte)((ulong)_DAT_03cab240 >> 8);
  bVar34 = (byte)((ulong)lVar28 >> 0x10) & (byte)((ulong)_DAT_03cab240 >> 0x10);
  bVar35 = (byte)((ulong)lVar28 >> 0x18) & (byte)((ulong)_DAT_03cab240 >> 0x18);
  auVar30._0_4_ = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar26)));
  auVar30[4] = (byte)((ulong)lVar28 >> 0x20) & (byte)((ulong)_DAT_03cab240 >> 0x20);
  auVar30[5] = (byte)((ulong)lVar28 >> 0x28) & (byte)((ulong)_DAT_03cab240 >> 0x28);
  auVar30[6] = (byte)((ulong)lVar28 >> 0x30) & (byte)((ulong)_DAT_03cab240 >> 0x30);
  auVar30[7] = (byte)((ulong)lVar28 >> 0x38) & (byte)((ulong)_DAT_03cab240 >> 0x38);
  auVar30._8_8_ = 0;
  bVar65 = local_80[0] == 1 & (byte)_DAT_03caaa00 | bVar26;
  uVar2 = CONCAT14(auVar30[4],CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar65))));
  uVar3 = CONCAT15(auVar30[5],uVar2);
  uVar4 = CONCAT16(auVar30[6],uVar3);
  lVar28 = CONCAT17(auVar30[7],uVar4);
  *(undefined8 *)(lVar24 + 0x48) = 0;
  *(long *)(lVar24 + 0x40) = lVar28 << 0xe;
  *(long *)(lVar24 + 0x58) = local_80[4];
  *(ulong *)(lVar24 + 0x50) = uVar21 & 0x7ff;
  uVar22 = CONCAT44(auVar30._0_4_,auVar30._0_4_);
  uVar61 = local_80[4] >> 0xe;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_80[4] >> 0x3f;
  iVar25 = (int)(local_80[4] >> 0x3f);
  uVar2 = CONCAT14(auVar30[4],CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar65))));
  uVar3 = CONCAT15(auVar30[5],uVar2);
  uVar4 = CONCAT16(auVar30[6],uVar3);
  lVar28 = CONCAT17(auVar30[7],uVar4);
  uVar2 = CONCAT14(auVar30[4],CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar65))));
  uVar3 = CONCAT15(auVar30[5],uVar2);
  uVar4 = CONCAT16(auVar30[6],uVar3);
  uVar20 = CONCAT17(auVar30[7],uVar4);
  uVar2 = CONCAT14(auVar30[4],CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar65))));
  uVar3 = CONCAT15(auVar30[5],uVar2);
  uVar4 = CONCAT16(auVar30[6],uVar3);
  uVar19 = CONCAT17(auVar30[7],uVar4);
  uVar19 = uVar19 ^ (uVar20 ^ -lVar28) & uVar22;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar19;
  uVar20 = (long)(uVar21 << 0x35) >> 0x3f;
  local_40 = (local_80[4] ^ uVar20) - uVar20;
  local_38 = (((long)(uVar21 << 0x35) >> 0x35 ^ uVar20) + ((uVar21 & 0x7ff) >> 10)) -
             (ulong)((local_80[4] ^ uVar20) < uVar20);
  iVar59 = LZCOUNT((int)(uVar19 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)uVar19) + 0x20;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar61 ^ (uVar61 ^ -uVar61) & CONCAT44(iVar25,iVar25);
  uVar62 = NEON_sminp(CONCAT44(0x40,iVar59),CONCAT44(0x40,iVar59),4);
  uVar62 = NEON_smin(uVar62,0x4000000040,4);
  iVar59 = LZCOUNT((int)(local_38 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)local_38) + 0x20;
    if (iVar59 == 0x40) {
      iVar59 = LZCOUNT((int)(local_40 >> 0x20));
      iVar25 = 0x40;
      if (iVar59 == 0x20) {
        iVar59 = LZCOUNT((int)local_40) + 0x20;
      }
      goto LAB_0326e9b0;
    }
  }
  else {
    iVar25 = 0;
LAB_0326e9b0:
    iVar59 = iVar59 + iVar25;
  }
  uVar27 = (int)uVar62 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar20 = (ulong)uVar27;
  auVar63._8_8_ = (long)(int)uVar27;
  auVar63._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      local_38 = local_40 >> ((ulong)-uVar27 & 0x3f) | local_38 << (uVar20 & 0x3f);
    }
    uVar19 = local_40 << (uVar20 & 0x3f);
  }
  else {
    uVar19 = 0;
    local_38 = local_40 << (uVar20 & 0x3f);
  }
  auVar56 = NEON_sshl(auVar55,auVar63,8);
  auVar41 = NEON_ext(auVar30,auVar30,8,1);
  auVar48 = NEON_ext(auVar7 << 0x40,auVar7 << 0x40,8,1);
  dVar69 = (double)(long)(local_38 << 0x2b | uVar19 >> 0x15 & 0xffffff8000000000 |
                         uVar19 >> 0x15 & 0x7fffffffff);
  auVar42 = NEON_sshl(auVar13 << 0x40,auVar63,8);
  dVar46 = (double)(auVar56._8_8_ << 4);
  local_90 = (byte)uVar47;
  bStack_8c = (byte)((ulong)uVar47 >> 0x20);
  bStack_89 = (byte)((ulong)uVar47 >> 0x38);
  bStack_88 = (byte)uVar15;
  auVar31._0_8_ =
       CONCAT17(auVar41[3] & bStack_89,
                (uint7)CONCAT14(auVar41[0] & bStack_8c,(uint)(bVar26 & local_90)));
  auVar31._8_4_ = 0;
  auVar31[0xc] = auVar48[0] & bVar66;
  auVar31[0xd] = auVar48[1] & bVar36;
  auVar31[0xe] = auVar48[2] & bVar67;
  auVar31[0xf] = auVar48[3] & bVar68;
  dVar54 = (double)(auVar56._0_8_ << 4);
  dVar40 = (double)(auVar42._0_8_ << 4);
  uVar27 = (uint)(bVar26 & local_90) + (int)(auVar31._0_8_ >> 0x20) + auVar31._12_4_;
  dVar29 = dVar69 * 3.725290298461914e-09;
  if ((local_58 & 0x400) != 0) {
    dVar29 = dVar69 * -3.725290298461914e-09;
  }
  dVar69 = dVar54 * 1.1102230246251565e-16;
  if ((uVar27 & 1) != 0) {
    dVar69 = dVar54 * -1.1102230246251565e-16;
  }
  dVar54 = dVar46 * 1.1102230246251565e-16;
  if ((uVar27 & 2) != 0) {
    dVar54 = dVar46 * -1.1102230246251565e-16;
  }
  *(double *)(lVar24 + 0x60) = dVar69;
  *(double *)(lVar24 + 0x68) = dVar54;
  dVar46 = dVar40 * 1.1102230246251565e-16;
  if ((uVar27 & 4) != 0) {
    dVar46 = dVar40 * -1.1102230246251565e-16;
  }
  *(double *)(lVar24 + 0x70) = dVar46;
  *(double *)(lVar24 + 0x78) = dVar29;
  uVar47 = _DAT_03cab570;
  lVar28 = *plVar1;
  *(undefined8 *)(lVar28 + 0x88) = _UNK_03cab578;
  *(undefined8 *)(lVar28 + 0x80) = uVar47;
  *(long *)(lVar28 + 0x98) = lVar17;
  *(long *)(lVar28 + 0x90) = lVar60;
  local_80[2] = 0x7fffff;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  bVar18 = local_80[0] == 1;
  uVar19 = -local_80[4];
  uVar20 = (ulong)local_58 ^ 0x7ff;
  if (uVar19 < (ulong)~local_80[4]) {
    uVar20 = uVar20 + 1;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (long)uVar19 >> 0x3f;
  *(ulong *)(lVar28 + 0x88) = (ulong)bVar18 << 0xe;
  *(undefined8 *)(lVar28 + 0x80) = 0;
  *(ulong *)(lVar28 + 0x98) = uVar19;
  *(ulong *)(lVar28 + 0x90) = uVar20 & 0x7ff;
  uVar21 = (long)uVar19 >> 0xe;
  iVar59 = (int)((long)uVar19 >> 0x3f);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar21 ^ (uVar21 ^ -uVar21) & CONCAT44(iVar59,iVar59);
  uVar21 = (long)(uVar20 << 0x35) >> 0x3f;
  local_40 = (uVar19 ^ uVar21) - uVar21;
  local_38 = (((long)(uVar20 << 0x35) >> 0x35 ^ uVar21) + ((uVar20 & 0x7ff) >> 10)) -
             (ulong)((uVar19 ^ uVar21) < uVar21);
  uVar47 = CONCAT44(LZCOUNT((uint)bVar18) + 0x20,0x40);
  uVar47 = NEON_sminp(uVar47,uVar47,4);
  uVar47 = NEON_smin(uVar47,0x4000000040,4);
  iVar59 = LZCOUNT((int)(local_38 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)local_38) + 0x20;
    if (iVar59 == 0x40) {
      iVar59 = LZCOUNT((int)(local_40 >> 0x20));
      iVar25 = 0x40;
      if (iVar59 == 0x20) {
        iVar59 = LZCOUNT((int)local_40) + 0x20;
      }
      goto LAB_0326ec54;
    }
  }
  else {
    iVar25 = 0;
LAB_0326ec54:
    iVar59 = iVar59 + iVar25;
  }
  uVar27 = (int)uVar47 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar19 = (ulong)uVar27;
  auVar49._8_8_ = (long)(int)uVar27;
  auVar49._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      local_38 = local_40 >> ((ulong)-uVar27 & 0x3f) | local_38 << (uVar19 & 0x3f);
    }
    uVar21 = local_40 << (uVar19 & 0x3f);
  }
  else {
    uVar21 = 0;
    local_38 = local_40 << (uVar19 & 0x3f);
  }
  auVar42 = NEON_sshl(ZEXT116(bVar18) << 0x40,auVar49,8);
  NEON_ext(auVar8 << 0x40,auVar8 << 0x40,8,1);
  auVar41 = NEON_sshl(auVar9 << 0x40,auVar49,8);
  dVar29 = (double)(long)(local_38 << 0x2b | uVar21 >> 0x15 & 0xffffff8000000000 |
                         uVar21 >> 0x15 & 0x7fffffffff);
  dVar40 = dVar29 * 3.725290298461914e-09;
  if ((uVar20 & 0x400) != 0) {
    dVar40 = dVar29 * -3.725290298461914e-09;
  }
  *(double *)(lVar28 + 0xa0) = (double)(auVar42._0_8_ << 4) * 1.1102230246251565e-16;
  *(double *)(lVar28 + 0xa8) = (double)(auVar42._8_8_ << 4) * 1.1102230246251565e-16;
  *(double *)(lVar28 + 0xb8) = dVar40;
  *(double *)(lVar28 + 0xb0) = (double)(auVar41._0_8_ << 4) * 1.1102230246251565e-16;
  uVar47 = _DAT_03caa860;
  lVar28 = *plVar1;
  *(undefined8 *)(lVar28 + 200) = _UNK_03caa868;
  *(undefined8 *)(lVar28 + 0xc0) = uVar47;
  *(undefined8 *)(lVar28 + 0xd8) = 0;
  *(undefined8 *)(lVar28 + 0xd0) = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  uVar21 = (ulong)local_58;
  lVar60 = -(ulong)(local_80[0] == 1);
  bVar26 = (byte)lVar60 & (byte)_UNK_03cab258;
  bVar33 = (byte)((ulong)lVar60 >> 8) & (byte)((ulong)_UNK_03cab258 >> 8);
  auVar5[1] = bVar33;
  auVar5[0] = bVar26;
  bVar34 = (byte)((ulong)lVar60 >> 0x10) & (byte)((ulong)_UNK_03cab258 >> 0x10);
  auVar5[2] = bVar34;
  bVar35 = (byte)((ulong)lVar60 >> 0x18) & (byte)((ulong)_UNK_03cab258 >> 0x18);
  auVar5[3] = bVar35;
  bVar65 = (byte)((ulong)lVar60 >> 0x20) & (byte)((ulong)_UNK_03cab258 >> 0x20);
  auVar5[4] = bVar65;
  bVar37 = (byte)((ulong)lVar60 >> 0x28) & (byte)((ulong)_UNK_03cab258 >> 0x28);
  auVar5[5] = bVar37;
  bVar38 = (byte)((ulong)lVar60 >> 0x30) & (byte)((ulong)_UNK_03cab258 >> 0x30);
  auVar5[6] = bVar38;
  bVar39 = (byte)((ulong)lVar60 >> 0x38) & (byte)((ulong)_UNK_03cab258 >> 0x38);
  auVar5[7] = bVar39;
  auVar5._8_8_ = 0;
  bVar26 = local_80[0] == 1 & (byte)_UNK_03cac0b8 | bVar26;
  *(long *)(lVar28 + 200) =
       CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar65,CONCAT13(bVar35,CONCAT12(
                                                  bVar34,CONCAT11(bVar33,bVar26))))))) << 0xe;
  *(undefined8 *)(lVar28 + 0xc0) = 0;
  *(long *)(lVar28 + 0xd8) = local_80[4];
  *(ulong *)(lVar28 + 0xd0) = uVar21 & 0x7ff;
  uVar61 = local_80[4] >> 0xe;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_80[4] >> 0x3f;
  iVar59 = (int)(local_80[4] >> 0x3f);
  uVar19 = CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar65,CONCAT13(bVar35,CONCAT12(
                                                  bVar34,CONCAT11(bVar33,bVar26))))))) ^
           (CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar65,CONCAT13(bVar35,CONCAT12
                                                  (bVar34,CONCAT11(bVar33,bVar26))))))) ^
           -CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar37,CONCAT14(bVar65,CONCAT13(bVar35,CONCAT12
                                                  (bVar34,CONCAT11(bVar33,bVar26)))))))) &
           CONCAT44((int)lVar60,(int)lVar60);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar19;
  uVar20 = (long)(uVar21 << 0x35) >> 0x3f;
  local_40 = (local_80[4] ^ uVar20) - uVar20;
  local_38 = (((long)(uVar21 << 0x35) >> 0x35 ^ uVar20) + ((uVar21 & 0x7ff) >> 10)) -
             (ulong)((local_80[4] ^ uVar20) < uVar20);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar61 ^ (uVar61 ^ -uVar61) & CONCAT44(iVar59,iVar59);
  iVar59 = LZCOUNT((int)(uVar19 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)uVar19) + 0x20;
  }
  uVar47 = NEON_sminp(CONCAT44(iVar59,0x40),CONCAT44(iVar59,0x40),4);
  uVar47 = NEON_smin(uVar47,0x4000000040,4);
  iVar59 = LZCOUNT((int)(local_38 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)local_38) + 0x20;
    if (iVar59 == 0x40) {
      iVar59 = LZCOUNT((int)(local_40 >> 0x20));
      iVar25 = 0x40;
      if (iVar59 == 0x20) {
        iVar59 = LZCOUNT((int)local_40) + 0x20;
      }
      goto LAB_0326ef4c;
    }
  }
  else {
    iVar25 = 0;
LAB_0326ef4c:
    iVar59 = iVar59 + iVar25;
  }
  uVar27 = (int)uVar47 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar20 = (ulong)uVar27;
  auVar64._8_8_ = (long)(int)uVar27;
  auVar64._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      local_38 = local_40 >> ((ulong)-uVar27 & 0x3f) | local_38 << (uVar20 & 0x3f);
    }
    uVar19 = local_40 << (uVar20 & 0x3f);
  }
  else {
    uVar19 = 0;
    local_38 = local_40 << (uVar20 & 0x3f);
  }
  auVar56 = NEON_sshl(auVar6 << 0x40,auVar64,8);
  auVar41 = NEON_ext(auVar5 << 0x40,auVar5 << 0x40,8,1);
  auVar48 = NEON_ext(auVar10 << 0x40,auVar10 << 0x40,8,1);
  dVar69 = (double)(long)(local_38 << 0x2b | uVar19 >> 0x15 & 0xffffff8000000000 |
                         uVar19 >> 0x15 & 0x7fffffffff);
  auVar42 = NEON_sshl(auVar14 << 0x40,auVar64,8);
  dVar46 = (double)(auVar56._8_8_ << 4);
  auVar32._0_8_ = CONCAT17(auVar41[3] & bStack_89,(uint7)(auVar41[0] & bStack_8c) << 0x20);
  auVar32._8_4_ = 0;
  auVar32[0xc] = auVar48[0] & bVar66;
  auVar32[0xd] = auVar48[1] & bVar36;
  auVar32[0xe] = auVar48[2] & bVar67;
  auVar32[0xf] = auVar48[3] & bVar68;
  dVar54 = (double)(auVar56._0_8_ << 4);
  dVar40 = (double)(auVar42._0_8_ << 4);
  uVar27 = (int)(auVar32._0_8_ >> 0x20) + auVar32._12_4_;
  dVar29 = dVar69 * 3.725290298461914e-09;
  if ((local_58 & 0x400) != 0) {
    dVar29 = dVar69 * -3.725290298461914e-09;
  }
  dVar69 = dVar54 * 1.1102230246251565e-16;
  if ((uVar27 & 1) != 0) {
    dVar69 = dVar54 * -1.1102230246251565e-16;
  }
  dVar54 = dVar46 * 1.1102230246251565e-16;
  if ((uVar27 & 2) != 0) {
    dVar54 = dVar46 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0xe0) = dVar69;
  *(double *)(lVar28 + 0xe8) = dVar54;
  dVar46 = dVar40 * 1.1102230246251565e-16;
  if ((uVar27 & 4) != 0) {
    dVar46 = dVar40 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0xf0) = dVar46;
  *(double *)(lVar28 + 0xf8) = dVar29;
  uVar15 = _UNK_03caa6d8;
  uVar47 = _DAT_03caa6d0;
  lVar28 = *plVar1;
  *(undefined8 *)(lVar28 + 0x108) = 0;
  *(undefined8 *)(lVar28 + 0x100) = 0;
  *(undefined8 *)(lVar28 + 0x118) = uVar15;
  *(undefined8 *)(lVar28 + 0x110) = uVar47;
  local_80[2] = 0x7fffff;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  uVar19 = -local_80[4];
  uVar20 = (ulong)local_58 ^ 0x7ff;
  if (uVar19 < (ulong)~local_80[4]) {
    uVar20 = uVar20 + 1;
  }
  uVar21 = uVar20 & 0x7ff | (ulong)(local_80[0] == 1) << 0xe;
  auVar44._0_8_ = (long)uVar21 >> 0xe;
  auVar44._8_8_ = (long)uVar19 >> 0xe;
  *(undefined8 *)(lVar28 + 0x108) = 0;
  *(undefined8 *)(lVar28 + 0x100) = 0;
  *(ulong *)(lVar28 + 0x118) = uVar19;
  *(ulong *)(lVar28 + 0x110) = uVar21;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (long)uVar19 >> 0x3f;
  iVar59 = (int)((long)uVar19 >> 0x3f);
  auVar12._4_4_ = iVar59;
  auVar12._0_4_ = iVar59;
  auVar12._8_8_ = 0;
  auVar57._0_8_ = -auVar44._0_8_;
  auVar57._8_8_ = -auVar44._8_8_;
  auVar44 = auVar44 ^ (auVar44 ^ auVar57) & auVar12 << 0x40;
  uVar21 = (long)(uVar20 << 0x35) >> 0x3f;
  local_40 = (uVar19 ^ uVar21) - uVar21;
  local_38 = (((long)(uVar20 << 0x35) >> 0x35 ^ uVar21) + ((uVar20 & 0x7ff) >> 10)) -
             (ulong)((uVar19 ^ uVar21) < uVar21);
  iVar25 = LZCOUNT(auVar44._0_4_) + 0x20;
  iVar59 = LZCOUNT((int)(local_38 >> 0x20));
  uVar47 = NEON_sminp(0x4000000040,0x4000000040,4);
  uVar47 = NEON_smin(uVar47,CONCAT44(iVar25,iVar25),4);
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)local_38) + 0x20;
    if (iVar59 == 0x40) {
      iVar59 = LZCOUNT((int)(local_40 >> 0x20));
      iVar25 = 0x40;
      if (iVar59 == 0x20) {
        iVar59 = LZCOUNT((int)local_40) + 0x20;
      }
      goto LAB_0326f1e0;
    }
  }
  else {
    iVar25 = 0;
LAB_0326f1e0:
    iVar59 = iVar59 + iVar25;
  }
  uVar27 = (int)uVar47 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar19 = (ulong)uVar27;
  auVar50._8_8_ = (long)(int)uVar27;
  auVar50._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      local_38 = local_40 >> ((ulong)-uVar27 & 0x3f) | local_38 << (uVar19 & 0x3f);
    }
    uVar21 = local_40 << (uVar19 & 0x3f);
  }
  else {
    uVar21 = 0;
    local_38 = local_40 << (uVar19 & 0x3f);
  }
  auVar42 = NEON_sshl(auVar44,auVar50,8);
  auVar41 = NEON_ext(auVar11 << 0x40,auVar11 << 0x40,8,1);
  auVar48 = NEON_sshl(ZEXT816(0),auVar50,8);
  dVar46 = (double)(long)(local_38 << 0x2b | uVar21 >> 0x15 & 0xffffff8000000000 |
                         uVar21 >> 0x15 & 0x7fffffffff);
  dVar69 = (double)(auVar42._0_8_ << 4);
  bVar36 = auVar41[0] & bVar66;
  dVar54 = (double)(auVar48._0_8_ << 4);
  dVar29 = (double)(auVar48._8_8_ << 4);
  dVar40 = dVar46 * 3.725290298461914e-09;
  if ((uVar20 & 0x400) != 0) {
    dVar40 = dVar46 * -3.725290298461914e-09;
  }
  dVar46 = dVar54 * 1.1102230246251565e-16;
  if ((bVar36 & 1) != 0) {
    dVar46 = dVar54 * -1.1102230246251565e-16;
  }
  dVar54 = dVar29 * 1.1102230246251565e-16;
  if ((bVar36 & 2) != 0) {
    dVar54 = dVar29 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0x120) = dVar46;
  *(double *)(lVar28 + 0x128) = dVar54;
  dVar29 = dVar69 * 1.1102230246251565e-16;
  if ((bVar36 & 4) != 0) {
    dVar29 = dVar69 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0x130) = dVar29;
  *(double *)(lVar28 + 0x138) = dVar40;
  lVar28 = *plVar1;
  *(undefined8 *)(lVar28 + 0x148) = 0;
  *(undefined8 *)(lVar28 + 0x140) = 0;
  *(undefined8 *)(lVar28 + 0x158) = uVar16;
  *(undefined8 *)(lVar28 + 0x150) = uVar53;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 1;
  local_80[1] = 0;
  FUN_03270b40(local_80,local_80 + 2,local_80);
  local_40 = local_80[2];
  local_50 = (undefined4)local_80[0];
  uStack_4c = (undefined4)((ulong)local_80[0] >> 0x20);
  local_38 = local_80[3];
  local_48 = (undefined4)local_80[1];
  uStack_44 = (undefined4)((ulong)local_80[1] >> 0x20);
  FUN_0326ffe0(&local_40,&local_50,local_80 + 4,0,4);
  uVar19 = (ulong)local_58;
  uVar20 = 0xffffffffffffc000;
  if (local_80[0] != 1) {
    uVar20 = 0;
  }
  uVar21 = uVar20 | uVar19 & 0x7ff;
  auVar45._0_8_ = (long)uVar21 >> 0xe;
  auVar45._8_8_ = local_80[4] >> 0xe;
  *(undefined8 *)(lVar28 + 0x148) = 0;
  *(undefined8 *)(lVar28 + 0x140) = 0;
  *(long *)(lVar28 + 0x158) = local_80[4];
  *(ulong *)(lVar28 + 0x150) = uVar21;
  auVar43._0_8_ = (long)uVar21 >> 0x3f;
  auVar43._8_8_ = local_80[4] >> 0x3f;
  iVar59 = (int)((long)uVar20 >> 0x3f);
  iVar25 = (int)(local_80[4] >> 0x3f);
  auVar51._4_4_ = iVar59;
  auVar51._0_4_ = iVar59;
  auVar51._12_4_ = iVar25;
  auVar51._8_4_ = iVar25;
  auVar58._0_8_ = -auVar45._0_8_;
  auVar58._8_8_ = -auVar45._8_8_;
  auVar45 = auVar45 ^ (auVar45 ^ auVar58) & auVar51;
  uVar21 = (long)(uVar19 << 0x35) >> 0x3f;
  uVar61 = (local_80[4] ^ uVar21) - uVar21;
  uVar19 = (((long)(uVar19 << 0x35) >> 0x35 ^ uVar21) + ((uVar19 & 0x7ff) >> 10)) -
           (ulong)((local_80[4] ^ uVar21) < uVar21);
  iVar59 = LZCOUNT(auVar45._4_4_);
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT(auVar45._0_4_) + 0x20;
  }
  uVar47 = NEON_sminp(0x4000000040,0x4000000040,4);
  uVar47 = NEON_smin(uVar47,CONCAT44(iVar59,iVar59),4);
  iVar59 = LZCOUNT((int)(uVar19 >> 0x20));
  if (iVar59 == 0x20) {
    iVar59 = LZCOUNT((int)uVar19) + 0x20;
    if (iVar59 != 0x40) goto LAB_0326f464;
    iVar59 = LZCOUNT((int)(uVar61 >> 0x20));
    iVar25 = 0x40;
    if (iVar59 == 0x20) {
      iVar59 = LZCOUNT((int)uVar61) + 0x20;
    }
  }
  else {
    iVar25 = 0;
  }
  iVar59 = iVar59 + iVar25;
LAB_0326f464:
  uVar27 = (int)uVar47 - 0xf;
  if ((int)(iVar59 - 0x36U) <= (int)uVar27) {
    uVar27 = iVar59 - 0x36U;
  }
  uVar21 = (ulong)uVar27;
  auVar52._8_8_ = (long)(int)uVar27;
  auVar52._0_8_ = (long)(int)uVar27;
  if (uVar27 < 0x40) {
    if (uVar27 != 0) {
      uVar19 = uVar61 >> ((ulong)-uVar27 & 0x3f) | uVar19 << (uVar21 & 0x3f);
    }
    uVar22 = uVar61 << (uVar21 & 0x3f);
  }
  else {
    uVar22 = 0;
    uVar19 = uVar61 << (uVar21 & 0x3f);
  }
  auVar42 = NEON_sshl(auVar45,auVar52,8);
  auVar48 = NEON_sshl(ZEXT816(0),auVar52,8);
  auVar41 = NEON_ext(auVar43,auVar43,8,1);
  dVar46 = (double)(long)(uVar19 << 0x2b | uVar22 >> 0x15 & 0xffffff8000000000 |
                         uVar22 >> 0x15 & 0x7fffffffff);
  dVar69 = (double)(auVar42._0_8_ << 4);
  dVar54 = (double)(auVar48._0_8_ << 4);
  dVar29 = (double)(auVar48._8_8_ << 4);
  bVar66 = ((byte)((long)uVar20 >> 0x3f) & bStack_88) + (auVar41[0] & bVar66);
  dVar40 = dVar46 * 3.725290298461914e-09;
  if ((local_58 & 0x400) != 0) {
    dVar40 = dVar46 * -3.725290298461914e-09;
  }
  dVar46 = dVar54 * 1.1102230246251565e-16;
  if ((bVar66 & 1) != 0) {
    dVar46 = dVar54 * -1.1102230246251565e-16;
  }
  dVar54 = dVar29 * 1.1102230246251565e-16;
  if ((bVar66 & 2) != 0) {
    dVar54 = dVar29 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0x178) = dVar40;
  *(double *)(lVar28 + 0x160) = dVar46;
  dVar29 = dVar69 * 1.1102230246251565e-16;
  if ((bVar66 & 4) != 0) {
    dVar29 = dVar69 * -1.1102230246251565e-16;
  }
  *(double *)(lVar28 + 0x168) = dVar54;
  *(double *)(lVar28 + 0x170) = dVar29;
  return;
}


