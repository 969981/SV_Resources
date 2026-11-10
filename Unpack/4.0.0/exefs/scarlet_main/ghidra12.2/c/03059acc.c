/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03059acc; name: FUN_03059acc
 */


undefined8
FUN_03059acc(long param_1,uint param_2,ulong param_3,undefined8 param_4,long param_5,
            undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  int *piVar44;
  int iVar45;
  uint *puVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  long lVar50;
  ulong uVar51;
  long *plVar52;
  float fVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  float fVar98;
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  byte local_c4 [4];
  uint local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  
  uVar93 = *param_7;
  plVar52 = (long *)(param_1 + 0x18);
  pauVar21 = (undefined1 (*) [16])(*plVar52 + (long)(int)param_2 * 0x90);
  uStack_98 = *(undefined8 *)(pauVar21[2] + 8);
  local_a0 = *(undefined8 *)pauVar21[2];
  pauVar7 = pauVar21;
  if ((param_3 & 1) == 0) {
    pauVar7 = pauVar21 + 1;
  }
  auVar13 = *pauVar7;
  uVar22 = switchD_0305df4c::caseD_4(pauVar21,param_5,local_a8);
  lVar30 = *(long *)(param_5 + 0x38);
  lVar25 = (uVar22 >> 0x16 & 0x3ff) * 0x100;
  lVar32 = *(long *)(*(long *)(lVar30 + lVar25) + 0x20);
  uVar40 = (uint)uVar22 & 0x3fffff;
  uVar51 = (ulong)uVar40;
  uVar35 = uVar40 - *(int *)(lVar32 + 0x30);
  if ((int)uVar40 < *(int *)(lVar32 + 0x30)) {
    uVar35 = uVar40;
    if ((*(int *)(lVar32 + 0x78) == 0) ||
       (uVar35 = *(uint *)(*(long *)(lVar32 + 0x70) + (ulong)uVar40 * 4), uVar35 != 0xffffffff)) {
      lVar43 = *(long *)(lVar32 + 0xc0);
      goto LAB_03059b98;
    }
    lVar43 = *(long *)(lVar32 + 0x28) + uVar51 * 0x14;
  }
  else {
    lVar43 = *(long *)(lVar32 + 0xe0);
LAB_03059b98:
    lVar43 = lVar43 + (long)(int)uVar35 * 0x14;
  }
  fVar72 = auVar13._8_4_;
  fVar65 = auVar13._0_4_;
  fVar69 = auVar13._4_4_;
  uVar35 = *(uint *)(lVar43 + 8);
  if ((*(byte *)(lVar43 + 0x10) >> 6 & 1) == 0) {
    if (uVar35 == 0xffffffff) {
      return 2;
    }
    uVar35 = uVar35 & 0x3fffff | *(int *)(lVar32 + 0x17c) << 0x16;
  }
  if (uVar35 == 0xffffffff) {
    return 2;
  }
  uVar36 = uVar35 & 0x3fffff;
  lVar32 = *(long *)(lVar30 + (ulong)(uVar35 >> 0x16) * 0x100);
  lVar43 = *(long *)(lVar32 + 0x20);
  uVar35 = uVar36 - *(int *)(lVar43 + 0x30);
  if ((int)uVar36 < *(int *)(lVar43 + 0x30)) {
    if (*(int *)(lVar43 + 0x78) == 0) {
      uVar35 = uVar36;
LAB_03059c34:
      lVar39 = *(long *)(lVar43 + 0xc0);
      goto LAB_03059c38;
    }
    uVar35 = *(uint *)(*(long *)(lVar43 + 0x70) + (ulong)uVar36 * 4);
    if (uVar35 != 0xffffffff) goto LAB_03059c34;
    piVar44 = (int *)(*(long *)(lVar43 + 0x28) + (ulong)uVar36 * 0x14);
  }
  else {
    lVar39 = *(long *)(lVar43 + 0xe0);
LAB_03059c38:
    piVar44 = (int *)(lVar39 + (long)(int)uVar35 * 0x14);
  }
  iVar29 = *(int *)(lVar43 + 0x40);
  iVar47 = *piVar44;
  iVar45 = piVar44[1];
  uVar97 = *(undefined8 *)(lVar32 + 0x68);
  uVar96 = *(undefined8 *)(lVar32 + 0x60);
  uVar102 = *(undefined8 *)(lVar32 + 0x78);
  uVar99 = *(undefined8 *)(lVar32 + 0x70);
  uVar95 = *(undefined8 *)(lVar32 + 0x88);
  uVar94 = *(undefined8 *)(lVar32 + 0x80);
  uVar18 = *(undefined8 *)(lVar32 + 0x98);
  uVar17 = *(undefined8 *)(lVar32 + 0x90);
  lVar32 = 0x38;
  if (iVar29 <= iVar47) {
    lVar32 = 0xf0;
  }
  iVar10 = 0;
  if (iVar29 <= iVar47) {
    iVar10 = iVar29;
  }
  iVar9 = 0;
  if (iVar29 <= iVar45) {
    iVar9 = iVar29;
  }
  auVar13 = *(undefined1 (*) [16])(*(long *)(lVar43 + lVar32) + (long)(iVar47 - iVar10) * 0x10);
  lVar32 = 0x38;
  if (iVar29 <= iVar45) {
    lVar32 = 0xf0;
  }
  uVar33 = (ulong)local_a8[0];
  puVar31 = (undefined8 *)(*(long *)(lVar43 + lVar32) + (long)(iVar45 - iVar9) * 0x10);
  uVar91 = *puVar31;
  lVar32 = *(long *)(lVar30 + ((ulong)(local_a8[0] >> 0xe) & 0x3ff00));
  uVar38 = uVar33 & 0x3fffff;
  lVar30 = *(long *)(lVar32 + 0x20);
  iVar47 = -(uint)((param_3 & 1) != 0);
  iVar29 = (int)uVar38;
  iVar45 = iVar29 - *(int *)(lVar30 + 0x20);
  if (iVar29 < *(int *)(lVar30 + 0x20)) {
    iVar45 = iVar29;
    if ((*(int *)(lVar30 + 0x98) == 0) ||
       (iVar45 = *(int *)(*(long *)(lVar30 + 0x90) + uVar38 * 4), iVar45 != -1)) {
      lVar43 = *(long *)(lVar30 + 0xb0);
      goto LAB_03059cec;
    }
    piVar44 = (int *)(*(long *)(lVar30 + 0x18) + uVar38 * 0x10);
  }
  else {
    lVar43 = *(long *)(lVar30 + 0xd0);
LAB_03059cec:
    piVar44 = (int *)(lVar43 + (long)iVar45 * 0x10);
  }
  fVar92 = (float)uVar93 * (float)uVar93;
  fVar59 = (float)puVar31[1];
  fVar76 = (float)local_a0;
  fVar77 = (float)((ulong)local_a0 >> 0x20);
  fVar78 = (float)uStack_98;
  fVar79 = (float)((ulong)uStack_98 >> 0x20);
  if ((short)piVar44[2] < 1) {
LAB_0305a018:
    uVar33 = (ulong)local_a8[0];
LAB_0305a01c:
    local_b0[0] = (uint)uVar33;
    bVar20 = false;
    lVar30 = *(long *)(param_5 + 0x38);
    uVar38 = 0xffffffff;
  }
  else {
    uVar93 = NEON_fmov(0x3f800000,4);
    fVar53 = fVar65 * fVar76 + fVar69 * fVar77 + fVar72 * fVar78;
    uVar38 = (ulong)*piVar44;
    fVar64 = 3.40282e+38;
    lVar43 = uVar38 * 0x14;
    uVar35 = 0xffffffff;
    while( true ) {
      uVar36 = (uint)uVar38;
      if ((long)uVar38 < (long)*(int *)(lVar30 + 0x30)) {
        uVar48 = uVar36;
        if (*(int *)(lVar30 + 0x78) != 0) {
          uVar48 = *(uint *)(*(long *)(lVar30 + 0x70) + uVar38 * 4);
        }
        if (uVar48 == 0xffffffff) {
          lVar30 = *(long *)(lVar30 + 0x28) + uVar38 * 0x14;
        }
        else {
          lVar30 = *(long *)(lVar30 + 0xc0) + (long)(int)uVar48 * 0x14;
        }
      }
      else {
        lVar30 = *(long *)(lVar30 + 0xe0) + (long)*(int *)(lVar30 + 0x30) * -0x14 + lVar43;
      }
      uVar48 = uVar35;
      if (((*(int *)(lVar30 + 8) != -1) && ((*(byte *)(lVar30 + 0x10) >> 5 & 1) == 0)) &&
         (uVar23 = FUN_0306564c(param_6,uVar38 & 0xffffffff | uVar33 & 0xffc00000,6),
         (uVar23 & 1) != 0)) {
        lVar30 = *(long *)(lVar32 + 0x20);
        if ((long)uVar38 < (long)*(int *)(lVar30 + 0x30)) {
          uVar48 = uVar36;
          if (*(int *)(lVar30 + 0x78) != 0) {
            uVar48 = *(uint *)(*(long *)(lVar30 + 0x70) + uVar38 * 4);
          }
          if (uVar48 == 0xffffffff) {
            piVar34 = (int *)(*(long *)(lVar30 + 0x28) + uVar38 * 0x14);
          }
          else {
            piVar34 = (int *)(*(long *)(lVar30 + 0xc0) + (long)(int)uVar48 * 0x14);
          }
        }
        else {
          piVar34 = (int *)(*(long *)(lVar30 + 0xe0) + (long)*(int *)(lVar30 + 0x30) * -0x14 +
                           lVar43);
        }
        iVar10 = *(int *)(lVar30 + 0x40);
        iVar45 = *piVar34;
        iVar29 = piVar34[1];
        lVar39 = 0x38;
        if (iVar10 <= iVar45) {
          lVar39 = 0xf0;
        }
        iVar9 = 0;
        if (iVar10 <= iVar45) {
          iVar9 = iVar10;
        }
        fVar74 = (float)*(undefined8 *)(lVar32 + 0x68);
        fVar68 = (float)*(undefined8 *)(lVar32 + 0x60);
        fVar71 = (float)((ulong)*(undefined8 *)(lVar32 + 0x60) >> 0x20);
        pfVar12 = (float *)(*(long *)(lVar30 + lVar39) + (long)(iVar45 - iVar9) * 0x10);
        fVar57 = *pfVar12;
        fVar66 = pfVar12[1];
        fVar67 = pfVar12[2];
        lVar39 = 0x38;
        if (iVar10 <= iVar29) {
          lVar39 = 0xf0;
        }
        fVar75 = (float)*(undefined8 *)(lVar32 + 0x70);
        fVar89 = (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20);
        fVar90 = (float)*(undefined8 *)(lVar32 + 0x78);
        iVar45 = 0;
        if (iVar10 <= iVar29) {
          iVar45 = iVar10;
        }
        fVar63 = (float)*(undefined8 *)(lVar32 + 0x98);
        fVar58 = (float)*(undefined8 *)(lVar32 + 0x90);
        fVar61 = (float)((ulong)*(undefined8 *)(lVar32 + 0x90) >> 0x20);
        puVar31 = (undefined8 *)(*(long *)(lVar30 + lVar39) + (long)(iVar29 - iVar45) * 0x10);
        fVar62 = (float)puVar31[1];
        uVar14 = *puVar31;
        fVar88 = (float)uVar14;
        fVar60 = (float)((ulong)uVar14 >> 0x20);
        fVar54 = fVar58 + *(float *)(lVar32 + 0x80) * fVar67 + fVar68 * fVar57 + fVar75 * fVar66;
        fVar56 = fVar61 + *(float *)(lVar32 + 0x84) * fVar67 + fVar71 * fVar57 + fVar89 * fVar66;
        fVar57 = fVar63 + *(float *)(lVar32 + 0x88) * fVar67 + fVar74 * fVar57 + fVar90 * fVar66;
        fVar66 = fVar76 * fVar54;
        fVar70 = fVar77 * fVar56;
        fVar73 = fVar78 * fVar57;
        fVar67 = fVar66 + fVar70 + fVar73;
        fVar58 = fVar58 + *(float *)(lVar32 + 0x80) * fVar62 + fVar68 * fVar88 + fVar75 * fVar60;
        fVar61 = fVar61 + *(float *)(lVar32 + 0x84) * fVar62 + fVar71 * fVar88 + fVar89 * fVar60;
        fVar63 = fVar63 + *(float *)(lVar32 + 0x88) * fVar62 + fVar74 * fVar88 + fVar90 * fVar60;
        fVar54 = fVar54 - fVar76 * fVar67;
        fVar56 = fVar56 - fVar77 * (fVar66 + fVar70 + fVar73);
        fVar57 = fVar57 - fVar78 * fVar67;
        fVar67 = fVar76 * fVar58;
        fVar71 = fVar77 * fVar61;
        fVar74 = fVar78 * fVar63;
        fVar68 = fVar67 + fVar71 + fVar74;
        fVar66 = fVar54 - (fVar58 - fVar76 * fVar68);
        fVar67 = fVar56 - (fVar61 - fVar77 * (fVar67 + fVar71 + fVar74));
        fVar68 = fVar57 - (fVar63 - fVar78 * fVar68);
        fVar54 = fVar54 - (fVar65 - fVar76 * fVar53);
        fVar56 = fVar56 - (fVar69 - fVar77 * (fVar65 * fVar76 + fVar69 * fVar77 + fVar72 * fVar78));
        fVar57 = fVar57 - (fVar72 - fVar78 * fVar53);
        fVar71 = fVar54 * fVar66;
        fVar74 = fVar56 * fVar67;
        fVar75 = fVar57 * fVar68;
        uVar14 = NEON_fminnm(CONCAT44((fVar71 + fVar74 + fVar75) /
                                      (fVar66 * fVar66 + fVar67 * fVar67 + fVar68 * fVar68),
                                      (fVar71 + fVar74 + fVar75) /
                                      (fVar66 * fVar66 + fVar67 * fVar67 + fVar68 * fVar68)),uVar93,
                             4);
        uVar14 = NEON_fmax(uVar14,0,4);
        fVar54 = fVar54 - (float)uVar14 * fVar66;
        fVar56 = fVar56 - (float)((ulong)uVar14 >> 0x20) * fVar67;
        fVar57 = fVar57 - (float)uVar14 * fVar68;
        fVar57 = fVar54 * fVar54 + fVar56 * fVar56 + fVar57 * fVar57;
        bVar20 = fVar57 < fVar64;
        fVar64 = (float)((uint)fVar64 ^ ((uint)fVar64 ^ (uint)fVar57) & -(uint)bVar20);
        uVar48 = uVar36;
        if (!bVar20) {
          uVar48 = uVar35;
        }
      }
      uVar38 = uVar38 + 1;
      if ((long)*piVar44 + (long)(short)piVar44[2] <= (long)uVar38) break;
      lVar30 = *(long *)(lVar32 + 0x20);
      lVar43 = lVar43 + 0x14;
      uVar35 = uVar48;
    }
    if ((uVar48 == 0xffffffff) || (fVar92 <= fVar64)) goto LAB_0305a018;
    uVar33 = (ulong)local_a8[0];
    uVar38 = uVar33 & 0xffc00000 | (ulong)uVar48;
    if ((int)uVar38 == -1) goto LAB_0305a01c;
    lVar30 = *(long *)(param_5 + 0x38);
    lVar32 = *(long *)(*(long *)(lVar30 + ((uVar33 & 0xffc00000 | (ulong)uVar48 & 0xffc00000) >> 0xe
                                          )) + 0x20);
    uVar48 = uVar48 & 0x3fffff;
    uVar35 = uVar48 - *(int *)(lVar32 + 0x30);
    if ((int)uVar48 < *(int *)(lVar32 + 0x30)) {
      if (*(int *)(lVar32 + 0x78) == 0) {
        uVar35 = uVar48;
LAB_0305a670:
        lVar43 = *(long *)(lVar32 + 0xc0);
        goto LAB_0305a674;
      }
      uVar35 = *(uint *)(*(long *)(lVar32 + 0x70) + (ulong)uVar48 * 4);
      if (uVar35 != 0xffffffff) goto LAB_0305a670;
      lVar43 = *(long *)(lVar32 + 0x28) + (ulong)uVar48 * 0x14;
    }
    else {
      lVar43 = *(long *)(lVar32 + 0xe0);
LAB_0305a674:
      lVar43 = lVar43 + (long)(int)uVar35 * 0x14;
    }
    local_b0[0] = *(uint *)(lVar43 + 0xc);
    uVar35 = 0xffffffff;
    if (local_b0[0] != 0xffffffff) {
      uVar35 = local_b0[0] & 0x3fffff | *(int *)(lVar32 + 0x17c) << 0x16;
    }
    if ((*(byte *)(lVar43 + 0x10) & 0x40) == 0) {
      local_b0[0] = uVar35;
    }
    uVar33 = (ulong)local_b0[0];
    bVar20 = true;
  }
  lVar32 = (uVar33 >> 0x16) * 0x100;
  uVar48 = (uint)uVar33;
  uVar35 = uVar48 & 0x3fffff;
  lVar30 = *(long *)(*(long *)(lVar30 + lVar32) + 0x20);
  uVar36 = uVar35 - *(int *)(lVar30 + 0x20);
  if ((int)uVar35 < *(int *)(lVar30 + 0x20)) {
    if (*(int *)(lVar30 + 0x98) == 0) {
      uVar36 = uVar35;
LAB_0305a080:
      lVar30 = *(long *)(lVar30 + 0xb0);
      goto LAB_0305a084;
    }
    uVar36 = *(uint *)(*(long *)(lVar30 + 0x90) + (ulong)uVar35 * 4);
    if (uVar36 != 0xffffffff) goto LAB_0305a080;
    lVar30 = *(long *)(lVar30 + 0x18) + (ulong)uVar35 * 0x10;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0xd0);
LAB_0305a084:
    lVar30 = lVar30 + (long)(int)uVar36 * 0x10;
  }
  if (*(short *)(lVar30 + 10) < 1) {
    return 2;
  }
  fVar53 = auVar13._0_4_;
  fVar89 = (float)uVar96;
  fVar90 = (float)((ulong)uVar96 >> 0x20);
  fVar54 = (float)uVar97;
  fVar56 = (float)((ulong)uVar97 >> 0x20);
  iVar45 = 0;
  fVar64 = auVar13._4_4_;
  fVar88 = (float)uVar99;
  fVar58 = (float)((ulong)uVar99 >> 0x20);
  fVar60 = (float)uVar102;
  fVar61 = (float)((ulong)uVar102 >> 0x20);
  fVar66 = (float)uVar91;
  fVar67 = (float)((ulong)uVar91 >> 0x20);
  fVar68 = (float)uVar94;
  fVar71 = (float)((ulong)uVar94 >> 0x20);
  fVar74 = (float)uVar95;
  fVar75 = (float)((ulong)uVar95 >> 0x20);
  fVar57 = auVar13._8_4_;
  auVar55._0_4_ = fVar68 * fVar57 + fVar89 * fVar53 + fVar88 * fVar64;
  auVar55._4_4_ = fVar71 * fVar57 + fVar90 * fVar53 + fVar58 * fVar64;
  auVar55._8_4_ = fVar74 * fVar57 + fVar54 * fVar53 + fVar60 * fVar64;
  auVar55._12_4_ = fVar75 * fVar57 + fVar56 * fVar53 + fVar61 * fVar64;
  auVar13._4_4_ = fVar71 * fVar59 + fVar90 * fVar66 + fVar58 * fVar67;
  auVar13._0_4_ = fVar68 * fVar59 + fVar89 * fVar66 + fVar88 * fVar67;
  auVar13._8_4_ = fVar74 * fVar59 + fVar54 * fVar66 + fVar60 * fVar67;
  auVar13._12_4_ = fVar75 * fVar59 + fVar56 * fVar66 + fVar61 * fVar67;
  auVar87._4_4_ = iVar47;
  auVar87._0_4_ = iVar47;
  auVar87._8_4_ = iVar47;
  auVar87._12_4_ = iVar47;
  auVar55 = auVar55 ^ (auVar55 ^ auVar13) & ~auVar87;
  do {
    uVar35 = *(int *)(lVar30 + 4) + iVar45;
    uVar36 = uVar35 | uVar48 & 0xffc00000;
    uVar37 = 0xffffffff;
    if (uVar36 != (uint)uVar22) {
      uVar23 = FUN_03065528(param_6,uVar36,6);
      uVar37 = 0xffffffff;
      if ((uVar23 & 1) != 0) {
        uVar35 = uVar35 & 0x3fffff;
        uVar23 = (ulong)uVar35;
        lVar43 = 0;
        lVar50 = *(long *)(*(long *)(param_5 + 0x38) + ((ulong)(uVar36 >> 0xe) & 0x3ff00));
        lVar39 = *(long *)(lVar50 + 0x20);
        auVar13 = *(undefined1 (*) [16])(lVar50 + 0x60);
        fVar64 = (float)*(undefined8 *)(lVar50 + 0x78);
        fVar57 = (float)((ulong)*(undefined8 *)(lVar50 + 0x78) >> 0x20);
        fVar59 = (float)*(undefined8 *)(lVar50 + 0x70);
        fVar53 = (float)((ulong)*(undefined8 *)(lVar50 + 0x70) >> 0x20);
        fVar68 = (float)*(undefined8 *)(lVar50 + 0x88);
        fVar71 = (float)((ulong)*(undefined8 *)(lVar50 + 0x88) >> 0x20);
        fVar66 = (float)*(undefined8 *)(lVar50 + 0x80);
        fVar67 = (float)((ulong)*(undefined8 *)(lVar50 + 0x80) >> 0x20);
        iVar47 = *(int *)(lVar39 + 0x30);
        iVar29 = *(int *)(lVar39 + 0x40);
        piVar44 = (int *)(*(long *)(lVar39 + 0x28) + uVar23 * 0x14);
        do {
          if ((int)uVar35 < iVar47) {
            uVar37 = uVar35;
            if (*(int *)(lVar39 + 0x78) != 0) {
              uVar37 = *(uint *)(*(long *)(lVar39 + 0x70) + uVar23 * 4);
              piVar34 = piVar44;
              if (uVar37 == 0xffffffff) goto LAB_0305a1dc;
            }
            piVar34 = (int *)(*(long *)(lVar39 + 0xc0) + (long)(int)uVar37 * 0x14);
          }
          else {
            piVar34 = (int *)(*(long *)(lVar39 + 0xe0) + (long)(int)(uVar35 - iVar47) * 0x14);
          }
LAB_0305a1dc:
          iVar10 = *piVar34;
          iVar9 = piVar34[1];
          plVar8 = (long *)(lVar39 + 0x38);
          if (iVar29 <= iVar10) {
            plVar8 = (long *)(lVar39 + 0xf0);
          }
          iVar11 = 0;
          if (iVar29 <= iVar10) {
            iVar11 = iVar29;
          }
          pfVar12 = (float *)(*plVar8 + (long)(iVar10 - iVar11) * 0x10);
          fVar74 = *pfVar12;
          fVar75 = pfVar12[1];
          fVar89 = pfVar12[2];
          plVar8 = (long *)(lVar39 + 0x38);
          if (iVar29 <= iVar9) {
            plVar8 = (long *)(lVar39 + 0xf0);
          }
          iVar10 = 0;
          if (iVar29 <= iVar9) {
            iVar10 = iVar29;
          }
          puVar31 = (undefined8 *)(*plVar8 + (long)(iVar9 - iVar10) * 0x10);
          fVar56 = (float)puVar31[1];
          uVar93 = *puVar31;
          fVar90 = (float)uVar93;
          fVar54 = (float)((ulong)uVar93 >> 0x20);
          auVar86._0_4_ = fVar66 * fVar89 + auVar13._0_4_ * fVar74 + fVar59 * fVar75;
          auVar86._4_4_ = fVar67 * fVar89 + auVar13._4_4_ * fVar74 + fVar53 * fVar75;
          auVar86._8_4_ = fVar68 * fVar89 + auVar13._8_4_ * fVar74 + fVar64 * fVar75;
          auVar86._12_4_ = fVar71 * fVar89 + auVar13._12_4_ * fVar74 + fVar57 * fVar75;
          auVar80[0] = -((&DAT_03d71304)[lVar43] == '\0');
          fVar74 = fVar66 * fVar56 + auVar13._0_4_ * fVar90 + fVar59 * fVar54;
          fVar75 = fVar67 * fVar56 + auVar13._4_4_ * fVar90 + fVar53 * fVar54;
          fVar89 = fVar68 * fVar56 + auVar13._8_4_ * fVar90 + fVar64 * fVar54;
          fVar90 = fVar71 * fVar56 + auVar13._12_4_ * fVar90 + fVar57 * fVar54;
          auVar80[1] = auVar80[0];
          auVar80[2] = auVar80[0];
          auVar80[3] = auVar80[0];
          auVar80[4] = auVar80[0];
          auVar80[5] = auVar80[0];
          auVar80[6] = auVar80[0];
          auVar80[7] = auVar80[0];
          auVar80[8] = auVar80[0];
          auVar80[9] = auVar80[0];
          auVar80[10] = auVar80[0];
          auVar80[0xb] = auVar80[0];
          auVar80[0xc] = auVar80[0];
          auVar80[0xd] = auVar80[0];
          auVar80[0xe] = auVar80[0];
          auVar80[0xf] = auVar80[0];
          auVar15._4_4_ = fVar75;
          auVar15._0_4_ = fVar74;
          auVar15._8_4_ = fVar89;
          auVar15._12_4_ = fVar90;
          auVar81._4_4_ = fVar75;
          auVar81._0_4_ = fVar74;
          auVar81._8_4_ = fVar89;
          auVar81._12_4_ = fVar90;
          auVar81 = auVar81 ^ (auVar15 ^ auVar86) & auVar80;
          fVar74 = ((float)*(undefined8 *)(lVar50 + 0x90) + auVar81._0_4_) - fVar65;
          fVar75 = ((float)((ulong)*(undefined8 *)(lVar50 + 0x90) >> 0x20) + auVar81._4_4_) - fVar69
          ;
          fVar89 = ((float)*(undefined8 *)(lVar50 + 0x98) + auVar81._8_4_) - fVar72;
          fVar90 = fVar76 * fVar74;
          fVar56 = fVar77 * fVar75;
          fVar88 = fVar78 * fVar89;
          fVar54 = fVar90 + fVar56 + fVar88;
          fVar88 = fVar90 + fVar56 + fVar88;
          fVar74 = fVar74 - fVar76 * fVar54;
          fVar75 = fVar75 - fVar77 * fVar88;
          fVar89 = fVar89 - fVar78 * fVar54;
          fVar90 = (((float)((ulong)*(undefined8 *)(lVar50 + 0x98) >> 0x20) + auVar81._12_4_) - 0.0)
                   - fVar79 * fVar88;
          auVar82._0_4_ = fVar74 * fVar74;
          auVar82._4_4_ = fVar75 * fVar75;
          auVar82._8_4_ = fVar89 * fVar89;
          auVar82._12_4_ = fVar90 * fVar90;
          auVar87 = NEON_ext(auVar82,auVar82,8,1);
          if (auVar82._0_4_ + auVar82._4_4_ + auVar87._0_4_ <= fVar92) {
            if ((int)uVar35 < iVar47) {
              uVar37 = uVar35;
              if (*(int *)(lVar39 + 0x78) != 0) {
                uVar37 = *(uint *)(*(long *)(lVar39 + 0x70) + uVar23 * 4);
                piVar34 = piVar44;
                if (uVar37 == 0xffffffff) goto LAB_0305a2c8;
              }
              piVar34 = (int *)(*(long *)(lVar39 + 0xc0) + (long)(int)uVar37 * 0x14);
            }
            else {
              piVar34 = (int *)(*(long *)(lVar39 + 0xe0) + (long)(int)(uVar35 - iVar47) * 0x14);
            }
LAB_0305a2c8:
            uVar37 = piVar34[2];
            if ((*(byte *)(piVar34 + 4) >> 6 & 1) == 0) {
              if (uVar37 == 0xffffffff) goto LAB_0305a400;
              uVar37 = uVar37 & 0x3fffff | *(int *)(lVar39 + 0x17c) << 0x16;
            }
            if (uVar37 != 0xffffffff) {
              uVar41 = uVar37 & 0x3fffff;
              lVar24 = *(long *)(*(long *)(param_5 + 0x38) + (ulong)(uVar37 >> 0x16) * 0x100);
              lVar26 = *(long *)(lVar24 + 0x20);
              uVar37 = uVar41 - *(int *)(lVar26 + 0x30);
              if ((int)uVar41 < *(int *)(lVar26 + 0x30)) {
                if (*(int *)(lVar26 + 0x78) == 0) {
                  uVar37 = uVar41;
LAB_0305a33c:
                  lVar28 = *(long *)(lVar26 + 0xc0);
                  goto LAB_0305a340;
                }
                uVar37 = *(uint *)(*(long *)(lVar26 + 0x70) + (ulong)uVar41 * 4);
                if (uVar37 != 0xffffffff) goto LAB_0305a33c;
                piVar34 = (int *)(*(long *)(lVar26 + 0x28) + (ulong)uVar41 * 0x14);
              }
              else {
                lVar28 = *(long *)(lVar26 + 0xe0);
LAB_0305a340:
                piVar34 = (int *)(lVar28 + (long)(int)uVar37 * 0x14);
              }
              iVar11 = *(int *)(lVar26 + 0x40);
              iVar10 = *piVar34;
              iVar9 = piVar34[1];
              lVar28 = 0x38;
              if (iVar11 <= iVar10) {
                lVar28 = 0xf0;
              }
              iVar6 = 0;
              if (iVar11 <= iVar10) {
                iVar6 = iVar11;
              }
              pfVar12 = (float *)(*(long *)(lVar26 + lVar28) + (long)(iVar10 - iVar6) * 0x10);
              fVar74 = *pfVar12;
              fVar75 = pfVar12[1];
              fVar89 = pfVar12[2];
              fVar90 = (float)*(undefined8 *)(lVar24 + 0x60);
              fVar54 = (float)((ulong)*(undefined8 *)(lVar24 + 0x60) >> 0x20);
              fVar56 = (float)*(undefined8 *)(lVar24 + 0x68);
              fVar88 = (float)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 0x20);
              lVar28 = 0x38;
              if (iVar11 <= iVar9) {
                lVar28 = 0xf0;
              }
              fVar58 = (float)*(undefined8 *)(lVar24 + 0x70);
              fVar60 = (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20);
              fVar61 = (float)*(undefined8 *)(lVar24 + 0x78);
              fVar62 = (float)((ulong)*(undefined8 *)(lVar24 + 0x78) >> 0x20);
              iVar10 = 0;
              if (iVar11 <= iVar9) {
                iVar10 = iVar11;
              }
              puVar31 = (undefined8 *)(*(long *)(lVar26 + lVar28) + (long)(iVar9 - iVar10) * 0x10);
              fVar73 = (float)puVar31[1];
              uVar93 = *puVar31;
              fVar63 = (float)uVar93;
              fVar70 = (float)((ulong)uVar93 >> 0x20);
              fVar98 = (float)*(undefined8 *)(lVar24 + 0x80);
              fVar100 = (float)((ulong)*(undefined8 *)(lVar24 + 0x80) >> 0x20);
              fVar101 = (float)*(undefined8 *)(lVar24 + 0x88);
              fVar103 = (float)((ulong)*(undefined8 *)(lVar24 + 0x88) >> 0x20);
              auVar84._0_4_ = fVar98 * fVar89 + fVar90 * fVar74 + fVar58 * fVar75;
              auVar84._4_4_ = fVar100 * fVar89 + fVar54 * fVar74 + fVar60 * fVar75;
              auVar84._8_4_ = fVar101 * fVar89 + fVar56 * fVar74 + fVar61 * fVar75;
              auVar84._12_4_ = fVar103 * fVar89 + fVar88 * fVar74 + fVar62 * fVar75;
              auVar83[0] = -((&DAT_03d71304)[lVar43] == '\0');
              auVar83[1] = auVar83[0];
              auVar83[2] = auVar83[0];
              auVar83[3] = auVar83[0];
              auVar83[4] = auVar83[0];
              auVar83[5] = auVar83[0];
              auVar83[6] = auVar83[0];
              auVar83[7] = auVar83[0];
              auVar83[8] = auVar83[0];
              auVar83[9] = auVar83[0];
              auVar83[10] = auVar83[0];
              auVar83[0xb] = auVar83[0];
              auVar83[0xc] = auVar83[0];
              auVar83[0xd] = auVar83[0];
              auVar83[0xe] = auVar83[0];
              auVar83[0xf] = auVar83[0];
              auVar16._4_4_ = fVar100 * fVar73 + fVar54 * fVar63 + fVar60 * fVar70;
              auVar16._0_4_ = fVar98 * fVar73 + fVar90 * fVar63 + fVar58 * fVar70;
              auVar16._8_4_ = fVar101 * fVar73 + fVar56 * fVar63 + fVar61 * fVar70;
              auVar16._12_4_ = fVar103 * fVar73 + fVar88 * fVar63 + fVar62 * fVar70;
              auVar84 = auVar84 ^ (auVar84 ^ auVar16) & auVar83;
              fVar74 = ((float)*(undefined8 *)(lVar24 + 0x90) + auVar84._0_4_) -
                       ((float)uVar17 + auVar55._0_4_);
              fVar75 = ((float)((ulong)*(undefined8 *)(lVar24 + 0x90) >> 0x20) + auVar84._4_4_) -
                       ((float)((ulong)uVar17 >> 0x20) + auVar55._4_4_);
              fVar89 = ((float)*(undefined8 *)(lVar24 + 0x98) + auVar84._8_4_) -
                       ((float)uVar18 + auVar55._8_4_);
              fVar90 = fVar76 * fVar74;
              fVar56 = fVar77 * fVar75;
              fVar88 = fVar78 * fVar89;
              fVar54 = fVar90 + fVar56 + fVar88;
              fVar88 = fVar90 + fVar56 + fVar88;
              fVar74 = fVar74 - fVar76 * fVar54;
              fVar75 = fVar75 - fVar77 * fVar88;
              fVar89 = fVar89 - fVar78 * fVar54;
              fVar90 = (((float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20) + auVar84._12_4_) -
                       0.0) - fVar79 * fVar88;
              auVar85._0_4_ = fVar74 * fVar74;
              auVar85._4_4_ = fVar75 * fVar75;
              auVar85._8_4_ = fVar89 * fVar89;
              auVar85._12_4_ = fVar90 * fVar90;
              auVar87 = NEON_ext(auVar85,auVar85,8,1);
              if (auVar85._0_4_ + auVar85._4_4_ + auVar87._0_4_ < fVar92) {
                uVar37 = uVar36;
                goto LAB_0305a418;
              }
            }
          }
LAB_0305a400:
          lVar43 = lVar43 + 1;
        } while (lVar43 != 2);
        uVar37 = 0xffffffff;
      }
    }
LAB_0305a418:
    iVar45 = iVar45 + 1;
    if (*(short *)(lVar30 + 10) <= iVar45) {
      if (uVar37 == 0xffffffff) {
        return 2;
      }
      break;
    }
  } while (uVar37 == 0xffffffff);
  lVar30 = *(long *)(param_5 + 0x38);
  lVar25 = *(long *)(*(long *)(lVar30 + lVar25) + 0x20);
  if ((int)uVar40 < *(int *)(lVar25 + 0x30)) {
    if ((*(int *)(lVar25 + 0x78) == 0) ||
       (uVar40 = *(uint *)(*(long *)(lVar25 + 0x70) + uVar51 * 4), uVar40 != 0xffffffff)) {
      lVar43 = *(long *)(lVar25 + 0xc0) + (long)(int)uVar40 * 0x14;
    }
    else {
      lVar43 = *(long *)(lVar25 + 0x28) + uVar51 * 0x14;
    }
  }
  else {
    lVar43 = *(long *)(lVar25 + 0xe0) + (long)(int)(uVar40 - *(int *)(lVar25 + 0x30)) * 0x14;
  }
  uVar35 = *(uint *)(lVar43 + 0xc);
  uVar40 = 0xffffffff;
  if (uVar35 != 0xffffffff) {
    uVar40 = uVar35 & 0x3fffff | *(int *)(lVar25 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar43 + 0x10) & 0x40) == 0) {
    uVar35 = uVar40;
  }
  uVar40 = uVar37 & 0x3fffff;
  lVar25 = *(long *)(*(long *)(lVar30 + ((ulong)(uVar37 >> 0xe) & 0x3ff00)) + 0x20);
  uVar36 = uVar40 - *(int *)(lVar25 + 0x30);
  if ((int)uVar40 < *(int *)(lVar25 + 0x30)) {
    if (*(int *)(lVar25 + 0x78) == 0) {
      uVar36 = uVar40;
LAB_0305a544:
      lVar43 = *(long *)(lVar25 + 0xc0);
      goto LAB_0305a548;
    }
    uVar36 = *(uint *)(*(long *)(lVar25 + 0x70) + (ulong)uVar40 * 4);
    if (uVar36 != 0xffffffff) goto LAB_0305a544;
    lVar43 = *(long *)(lVar25 + 0x28) + (ulong)uVar40 * 0x14;
  }
  else {
    lVar43 = *(long *)(lVar25 + 0xe0);
LAB_0305a548:
    lVar43 = lVar43 + (long)(int)uVar36 * 0x14;
  }
  uVar36 = *(uint *)(lVar43 + 0xc);
  uVar40 = 0xffffffff;
  if (uVar36 != 0xffffffff) {
    uVar40 = uVar36 & 0x3fffff | *(int *)(lVar25 + 0x17c) << 0x16;
  }
  if ((*(byte *)(lVar43 + 0x10) & 0x40) == 0) {
    uVar36 = uVar40;
  }
  if (uVar35 == 0xffffffff) {
    return 2;
  }
  uVar40 = param_2;
  if (0 < (int)param_2 && !(bool)(bVar20 ^ 1)) {
    lVar25 = (long)(int)param_2 + -1;
    lVar43 = *plVar52;
    uVar41 = *(uint *)(lVar43 + lVar25 * 0x90 + 0x70);
    uVar22 = (ulong)uVar41 & 0x3fffff;
    lVar39 = *(long *)(*(long *)(lVar30 + ((ulong)(uVar41 >> 0xe) & 0x3ff00)) + 0x20);
    uVar40 = *(uint *)(*(long *)(lVar39 + 0x168) + uVar22 * 4);
    if ((int)uVar40 < 0) {
      if ((*(int *)(lVar39 + 0x108) == 0) ||
         ((*(byte *)(*(long *)(lVar39 + 0x100) + uVar22) & 1) == 0)) {
        if (*(short *)(lVar43 + lVar25 * 0x90 + 0x74) != -1) {
          uVar41 = 0xffffffff;
        }
      }
      else {
        uVar41 = 0xffffffff;
      }
    }
    else {
      iVar47 = *(int *)(lVar39 + 0x170);
      lVar24 = (long)iVar47;
      lVar50 = (ulong)uVar40 + 1;
      if (iVar47 <= (int)(uVar40 + 1)) {
        iVar47 = uVar40 + 1;
      }
      do {
        if (lVar24 <= lVar50) goto LAB_0305a604;
        lVar26 = lVar50 * 4;
        lVar50 = lVar50 + 1;
      } while (*(int *)(*(long *)(lVar39 + 0x168) + lVar26) == (int)uVar22);
      iVar47 = (int)lVar50 + -1;
LAB_0305a604:
      iVar45 = (int)*(short *)(lVar43 + lVar25 * 0x90 + 0x74);
      if ((iVar45 == -1) || (uVar40 = uVar40 + iVar45, iVar47 <= (int)uVar40)) {
        uVar41 = 0xffffffff;
      }
      else {
        uVar41 = uVar40 | uVar41 & 0xffc00000;
      }
    }
    bVar20 = uVar48 != uVar41;
    uVar40 = (uint)lVar25;
    if (bVar20) {
      uVar40 = param_2;
    }
  }
  iVar47 = param_2 + 1;
  if (uVar35 == uVar36) {
    iVar45 = 0;
    uVar48 = 0xffffffff;
    goto LAB_0305a8e0;
  }
  lVar25 = (long)(int)param_2 + 2;
  if ((int)lVar25 < *(int *)(param_1 + 0x20)) {
    lVar43 = *plVar52;
    uVar41 = *(uint *)(lVar43 + lVar25 * 0x90 + 0x70);
    lVar39 = *(long *)(*(long *)(lVar30 + ((ulong)(uVar41 >> 0xe) & 0x3ff00)) + 0x20);
    uVar22 = (ulong)uVar41 & 0x3fffff;
    uVar48 = *(uint *)(*(long *)(lVar39 + 0x168) + uVar22 * 4);
    if ((int)uVar48 < 0) {
      if ((*(int *)(lVar39 + 0x108) != 0) &&
         ((*(byte *)(*(long *)(lVar39 + 0x100) + uVar22) & 1) != 0)) goto LAB_0305a7ac;
      if (*(short *)(lVar43 + lVar25 * 0x90 + 0x74) != -1) {
        uVar41 = 0xffffffff;
      }
    }
    else {
      iVar45 = *(int *)(lVar39 + 0x170);
      lVar50 = (long)iVar45;
      if (iVar45 <= (int)(uVar48 + 1)) {
        iVar45 = uVar48 + 1;
      }
      lVar24 = (ulong)uVar48 + 1;
      do {
        if (lVar50 <= lVar24) goto LAB_0305a754;
        lVar26 = lVar24 * 4;
        lVar24 = lVar24 + 1;
      } while (*(int *)(*(long *)(lVar39 + 0x168) + lVar26) == (int)uVar22);
      iVar45 = (int)lVar24 + -1;
LAB_0305a754:
      iVar29 = (int)*(short *)(lVar43 + lVar25 * 0x90 + 0x74);
      if ((iVar29 == -1) || (uVar48 = uVar48 + iVar29, iVar45 <= (int)uVar48)) {
LAB_0305a7ac:
        uVar41 = 0xffffffff;
      }
      else {
        uVar41 = uVar48 | uVar41 & 0xffc00000;
      }
    }
    if (uVar36 == uVar41) {
      iVar45 = 0;
      uVar48 = 0xffffffff;
      iVar47 = (int)lVar25;
LAB_0305a8e0:
      iVar29 = 1;
      if (bVar20) {
        iVar29 = 2;
      }
      iVar29 = iVar29 + iVar45;
      iVar47 = iVar47 - uVar40;
      iVar10 = iVar29 - iVar47;
      local_b8[0] = uVar36;
      if (iVar29 < iVar47) {
        iVar10 = iVar47 - iVar29;
        iVar9 = *(int *)(param_1 + 0x20) - iVar10;
        uVar35 = (*(int *)(param_1 + 0x20) - uVar40) - iVar10;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar9) {
          FUN_0305c2f8(plVar52,(long)iVar9);
        }
        lVar25 = (long)(int)uVar40;
        if (0 < (int)uVar35) {
          lVar30 = *plVar52;
          if (iVar10 < 1) {
            if (iVar10 != 0) {
              lVar30 = lVar30 + (long)(int)uVar40 * 0x90;
              FUN_031d0240(lVar30,lVar30 + (long)iVar10 * 0x90,(ulong)uVar35 * 0x90);
            }
          }
          else {
            uVar51 = (ulong)uVar35 * 0x90 - 1;
            uVar22 = (uVar51 >> 3) + 1;
            if (uVar51 < 0x18) {
              uVar51 = 0;
            }
            else {
              uVar51 = 0;
              puVar31 = (undefined8 *)(lVar30 + lVar25 * 0x90 + 0x18);
              do {
                puVar1 = puVar31 + (long)iVar29 * -0x12 + (long)iVar47 * 0x12;
                puVar31[-3] = puVar1[-3];
                puVar31[-2] = puVar1[-2];
                puVar31[-1] = puVar1[-1];
                uVar51 = uVar51 + 4;
                *puVar31 = *puVar1;
                puVar31 = puVar31 + 4;
              } while ((uVar22 & 0x3ffffffffffffffc) != uVar51);
            }
            if (((uint)uVar22 >> 1 & 1) != 0) {
              lVar43 = (uVar22 >> 1 & 1) * -2;
              puVar31 = (undefined8 *)(lVar30 + lVar25 * 0x90 + uVar51 * 8);
              do {
                bVar19 = lVar43 != -1;
                lVar43 = lVar43 + 1;
                *puVar31 = puVar31[(long)iVar29 * -0x12 + (long)iVar47 * 0x12];
                puVar31 = puVar31 + 1;
              } while (bVar19);
            }
          }
        }
        *(int *)(param_1 + 0x20) = iVar9;
        lVar25 = *(int *)(param_1 + 0x38) * lVar25;
        lVar30 = (long)*(int *)(param_1 + 0x38) * (long)iVar10;
        iVar29 = (int)lVar30;
        iVar47 = *(int *)(param_1 + 0x30) - iVar29;
        uVar35 = (*(int *)(param_1 + 0x30) - (int)lVar25) - iVar29;
        if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar47) {
          FUN_02e9b320((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)iVar47);
        }
        if (0 < (int)uVar35) {
          lVar39 = *(long *)(param_1 + 0x28);
          lVar43 = lVar39 + lVar25 * 4;
          if (iVar29 < 1) {
            if (iVar29 != 0) {
              FUN_031d0240(lVar43,lVar43 + lVar30 * 4,(ulong)uVar35 << 2);
            }
          }
          else {
            uVar22 = (ulong)uVar35 * 4;
            if (uVar22 < 5) {
              uVar22 = 4;
            }
            uVar51 = (uVar22 - 1 >> 2) + 1;
            uVar23 = uVar51 & 3;
            if (uVar22 - 1 < 0xc) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              puVar27 = (undefined4 *)(lVar43 + 0xc);
              do {
                puVar2 = puVar27 + lVar30;
                puVar27[-3] = puVar2[-3];
                puVar27[-2] = puVar2[-2];
                puVar27[-1] = puVar2[-1];
                uVar22 = uVar22 + 4;
                *puVar27 = *puVar2;
                puVar27 = puVar27 + 4;
              } while ((uVar51 & 0x7ffffffffffffffc) != uVar22);
            }
            if (uVar23 != 0) {
              lVar43 = -uVar23;
              puVar27 = (undefined4 *)(lVar39 + (uVar22 + lVar25) * 4);
              do {
                bVar19 = lVar43 != -1;
                lVar43 = lVar43 + 1;
                *puVar27 = puVar27[lVar30];
                puVar27 = puVar27 + 1;
              } while (bVar19);
            }
          }
        }
        *(int *)(param_1 + 0x30) = iVar47;
      }
      else if (iVar10 != 0 && iVar47 <= iVar29) {
        iVar9 = *(int *)(param_1 + 0x20) + iVar10;
        iVar11 = *(int *)(param_1 + 0x20) - uVar40;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar9) {
          FUN_0305c2f8(plVar52,(long)iVar9);
        }
        lVar30 = (long)(int)uVar40;
        lVar25 = *plVar52;
        if (iVar10 < 0) {
          if (iVar10 != 0 && iVar11 != 0) {
            uVar51 = (long)iVar11 * 0x90 - 1;
            uVar22 = (uVar51 >> 3) + 1;
            if (uVar51 < 0x18) {
              uVar51 = 0;
            }
            else {
              uVar51 = 0;
              puVar31 = (undefined8 *)(lVar25 + lVar30 * 0x90 + 0x10);
              do {
                puVar3 = puVar31 + (long)iVar47 * -0x12 + (long)iVar29 * 0x12;
                puVar3[-2] = puVar31[-2];
                puVar3[-1] = puVar31[-1];
                *puVar3 = *puVar31;
                puVar1 = puVar31 + 1;
                uVar51 = uVar51 + 4;
                puVar31 = puVar31 + 4;
                puVar3[1] = *puVar1;
              } while ((uVar22 & 0x3ffffffffffffffc) != uVar51);
            }
            if (((uint)uVar22 >> 1 & 1) != 0) {
              lVar43 = (uVar22 >> 1 & 1) * -2;
              puVar31 = (undefined8 *)(lVar25 + lVar30 * 0x90 + uVar51 * 8);
              do {
                puVar31[(long)iVar47 * -0x12 + (long)iVar29 * 0x12] = *puVar31;
                puVar31 = puVar31 + 1;
                bVar19 = lVar43 != -1;
                lVar43 = lVar43 + 1;
              } while (bVar19);
            }
          }
        }
        else if (iVar10 != 0 && iVar11 != 0) {
          lVar25 = lVar25 + (long)(int)uVar40 * 0x90;
          FUN_031d0240(lVar25 + (long)iVar10 * 0x90,lVar25,(long)iVar11 * 0x90);
        }
        *(int *)(param_1 + 0x20) = iVar9;
        lVar30 = *(int *)(param_1 + 0x38) * lVar30;
        lVar25 = (long)*(int *)(param_1 + 0x38) * (long)iVar10;
        iVar29 = (int)lVar25;
        iVar47 = *(int *)(param_1 + 0x30) + iVar29;
        uVar35 = *(int *)(param_1 + 0x30) - (int)lVar30;
        if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar47) {
          FUN_02e9b320((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)iVar47);
        }
        lVar43 = *(long *)(param_1 + 0x28);
        puVar27 = (undefined4 *)(lVar43 + lVar30 * 4);
        if (iVar29 < 0) {
          if (iVar29 != 0 && uVar35 != 0) {
            uVar22 = -(ulong)(uVar35 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar35 << 2;
            if (uVar22 < 5) {
              uVar22 = 4;
            }
            uVar51 = (uVar22 - 1 >> 2) + 1;
            uVar23 = uVar51 & 3;
            if (uVar22 - 1 < 0xc) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              do {
                puVar4 = puVar27 + lVar25;
                *puVar4 = *puVar27;
                puVar4[1] = puVar27[1];
                puVar4[2] = puVar27[2];
                puVar2 = puVar27 + 3;
                uVar22 = uVar22 + 4;
                puVar27 = puVar27 + 4;
                puVar4[3] = *puVar2;
              } while ((uVar51 & 0x7ffffffffffffffc) != uVar22);
            }
            if (uVar23 != 0) {
              puVar27 = (undefined4 *)(lVar43 + (uVar22 + lVar30) * 4);
              lVar30 = -uVar23;
              do {
                puVar27[lVar25] = *puVar27;
                puVar27 = puVar27 + 1;
                bVar19 = lVar30 != -1;
                lVar30 = lVar30 + 1;
              } while (bVar19);
            }
          }
        }
        else if (iVar29 != 0 && uVar35 != 0) {
          FUN_031d0240(puVar27 + lVar25,puVar27,
                       -(ulong)(uVar35 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar35 << 2);
        }
        *(int *)(param_1 + 0x30) = iVar47;
      }
      if (bVar20) {
        local_c0[0] = local_a8[0] >> 0x16;
        local_c4[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) +
                                                             (ulong)local_c0[0] * 0x100) + 0x20) +
                                         0x68) + 0x80) & 1;
        FUN_03058bd4(param_1,param_5,param_6,uVar38,&local_a0,local_a8,local_c0,local_c4,uVar40);
      }
      local_c0[0] = (uint)(uVar33 >> 0x16);
      local_c4[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) + lVar32) +
                                                 0x20) + 0x68) + 0x80) & 1;
      FUN_03058bd4(param_1,param_5,param_6,uVar37,&local_a0,local_b0,local_c0,local_c4,
                   bVar20 + uVar40);
      if (iVar45 != 0) {
        local_c0[0] = uVar36 >> 0x16;
        local_c4[0] = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_5 + 0x38) +
                                                             (ulong)local_c0[0] * 0x100) + 0x20) +
                                         0x68) + 0x80) & 1;
        FUN_03058bd4(param_1,param_5,param_6,uVar48,&local_a0,local_b8,local_c0,local_c4,
                     bVar20 + uVar40 + 1);
      }
      if (uVar40 != 0) {
        if (uVar40 == 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0;
          lVar25 = 0x10c;
          do {
            *(undefined2 *)(*plVar52 + lVar25 + -0x90) = 0;
            *(undefined2 *)(*plVar52 + lVar25 + -0x8e) = 0;
            *(undefined2 *)(*plVar52 + lVar25) = 0;
            uVar22 = uVar22 + 2;
            lVar30 = *plVar52 + lVar25;
            lVar25 = lVar25 + 0x120;
            *(undefined2 *)(lVar30 + 2) = 0;
          } while (((ulong)uVar40 & 0xfffffffe) != uVar22);
        }
        if ((uVar40 & 1) != 0) {
          *(undefined2 *)(*plVar52 + uVar22 * 0x90 + 0x7c) = 0;
          *(undefined2 *)(*plVar52 + uVar22 * 0x90 + 0x7e) = 0;
          return 0;
        }
      }
      return 0;
    }
  }
  uVar48 = uVar36 & 0x3fffff;
  lVar25 = *(long *)(*(long *)(lVar30 + (ulong)(uVar36 >> 0x16) * 0x100) + 0x20);
  uVar41 = uVar48 - *(int *)(lVar25 + 0x20);
  if ((int)uVar48 < *(int *)(lVar25 + 0x20)) {
    if (*(int *)(lVar25 + 0x98) == 0) {
      uVar41 = uVar48;
    }
    else {
      uVar41 = *(uint *)(*(long *)(lVar25 + 0x90) + (ulong)uVar48 * 4);
      if (uVar41 == 0xffffffff) {
        puVar46 = (uint *)(*(long *)(lVar25 + 0x18) + (ulong)uVar48 * 0x10);
        goto LAB_0305a820;
      }
    }
    lVar25 = *(long *)(lVar25 + 0xb0);
  }
  else {
    lVar25 = *(long *)(lVar25 + 0xd0);
  }
  puVar46 = (uint *)(lVar25 + (long)(int)uVar41 * 0x10);
LAB_0305a820:
  if (0 < (short)(ushort)puVar46[2]) {
    uVar41 = *puVar46;
    uVar42 = (uint)(ushort)puVar46[2];
    do {
      uVar48 = uVar41 | uVar36 & 0xffc00000;
      lVar25 = *(long *)(*(long *)(lVar30 + (ulong)(uVar48 >> 0x16) * 0x100) + 0x20);
      uVar5 = uVar41 & 0x3fffff;
      uVar49 = uVar5 - *(int *)(lVar25 + 0x30);
      if ((int)uVar5 < *(int *)(lVar25 + 0x30)) {
        if (*(int *)(lVar25 + 0x78) == 0) {
          uVar49 = uVar5;
LAB_0305a890:
          lVar43 = *(long *)(lVar25 + 0xc0);
          goto LAB_0305a894;
        }
        uVar49 = *(uint *)(*(long *)(lVar25 + 0x70) + (ulong)uVar5 * 4);
        if (uVar49 != 0xffffffff) goto LAB_0305a890;
        lVar43 = *(long *)(lVar25 + 0x28) + (ulong)uVar5 * 0x14;
      }
      else {
        lVar43 = *(long *)(lVar25 + 0xe0);
LAB_0305a894:
        lVar43 = lVar43 + (long)(int)uVar49 * 0x14;
      }
      uVar49 = *(uint *)(lVar43 + 0xc);
      uVar5 = 0xffffffff;
      if (uVar49 != 0xffffffff) {
        uVar5 = uVar49 & 0x3fffff | *(int *)(lVar25 + 0x17c) << 0x16;
      }
      if ((*(byte *)(lVar43 + 0x10) & 0x40) == 0) {
        uVar49 = uVar5;
      }
      if (uVar49 == uVar35) {
        if (uVar48 == 0xffffffff) {
          return 2;
        }
        iVar45 = 1;
        goto LAB_0305a8e0;
      }
      uVar41 = uVar41 + 1;
      uVar42 = uVar42 - 1;
    } while (uVar42 != 0);
  }
  return 2;
}


