/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c4394; name: FUN_030c4394
 */


undefined8 FUN_030c4394(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  char cVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar35;
  ulong uVar33;
  undefined1 auVar34 [16];
  float fVar36;
  int iVar37;
  float fVar40;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulong uVar45;
  ulong uVar46;
  float local_110;
  float fStack_10c;
  undefined1 auStack_e0 [4];
  char local_dc;
  char local_da;
  char local_d9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b0 [4];
  char local_ac;
  char local_aa;
  char local_a9;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_80 [4];
  
  if ((((int)param_3 < 0) || (*(int *)(param_1 + 0x20) <= (int)param_3)) ||
     ((*(byte *)(*(long *)(param_1 + 0x40) + (ulong)param_3 * 0x80 + 0x10) >> 4 & 1) == 0)) {
    return 0;
  }
  lVar18 = (long)*(int *)(param_1 + 0x80) + -1;
  lVar19 = (long)*(int *)(param_1 + 0x70);
  lVar14 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar14 + lVar19 * 0x30) != *(int *)(lVar14 + lVar18 * 0x30)) {
    return 1;
  }
  lVar16 = lVar14 + lVar19 * 0x30;
  lVar17 = 0;
  auVar34 = *(undefined1 (*) [16])(lVar14 + lVar18 * 0x30 + 0x10);
  cVar21 = *(char *)(lVar16 + 7);
  fVar36 = (float)*(undefined8 *)(lVar16 + 0x10) - auVar34._0_4_;
  fVar40 = (float)((ulong)*(undefined8 *)(lVar16 + 0x10) >> 0x20) - auVar34._4_4_;
  fVar41 = (float)*(undefined8 *)(lVar16 + 0x18) - auVar34._8_4_;
  fVar42 = (float)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20) - auVar34._12_4_;
  bVar11 = true;
LAB_030c4478:
  iVar37 = *(int *)(param_1 + 0x74);
  uVar9 = 0xffffffff;
  if (bVar11) {
    uVar9 = 1;
  }
  uVar1 = iVar37 + uVar9;
  if (bVar11) {
    if ((int)uVar1 < *(int *)(param_1 + 0x80)) {
      lVar14 = (long)(int)uVar1;
      lVar16 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) +
               (long)(int)uVar1) * 0x10;
      do {
        lVar20 = *(long *)(param_1 + 0x78);
        memcpy(auStack_b0,(void *)(lVar20 + (long)iVar37 * 0x30),0x30);
        memcpy(auStack_e0,(void *)(lVar20 + lVar16),0x30);
        cVar10 = local_ac;
        if ((local_aa != '\0') && (local_a9 != '\0')) {
          cVar12 = '\x01';
          if (local_ac != '\0') {
            cVar12 = '\x02';
          }
          cVar10 = '\0';
          if (local_ac != '\x01') {
            cVar10 = cVar12;
          }
        }
        cVar12 = local_dc;
        if ((local_da != '\0') && (local_d9 != '\0')) {
          cVar13 = '\x01';
          if (local_dc != '\0') {
            cVar13 = '\x02';
          }
          cVar12 = '\0';
          if (local_dc != '\x01') {
            cVar12 = cVar13;
          }
        }
        FUN_030c3724(param_1,&local_a0,cVar10,&local_d0,cVar12);
        fVar30 = fVar36 * ((float)local_d0 - (float)local_a0);
        fVar31 = fVar40 * ((float)((ulong)local_d0 >> 0x20) - local_a0._4_4_);
        uVar25 = (undefined1)((uint)fVar31 >> 8);
        uVar26 = (undefined1)((uint)fVar31 >> 0x10);
        uVar27 = (undefined1)((uint)fVar31 >> 0x18);
        fVar28 = fVar41 * ((float)uStack_c8 - (float)uStack_98);
        fVar29 = fVar42 * ((float)((ulong)uStack_c8 >> 0x20) - uStack_98._4_4_);
        auVar3[4] = SUB41(fVar31,0);
        auVar3._0_4_ = fVar30;
        auVar3[5] = uVar25;
        auVar3[6] = uVar26;
        auVar3[7] = uVar27;
        auVar3._8_4_ = fVar28;
        auVar3._12_4_ = fVar29;
        auVar4[4] = SUB41(fVar31,0);
        auVar4._0_4_ = fVar30;
        auVar4[5] = uVar25;
        auVar4[6] = uVar26;
        auVar4[7] = uVar27;
        auVar4._8_4_ = fVar28;
        auVar4._12_4_ = fVar29;
        auVar34 = NEON_ext(auVar3,auVar4,8,1);
        if (fVar30 + fVar31 + auVar34._0_4_ < 0.0) goto LAB_030c46d4;
        FUN_030c494c(param_1,auStack_b0,auStack_e0);
        lVar14 = lVar14 + (int)uVar9;
        iVar37 = iVar37 + uVar9;
        lVar16 = lVar16 + ((-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1) +
                          (long)(int)uVar9) * 0x10;
      } while (lVar14 < *(int *)(param_1 + 0x80));
    }
  }
  else if (*(int *)(param_1 + 0x70) <= (int)uVar1) {
    lVar14 = (long)(int)uVar1;
    lVar16 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1)
             * 0x10;
    do {
      lVar20 = *(long *)(param_1 + 0x78);
      memcpy(auStack_b0,(void *)(lVar20 + (long)iVar37 * 0x30),0x30);
      memcpy(auStack_e0,(void *)(lVar20 + lVar16),0x30);
      cVar10 = local_ac;
      if ((local_aa != '\0') && (local_a9 != '\0')) {
        cVar12 = '\x01';
        if (local_ac != '\0') {
          cVar12 = '\x02';
        }
        cVar10 = '\0';
        if (local_ac != '\x01') {
          cVar10 = cVar12;
        }
      }
      cVar12 = local_dc;
      if ((local_da != '\0') && (local_d9 != '\0')) {
        cVar13 = '\x01';
        if (local_dc != '\0') {
          cVar13 = '\x02';
        }
        cVar12 = '\0';
        if (local_dc != '\x01') {
          cVar12 = cVar13;
        }
      }
      FUN_030c3724(param_1,&local_a0,cVar10,&local_d0,cVar12);
      fVar30 = fVar36 * ((float)local_d0 - (float)local_a0);
      fVar31 = fVar40 * ((float)((ulong)local_d0 >> 0x20) - local_a0._4_4_);
      uVar25 = (undefined1)((uint)fVar31 >> 8);
      uVar26 = (undefined1)((uint)fVar31 >> 0x10);
      uVar27 = (undefined1)((uint)fVar31 >> 0x18);
      fVar28 = fVar41 * ((float)uStack_c8 - (float)uStack_98);
      fVar29 = fVar42 * ((float)((ulong)uStack_c8 >> 0x20) - uStack_98._4_4_);
      auVar34[4] = SUB41(fVar31,0);
      auVar34._0_4_ = fVar30;
      auVar34[5] = uVar25;
      auVar34[6] = uVar26;
      auVar34[7] = uVar27;
      auVar34._8_4_ = fVar28;
      auVar34._12_4_ = fVar29;
      auVar5[4] = SUB41(fVar31,0);
      auVar5._0_4_ = fVar30;
      auVar5[5] = uVar25;
      auVar5[6] = uVar26;
      auVar5[7] = uVar27;
      auVar5._8_4_ = fVar28;
      auVar5._12_4_ = fVar29;
      auVar34 = NEON_ext(auVar34,auVar5,8,1);
      if (0.0 <= fVar30 + fVar31 + auVar34._0_4_) goto LAB_030c46d4;
      FUN_030c494c(param_1,auStack_b0,auStack_e0);
      lVar14 = lVar14 + (int)uVar9;
      iVar37 = iVar37 + uVar9;
      lVar16 = lVar16 + ((-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1) +
                        (long)(int)uVar9) * 0x10;
    } while (*(int *)(param_1 + 0x70) <= lVar14);
  }
  local_80[lVar17] = -1;
  goto LAB_030c46e4;
LAB_030c46d4:
  local_80[lVar17] = iVar37;
LAB_030c46e4:
  lVar17 = 1;
  bVar8 = !bVar11;
  bVar11 = false;
  if (bVar8) goto code_r0x030c46f8;
  goto LAB_030c4478;
code_r0x030c46f8:
  iVar37 = *(int *)(param_1 + 0x74);
  uVar45 = NEON_fmov(0x3f800000,4);
  if (local_80[1] == iVar37) {
    if (local_80[0] == -1) {
      uVar46 = 0;
      goto LAB_030c4898;
    }
  }
  else {
    if (local_80[0] != iVar37) {
      lVar16 = *(long *)(param_1 + 0x78);
      memcpy(auStack_b0,(void *)(lVar16 + lVar19 * 0x30),0x30);
      lVar14 = lVar16 + lVar18 * 0x30;
      fVar40 = (float)((ulong)uStack_98 >> 0x20);
      local_ac = '\x02';
      fVar36 = (float)((ulong)local_a0 >> 0x20);
      fVar36 = fVar36 + (*(float *)(lVar14 + 0x14) - fVar36) * 0.5;
      uStack_98 = CONCAT44(fVar40 + (*(float *)(lVar14 + 0x1c) - fVar40) * 0.5,
                           (float)uStack_98 + (*(float *)(lVar14 + 0x18) - (float)uStack_98) * 0.5);
      local_a0 = CONCAT17((char)((uint)fVar36 >> 0x18),
                          CONCAT16((char)((uint)fVar36 >> 0x10),
                                   CONCAT15((char)((uint)fVar36 >> 8),
                                            CONCAT14(SUB41(fVar36,0),
                                                     (float)local_a0 +
                                                     (*(float *)(lVar14 + 0x10) - (float)local_a0) *
                                                     0.5))));
      FUN_030c494c(param_1,lVar16 + (long)iVar37 * 0x30,auStack_b0);
      uVar46 = 0x3f0000003f000000;
      goto LAB_030c4898;
    }
    uVar46 = uVar45;
    local_80[0] = local_80[1];
    if (local_80[1] == -1) goto LAB_030c4898;
  }
  lVar14 = *(long *)(param_1 + 0x78);
  memcpy(auStack_b0,(void *)(lVar14 + (long)local_80[0] * 0x30),0x30);
  lVar14 = lVar14 + lVar18 * 0x30;
  uVar7 = *(undefined8 *)(lVar14 + 0x18);
  uVar6 = *(undefined8 *)(lVar14 + 0x10);
  uVar38 = NEON_fmov(0x3f800000,4);
  uVar32 = NEON_fmov(0xbf800000,4);
  uVar39 = 0;
  if (local_ac == '\0') {
    uVar39 = uVar38;
  }
  if (local_ac != '\x01') {
    uVar32 = uVar39;
  }
  local_110 = fVar41 * fVar41 + fVar36 * fVar36 + fVar40 * fVar40;
  if (local_110 == 0.0) {
    fVar36 = 0.0;
    fVar40 = 0.0;
    fVar41 = 0.0;
    fVar42 = 0.0;
    local_110 = 0.0;
    fStack_10c = 0.0;
  }
  else {
    local_110 = SQRT(local_110);
    fStack_10c = SQRT(fVar41 * fVar41 + fVar36 * fVar36 + fVar40 * fVar40);
    fVar36 = fVar36 / local_110;
    fVar40 = fVar40 / fStack_10c;
    fVar41 = fVar41 / local_110;
    fVar42 = fVar42 / fStack_10c;
  }
  fVar31 = (float)uVar32 * (float)*(undefined8 *)(param_1 + 0x18);
  fVar35 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  fVar30 = (float)local_a0 + fVar36 * fVar31;
  fVar28 = (float)((ulong)local_a0 >> 0x20) + fVar40 * fVar35;
  uVar25 = (undefined1)((uint)fVar28 >> 8);
  uVar26 = (undefined1)((uint)fVar28 >> 0x10);
  uVar27 = (undefined1)((uint)fVar28 >> 0x18);
  fVar29 = (float)uStack_98 + fVar41 * fVar31;
  uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) + fVar42 * fVar35,fVar29);
  local_a0 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(SUB41(fVar28,0),fVar30))));
  memcpy(auStack_e0,param_2,0x30);
  fVar43 = (float)uVar6;
  fVar35 = (float)((ulong)uVar6 >> 0x20);
  fVar44 = (float)uVar7;
  fVar31 = fVar36 * (fVar30 - fVar43);
  fVar28 = fVar40 * ((float)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(SUB41(fVar28,0
                                                  ),fVar30)))) >> 0x20) - fVar35);
  fVar29 = fVar41 * (fVar29 - fVar44);
  fVar30 = fVar31 + fVar28 + fVar29;
  fVar29 = fVar31 + fVar28 + fVar29;
  iVar37 = -(uint)(local_110 == 0.0);
  fVar35 = fVar35 + fVar40 * fVar29;
  uStack_c8 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                       fVar42 * (float)(CONCAT17((char)((uint)fVar29 >> 0x18),
                                                 CONCAT16((char)((uint)fVar29 >> 0x10),
                                                          CONCAT15((char)((uint)fVar29 >> 8),
                                                                   CONCAT14(SUB41(fVar29,0),fVar30))
                                                         )) >> 0x20),fVar44 + fVar41 * fVar30);
  local_d0 = CONCAT17((char)((uint)fVar35 >> 0x18),
                      CONCAT16((char)((uint)fVar35 >> 0x10),
                               CONCAT15((char)((uint)fVar35 >> 8),
                                        CONCAT14(SUB41(fVar35,0),fVar43 + fVar36 * fVar30))));
  bVar22 = ~(byte)((uint)iVar37 >> 8);
  bVar23 = ~(byte)((uint)iVar37 >> 0x10);
  bVar24 = ~(byte)((uint)iVar37 >> 0x18);
  FUN_030c494c(param_1,auStack_b0,auStack_e0);
  uVar46 = CONCAT44(fVar29 / fStack_10c,fVar30 / local_110) &
           CONCAT17(bVar24,CONCAT16(bVar23,CONCAT15(bVar22,CONCAT14(~(byte)iVar37,
                                                                    CONCAT13(bVar24,CONCAT12(bVar23,
                                                  CONCAT11(bVar22,~(byte)iVar37)))))));
LAB_030c4898:
  *(undefined4 *)(param_1 + 0x80) = 0;
  cVar21 = -(cVar21 == '\0');
  uVar33 = CONCAT44((float)(uVar45 >> 0x20) - (float)(uVar46 >> 0x20),(float)uVar45 - (float)uVar46)
  ;
  lVar14 = *(long *)(param_1 + 0x40) + (long)(int)param_3 * 0x80;
  uVar6 = NEON_fmin(uVar33 ^ (uVar33 ^ uVar46) &
                             CONCAT17(cVar21,CONCAT16(cVar21,CONCAT15(cVar21,CONCAT14(cVar21,
                                                  CONCAT13(cVar21,CONCAT12(cVar21,CONCAT11(cVar21,
                                                  cVar21))))))),uVar45,4);
  uVar6 = NEON_fmax(uVar6,0,4);
  *(undefined8 *)(param_1 + 0x70) = 0;
  fVar36 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar40 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  fVar41 = (float)*(undefined8 *)(lVar14 + 0x68);
  fVar30 = (float)((ulong)*(undefined8 *)(lVar14 + 0x68) >> 0x20);
  fVar42 = (float)((ulong)uVar6 >> 0x20);
  uVar2 = *param_2;
  lVar18 = 0;
  fVar36 = fVar36 + (*(float *)(lVar14 + 0x50) - fVar36) * (float)uVar6;
  fVar40 = fVar40 + (*(float *)(lVar14 + 0x54) - fVar40) * fVar42;
  uVar25 = (undefined1)((uint)fVar40 >> 8);
  uVar26 = (undefined1)((uint)fVar40 >> 0x10);
  uVar27 = (undefined1)((uint)fVar40 >> 0x18);
  fVar41 = fVar41 + (*(float *)(lVar14 + 0x58) - fVar41) * (float)uVar6;
  fVar30 = fVar30 + (*(float *)(lVar14 + 0x5c) - fVar30) * fVar42;
  if ((*(uint *)(param_1 + 0x84) & 0x7fffffff) == 0) {
    FUN_030c6dc0(param_1 + 0x78,1);
    lVar18 = (long)*(int *)(param_1 + 0x80);
  }
  puVar15 = (undefined4 *)(*(long *)(param_1 + 0x78) + lVar18 * 0x30);
  *puVar15 = uVar2;
  puVar15[1] = 0x10002;
  *(ulong *)(puVar15 + 6) = CONCAT44(fVar30,fVar41);
  *(ulong *)(puVar15 + 4) =
       CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(SUB41(fVar40,0),fVar36))));
  *(ulong *)(puVar15 + 10) = CONCAT44(fVar30,fVar41);
  *(ulong *)(puVar15 + 8) =
       CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(SUB41(fVar40,0),fVar36))));
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return 1;
}


