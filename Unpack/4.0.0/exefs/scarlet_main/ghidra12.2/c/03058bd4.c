/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03058bd4; name: FUN_03058bd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03058bd4(long param_1,long param_2,undefined8 param_3,ulong param_4,
                 undefined1 (*param_5) [16],uint *param_6,uint *param_7,byte *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
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
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int *piVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [12];
  float fVar56;
  float fVar58;
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar61 [12];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar62 [16];
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar75;
  undefined1 auVar74 [16];
  undefined8 uVar76;
  uint local_d4;
  float fStack_c4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  
  lVar22 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (param_4 >> 0xe & 0x3ff00)) + 0x20);
  lVar17 = *(long *)(param_1 + 0x18);
  lVar24 = *(long *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x38);
  uVar21 = (uint)param_4 & 0x3fffff;
  uVar33 = (ulong)uVar21;
  uVar25 = uVar21 - *(int *)(lVar22 + 0x30);
  if ((int)uVar21 < *(int *)(lVar22 + 0x30)) {
    uVar25 = uVar21;
    if ((*(int *)(lVar22 + 0x78) == 0) ||
       (uVar25 = *(uint *)(*(long *)(lVar22 + 0x70) + uVar33 * 4), uVar25 != 0xffffffff)) {
      lVar22 = *(long *)(lVar22 + 0xc0);
      goto LAB_03058c58;
    }
    piVar35 = (int *)(*(long *)(lVar22 + 0x28) + uVar33 * 0x14);
  }
  else {
    lVar22 = *(long *)(lVar22 + 0xe0);
LAB_03058c58:
    piVar35 = (int *)(lVar22 + (long)(int)uVar25 * 0x14);
  }
  bVar4 = *(byte *)(piVar35 + 4);
  lVar30 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)*param_7 * 0x100);
  lVar22 = *(long *)(lVar30 + 0x20);
  local_d4 = piVar35[2];
  lVar34 = (long)param_9;
  uVar25 = *(uint *)(lVar22 + 0x17c);
  if ((bVar4 & 0x40) != 0) {
    uVar25 = local_d4 >> 0x16;
  }
  if (local_d4 == 0xffffffff) {
    uVar25 = 0xffffffff;
  }
  if ((bVar4 >> 6 & 1) == 0) {
    uVar19 = local_d4 & 0x3fffff;
    if (local_d4 == 0xffffffff) {
      uVar19 = 0xffffffff;
    }
    local_d4 = uVar19;
    if (piVar35[3] == 0xffffffff) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = piVar35[3] & 0x3fffffU | *(uint *)(lVar22 + 0x17c) << 0x16;
    }
  }
  else {
    uVar19 = piVar35[3];
  }
  iVar26 = *(int *)(lVar22 + 0x40);
  iVar28 = *piVar35;
  iVar3 = piVar35[1];
  lVar23 = 0x38;
  if (iVar26 <= iVar28) {
    lVar23 = 0xf0;
  }
  iVar2 = 0;
  if (iVar26 <= iVar28) {
    iVar2 = iVar26;
  }
  iVar1 = 0;
  if (iVar26 <= iVar3) {
    iVar1 = iVar26;
  }
  puVar36 = (undefined8 *)(*(long *)(lVar22 + lVar23) + (long)(iVar28 - iVar2) * 0x10);
  uVar76 = puVar36[1];
  uVar65 = *puVar36;
  lVar23 = 0x38;
  if (iVar26 <= iVar3) {
    lVar23 = 0xf0;
  }
  auVar42 = *(undefined1 (*) [16])(*(long *)(lVar22 + lVar23) + (long)(iVar3 - iVar1) * 0x10);
  iVar3 = *(int *)(lVar22 + 0x50);
  lVar23 = (long)iVar3;
  uVar27 = (ulong)*param_6 & 0x3fffff;
  iVar26 = (int)uVar27;
  iVar28 = iVar26 - *(int *)(lVar22 + 0x20);
  if (iVar26 < *(int *)(lVar22 + 0x20)) {
    if (*(int *)(lVar22 + 0x98) == 0) {
      iVar28 = iVar26;
LAB_03058d8c:
      lVar20 = *(long *)(lVar22 + 0x120) + (long)(iVar28 * iVar3) * 4;
      lVar18 = lVar20 + lVar23 * 4;
      lVar23 = *(long *)(lVar22 + 0xb0);
      goto LAB_03058da0;
    }
    iVar28 = *(int *)(*(long *)(lVar22 + 0x90) + uVar27 * 4);
    if (iVar28 != -1) goto LAB_03058d8c;
    lVar20 = *(long *)(lVar22 + 0x48) + (long)(iVar3 * iVar26) * 4;
    lVar18 = lVar20 + lVar23 * 4;
    lVar23 = *(long *)(lVar22 + 0x18) + uVar27 * 0x10;
  }
  else {
    lVar20 = *(long *)(lVar22 + 0x140) + (long)(iVar3 * iVar28) * 4;
    lVar18 = lVar20 + lVar23 * 4;
    lVar23 = *(long *)(lVar22 + 0xd0);
LAB_03058da0:
    lVar23 = lVar23 + (long)iVar28 * 0x10;
  }
  iVar28 = *(int *)(lVar22 + 0x60);
  uVar32 = uVar21 - *(int *)(lVar22 + 0x30);
  if ((int)uVar21 < *(int *)(lVar22 + 0x30)) {
    uVar32 = uVar21;
    if ((*(int *)(lVar22 + 0x78) == 0) ||
       (uVar32 = *(uint *)(*(long *)(lVar22 + 0x70) + uVar33 * 4), uVar32 != 0xffffffff)) {
      lVar29 = *(long *)(lVar22 + 0x130) + (long)(int)(uVar32 * iVar28) * 4;
      lVar22 = *(long *)(lVar22 + 0xc0);
      goto LAB_03058e00;
    }
    lVar29 = *(long *)(lVar22 + 0x58) + (long)(int)(iVar28 * uVar21) * 4;
    lVar22 = *(long *)(lVar22 + 0x28) + uVar33 * 0x14;
    lVar31 = lVar29 + (long)iVar28 * 4;
  }
  else {
    lVar29 = *(long *)(lVar22 + 0x150) + (long)(int)(iVar28 * uVar32) * 4;
    lVar22 = *(long *)(lVar22 + 0xe0);
LAB_03058e00:
    lVar31 = lVar29 + (long)iVar28 * 4;
    lVar22 = lVar22 + (long)(int)uVar32 * 0x14;
  }
  fStack_88 = auVar42._8_4_;
  fStack_84 = auVar42._12_4_;
  local_90 = auVar42._0_4_;
  fStack_8c = auVar42._4_4_;
  fVar38 = (float)uVar76;
  fVar37 = (float)((ulong)uVar65 >> 0x20);
  if ((bVar4 >> 4 & 1) == 0) {
    fVar43 = *(float *)(param_1 + 0x3c);
    if (*(float *)(param_1 + 0x3c) <= *(float *)(param_1 + 0x40)) {
      fVar43 = *(float *)(param_1 + 0x40);
    }
    FUN_03062384(fVar43,param_3,(ulong)*param_6,lVar23,lVar20,lVar18,param_4 & 0xffffffff,lVar22,
                 param_8,lVar29,lVar31,&local_74,&local_70);
    fVar43 = local_90 - (float)uVar65;
    fVar46 = fStack_8c - fVar37;
    fVar39 = *(float *)(param_1 + 0x44);
    fVar44 = SQRT((fStack_88 - fVar38) * (fStack_88 - fVar38) + fVar43 * fVar43 + fVar46 * fVar46);
    fVar41 = fVar39 - local_74;
    fVar46 = fVar39 - local_70;
    if (fVar39 - local_70 <= 0.0) {
      fVar46 = 0.0;
    }
    if (fVar41 <= 0.0) {
      fVar41 = 0.0;
    }
    if (fVar46 + fVar41 <= fVar44) {
      fVar43 = *(float *)(param_1 + 0x3c) - local_70;
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
      local_74 = *(float *)(param_1 + 0x40) - local_74;
      if (local_74 <= 0.0) {
        local_74 = 0.0;
      }
      if (fVar44 < fVar43 + local_74) {
        fVar43 = *(float *)(param_1 + 0x3c) - fVar39;
        fVar39 = *(float *)(param_1 + 0x40) - fVar39;
        fVar44 = (fVar44 - (fVar46 + fVar41)) / (fVar43 + fVar39);
        local_74 = fVar41 + fVar39 * fVar44;
        fVar43 = fVar46 + fVar43 * fVar44;
      }
    }
    else if (local_70 == local_74) {
      local_74 = fVar44 * 0.5;
      fVar43 = local_74;
    }
    else {
      fVar44 = fVar44 / (local_70 + local_74);
      fVar43 = local_74 * fVar44;
      local_74 = local_70 * fVar44;
    }
  }
  else {
    local_74 = 0.0;
    fVar43 = 0.0;
  }
  auVar40._12_4_ = -fVar43;
  auVar40._0_12_ = auVar42._0_12_;
  puVar36 = (undefined8 *)(lVar17 + lVar34 * 0x90);
  puVar36[1] = auVar40._8_8_;
  *puVar36 = auVar42._0_8_;
  puVar36[3] = CONCAT44(local_74,fVar38);
  puVar36[2] = uVar65;
  uVar68 = *(undefined8 *)*param_5;
  puVar36[5] = *(undefined8 *)(*param_5 + 8);
  puVar36[4] = uVar68;
  FUN_03078628(puVar36 + 0xe,param_2,param_4 & 0xffffffff,*param_6);
  *(char *)(puVar36 + 0x10) = (char)piVar35[4];
  *(undefined4 *)((long)puVar36 + 0x7c) = 0;
  lVar22 = *(long *)(lVar30 + 0x20);
  iVar28 = *(int *)(lVar22 + 0x60);
  if ((int)uVar21 < *(int *)(lVar22 + 0x30)) {
    if (*(int *)(lVar22 + 0x78) == 0) {
      uVar32 = uVar21;
    }
    else {
      uVar32 = *(uint *)(*(long *)(lVar22 + 0x70) + uVar33 * 4);
      if (uVar32 == 0xffffffff) {
        lVar30 = *(long *)(lVar22 + 0x58);
        iVar28 = iVar28 * uVar21;
        goto LAB_03059038;
      }
    }
    lVar30 = *(long *)(lVar22 + 0x130);
    iVar28 = uVar32 * iVar28;
  }
  else {
    lVar30 = *(long *)(lVar22 + 0x150);
    iVar28 = (uVar21 - *(int *)(lVar22 + 0x30)) * iVar28;
  }
LAB_03059038:
  memcpy((void *)(lVar24 + (long)(iVar6 * param_9) * 4),(void *)(lVar30 + (long)iVar28 * 4),
         (long)iVar6 << 2);
  uVar16 = _UNK_03cabe68;
  uVar15 = _DAT_03cabe60;
  uVar68 = DAT_03cab620;
  uVar21 = *param_7;
  bVar5 = *(byte *)(piVar35 + 4);
  lVar24 = *(long *)(*(long *)(param_2 + 0x38) +
                    (-(ulong)(uVar25 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar25 << 8));
  lVar22 = *(long *)(lVar24 + 0x20);
  bVar4 = *(byte *)(*(long *)(lVar22 + 0x68) + 0x80) & 1;
  if (*param_8 == 0 && bVar4 == 0) {
    fVar44 = (float)*(undefined8 *)(*param_5 + 8);
    fVar39 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
    fVar43 = (float)*(undefined8 *)*param_5;
    fVar46 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
    if ((uVar25 == uVar21) && ((bVar5 >> 4 & 1) == 0)) {
      lVar17 = lVar17 + lVar34 * 0x90;
      *(undefined8 *)(lVar17 + 0x38) = DAT_03cab628;
      *(undefined8 *)(lVar17 + 0x30) = uVar68;
      *(undefined8 *)(lVar17 + 0x48) = uVar16;
      *(undefined8 *)(lVar17 + 0x40) = uVar15;
      uVar68 = _UNK_03cabe58;
      uVar76 = _DAT_03cabe50;
      uVar65 = _DAT_03caa5b0;
      *(undefined8 *)(lVar17 + 0x58) = _UNK_03caa5b8;
      *(undefined8 *)(lVar17 + 0x50) = uVar65;
      *(undefined8 *)(lVar17 + 0x68) = uVar68;
      *(undefined8 *)(lVar17 + 0x60) = uVar76;
      goto LAB_0305948c;
    }
  }
  else {
    FUN_030963b0(lVar22,uVar19 & 0x3fffff,&local_70);
    fVar43 = *(float *)(lVar24 + 0x80) * fStack_68 +
             (float)*(undefined8 *)(lVar24 + 0x60) * local_70 +
             (float)*(undefined8 *)(lVar24 + 0x70) * fStack_6c;
    fVar46 = *(float *)(lVar24 + 0x84) * fStack_68 +
             (float)((ulong)*(undefined8 *)(lVar24 + 0x60) >> 0x20) * local_70 +
             (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20) * fStack_6c;
    fVar44 = *(float *)(lVar24 + 0x88) * fStack_68 +
             (float)*(undefined8 *)(lVar24 + 0x68) * local_70 +
             (float)*(undefined8 *)(lVar24 + 0x78) * fStack_6c;
    fVar39 = *(float *)(lVar24 + 0x8c) * fStack_68 +
             (float)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 0x20) * local_70 +
             (float)((ulong)*(undefined8 *)(lVar24 + 0x78) >> 0x20) * fStack_6c;
    if ((uVar25 == uVar21) && ((bVar5 >> 4 & 1) == 0)) {
      fVar41 = (float)*(undefined8 *)(*param_5 + 8);
      fVar50 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
      uVar65 = *(undefined8 *)*param_5;
      fVar37 = (float)uVar65;
      fVar38 = (float)((ulong)uVar65 >> 0x20);
      auVar9._12_4_ = fVar50;
      auVar9._0_12_ = *(undefined1 (*) [12])*param_5;
      auVar10._12_4_ = fVar50;
      auVar10._0_12_ = *(undefined1 (*) [12])*param_5;
      auVar40 = NEON_ext(auVar9,auVar10,8,1);
      auVar42._4_4_ = fVar46;
      auVar42._0_4_ = fVar43;
      auVar42._8_4_ = fVar44;
      auVar42._12_4_ = fVar39;
      auVar62._4_4_ = fVar46;
      auVar62._0_4_ = fVar43;
      auVar62._8_4_ = fVar44;
      auVar62._12_4_ = fVar39;
      auVar42 = NEON_ext(auVar42,auVar62,4,1);
      uVar65 = NEON_ext(uVar65,auVar40._0_8_,4,1);
      fVar47 = (float)((ulong)uVar65 >> 0x20);
      auVar54._0_4_ = fVar43 * (float)uVar65 - auVar42._0_4_ * fVar37;
      auVar54._4_4_ = fVar46 * fVar47 - auVar42._4_4_ * fVar38;
      auVar54._8_4_ = fVar44 * fVar37 - fVar43 * fVar41;
      auVar54._12_4_ = fVar39 * fVar38 - fVar46 * fVar50;
      auVar40 = NEON_ext(auVar54,auVar54,4,1);
      fVar48 = auVar40._0_4_;
      fVar45 = auVar40._4_4_;
      fVar59 = fVar48 * fVar48 + fVar45 * fVar45 + auVar54._0_4_ * auVar54._0_4_;
      if (fVar59 == 0.0) {
        auVar51 = ZEXT816(0);
      }
      else {
        fVar59 = SQRT(fVar59);
        fVar56 = SQRT(fVar48 * fVar48 + fVar45 * fVar45 + auVar54._0_4_ * auVar54._0_4_);
        auVar51._0_4_ = fVar48 / fVar59;
        auVar51._4_4_ = fVar45 / fVar56;
        auVar51._8_4_ = auVar54._0_4_ / fVar59;
        auVar51._12_4_ = 0.0 / fVar56;
      }
      auVar40 = NEON_ext(auVar51,auVar51,4,1);
      fVar69 = auVar51._0_4_;
      fVar66 = auVar51._4_4_;
      fVar49 = auVar51._8_4_;
      lVar17 = lVar17 + lVar34 * 0x90;
      fVar45 = fVar37 * auVar40._0_4_ - (float)uVar65 * fVar69;
      fVar47 = fVar38 * auVar40._4_4_ - fVar47 * fVar66;
      fVar48 = fVar41 * fVar69 - fVar37 * fVar49;
      fVar50 = fVar50 * fVar66 - fVar38 * auVar51._12_4_;
      auVar11._4_4_ = fVar47;
      auVar11._0_4_ = fVar45;
      auVar11._8_4_ = fVar48;
      auVar11._12_4_ = fVar50;
      auVar12._4_4_ = fVar47;
      auVar12._0_4_ = fVar45;
      auVar12._8_4_ = fVar48;
      auVar12._12_4_ = fVar50;
      auVar62 = NEON_ext(auVar11,auVar12,4,1);
      fVar50 = fVar43 * auVar40._0_4_ - auVar42._0_4_ * fVar69;
      fVar47 = fVar46 * auVar40._4_4_ - auVar42._4_4_ * fVar66;
      fVar48 = fVar44 * fVar69 - fVar43 * fVar49;
      fVar67 = auVar62._0_4_;
      fVar70 = auVar62._4_4_;
      fVar59 = fVar37 * fVar43 + fVar69 * fVar69 + fVar67 * fVar47;
      fVar56 = fVar38 * fVar43 + fVar66 * fVar69 + fVar70 * fVar47;
      fVar47 = fVar41 * fVar43 + fVar49 * fVar69 + fVar45 * fVar47;
      fVar52 = fVar37 * fVar46 + fVar69 * fVar66 + fVar67 * fVar48;
      fVar57 = fVar38 * fVar46 + fVar66 * fVar66 + fVar70 * fVar48;
      fVar48 = fVar41 * fVar46 + fVar49 * fVar66 + fVar45 * fVar48;
      fVar37 = fVar37 * fVar44 + fVar69 * fVar49 + fVar67 * fVar50;
      fVar38 = fVar38 * fVar44 + fVar66 * fVar49 + fVar70 * fVar50;
      fVar41 = fVar41 * fVar44 + fVar49 * fVar49 + fVar45 * fVar50;
      *(ulong *)(lVar17 + 0x38) = (ulong)(uint)fVar47;
      *(ulong *)(lVar17 + 0x30) = CONCAT44(fVar56,fVar59);
      *(ulong *)(lVar17 + 0x48) = (ulong)(uint)fVar48;
      *(ulong *)(lVar17 + 0x40) = CONCAT44(fVar57,fVar52);
      *(ulong *)(lVar17 + 0x58) = (ulong)(uint)fVar41;
      *(ulong *)(lVar17 + 0x50) = CONCAT44(fVar38,fVar37);
      *(float *)(lVar17 + 0x68) =
           fStack_88 - (fVar41 * fStack_88 + fVar47 * local_90 + fVar48 * fStack_8c);
      *(undefined4 *)(lVar17 + 0x6c) = 0x3f800000;
      *(float *)(lVar17 + 0x60) =
           local_90 - (fVar37 * fStack_88 + fVar59 * local_90 + fVar52 * fStack_8c);
      *(float *)(lVar17 + 100) =
           fStack_8c - (fVar38 * fStack_88 + fVar56 * local_90 + fVar57 * fStack_8c);
      goto LAB_0305948c;
    }
    lVar22 = *(long *)(lVar24 + 0x20);
  }
  local_d4 = local_d4 & 0x3fffff;
  uVar21 = local_d4 - *(int *)(lVar22 + 0x30);
  if ((int)local_d4 < *(int *)(lVar22 + 0x30)) {
    if (*(int *)(lVar22 + 0x78) == 0) {
      uVar21 = local_d4;
LAB_0305926c:
      lVar24 = *(long *)(lVar22 + 0xc0);
      goto LAB_03059270;
    }
    uVar21 = *(uint *)(*(long *)(lVar22 + 0x70) + (ulong)local_d4 * 4);
    if (uVar21 != 0xffffffff) goto LAB_0305926c;
    piVar35 = (int *)(*(long *)(lVar22 + 0x28) + (ulong)local_d4 * 0x14);
  }
  else {
    lVar24 = *(long *)(lVar22 + 0xe0);
LAB_03059270:
    piVar35 = (int *)(lVar24 + (long)(int)uVar21 * 0x14);
  }
  fStack_c4 = (float)((ulong)uVar76 >> 0x20);
  fVar48 = (float)uVar65 - local_90;
  fVar37 = fVar37 - fStack_8c;
  auVar42 = *param_5;
  fVar41 = auVar42._0_4_;
  fVar45 = fVar48 * fVar41;
  fVar50 = auVar42._4_4_;
  fVar56 = fVar37 * fVar50;
  fVar47 = auVar42._8_4_;
  fVar49 = (fVar38 - fStack_88) * fVar47;
  iVar6 = *piVar35;
  iVar28 = piVar35[1];
  auVar55 = ZEXT816(0);
  auVar53 = auVar55._0_12_;
  fVar59 = fVar45 + fVar56 + fVar49;
  fVar49 = fVar45 + fVar56 + fVar49;
  iVar3 = *(int *)(lVar22 + 0x40);
  lVar24 = 0x38;
  if (iVar3 <= iVar6) {
    lVar24 = 0xf0;
  }
  fVar48 = fVar48 - fVar41 * fVar59;
  fVar37 = fVar37 - fVar50 * fVar49;
  fVar38 = (fVar38 - fStack_88) - fVar47 * fVar59;
  iVar26 = 0;
  if (iVar3 <= iVar6) {
    iVar26 = iVar3;
  }
  iVar2 = 0;
  if (iVar3 <= iVar28) {
    iVar2 = iVar3;
  }
  puVar36 = (undefined8 *)(*(long *)(lVar22 + lVar24) + (long)(iVar6 - iVar26) * 0x10);
  uVar76 = puVar36[1];
  fVar56 = (float)uVar76;
  uVar65 = *puVar36;
  fVar45 = (float)uVar65;
  fVar59 = (float)((ulong)uVar65 >> 0x20);
  lVar24 = 0x38;
  if (iVar3 <= iVar28) {
    lVar24 = 0xf0;
  }
  puVar36 = (undefined8 *)(*(long *)(lVar22 + lVar24) + (long)(iVar28 - iVar2) * 0x10);
  uVar68 = puVar36[1];
  uVar65 = *puVar36;
  fVar52 = fVar48 * fVar48 + fVar37 * fVar37 + fVar38 * fVar38;
  if (fVar52 == 0.0) {
    fVar52 = 0.0;
    fVar57 = 0.0;
    fVar38 = 0.0;
    fVar49 = 0.0;
    fVar48 = 0.0;
    fVar37 = 0.0;
  }
  else {
    fVar52 = SQRT(fVar52);
    fVar57 = SQRT(fVar48 * fVar48 + fVar37 * fVar37 + fVar38 * fVar38);
    fVar48 = fVar48 / fVar52;
    fVar37 = fVar37 / fVar57;
    fVar38 = fVar38 / fVar52;
    fVar49 = ((fStack_c4 - fStack_84) - auVar42._12_4_ * fVar49) / fVar57;
  }
  auVar40 = NEON_ext(auVar42,auVar42,4,1);
  auVar13._4_4_ = fVar37;
  auVar13._0_4_ = fVar48;
  auVar13._8_4_ = fVar38;
  auVar13._12_4_ = fVar49;
  auVar14._4_4_ = fVar37;
  auVar14._0_4_ = fVar48;
  auVar14._8_4_ = fVar38;
  auVar14._12_4_ = fVar49;
  auVar62 = NEON_ext(auVar13,auVar14,4,1);
  auVar73._0_4_ = fVar41 * auVar62._0_4_ - auVar40._0_4_ * fVar48;
  auVar73._4_4_ = fVar50 * auVar62._4_4_ - auVar40._4_4_ * fVar37;
  auVar73._8_4_ = fVar47 * fVar48 - fVar41 * fVar38;
  auVar73._12_4_ = auVar42._12_4_ * fVar37 - fVar50 * fVar49;
  auVar42 = NEON_ext(auVar73,auVar73,4,1);
  fVar69 = auVar42._0_4_;
  fVar66 = auVar42._4_4_;
  fVar49 = fVar69 * fVar69 + fVar66 * fVar66 + auVar73._0_4_ * auVar73._0_4_;
  auVar61 = auVar53;
  if (fVar49 != 0.0) {
    fVar49 = SQRT(fVar49);
    auVar61._0_4_ = fVar69 / fVar49;
    auVar61._4_4_ = fVar66 / SQRT(fVar69 * fVar69 + fVar66 * fVar66 + auVar73._0_4_ * auVar73._0_4_)
    ;
    auVar61._8_4_ = auVar73._0_4_ / fVar49;
  }
  fVar49 = (float)uVar65 - fVar45;
  fVar66 = (float)((ulong)uVar65 >> 0x20) - fVar59;
  fVar67 = (float)uVar68 - fVar56;
  fVar69 = fVar43 * fVar49;
  fVar71 = fVar46 * fVar66;
  fVar72 = fVar44 * fVar67;
  fVar70 = fVar72 + fVar69 + fVar71;
  fVar72 = fVar72 + fVar69 + fVar71;
  fVar49 = fVar49 - fVar43 * fVar70;
  fVar66 = fVar66 - fVar46 * fVar72;
  fVar67 = fVar67 - fVar44 * fVar70;
  fVar69 = fVar49 * fVar49 + fVar66 * fVar66 + fVar67 * fVar67;
  if (fVar69 == 0.0) {
    fVar69 = 0.0;
    fVar70 = 0.0;
  }
  else {
    fVar69 = SQRT(fVar69);
    fVar70 = SQRT(fVar49 * fVar49 + fVar66 * fVar66 + fVar67 * fVar67);
    auVar55._0_4_ = fVar49 / fVar69;
    auVar55._4_4_ = fVar66 / fVar70;
    auVar55._8_4_ = fVar67 / fVar69;
    auVar55._12_4_ =
         (((float)((ulong)uVar68 >> 0x20) - (float)((ulong)uVar76 >> 0x20)) - fVar39 * fVar72) /
         fVar70;
  }
  auVar7._4_4_ = fVar46;
  auVar7._0_4_ = fVar43;
  auVar7._8_4_ = fVar44;
  auVar7._12_4_ = fVar39;
  auVar8._4_4_ = fVar46;
  auVar8._0_4_ = fVar43;
  auVar8._8_4_ = fVar44;
  auVar8._12_4_ = fVar39;
  auVar42 = NEON_ext(auVar7,auVar8,4,1);
  auVar40 = NEON_ext(auVar55,auVar55,4,1);
  fVar72 = auVar55._0_4_;
  fVar75 = auVar55._4_4_;
  fVar66 = auVar55._8_4_;
  auVar74._0_4_ = fVar43 * auVar40._0_4_ - auVar42._0_4_ * fVar72;
  auVar74._4_4_ = fVar46 * auVar40._4_4_ - auVar42._4_4_ * fVar75;
  auVar74._8_4_ = fVar44 * fVar72 - fVar43 * fVar66;
  auVar74._12_4_ = fVar39 * fVar75 - fVar46 * auVar55._12_4_;
  auVar42 = NEON_ext(auVar74,auVar74,4,1);
  fVar67 = auVar42._0_4_;
  fVar71 = auVar42._4_4_;
  fVar49 = fVar67 * fVar67 + fVar71 * fVar71 + auVar74._0_4_ * auVar74._0_4_;
  if (fVar49 != 0.0) {
    fVar49 = SQRT(fVar49);
    auVar53._0_4_ = fVar67 / fVar49;
    auVar53._4_4_ = fVar71 / SQRT(fVar67 * fVar67 + fVar71 * fVar71 + auVar74._0_4_ * auVar74._0_4_)
    ;
    auVar53._8_4_ = auVar74._0_4_ / fVar49;
  }
  fVar67 = auVar53._0_4_;
  fVar60 = auVar61._0_4_;
  fVar63 = auVar61._4_4_;
  fVar64 = auVar61._8_4_;
  lVar17 = lVar17 + lVar34 * 0x90;
  fVar52 = fVar52 / fVar69;
  fVar57 = fVar57 / fVar70;
  fVar71 = auVar53._4_4_;
  fVar58 = auVar53._8_4_;
  fVar49 = fVar52 * (fVar41 * fVar43 + fVar48 * fVar72 + fVar60 * fVar67);
  fVar69 = fVar57 * (fVar50 * fVar43 + fVar37 * fVar72 + fVar63 * fVar67);
  fVar67 = fVar52 * (fVar47 * fVar43 + fVar38 * fVar72 + fVar64 * fVar67);
  fVar70 = fVar52 * (fVar41 * fVar46 + fVar48 * fVar75 + fVar60 * fVar71);
  fVar72 = fVar57 * (fVar50 * fVar46 + fVar37 * fVar75 + fVar63 * fVar71);
  fVar71 = fVar52 * (fVar47 * fVar46 + fVar38 * fVar75 + fVar64 * fVar71);
  fVar41 = fVar52 * (fVar41 * fVar44 + fVar48 * fVar66 + fVar60 * fVar58);
  fVar57 = fVar57 * (fVar50 * fVar44 + fVar37 * fVar66 + fVar63 * fVar58);
  fVar52 = fVar52 * (fVar47 * fVar44 + fVar38 * fVar66 + fVar64 * fVar58);
  *(ulong *)(lVar17 + 0x38) = (ulong)(uint)fVar67;
  *(ulong *)(lVar17 + 0x30) = CONCAT44(fVar69,fVar49);
  *(ulong *)(lVar17 + 0x48) = (ulong)(uint)fVar71;
  *(ulong *)(lVar17 + 0x40) = CONCAT44(fVar72,fVar70);
  *(ulong *)(lVar17 + 0x58) = (ulong)(uint)fVar52;
  *(ulong *)(lVar17 + 0x50) = CONCAT44(fVar57,fVar41);
  *(ulong *)(lVar17 + 0x68) =
       CONCAT44(0x3f800000,fStack_88 - (fVar52 * fVar56 + fVar67 * fVar45 + fVar71 * fVar59));
  *(ulong *)(lVar17 + 0x60) =
       CONCAT44(fStack_8c - (fVar57 * fVar56 + fVar69 * fVar45 + fVar72 * fVar59),
                local_90 - (fVar41 * fVar56 + fVar49 * fVar45 + fVar70 * fVar59));
LAB_0305948c:
  *param_7 = uVar25;
  *param_6 = uVar19;
  *param_8 = bVar4;
  *(ulong *)(*param_5 + 8) = CONCAT44(fVar39,fVar44);
  *(ulong *)*param_5 = CONCAT44(fVar46,fVar43);
  return;
}


