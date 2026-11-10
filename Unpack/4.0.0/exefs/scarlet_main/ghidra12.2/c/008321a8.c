/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008321a8; name: FUN_008321a8
 */


void FUN_008321a8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined1 (*param_7) [12],byte param_8,long param_9)

{
  long lVar1;
  byte bVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar30;
  float fVar33;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar31;
  undefined1 auVar27 [16];
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined *local_1ac0 [2];
  undefined8 local_1ab0;
  undefined8 uStack_1aa8;
  undefined8 local_1aa0;
  undefined8 uStack_1a98;
  undefined8 local_1a90;
  undefined8 uStack_1a88;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  long local_1a70;
  char local_1a68;
  undefined8 local_1a60;
  undefined8 uStack_1a58;
  undefined8 local_1a50;
  undefined8 uStack_1a48;
  undefined8 local_1a40;
  undefined8 uStack_1a38;
  undefined4 local_1a30;
  undefined8 local_1a2c;
  int local_1a20;
  uint uStack_1a1c;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  long local_1a08;
  long lStack_1a00;
  long local_19f8;
  long lStack_19f0;
  undefined8 local_19e8;
  long lStack_19e0;
  long local_19d8;
  undefined8 local_19d0;
  undefined8 local_19c8;
  undefined2 local_19c0;
  undefined4 local_19bc;
  undefined8 local_19b8;
  undefined4 local_19b0;
  undefined8 local_1998;
  undefined4 local_1990;
  undefined8 local_1988;
  undefined8 local_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 local_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 local_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 local_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  byte local_1900;
  undefined8 local_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 local_18d0;
  undefined8 uStack_18c8;
  undefined8 local_18c0;
  undefined8 uStack_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 local_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  undefined8 uStack_1878;
  undefined8 local_1870;
  undefined8 uStack_1868;
  undefined8 local_1860;
  undefined8 uStack_1858;
  float local_1850;
  float fStack_184c;
  float fStack_1848;
  float fStack_1844;
  undefined8 local_1840;
  undefined8 uStack_1838;
  undefined1 *local_1830;
  undefined8 local_1828;
  undefined1 auStack_1820 [6144];
  
  local_1900 = param_8 & 1;
  lStack_1a00 = 0;
  if ((*(byte *)(*(long *)(param_2 + 0x38) + 0x1a) & 8) != 0) {
    lStack_1a00 = *(long *)(param_2 + 0x38);
  }
  lVar12 = *(long *)(param_4 + 0x48);
  uStack_1978 = *(undefined8 *)(*param_7 + 8);
  uVar37 = (undefined4)((ulong)uStack_1978 >> 0x20);
  local_1980 = *(undefined8 *)*param_7;
  fVar32 = (float)local_1980;
  fVar34 = (float)((ulong)local_1980 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_7[1] + 4);
  uStack_1968 = *(undefined8 *)param_7[2];
  uVar22 = (undefined4)((ulong)uStack_1968 >> 0x20);
  uStack_1970 = *(undefined8 *)*pauVar3;
  fVar20 = (float)uStack_1970;
  fVar21 = (float)((ulong)uStack_1970 >> 0x20);
  auVar7 = *(undefined1 (*) [16])(param_7[2] + 8);
  auVar8 = *(undefined1 (*) [16])(param_7 + 4);
  auVar13._12_4_ = uVar22;
  auVar13._0_12_ = *pauVar3;
  auVar25._12_4_ = uVar22;
  auVar25._0_12_ = *pauVar3;
  auVar25 = NEON_ext(auVar13,auVar25,8,1);
  auVar40._12_4_ = uVar37;
  auVar40._0_12_ = *param_7;
  auVar4._12_4_ = uVar37;
  auVar4._0_12_ = *param_7;
  auVar13 = NEON_ext(auVar40,auVar4,8,1);
  fVar19 = auVar13._0_4_;
  fVar38 = auVar25._0_4_;
  local_1920 = CONCAT44(fVar38,fVar19);
  auVar13 = NEON_ext(auVar7,auVar7,8,1);
  uStack_1918 = auVar13._0_8_;
  auVar26._4_12_ = auVar13._4_12_;
  fVar35 = auVar7._4_4_;
  auVar26._0_4_ = fVar35;
  local_1940 = CONCAT44(fVar20,fVar32);
  uStack_1930 = CONCAT44(fVar21,fVar34);
  local_1960 = auVar7._0_8_;
  uStack_1928 = auVar26._0_8_;
  fVar23 = -auVar8._0_4_;
  fVar30 = -auVar8._4_4_;
  fVar33 = -auVar8._8_4_;
  fVar36 = auVar13._4_4_;
  lVar1 = 0;
  if (lVar12 != 0) {
    lVar1 = lVar12 + param_4 + 0x48;
  }
  bVar2 = *(byte *)(param_9 + 8);
  fVar24 = fVar19 * fVar33 + fVar32 * fVar23 + fVar34 * fVar30;
  fVar31 = fVar38 * fVar33 + fVar20 * fVar23 + fVar21 * fVar30;
  auVar27._0_8_ = CONCAT44(fVar31,fVar24);
  auVar27._8_4_ = auVar13._0_4_ * fVar33 + auVar7._0_4_ * fVar23 + fVar35 * fVar30;
  auVar27._12_4_ = fVar36 * fVar33 + fVar35 * fVar23 + fVar36 * fVar30;
  local_1a68 = *(char *)(param_3 + 0x30);
  local_1a70 = lVar1 + 0x20;
  uStack_1a1c = bVar2 & 4;
  uStack_1958 = auVar7._8_8_;
  uStack_1950 = auVar8._0_8_;
  uStack_1948 = auVar8._8_8_;
  uStack_1908 = auVar27._8_8_;
  uStack_1a10 = param_1;
  local_1a08 = param_2;
  local_19f8 = param_3;
  lStack_19f0 = param_4;
  local_19e8 = param_5;
  lStack_19e0 = param_6;
  uStack_1938 = local_1960;
  uStack_1910 = auVar27._0_8_;
  if (*(char *)(param_6 + 0x30) == '\0') {
    if (local_1a68 == '\0') {
      local_19c0 = 0xffff;
      local_1a80 = 0;
      uStack_1a78 = 0;
      local_1a90 = 0;
      uStack_1a88 = 0;
      local_19bc = 0;
      local_19b8 = 0;
      local_19c8 = 0;
      local_19b0 = 0xfb0001;
      local_1998 = 0;
      local_1990 = 0;
      local_1ac0[0] = PTR_DAT_047d1ac8 + 0x10;
      local_1988 = 0;
      local_19d0 = 0;
      local_1a18 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar2 & 4) == 0) {
        local_1a68 = *(char *)(lVar1 + 0x5c);
      }
      local_1a30 = 0;
      local_1a60 = 0;
      uStack_1a58 = 0;
      local_1a50 = 0;
      uStack_1a48 = 0;
      local_1a40 = 0;
      uStack_1a38 = 0;
      local_1a2c = 0xffffffffffffffff;
      uStack_1aa8 = *(undefined8 *)(lVar1 + 0x38);
      local_1ab0 = *(undefined8 *)(lVar1 + 0x30);
      local_1aa0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) -
                            (float)((ulong)local_1ab0 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                            ((float)*(undefined8 *)(lVar1 + 0x40) - (float)local_1ab0) *
                            (float)*(undefined8 *)PTR_DAT_047d1a48);
      uStack_1a98 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) -
                             (float)((ulong)uStack_1aa8 >> 0x20)) *
                             (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                             ((float)*(undefined8 *)(lVar1 + 0x48) - (float)uStack_1aa8) *
                             (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
      local_1a20 = 0x20 - *(int *)(lVar1 + 0x54);
      local_19d8 = param_9;
      local_1828 = -0x7fffff8000000000;
      local_1830 = auStack_1820;
      FUN_00840bec(local_1a70,&local_1830,local_1ac0);
      uVar9 = local_1828._4_4_;
    }
    else {
      local_19c0 = 0xffff;
      local_1a80 = 0;
      uStack_1a78 = 0;
      local_1a68 = '\0';
      local_1a90 = 0;
      uStack_1a88 = 0;
      local_19bc = 0;
      local_19b8 = 0;
      local_19c8 = 0;
      local_19b0 = 0xfb0001;
      local_1998 = 0;
      local_1990 = 0;
      local_1ac0[0] = PTR_DAT_047d1ab8 + 0x10;
      local_1988 = 0;
      local_19d0 = 0;
      local_1a18 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar2 & 4) == 0) {
        local_1a68 = *(char *)(lVar1 + 0x5c);
      }
      local_1a30 = 0;
      local_1a60 = 0;
      uStack_1a58 = 0;
      local_1a50 = 0;
      uStack_1a48 = 0;
      local_1a40 = 0;
      uStack_1a38 = 0;
      local_1a2c = 0xffffffffffffffff;
      uStack_1aa8 = *(undefined8 *)(lVar1 + 0x38);
      local_1ab0 = *(undefined8 *)(lVar1 + 0x30);
      local_1aa0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) -
                            (float)((ulong)local_1ab0 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                            ((float)*(undefined8 *)(lVar1 + 0x40) - (float)local_1ab0) *
                            (float)*(undefined8 *)PTR_DAT_047d1a48);
      uStack_1a98 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) -
                             (float)((ulong)uStack_1aa8 >> 0x20)) *
                             (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                             ((float)*(undefined8 *)(lVar1 + 0x48) - (float)uStack_1aa8) *
                             (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
      local_1a20 = 0x20 - *(int *)(lVar1 + 0x54);
      local_19d8 = param_9;
      pfVar10 = *(float **)(param_3 + 0x20);
      fVar19 = *(float *)(param_3 + 0x40);
      fVar38 = *(float *)(param_3 + 0x44);
      fVar20 = *(float *)(param_3 + 0x48);
      local_1830 = auStack_1820;
      fVar34 = (float)*(undefined8 *)(pfVar10 + 4) * fVar38;
      fVar35 = (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20) * fVar38;
      fVar36 = (float)*(undefined8 *)(pfVar10 + 6) * fVar38;
      fVar38 = (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20) * fVar38;
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar38;
      auVar8._4_4_ = fVar35;
      auVar8._0_4_ = fVar34;
      auVar8._8_4_ = fVar36;
      auVar8._12_4_ = fVar38;
      auVar25 = NEON_ext(auVar7,auVar8,8,1);
      fVar33 = *pfVar10 * fVar19;
      fVar32 = pfVar10[1] * fVar19;
      auVar29._0_8_ = CONCAT44(fVar32,fVar33);
      auVar29._8_4_ = pfVar10[2] * fVar19;
      auVar29._12_4_ = pfVar10[3] * fVar19;
      fVar21 = pfVar10[9] * fVar20;
      auVar16._0_8_ = CONCAT44(fVar21,pfVar10[8] * fVar20);
      auVar16._8_4_ = pfVar10[10] * fVar20;
      auVar16._12_4_ = pfVar10[0xb] * fVar20;
      auVar13 = NEON_ext(auVar29,auVar29,8,1);
      auVar40 = NEON_ext(auVar16,auVar16,8,1);
      local_1890 = CONCAT44(auVar25._0_4_,auVar13._0_4_);
      local_1828 = -0x7fffff8000000000;
      uStack_1888 = auVar40._0_8_;
      auVar43._4_12_ = auVar40._4_12_;
      auVar43._0_4_ = fVar21;
      fVar19 = (float)*(undefined8 *)(pfVar10 + 0xc) + (float)*(undefined8 *)(param_3 + 0x50);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
      fVar30 = (float)*(undefined8 *)(pfVar10 + 0xe) + (float)*(undefined8 *)(param_3 + 0x58);
      uStack_18a0 = CONCAT44(fVar35,fVar32);
      uStack_18e8 = auVar29._8_8_;
      uStack_18d8 = CONCAT44(fVar38,fVar36);
      uStack_18e0 = CONCAT44(fVar35,fVar34);
      local_18b0 = CONCAT44(fVar34,fVar33);
      uStack_1898 = auVar43._0_8_;
      uStack_18c8 = auVar16._8_8_;
      uStack_18b8 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar10 + 0xe) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),fVar30);
      local_18c0 = CONCAT44(fVar23,fVar19);
      fVar19 = -fVar19;
      fVar23 = -fVar23;
      fVar30 = -fVar30;
      auVar17._0_8_ =
           CONCAT44(auVar25._0_4_ * fVar30 + fVar34 * fVar19 + fVar35 * fVar23,
                    auVar13._0_4_ * fVar30 + fVar33 * fVar19 + fVar32 * fVar23);
      auVar17._8_4_ = auVar40._0_4_ * fVar30 + pfVar10[8] * fVar20 * fVar19 + fVar21 * fVar23;
      auVar17._12_4_ = auVar40._4_4_ * fVar30 + fVar21 * fVar19 + auVar40._4_4_ * fVar23;
      uStack_1878 = auVar17._8_8_;
      local_18f0 = auVar29._0_8_;
      local_18d0 = auVar16._0_8_;
      uStack_18a8 = auVar16._0_8_;
      uStack_1880 = auVar17._0_8_;
      FUN_00842b0c(local_1a70,&local_1830,local_1ac0);
      uVar9 = local_1828._4_4_;
    }
  }
  else if (local_1a68 == '\0') {
    local_19c0 = 0xffff;
    local_1a80 = 0;
    uStack_1a78 = 0;
    local_1a90 = 0;
    uStack_1a88 = 0;
    local_19bc = 0;
    local_19b8 = 0;
    local_19c8 = 0;
    local_19b0 = 0xfb0001;
    local_1998 = 0;
    local_1990 = 0;
    local_1ac0[0] = PTR_DAT_047d1ac0 + 0x10;
    local_1988 = 0;
    local_19d0 = 0;
    local_1a18 = *(undefined8 *)(param_6 + 0x28);
    if ((bVar2 & 4) == 0) {
      local_1a68 = *(char *)(lVar1 + 0x5c);
    }
    local_1a30 = 0;
    local_1a60 = 0;
    uStack_1a58 = 0;
    local_1a50 = 0;
    uStack_1a48 = 0;
    local_1a40 = 0;
    uStack_1a38 = 0;
    local_1a2c = 0xffffffffffffffff;
    uStack_1aa8 = *(undefined8 *)(lVar1 + 0x38);
    local_1ab0 = *(undefined8 *)(lVar1 + 0x30);
    local_1aa0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) -
                          (float)((ulong)local_1ab0 >> 0x20)) *
                          (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                          ((float)*(undefined8 *)(lVar1 + 0x40) - (float)local_1ab0) *
                          (float)*(undefined8 *)PTR_DAT_047d1a48);
    uStack_1a98 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) -
                           (float)((ulong)uStack_1aa8 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                           ((float)*(undefined8 *)(lVar1 + 0x48) - (float)uStack_1aa8) *
                           (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
    local_1a20 = 0x20 - *(int *)(lVar1 + 0x54);
    local_1830 = auStack_1820;
    local_19d8 = param_9;
    fVar33 = (float)*(undefined8 *)(param_6 + 0x48);
    fVar23 = (float)*(undefined8 *)(param_6 + 0x40);
    fVar30 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
    auVar39._0_8_ = CONCAT44(fVar21 * fVar30,fVar34 * fVar30);
    auVar39._8_4_ = fVar35 * fVar30;
    auVar39._12_4_ = fVar36 * fVar30;
    uStack_18c8 = CONCAT44(fVar36 * fVar33,auVar13._0_4_ * fVar33);
    local_18d0 = CONCAT44(fVar38 * fVar33,fVar19 * fVar33);
    uStack_18e8 = CONCAT44(fVar35 * fVar23,auVar7._0_4_ * fVar23);
    local_18f0 = CONCAT44(fVar20 * fVar23,fVar32 * fVar23);
    uStack_18d8 = auVar39._8_8_;
    auVar18._0_8_ =
         CONCAT44(fVar31 + *(float *)(param_6 + 0x54),fVar24 + *(float *)(param_6 + 0x50));
    auVar18._8_4_ = auVar27._8_4_ + *(float *)(param_6 + 0x58);
    auVar18._12_4_ = auVar27._12_4_ + *(float *)(param_6 + 0x5c);
    local_1828 = -0x7fffff8000000000;
    uStack_18b8 = auVar18._8_8_;
    uStack_18e0 = auVar39._0_8_;
    local_18c0 = auVar18._0_8_;
    FUN_0084357c(local_1a70,&local_1830,local_1ac0);
    uVar9 = local_1828._4_4_;
  }
  else {
    local_19c0 = 0xffff;
    local_1a80 = 0;
    uStack_1a78 = 0;
    local_1a68 = '\0';
    local_1a90 = 0;
    uStack_1a88 = 0;
    local_19bc = 0;
    local_19b8 = 0;
    local_19c8 = 0;
    local_19b0 = 0xfb0001;
    local_1998 = 0;
    local_1990 = 0;
    local_1ac0[0] = PTR_DAT_047d1ab0 + 0x10;
    local_1988 = 0;
    local_19d0 = 0;
    local_1a18 = *(undefined8 *)(param_6 + 0x28);
    if ((bVar2 & 4) == 0) {
      local_1a68 = *(char *)(lVar1 + 0x5c);
    }
    local_1a30 = 0;
    local_1a60 = 0;
    uStack_1a58 = 0;
    local_1a50 = 0;
    uStack_1a48 = 0;
    local_1a40 = 0;
    uStack_1a38 = 0;
    local_1a2c = 0xffffffffffffffff;
    uStack_1aa8 = *(undefined8 *)(lVar1 + 0x38);
    local_1ab0 = *(undefined8 *)(lVar1 + 0x30);
    local_1aa0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) -
                          (float)((ulong)local_1ab0 >> 0x20)) *
                          (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                          ((float)*(undefined8 *)(lVar1 + 0x40) - (float)local_1ab0) *
                          (float)*(undefined8 *)PTR_DAT_047d1a48);
    uStack_1a98 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) -
                           (float)((ulong)uStack_1aa8 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                           ((float)*(undefined8 *)(lVar1 + 0x48) - (float)uStack_1aa8) *
                           (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
    local_1a20 = 0x20 - *(int *)(lVar1 + 0x54);
    local_19d8 = param_9;
    local_1830 = auStack_1820;
    pfVar10 = *(float **)(param_3 + 0x20);
    fVar19 = *(float *)(param_3 + 0x40);
    fVar38 = *(float *)(param_3 + 0x44);
    fVar20 = *(float *)(param_3 + 0x48);
    fVar34 = (float)*(undefined8 *)(pfVar10 + 4) * fVar38;
    fVar35 = (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20) * fVar38;
    fVar36 = (float)*(undefined8 *)(pfVar10 + 6) * fVar38;
    fVar38 = (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20) * fVar38;
    auVar5._4_4_ = fVar35;
    auVar5._0_4_ = fVar34;
    auVar5._8_4_ = fVar36;
    auVar5._12_4_ = fVar38;
    auVar6._4_4_ = fVar35;
    auVar6._0_4_ = fVar34;
    auVar6._8_4_ = fVar36;
    auVar6._12_4_ = fVar38;
    auVar25 = NEON_ext(auVar5,auVar6,8,1);
    fVar33 = *pfVar10 * fVar19;
    fVar32 = pfVar10[1] * fVar19;
    auVar28._0_8_ = CONCAT44(fVar32,fVar33);
    auVar28._8_4_ = pfVar10[2] * fVar19;
    auVar28._12_4_ = pfVar10[3] * fVar19;
    fVar19 = pfVar10[9] * fVar20;
    auVar14._0_8_ = CONCAT44(fVar19,pfVar10[8] * fVar20);
    auVar14._8_4_ = pfVar10[10] * fVar20;
    auVar14._12_4_ = pfVar10[0xb] * fVar20;
    auVar13 = NEON_ext(auVar28,auVar28,8,1);
    auVar40 = NEON_ext(auVar14,auVar14,8,1);
    local_1890 = CONCAT44(auVar25._0_4_,auVar13._0_4_);
    uStack_18a0 = CONCAT44(fVar35,fVar32);
    uStack_1888 = auVar40._0_8_;
    auVar41._4_12_ = auVar40._4_12_;
    auVar41._0_4_ = fVar19;
    fVar21 = (float)*(undefined8 *)(pfVar10 + 0xc) + (float)*(undefined8 *)(param_3 + 0x50);
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
    fVar30 = (float)*(undefined8 *)(pfVar10 + 0xe) + (float)*(undefined8 *)(param_3 + 0x58);
    local_18b0 = CONCAT44(fVar34,fVar33);
    uStack_18e8 = auVar28._8_8_;
    uStack_18d8 = CONCAT44(fVar38,fVar36);
    uStack_18e0 = CONCAT44(fVar35,fVar34);
    uStack_18c8 = auVar14._8_8_;
    uStack_18b8 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar10 + 0xe) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),fVar30);
    local_18c0 = CONCAT44(fVar23,fVar21);
    uStack_1898 = auVar41._0_8_;
    fVar21 = -fVar21;
    fVar23 = -fVar23;
    fVar30 = -fVar30;
    auVar42._0_8_ =
         CONCAT44(auVar25._0_4_ * fVar30 + fVar34 * fVar21 + fVar35 * fVar23,
                  auVar13._0_4_ * fVar30 + fVar33 * fVar21 + fVar32 * fVar23);
    auVar42._8_4_ = auVar40._0_4_ * fVar30 + pfVar10[8] * fVar20 * fVar21 + fVar19 * fVar23;
    auVar42._12_4_ = auVar40._4_4_ * fVar30 + fVar19 * fVar21 + auVar40._4_4_ * fVar23;
    uStack_1878 = auVar42._8_8_;
    puVar11 = *(undefined8 **)(param_6 + 0x20);
    fVar19 = *(float *)(param_6 + 0x40);
    fVar38 = *(float *)(param_6 + 0x44);
    fStack_1844 = *(float *)(param_6 + 0x48);
    uStack_1868 = CONCAT44((float)((ulong)puVar11[1] >> 0x20) * fVar19,(float)puVar11[1] * fVar19);
    local_1870 = CONCAT44((float)((ulong)*puVar11 >> 0x20) * fVar19,(float)*puVar11 * fVar19);
    uStack_1858 = CONCAT44((float)((ulong)puVar11[3] >> 0x20) * fVar38,(float)puVar11[3] * fVar38);
    local_1860 = CONCAT44((float)((ulong)puVar11[2] >> 0x20) * fVar38,(float)puVar11[2] * fVar38);
    local_1850 = (float)puVar11[4] * fStack_1844;
    fStack_184c = (float)((ulong)puVar11[4] >> 0x20) * fStack_1844;
    fStack_1848 = (float)puVar11[5] * fStack_1844;
    fStack_1844 = (float)((ulong)puVar11[5] >> 0x20) * fStack_1844;
    local_1828 = -0x7fffff8000000000;
    auVar15._0_8_ =
         CONCAT44(*(float *)((long)puVar11 + 0x34) +
                  (float)((ulong)*(undefined8 *)(param_6 + 0x50) >> 0x20),
                  *(float *)(puVar11 + 6) + (float)*(undefined8 *)(param_6 + 0x50));
    auVar15._8_4_ = *(float *)(puVar11 + 7) + (float)*(undefined8 *)(param_6 + 0x58);
    auVar15._12_4_ =
         *(float *)((long)puVar11 + 0x3c) + (float)((ulong)*(undefined8 *)(param_6 + 0x58) >> 0x20);
    uStack_1838 = auVar15._8_8_;
    local_18f0 = auVar28._0_8_;
    local_18d0 = auVar14._0_8_;
    uStack_18a8 = auVar14._0_8_;
    uStack_1880 = auVar42._0_8_;
    local_1840 = auVar15._0_8_;
    FUN_00843f8c(local_1a70,&local_1830,local_1ac0);
    uVar9 = local_1828._4_4_;
  }
  if (-1 < local_1828) {
    local_1828 = (ulong)uVar9 << 0x20;
    if (local_1830 != (undefined1 *)0x0) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_1830,(ulong)uVar9 * 0x30);
    }
  }
  return;
}


