/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00856b98; name: FUN_00856b98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00856b98(undefined1 param_1 [16],long param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  float *pfVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  uint uVar44;
  float fVar45;
  undefined1 auVar46 [12];
  int iVar54;
  int iVar55;
  undefined1 auVar47 [12];
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  float local_2e0;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float *local_2b0;
  undefined8 local_2a8;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  plVar12 = (long *)PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d19b0;
  puVar17 = *(undefined8 **)(param_2 + 0x18);
  local_88 = puVar17[3];
  local_78 = puVar17[5];
  local_98 = puVar17[1];
  local_a0 = *puVar17;
  local_90 = puVar17[2];
  local_80 = puVar17[4];
  cVar1 = *(char *)((long)puVar17 + 0x1fe);
  cVar2 = *(char *)((long)puVar17 + 0x1fc);
  if (3 < *(uint *)(puVar17 + 0x3e)) {
    FUN_032260f8(&local_b0,&local_2b0,0x200);
    FUN_0322b1e0(&local_b0,"Invalid dimemsions for that operation");
    iVar10 = FUN_03226f50(0x172cdf48,&local_2b0,
                          "D:/CI/Stable_Package_Build_nx64/Source/Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp"
                          ,0x695);
    if (iVar10 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(&local_b0);
    goto LAB_00857628;
  }
  local_2e0 = param_1._0_4_;
  fVar19 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x150) * local_2e0;
  fVar34 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x150) >> 0x20) * local_2e0;
  switch(*(uint *)(puVar17 + 0x3e)) {
  case 0:
    local_2b0 = (float *)0x0;
    local_2a8._0_4_ = 0;
    local_2a8._4_4_ = 0x80000000;
    auVar59 = *(undefined1 (*) [16])(puVar17[0xb] + 0x10);
    fStack_2c8 = auVar59._8_4_;
    fStack_2c4 = auVar59._12_4_;
    local_2d0 = auVar59._0_4_;
    fStack_2cc = auVar59._4_4_;
    FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,6);
    if ((int)local_2a8 != 6) {
      local_2a8._0_4_ = 6;
    }
    fVar70 = -fVar19;
    fVar35 = -fVar34;
    fVar36 = *(float *)(puVar5 + 0x200);
    fVar63 = *(float *)(puVar5 + 0x204);
    fVar40 = *(float *)(puVar5 + 0x208);
    fVar42 = *(float *)(puVar5 + 0x20c);
    fVar45 = *(float *)(puVar5 + 0x210);
    fVar41 = *(float *)(puVar5 + 0x214);
    fVar43 = *(float *)(puVar5 + 0x218);
    fVar68 = *(float *)(puVar5 + 0x21c);
    local_2b0[2] = fStack_2c8 + fVar19 * fVar40;
    local_2b0[3] = fStack_2c4 + fVar34 * fVar42;
    *local_2b0 = local_2d0 + fVar19 * fVar36;
    local_2b0[1] = fStack_2cc + fVar34 * fVar63;
    local_2b0[6] = fStack_2c8 + fVar70 * fVar40;
    local_2b0[7] = fStack_2c4 + fVar35 * fVar42;
    local_2b0[4] = local_2d0 + fVar70 * fVar36;
    local_2b0[5] = fStack_2cc + fVar35 * fVar63;
    local_2b0[10] = fStack_2c8 + fVar19 * fVar43;
    local_2b0[0xb] = fStack_2c4 + fVar34 * fVar68;
    local_2b0[8] = local_2d0 + fVar19 * fVar45;
    local_2b0[9] = fStack_2cc + fVar34 * fVar41;
    fVar36 = *(float *)(puVar5 + 0x220);
    fVar63 = *(float *)(puVar5 + 0x224);
    fVar40 = *(float *)(puVar5 + 0x228);
    fVar42 = *(float *)(puVar5 + 0x22c);
    local_2b0[0xe] = fStack_2c8 + fVar70 * fVar43;
    local_2b0[0xf] = fStack_2c4 + fVar35 * fVar68;
    local_2b0[0xc] = local_2d0 + fVar70 * fVar45;
    local_2b0[0xd] = fStack_2cc + fVar35 * fVar41;
    local_2b0[0x12] = fStack_2c8 + fVar19 * fVar40;
    local_2b0[0x13] = fStack_2c4 + fVar34 * fVar42;
    local_2b0[0x10] = local_2d0 + fVar19 * fVar36;
    local_2b0[0x11] = fStack_2cc + fVar34 * fVar63;
    auVar20._0_8_ = CONCAT44(fStack_2cc + fVar35 * fVar63,local_2d0 + fVar70 * fVar36);
    auVar20._8_4_ = fStack_2c8 + fVar70 * fVar40;
    auVar20._12_4_ = fStack_2c4 + fVar35 * fVar42;
    *(long *)(local_2b0 + 0x16) = auVar20._8_8_;
    *(undefined8 *)(local_2b0 + 0x14) = auVar20._0_8_;
    break;
  case 1:
    local_2b0 = (float *)0x0;
    local_2a8 = 0x8000000000000000;
    FUN_02e9b11c(&local_2b0,PTR_PTR_047d1a50,10);
    lVar16 = *(long *)(param_2 + 0x18);
    lVar13 = (long)(int)local_2a8;
    lVar18 = lVar13 + *(int *)(lVar16 + 0x60);
    iVar10 = (int)lVar18;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) < iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,lVar18);
    }
    plVar15 = *(long **)(lVar16 + 0x58);
    if (plVar15 != (long *)0x0) {
      pfVar11 = local_2b0 + lVar13 * 4;
      do {
        lVar18 = plVar15[2];
        *(long *)(pfVar11 + 2) = plVar15[3];
        *(long *)pfVar11 = lVar18;
        plVar15 = (long *)*plVar15;
        pfVar11 = pfVar11 + 4;
      } while (plVar15 != (long *)0x0);
    }
    fVar36 = local_2b0[4];
    fVar63 = local_2b0[5];
    fVar40 = local_2b0[6];
    fVar42 = local_2b0[7];
    fVar72 = (float)*(undefined8 *)local_2b0;
    auVar37._0_4_ = fVar36 - fVar72;
    fVar73 = (float)((ulong)*(undefined8 *)local_2b0 >> 0x20);
    auVar37._4_4_ = fVar63 - fVar73;
    fVar74 = (float)*(undefined8 *)(local_2b0 + 2);
    auVar37._8_4_ = fVar40 - fVar74;
    fVar75 = (float)((ulong)*(undefined8 *)(local_2b0 + 2) >> 0x20);
    auVar39._12_4_ = fVar42 - fVar75;
    auVar39._0_12_ = auVar37;
    auVar21._12_4_ = 0;
    auVar21._0_12_ = auVar37;
    auVar58._8_8_ = _UNK_03caaa68;
    auVar58._0_8_ = _DAT_03caaa60;
    auVar64._8_8_ = _UNK_03cabbb8;
    auVar64._0_8_ = _DAT_03cabbb0;
    auVar52 = a64_TBL(ZEXT816(0),auVar21,auVar64);
    fVar41 = auVar52._0_4_;
    fVar43 = fVar41 * fVar41;
    fVar68 = auVar52._4_4_ * auVar52._4_4_;
    fVar45 = auVar52._8_4_ * auVar52._8_4_;
    fVar70 = auVar52._12_4_ * auVar52._12_4_;
    auVar3._4_4_ = fVar68;
    auVar3._0_4_ = fVar43;
    auVar3._8_4_ = fVar45;
    auVar3._12_4_ = fVar70;
    auVar4._4_4_ = fVar68;
    auVar4._0_4_ = fVar43;
    auVar4._8_4_ = fVar45;
    auVar4._12_4_ = fVar70;
    auVar71 = NEON_ext(auVar3,auVar4,8,1);
    auVar59 = a64_TBL(ZEXT816(0),auVar21,auVar58);
    fVar45 = auVar71._0_4_ + auVar71._4_4_;
    auVar23._4_12_ = auVar59._4_12_;
    auVar23._0_4_ = -auVar59._0_4_;
    auVar22._0_8_ =
         CONCAT44(-(uint)(auVar37._0_4_ * auVar37._0_4_ + auVar37._4_4_ * auVar37._4_4_ <
                         fVar43 + fVar68 + fVar45),
                  -(uint)(auVar37._0_4_ * auVar37._0_4_ + auVar37._4_4_ * auVar37._4_4_ <
                         fVar43 + fVar68 + fVar45));
    auVar65._4_12_ = auVar52._4_12_;
    auVar65._0_4_ = -fVar41;
    fVar41 = 0.0;
    fVar70 = 0.0;
    fVar69 = 0.0;
    fVar68 = 0.0;
    auVar22._8_8_ = auVar22._0_8_;
    auVar23 = auVar23 ^ (auVar23 ^ auVar65) & auVar22;
    auVar59 = NEON_ext(auVar39,auVar39,4,1);
    auVar52 = NEON_ext(auVar23,auVar23,8,1);
    uVar76 = NEON_ext(auVar23._0_8_,auVar52._0_8_,4,1);
    fVar45 = auVar23._0_4_;
    fVar43 = auVar23._4_4_;
    fVar35 = auVar23._8_4_;
    auVar60._0_4_ = auVar37._0_4_ * (float)uVar76 - auVar59._0_4_ * fVar45;
    auVar60._4_4_ = auVar37._4_4_ * (float)((ulong)uVar76 >> 0x20) - auVar59._4_4_ * fVar43;
    auVar60._8_4_ = auVar37._8_4_ * fVar45 - auVar37._0_4_ * fVar35;
    auVar60._12_4_ = auVar39._12_4_ * fVar43 - auVar37._4_4_ * auVar23._12_4_;
    auVar59 = NEON_ext(auVar60,auVar60,4,1);
    fVar56 = fVar45 * fVar45 + fVar43 * fVar43 + fVar35 * fVar35;
    auVar48 = ZEXT816(0);
    if (fVar56 != 0.0) {
      fVar56 = SQRT(fVar56);
      fVar53 = SQRT(fVar45 * fVar45 + fVar43 * fVar43 + fVar35 * fVar35);
      auVar48._0_4_ = fVar45 / fVar56;
      auVar48._4_4_ = fVar43 / fVar53;
      auVar48._8_4_ = fVar35 / fVar56;
      auVar48._12_4_ = auVar23._12_4_ / fVar53;
    }
    fVar43 = auVar59._0_4_;
    fVar35 = auVar59._4_4_;
    uVar76 = CONCAT44(fVar34,fVar19);
    fVar45 = auVar60._0_4_ * auVar60._0_4_ + fVar43 * fVar43 + fVar35 * fVar35;
    auVar66._8_8_ = uVar76;
    auVar66._0_8_ = uVar76;
    if (fVar45 != 0.0) {
      fVar45 = SQRT(fVar45);
      fVar68 = SQRT(auVar60._0_4_ * auVar60._0_4_ + fVar43 * fVar43 + fVar35 * fVar35);
      fVar41 = fVar43 / fVar45;
      fVar70 = fVar35 / fVar68;
      fVar69 = auVar60._0_4_ / fVar45;
      fVar68 = 0.0 / fVar68;
    }
    fVar45 = fVar19 * auVar48._0_4_;
    fVar43 = fVar34 * auVar48._4_4_;
    fVar35 = fVar19 * auVar48._8_4_;
    fVar56 = fVar34 * auVar48._12_4_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
      auVar66._8_4_ = fVar19;
      auVar66._12_4_ = fVar34;
    }
    auVar24._0_8_ = CONCAT44(fVar73 + fVar43,fVar72 + fVar45);
    auVar24._8_4_ = fVar74 + fVar35;
    auVar24._12_4_ = fVar75 + fVar56;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar24._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar24._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
      auVar66._8_4_ = fVar19;
      auVar66._12_4_ = fVar34;
    }
    fVar41 = auVar66._0_4_ * fVar41;
    fVar70 = auVar66._4_4_ * fVar70;
    fVar69 = auVar66._8_4_ * fVar69;
    fVar68 = auVar66._12_4_ * fVar68;
    auVar25._0_8_ = CONCAT44(fVar73 - fVar43,fVar72 - fVar45);
    auVar25._8_4_ = fVar74 - fVar35;
    auVar25._12_4_ = fVar75 - fVar56;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar25._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar25._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar26._0_8_ = CONCAT44(fVar73 + fVar70,fVar72 + fVar41);
    auVar26._8_4_ = fVar74 + fVar69;
    auVar26._12_4_ = fVar75 + fVar68;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar26._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar26._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar27._0_8_ = CONCAT44(fVar73 - fVar70,fVar72 - fVar41);
    auVar27._8_4_ = fVar74 - fVar69;
    auVar27._12_4_ = fVar75 - fVar68;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar27._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar27._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar28._0_8_ = CONCAT44(fVar63 + fVar43,fVar36 + fVar45);
    auVar28._8_4_ = fVar40 + fVar35;
    auVar28._12_4_ = fVar42 + fVar56;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar28._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar28._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar29._0_8_ = CONCAT44(fVar63 - fVar43,fVar36 - fVar45);
    auVar29._8_4_ = fVar40 - fVar35;
    auVar29._12_4_ = fVar42 - fVar56;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar29._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar29._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar30._0_8_ = CONCAT44(fVar63 + fVar70,fVar36 + fVar41);
    auVar30._8_4_ = fVar40 + fVar69;
    auVar30._12_4_ = fVar42 + fVar68;
    iVar10 = (int)((long)iVar10 + 1);
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar30._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar30._0_8_;
    local_2a8._0_4_ = iVar10;
    if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10 + 1);
    }
    auVar31._0_8_ = CONCAT44(fVar63 - fVar70,fVar36 - fVar41);
    auVar31._8_4_ = fVar40 - fVar69;
    auVar31._12_4_ = fVar42 - fVar68;
    *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar31._8_8_;
    *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar31._0_8_;
    local_2a8._0_4_ = (int)((long)iVar10 + 1);
    break;
  case 2:
    local_2b0 = (float *)0x0;
    local_2a8 = 0x8000000000000000;
    auVar51 = *(undefined1 (*) [16])(puVar17 + 0x16);
    if (auVar51._12_4_ == *(float *)(PTR_DAT_047d19b0 + 0x240)) {
      plVar12 = (long *)puVar17[0xb];
      auVar49 = ZEXT816(0);
      puVar17[0x17] = 0;
      puVar17[0x16] = 0;
      if (plVar12 != (long *)0x0) {
        auVar59 = ZEXT816(0);
        do {
          auVar49._0_8_ =
               CONCAT44(auVar59._4_4_ + *(float *)((long)plVar12 + 0x14),
                        auVar59._0_4_ + *(float *)(plVar12 + 2));
          auVar49._8_4_ = auVar59._8_4_ + *(float *)(plVar12 + 3);
          auVar49._12_4_ = auVar59._12_4_ + *(float *)((long)plVar12 + 0x1c);
          puVar17[0x17] = auVar49._8_8_;
          puVar17[0x16] = auVar49._0_8_;
          plVar12 = (long *)*plVar12;
          auVar59 = auVar49;
        } while (plVar12 != (long *)0x0);
      }
      auVar46 = auVar49._0_12_;
      iVar10 = *(int *)(puVar17 + 0xc);
      if (iVar10 != 0) {
        uVar76 = NEON_scvtf(CONCAT44(iVar10,iVar10),4);
        fVar19 = (float)*(undefined8 *)(puVar5 + 0x60) / (float)uVar76;
        fVar34 = (float)((ulong)*(undefined8 *)(puVar5 + 0x60) >> 0x20) /
                 (float)((ulong)uVar76 >> 0x20);
        auVar46._0_8_ = CONCAT44(auVar49._4_4_ * fVar34,auVar49._0_4_ * fVar19);
        auVar46._8_4_ = auVar49._8_4_ * fVar19;
        auVar50._12_4_ = auVar49._12_4_ * fVar34;
        auVar50._0_12_ = auVar46;
        puVar17[0x17] = auVar50._8_8_;
        puVar17[0x16] = auVar46._0_8_;
      }
      auVar51._12_4_ = 0;
      auVar51._0_12_ = auVar46;
      puVar17[0x17] = (ulong)auVar46._8_4_;
      puVar17[0x16] = auVar46._0_8_;
      puVar17 = *(undefined8 **)(param_2 + 0x18);
    }
    auVar59 = *(undefined1 (*) [16])(puVar17 + 0x24);
    iVar10 = *(int *)(puVar17 + 0xc);
    fStack_2c8 = auVar59._8_4_;
    fStack_2c4 = auVar59._12_4_;
    local_2d0 = auVar59._0_4_;
    fStack_2cc = auVar59._4_4_;
    if (iVar10 < 1) {
      iVar54 = 0;
      if (0 < iVar10) goto LAB_00857204;
    }
    else {
      FUN_02e9b11c(&local_2b0,PTR_PTR_047d1a50,iVar10 * 3);
      puVar17 = *(undefined8 **)(param_2 + 0x18);
      iVar10 = (int)local_2a8 + *(int *)(puVar17 + 0xc);
      iVar54 = (int)local_2a8;
      if ((int)(local_2a8._4_4_ & 0x7fffffff) < iVar10) {
LAB_00857204:
        FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,(long)iVar10);
      }
    }
    plVar12 = (long *)puVar17[0xb];
    if (plVar12 != (long *)0x0) {
      pfVar11 = local_2b0 + (long)iVar54 * 4;
      do {
        auVar59 = *(undefined1 (*) [16])(plVar12 + 2);
        *(long *)(pfVar11 + 2) = auVar59._8_8_;
        *(long *)pfVar11 = auVar59._0_8_;
        plVar12 = (long *)*plVar12;
        pfVar11 = pfVar11 + 4;
      } while (plVar12 != (long *)0x0);
    }
    puVar5 = PTR_PTR_047d1a50;
    plVar12 = *(long **)(*(long *)(param_2 + 0x18) + 0x58);
    local_2a8._0_4_ = iVar10;
    if (plVar12 != (long *)0x0) {
      do {
        lVar18 = (long)(int)local_2a8;
        iVar10 = (int)local_2a8;
        if ((int)(local_2a8._4_4_ & 0x7fffffff) <= (int)local_2a8) {
          FUN_02e8df28(&local_2b0,puVar5,lVar18 + 1);
          iVar10 = (int)local_2a8;
        }
        local_2a8._0_4_ = (int)(lVar18 + 1);
        auVar33._0_8_ =
             CONCAT44(fStack_2cc * local_2e0 + *(float *)((long)plVar12 + 0x14),
                      local_2d0 * local_2e0 + *(float *)(plVar12 + 2));
        auVar33._8_4_ = fStack_2c8 * local_2e0 + *(float *)(plVar12 + 3);
        auVar33._12_4_ = fStack_2c4 * local_2e0 + *(float *)((long)plVar12 + 0x1c);
        *(long *)(local_2b0 + (long)iVar10 * 4 + 2) = auVar33._8_8_;
        *(undefined8 *)(local_2b0 + (long)iVar10 * 4) = auVar33._0_8_;
        lVar18 = (long)(int)local_2a8;
        if ((int)(local_2a8._4_4_ & 0x7fffffff) <= (int)local_2a8) {
          FUN_02e8df28(&local_2b0,puVar5,lVar18 + 1);
        }
        iVar10 = (int)(lVar18 + 1);
        auVar32._0_8_ =
             CONCAT44(-local_2e0 * fStack_2cc + *(float *)((long)plVar12 + 0x14),
                      -local_2e0 * local_2d0 + *(float *)(plVar12 + 2));
        auVar32._8_4_ = -local_2e0 * fStack_2c8 + *(float *)(plVar12 + 3);
        auVar32._12_4_ = -local_2e0 * fStack_2c4 + *(float *)((long)plVar12 + 0x1c);
        *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar32._8_8_;
        *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar32._0_8_;
        plVar12 = (long *)*plVar12;
        local_2a8._0_4_ = iVar10;
      } while (plVar12 != (long *)0x0);
    }
    local_b0 = local_2b0;
    local_a8 = CONCAT44(0x10,(int)local_2a8);
    iVar10 = FUN_00850208(param_2,&local_b0,&local_a0);
    uVar44 = local_2a8._4_4_;
    local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
    plVar12 = (long *)PTR_PTR_047d1a50;
    if (iVar10 != 3) {
      if ((uVar44 & 0x7fffffff) == 0) {
        FUN_02e9b11c(&local_2b0,PTR_PTR_047d1a50,1);
        lVar18 = (long)(int)local_2a8;
      }
      else {
        lVar18 = 0;
      }
      *(long *)(local_2b0 + lVar18 * 4 + 2) = auVar51._8_8_;
      *(long *)(local_2b0 + lVar18 * 4) = auVar51._0_8_;
      local_2a8._0_4_ = 1;
      local_b0 = local_2b0;
      local_a8 = 0x1000000001;
      FUN_00850208(param_2,&local_b0,&local_a0);
      uVar9 = FUN_00856b98(param_1,param_2);
      uVar44 = local_2a8._4_4_;
      uVar14 = (ulong)local_2a8._4_4_;
      local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
      if ((-1 < (int)uVar44) && (local_2b0 != (float *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2b0,uVar14 << 4);
      }
      return uVar9;
    }
    goto joined_r0x00857604;
  case 3:
    local_2b0 = (float *)0x0;
    local_2a8 = 0x8000000000000000;
    if (*(int *)(puVar17 + 0xf) < 1) {
      iVar10 = 0;
      lVar18 = (long)*(int *)(puVar17 + 0xc);
      if (0 < *(int *)(puVar17 + 0xc)) goto LAB_0085734c;
    }
    else {
      FUN_02e9b11c(&local_2b0,PTR_PTR_047d1a50,*(int *)(puVar17 + 0xf) * 6);
      puVar17 = *(undefined8 **)(param_2 + 0x18);
      lVar18 = (long)*(int *)(puVar17 + 0xc) + (long)(int)local_2a8;
      iVar10 = (int)local_2a8;
      if ((int)(local_2a8._4_4_ & 0x7fffffff) < (int)lVar18) {
LAB_0085734c:
        FUN_02e8df28(&local_2b0,PTR_PTR_047d1a50,lVar18);
      }
    }
    plVar12 = (long *)puVar17[0xb];
    if (plVar12 != (long *)0x0) {
      pfVar11 = local_2b0 + (long)iVar10 * 4;
      do {
        auVar59 = *(undefined1 (*) [16])(plVar12 + 2);
        *(long *)(pfVar11 + 2) = auVar59._8_8_;
        *(long *)pfVar11 = auVar59._0_8_;
        plVar12 = (long *)*plVar12;
        pfVar11 = pfVar11 + 4;
      } while (plVar12 != (long *)0x0);
    }
    puVar7 = PTR_PTR_047d1bb0;
    puVar6 = PTR_PTR_047d1a50;
    plVar12 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
    local_2a8._0_4_ = (int)lVar18;
    if (plVar12 != (long *)0x0) {
      uVar76 = *(undefined8 *)(puVar5 + 0x60);
      do {
        auVar38 = SUB1612(ZEXT816(0),0);
        lVar18 = plVar12[2];
        lVar13 = plVar12[3];
        lVar16 = plVar12[4];
        auVar59 = *(undefined1 (*) [16])(lVar18 + 0x10);
        fVar19 = auVar59._0_4_;
        auVar52._0_4_ = *(float *)(lVar13 + 0x10) - fVar19;
        fVar34 = auVar59._4_4_;
        auVar52._4_4_ = *(float *)(lVar13 + 0x14) - fVar34;
        fVar36 = auVar59._8_4_;
        auVar52._8_4_ = *(float *)(lVar13 + 0x18) - fVar36;
        auVar52._12_4_ = *(float *)(lVar13 + 0x1c) - auVar59._12_4_;
        auVar61 = NEON_ext(auVar52,auVar52,4,1);
        auVar71._0_4_ = *(float *)(lVar16 + 0x10) - fVar19;
        auVar71._4_4_ = *(float *)(lVar16 + 0x14) - fVar34;
        auVar71._8_4_ = *(float *)(lVar16 + 0x18) - fVar36;
        auVar71._12_4_ = *(float *)(lVar16 + 0x1c) - auVar59._12_4_;
        auVar67 = NEON_ext(auVar71,auVar71,4,1);
        auVar62._0_4_ = auVar52._0_4_ * auVar67._0_4_ - auVar71._0_4_ * auVar61._0_4_;
        auVar62._4_4_ = auVar52._4_4_ * auVar67._4_4_ - auVar71._4_4_ * auVar61._4_4_;
        auVar62._8_4_ = auVar52._8_4_ * auVar71._0_4_ - auVar71._8_4_ * auVar52._0_4_;
        auVar62._12_4_ = auVar52._12_4_ * auVar71._4_4_ - auVar71._12_4_ * auVar52._4_4_;
        auVar52 = NEON_ext(auVar62,auVar62,4,1);
        fVar40 = auVar52._0_4_;
        fVar42 = auVar52._4_4_;
        fVar63 = fVar40 * fVar40 + fVar42 * fVar42 + auVar62._0_4_ * auVar62._0_4_;
        if (fVar63 != 0.0) {
          fVar63 = SQRT(fVar63);
          auVar38._0_4_ = fVar40 / fVar63;
          auVar38._4_4_ =
               fVar42 / SQRT(fVar40 * fVar40 + fVar42 * fVar42 + auVar62._0_4_ * auVar62._0_4_);
          auVar38._8_4_ = auVar62._0_4_ / fVar63;
        }
        fVar63 = auVar38._0_4_;
        fVar40 = auVar38._4_4_;
        fVar42 = auVar38._8_4_;
        auVar52 = **(undefined1 (**) [16])puVar7;
        iVar10 = CONCAT13(auVar52[3] & auVar38[3],
                          CONCAT12(auVar52[2] & auVar38[2],
                                   CONCAT11(auVar52[1] & auVar38[1],auVar52[0] & auVar38[0])));
        auVar57._0_8_ =
             CONCAT17(auVar52[7] & auVar38[7],
                      CONCAT16(auVar52[6] & auVar38[6],
                               CONCAT15(auVar52[5] & auVar38[5],
                                        CONCAT14(auVar52[4] & auVar38[4],iVar10))));
        auVar57[8] = auVar52[8] & auVar38[8];
        auVar57[9] = auVar52[9] & auVar38[9];
        auVar57[10] = auVar52[10] & auVar38[10];
        auVar57[0xb] = auVar52[0xb] & auVar38[0xb];
        iVar10 = -(uint)(iVar10 == auVar52._0_4_);
        iVar54 = -(uint)((int)((ulong)auVar57._0_8_ >> 0x20) == auVar52._4_4_);
        iVar55 = -(uint)(auVar57._8_4_ == auVar52._8_4_);
        uVar44 = CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar10 >> 8),~(byte)iVar10)));
        auVar47._0_8_ =
             CONCAT17(~(byte)((uint)iVar54 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar54 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar54 >> 8),CONCAT14(~(byte)iVar54,uVar44))))
        ;
        auVar47[8] = ~(byte)iVar55;
        auVar47[9] = ~(byte)((uint)iVar55 >> 8);
        auVar47[10] = ~(byte)((uint)iVar55 >> 0x10);
        auVar47[0xb] = ~(byte)((uint)iVar55 >> 0x18);
        fVar45 = ABS((fVar42 * fVar42 + fVar63 * fVar63 + fVar40 * fVar40) - (float)uVar76);
        bVar8 = false;
        if (((uVar44 & (uint)((ulong)auVar47._0_8_ >> 0x20) & auVar47._8_4_) != 0) &&
           (bVar8 = false, !NAN(fVar45))) {
          bVar8 = fVar45 < 0.0001;
        }
        if (bVar8) {
          fVar45 = local_2e0 * fVar63;
          fVar41 = local_2e0 * fVar40;
          fVar43 = local_2e0 * fVar42;
          fVar19 = local_2e0 * -(fVar19 * fVar63 + fVar34 * fVar40 + fVar36 * fVar42);
          lVar13 = (long)(int)local_2a8;
          if ((int)(local_2a8._4_4_ & 0x7fffffff) <= (int)local_2a8) {
            FUN_02e8df28(&local_2b0,puVar6,lVar13 + 1);
            auVar59 = *(undefined1 (*) [16])(lVar18 + 0x10);
          }
          auVar61._0_8_ = CONCAT44(fVar41 + auVar59._4_4_,fVar45 + auVar59._0_4_);
          auVar61._8_4_ = fVar43 + auVar59._8_4_;
          auVar61._12_4_ = fVar19 + auVar59._12_4_;
          iVar54 = (int)(lVar13 + 1);
          *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar61._8_8_;
          *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar61._0_8_;
          lVar18 = plVar12[3];
          iVar10 = iVar54;
          if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar54) {
            local_2a8._0_4_ = iVar54;
            FUN_02e8df28(&local_2b0,puVar6,(long)iVar54 + 1);
            iVar10 = (int)local_2a8;
          }
          local_2a8._0_4_ = (int)((long)iVar54 + 1);
          auVar59._0_8_ =
               CONCAT44(fVar41 + *(float *)(lVar18 + 0x14),fVar45 + *(float *)(lVar18 + 0x10));
          auVar59._8_4_ = fVar43 + *(float *)(lVar18 + 0x18);
          auVar59._12_4_ = fVar19 + *(float *)(lVar18 + 0x1c);
          *(long *)(local_2b0 + (long)iVar10 * 4 + 2) = auVar59._8_8_;
          *(undefined8 *)(local_2b0 + (long)iVar10 * 4) = auVar59._0_8_;
          lVar13 = plVar12[4];
          lVar18 = (long)(int)local_2a8;
          if ((int)(local_2a8._4_4_ & 0x7fffffff) <= (int)local_2a8) {
            FUN_02e8df28(&local_2b0,puVar6,lVar18 + 1);
          }
          auVar67._0_8_ =
               CONCAT44(fVar41 + *(float *)(lVar13 + 0x14),fVar45 + *(float *)(lVar13 + 0x10));
          auVar67._8_4_ = fVar43 + *(float *)(lVar13 + 0x18);
          auVar67._12_4_ = fVar19 + *(float *)(lVar13 + 0x1c);
          *(long *)(local_2b0 + (long)(int)local_2a8 * 4 + 2) = auVar67._8_8_;
          *(undefined8 *)(local_2b0 + (long)(int)local_2a8 * 4) = auVar67._0_8_;
          local_2a8._0_4_ = (int)(lVar18 + 1);
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    local_b0 = local_2b0;
    local_a8 = CONCAT44(0x10,(int)local_2a8);
    FUN_00850208(param_2,&local_b0,&local_a0);
    uVar44 = local_2a8._4_4_;
    local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
    plVar12 = (long *)PTR_PTR_047d1a50;
joined_r0x00857604:
    PTR_PTR_047d1a50 = (undefined *)plVar12;
    if (((int)uVar44 < 0) || (local_2b0 == (float *)0x0)) goto LAB_00857628;
    lVar18 = *plVar12;
    goto LAB_00857620;
  }
  local_a8 = CONCAT44(0x10,(int)local_2a8);
  local_b0 = local_2b0;
  FUN_00850208(param_2,&local_b0,&local_a0);
  uVar44 = local_2a8._4_4_;
  local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
  if ((-1 < (int)uVar44) && (local_2b0 != (float *)0x0)) {
    lVar18 = *plVar12;
LAB_00857620:
    (**(code **)(lVar18 + 0x20))(plVar12,local_2b0,(ulong)uVar44 << 4);
  }
LAB_00857628:
  if (*(int *)(*(long *)(param_2 + 0x18) + 0x1f0) == 3) {
    if (cVar1 != '\0') {
      *(undefined4 *)(*(long *)(param_2 + 0x18) + 4) = 0x3f7fff58;
      FUN_0085cd70(*(undefined8 *)(param_2 + 0x18));
    }
    if (cVar2 != '\0') {
      FUN_0085dd34(*(undefined8 *)(param_2 + 0x18));
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


