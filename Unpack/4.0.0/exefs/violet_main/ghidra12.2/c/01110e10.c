/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01110e10; name: FUN_01110e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01110e10(long param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  bool bVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  int iVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar47;
  int iVar49;
  undefined8 uVar48;
  int iVar50;
  int iVar51;
  undefined4 uVar52;
  float fVar53;
  float fStack_2ec;
  float fStack_2dc;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2a8;
  ulong uStack_2a0;
  int local_298;
  int local_294;
  int iStack_290;
  int local_28c;
  int iStack_288;
  int local_284;
  ulong auStack_280 [64];
  
  uVar48 = *(undefined8 *)*param_2;
  auVar14 = *param_2;
  fStack_2b8 = (float)*(undefined8 *)(*param_2 + 8);
  uStack_2b4 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  local_2c0 = (float)uVar48;
  fStack_2bc = (float)((ulong)uVar48 >> 0x20);
  memset(&local_298,0,0x218);
  fVar38 = *(float *)(param_3 + 4);
  fVar41 = *(float *)(param_3 + 5);
  fVar43 = *(float *)((long)param_3 + 0x2c);
  lVar18 = (long)*(int *)(param_3 + 0xc) * 0x10;
  uVar52 = *(undefined4 *)(param_3 + 8);
  auVar44._0_4_ = fVar38 * fVar38 + 0.0;
  auVar44._4_4_ = fVar41 * fVar41 + 0.0;
  auVar44._8_4_ = fVar38 * fVar38 + 0.0;
  auVar44._12_4_ = fVar41 * fVar41 + 0.0;
  auVar44 = NEON_ext(auVar44,auVar44,4,1);
  fVar29 = auVar44._0_4_ + auVar44._4_4_;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  if ((&DAT_0456f72e)[lVar18] != '\0') {
    uVar30 = (char)uVar52;
    uVar31 = (char)((uint)uVar52 >> 8);
    uVar32 = (char)((uint)uVar52 >> 0x10);
    uVar33 = (char)((uint)uVar52 >> 0x18);
  }
  iVar47 = -(uint)(fVar29 == 0.0);
  iVar49 = -(uint)(auVar44._8_4_ + auVar44._12_4_ == 0.0);
  iVar50 = -(uint)(auVar44._0_4_ + auVar44._4_4_ == 0.0);
  iVar51 = -(uint)(auVar44._8_4_ + auVar44._12_4_ == 0.0);
  fVar42 = (float)(0x5f1ffff9 - ((uint)fVar29 >> 1));
  fVar42 = (fVar29 * -0.70395225 * fVar42 * fVar42 + 1.6819141) * fVar42;
  fVar29 = *(float *)(&DAT_0456f724 + lVar18) +
           (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
  auVar45._8_8_ = _UNK_03caa5b8;
  auVar45._0_8_ = _DAT_03caa5b0;
  fVar53 = *(float *)(&DAT_0456f728 + lVar18) +
           (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
  uVar7 = *(ushort *)((long)param_3 + 0x6c);
  auVar12._4_4_ = fVar42 * 0.0;
  auVar12._0_4_ = fVar38 * fVar42;
  auVar12._8_4_ = fVar41 * fVar42;
  auVar12._12_4_ = fVar42 * 0.0;
  auVar10[1] = ~(byte)((uint)iVar47 >> 8);
  auVar10[0] = ~(byte)iVar47;
  auVar10[2] = ~(byte)((uint)iVar47 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar47 >> 0x18);
  auVar10[4] = ~(byte)iVar49;
  auVar10[5] = ~(byte)((uint)iVar49 >> 8);
  auVar10[6] = ~(byte)((uint)iVar49 >> 0x10);
  auVar10[7] = ~(byte)((uint)iVar49 >> 0x18);
  auVar10[8] = ~(byte)iVar50;
  auVar10[9] = ~(byte)((uint)iVar50 >> 8);
  auVar10[10] = ~(byte)((uint)iVar50 >> 0x10);
  auVar10[0xb] = ~(byte)((uint)iVar50 >> 0x18);
  auVar10[0xc] = ~(byte)iVar51;
  auVar10[0xd] = ~(byte)((uint)iVar51 >> 8);
  auVar10[0xe] = ~(byte)((uint)iVar51 >> 0x10);
  auVar10[0xf] = ~(byte)((uint)iVar51 >> 0x18);
  auVar45 = auVar45 ^ (auVar45 ^ auVar12) & auVar10;
  if ((uVar7 >> 2 & 1) == 0) {
    FUN_00d4f440((char)uVar48,fVar29,fVar53);
  }
  else {
    FUN_0144e40c((char)uVar48,fVar29,fVar53,auVar45,fVar43,&local_298);
  }
  uVar8 = *(ushort *)((long)param_3 + 0x6c);
  if ((uVar8 & 1) != 0) {
    auVar39._8_8_ = 0;
    auVar39._0_8_ = (ulong)param_3[1] >> 0x20;
    FUN_02a80918((char)*param_3,auVar39,0,&local_298);
    uVar8 = *(ushort *)((long)param_3 + 0x6c);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    auVar40._8_8_ = 0;
    auVar40._0_8_ = (ulong)param_3[3] >> 0x20;
    FUN_02a80918((char)param_3[2],auVar40,0,&local_298);
    uVar8 = *(ushort *)((long)param_3 + 0x6c);
  }
  if ((uVar8 >> 0xd & 1) != 0) {
    FUN_01208278(&local_298);
  }
  if ((&DAT_0456f72c)[lVar18] == '\0') {
    uVar11 = *(undefined8 *)(*param_2 + 8);
    uVar34 = (undefined1)uVar11;
    uVar35 = (undefined1)((ulong)uVar11 >> 8);
    uVar36 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar37 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar11 = *(undefined8 *)*param_2;
    uVar30 = (undefined1)uVar11;
    uVar31 = (undefined1)((ulong)uVar11 >> 8);
    uVar32 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar33 = (undefined1)((ulong)uVar11 >> 0x18);
  }
  else {
    if ((uVar7 >> 2 & 1) == 0) {
      local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
      fVar38 = modff(*(float *)(param_3 + 0xd) * 6.2831855 * 100.0,(float *)&local_2a8);
      fVar41 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      fVar29 = fVar29 + (fVar53 - fVar29) * fVar38;
      uVar22 = (ulong)(((float)local_2a8 / 100.0) * (fVar41 / *(float *)PTR_FloatPi_047d23a0));
      pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar22 >> 0x18 & 0xff) * 0x10);
      fVar38 = (float)((uint)uVar22 & 0xffffff) * 5.9604645e-08;
      local_2c0 = local_2c0 + fVar29 * (*pfVar1 + pfVar1[2] * fVar38);
      fStack_2b8 = fStack_2b8 + fVar29 * (pfVar1[1] + pfVar1[3] * fVar38);
      goto LAB_01111158;
    }
    local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
    fVar38 = modff(*(float *)(param_3 + 0xd) * 6.2831855 * 100.0,(float *)&local_2a8);
    fVar29 = fVar29 + (fVar53 - fVar29) * fVar38;
    fVar41 = (float)local_2a8 / 628.31854 + (float)local_2a8 / 628.31854 + -1.0;
    fVar38 = -fVar41;
    uVar30 = SUB41(fVar38,0);
    uVar31 = (undefined1)((uint)fVar38 >> 8);
    uVar32 = (undefined1)((uint)fVar38 >> 0x10);
    uVar33 = (undefined1)((uint)fVar38 >> 0x18);
    if (fVar41 < 0.0) {
      uVar30 = SUB41(fVar41,0);
      uVar31 = (undefined1)((uint)fVar41 >> 8);
      uVar32 = (undefined1)((uint)fVar41 >> 0x10);
      uVar33 = (undefined1)((uint)fVar41 >> 0x18);
    }
    fVar43 = fVar43 + (1.0 - fVar43) *
                      ((float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) + 1.0);
    fVar42 = 1.0 - fVar43 * fVar43;
    fVar38 = SQRT(fVar42);
    uVar30 = SUB41(fVar38,0);
    uVar31 = (undefined1)((uint)fVar38 >> 8);
    uVar32 = (undefined1)((uint)fVar38 >> 0x10);
    uVar33 = (undefined1)((uint)fVar38 >> 0x18);
    if (NAN(fVar38)) {
      fVar38 = sqrtf(fVar42);
      uVar30 = SUB41(fVar38,0);
      uVar31 = (undefined1)((uint)fVar38 >> 8);
      uVar32 = (undefined1)((uint)fVar38 >> 0x10);
      uVar33 = (undefined1)((uint)fVar38 >> 0x18);
    }
    fVar38 = -(float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
    if (fVar41 < 0.0) {
      uVar30 = SUB41(fVar38,0);
      uVar31 = (undefined1)((uint)fVar38 >> 8);
      uVar32 = (undefined1)((uint)fVar38 >> 0x10);
      uVar33 = (undefined1)((uint)fVar38 >> 0x18);
    }
    fVar38 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
    local_2c0 = local_2c0 + (-auVar45._8_4_ * fVar38 + auVar45._0_4_ * fVar43) * fVar29;
    uVar30 = SUB41(local_2c0,0);
    uVar31 = (undefined1)((uint)local_2c0 >> 8);
    uVar32 = (undefined1)((uint)local_2c0 >> 0x10);
    uVar33 = (undefined1)((uint)local_2c0 >> 0x18);
    fStack_2b8 = fStack_2b8 + (auVar45._0_4_ * fVar38 + auVar45._8_4_ * fVar43) * fVar29;
    uVar34 = SUB41(fStack_2b8,0);
    uVar35 = (undefined1)((uint)fStack_2b8 >> 8);
    uVar36 = (undefined1)((uint)fStack_2b8 >> 0x10);
    uVar37 = (undefined1)((uint)fStack_2b8 >> 0x18);
  }
  fStack_2b8 = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
  local_2c0 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
LAB_01111158:
  uVar7 = *(ushort *)((long)param_3 + 0x6c);
  iVar47 = *(int *)((long)param_3 + 100);
  fVar38 = 3.4028235e+38;
  if (iVar47 != 0xe) {
    fVar38 = 625.0;
  }
  uVar22 = ((ulong)uVar7 & 0x1000) << 0x1b;
  if ((uVar8 & 0x2000) != 0) {
    uVar22 = (((ulong)uVar7 & 0x1000) >> 0xc) << 0x27 | 0x8000000000000;
  }
  local_2a8 = param_3[10];
  uStack_2a0 = param_3[0xb];
  FUN_0200833c(&local_2a8);
  lVar18 = *(long *)(param_1 + 0x48);
  if (lVar18 != 0) {
    iVar51 = *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 100);
    uVar52 = *(undefined4 *)(param_3 + 9);
    iVar5 = *(int *)(param_1 + 0x38);
    iVar50 = iVar6 + *(int *)(param_1 + 0x3c) + -1;
    iVar49 = iVar51 + iVar5 + -1;
    uVar30 = (char)((ulong)uVar48 >> 0x20);
    uVar31 = (char)((ulong)uVar48 >> 0x28);
    uVar32 = (char)((ulong)uVar48 >> 0x30);
    uVar33 = (char)((ulong)uVar48 >> 0x38);
    if ((*(byte *)((long)param_3 + 0x6d) & 0x40) != 0) {
      uVar30 = (char)uVar52;
      uVar31 = (char)((uint)uVar52 >> 8);
      uVar32 = (char)((uint)uVar52 >> 0x10);
      uVar33 = (char)((uint)uVar52 >> 0x18);
    }
    iVar23 = iVar6;
    if (iVar6 <= local_28c) {
      iVar23 = local_28c;
    }
    if (iStack_288 <= iVar49) {
      iVar49 = iStack_288;
    }
    if (local_284 <= iVar50) {
      iVar50 = local_284;
    }
    if (iVar23 <= iVar50) {
      uVar24 = 1L << ((ulong)(uVar7 >> 6) & 0x3f);
      iVar26 = iVar5 * (iVar23 - iVar6) - iVar51;
      iVar9 = iVar51;
      if (iVar51 <= iStack_290) {
        iVar9 = iStack_290;
      }
      iVar9 = iVar9 + -1;
      iVar3 = iVar9;
      if (iVar9 <= iVar49) {
        iVar3 = iVar49;
      }
      do {
        iVar27 = iVar9;
        while ((iVar3 != iVar27 &&
               (uVar28 = (ulong)((iVar27 - local_298) + 1),
               auStack_280[iVar23 - local_294] >> (uVar28 & 0x3f) != 0))) {
          iVar17 = iVar27 + 1;
          iVar2 = iVar26 + iVar27;
          iVar27 = iVar17;
          if ((iVar2 != -2) && ((1L << (uVar28 & 0x3f) & auStack_280[iVar23 - local_294]) != 0)) {
            uVar20 = iVar26 + iVar17;
            if ((int)uVar20 < 0) {
              return 0;
            }
            fVar41 = fStack_2bc;
            if (iVar47 != 9) {
              fVar41 = 10000.0;
            }
            bVar15 = false;
            pauVar25 = (undefined1 (*) [16])0x0;
            if (((uint)local_2a8 >> 7 & 1) == 0) {
              fVar43 = 1e+08;
LAB_01111318:
              if (((int)uVar20 < *(int *)(param_1 + 0x44)) &&
                 (lVar18 = *(long *)(lVar18 + (ulong)uVar20 * 8), lVar18 != 0)) {
                pauVar21 = *(undefined1 (**) [16])(lVar18 + 0x20);
                if (pauVar21 != (undefined1 (*) [16])0x0) {
                  pauVar19 = (undefined1 (*) [16])0x0;
                  fVar29 = fVar38;
                  do {
                    if ((char)pauVar21[1][0] < '\0') {
                      fVar42 = *(float *)pauVar21[2];
                    }
                    else {
                      fVar42 = *(float *)(*pauVar21 + 4);
                    }
                    fVar42 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) -
                             fVar42;
                    fVar42 = fVar42 * fVar42;
                    pauVar4 = pauVar21;
                    if (fVar29 <= fVar42) {
                      pauVar4 = pauVar19;
                    }
                    pauVar21 = *(undefined1 (**) [16])(pauVar21[2] + 8);
                    if (fVar29 <= fVar42) {
                      fVar42 = fVar29;
                    }
                    pauVar19 = pauVar4;
                    fVar29 = fVar42;
                  } while (pauVar21 != (undefined1 (*) [16])0x0);
                  if ((pauVar4 != (undefined1 (*) [16])0x0) &&
                     (((uVar28 = *(ulong *)pauVar4[1], (uVar28 & local_2a8) != 0 ||
                       ((*(ulong *)(pauVar4[1] + 8) & uStack_2a0) != 0)) && ((uVar28 & uVar22) == 0)
                      ))) {
                    uVar48 = *(undefined8 *)*pauVar4;
                    fVar42 = (float)((ulong)uVar48 >> 0x20);
                    fVar29 = 0.0;
                    if (((uint)uVar28 >> 7 & 1) != 0) {
                      fVar29 = *(float *)pauVar4[2] - fVar42;
                    }
                    if ((((*(float *)(&DAT_03d605e0 + (long)iVar47 * 0x18) <= fVar29) &&
                         (fVar42 <= fVar41)) &&
                        (((uVar7 >> 4 & 1) == 0 ||
                         (((uVar28 >> 0x26 & 1) != 0 && (ABS(fVar42 - fStack_2bc) < 4.5)))))) &&
                       ((((uVar7 >> 5 & 1) == 0 || ((uVar28 & uVar24) != 0)) &&
                        (fVar29 = (float)uVar48 - local_2c0,
                        fVar42 = (float)*(undefined8 *)(*pauVar4 + 8) - fStack_2b8,
                        fVar29 = fVar29 * fVar29 + fVar42 * fVar42, fVar29 < fVar43)))) {
                      bVar15 = true;
                      *(undefined8 *)(*param_2 + 8) = *(undefined8 *)(*pauVar4 + 8);
                      *(undefined8 *)*param_2 = uVar48;
                      pauVar25 = pauVar4;
                      fVar43 = fVar29;
                    }
                  }
                }
                if (iVar23 <= iVar50) {
                  iVar26 = -iVar51 + iVar5 * (-iVar6 + iVar23);
                  do {
                    iVar3 = iVar17;
                    if (iVar17 <= iVar49) {
                      iVar3 = iVar49;
                    }
                    while ((iVar27 = iVar17, iVar3 != iVar27 &&
                           (uVar28 = (ulong)(uint)((1 - local_298) + iVar27),
                           auStack_280[iVar23 - local_294] >> (uVar28 & 0x3f) != 0))) {
                      iVar17 = iVar27 + 1;
                      if (((auStack_280[iVar23 - local_294] >> (uVar28 & 0x3f) & 1) != 0) &&
                         (iVar26 + iVar27 != -2)) {
                        uVar20 = iVar26 + iVar17;
                        if (((int)uVar20 < 0) || (lVar18 = *(long *)(param_1 + 0x48), lVar18 == 0))
                        goto LAB_0111163c;
                        goto LAB_01111318;
                      }
                    }
                    bVar16 = iVar23 != iVar50;
                    iVar23 = iVar23 + 1;
                    iVar26 = iVar26 + iVar5;
                    iVar17 = iVar9;
                  } while (bVar16);
                }
              }
            }
            else {
              fVar43 = 1e+08;
LAB_011114a0:
              if (((int)uVar20 < *(int *)(param_1 + 0x44)) &&
                 (lVar18 = *(long *)(lVar18 + (ulong)uVar20 * 8), lVar18 != 0)) {
                pauVar21 = *(undefined1 (**) [16])(lVar18 + 0x20);
                if (pauVar21 != (undefined1 (*) [16])0x0) {
                  pauVar19 = (undefined1 (*) [16])0x0;
                  fVar29 = fVar38;
                  do {
                    if ((char)pauVar21[1][0] < '\0') {
                      fVar42 = *(float *)pauVar21[2];
                    }
                    else {
                      fVar42 = *(float *)(*pauVar21 + 4);
                    }
                    fVar42 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) -
                             fVar42;
                    fVar42 = fVar42 * fVar42;
                    pauVar4 = pauVar21;
                    if (fVar29 <= fVar42) {
                      pauVar4 = pauVar19;
                    }
                    pauVar21 = *(undefined1 (**) [16])(pauVar21[2] + 8);
                    if (fVar29 <= fVar42) {
                      fVar42 = fVar29;
                    }
                    pauVar19 = pauVar4;
                    fVar29 = fVar42;
                  } while (pauVar21 != (undefined1 (*) [16])0x0);
                  if ((pauVar4 != (undefined1 (*) [16])0x0) &&
                     (((uVar28 = *(ulong *)pauVar4[1], (uVar28 & local_2a8) != 0 ||
                       ((*(ulong *)(pauVar4[1] + 8) & uStack_2a0) != 0)) && ((uVar28 & uVar22) == 0)
                      ))) {
                    auVar46 = *pauVar4;
                    if (((uint)uVar28 >> 7 & 1) == 0) {
                      fVar29 = 0.0;
                    }
                    else {
                      fVar29 = auVar46._4_4_;
                      auVar44 = NEON_ext(auVar46,auVar46,8,1);
                      uVar52 = auVar46._0_4_;
                      auVar46._4_4_ = *(float *)pauVar4[2];
                      auVar46._0_4_ = uVar52;
                      fVar29 = *(float *)pauVar4[2] - fVar29;
                      auVar46._8_4_ = auVar44._0_4_;
                      auVar46._12_4_ = 0;
                    }
                    if (((((*(float *)(&DAT_03d605e0 + (long)iVar47 * 0x18) <= fVar29) &&
                          (auVar46._4_4_ <= fVar41)) &&
                         (((uVar7 >> 4 & 1) == 0 ||
                          (((uVar28 >> 0x26 & 1) != 0 && (ABS(auVar46._4_4_ - fStack_2bc) < 4.5)))))
                         ) && (((uVar7 >> 5 & 1) == 0 || ((uVar28 & uVar24) != 0)))) &&
                       (fVar29 = auVar46._0_4_ - local_2c0, fVar42 = auVar46._8_4_ - fStack_2b8,
                       fVar29 = fVar29 * fVar29 + fVar42 * fVar42, fVar29 < fVar43)) {
                      bVar15 = true;
                      *(long *)(*param_2 + 8) = auVar46._8_8_;
                      *(long *)*param_2 = auVar46._0_8_;
                      pauVar25 = pauVar4;
                      fVar43 = fVar29;
                    }
                  }
                }
                if (iVar23 <= iVar50) {
                  iVar26 = -iVar51 + iVar5 * (-iVar6 + iVar23);
                  do {
                    iVar3 = iVar17;
                    if (iVar17 <= iVar49) {
                      iVar3 = iVar49;
                    }
                    while ((iVar27 = iVar17, iVar3 != iVar27 &&
                           (uVar28 = (ulong)(uint)((1 - local_298) + iVar27),
                           auStack_280[iVar23 - local_294] >> (uVar28 & 0x3f) != 0))) {
                      iVar17 = iVar27 + 1;
                      if (((auStack_280[iVar23 - local_294] >> (uVar28 & 0x3f) & 1) != 0) &&
                         (iVar26 + iVar27 != -2)) {
                        uVar20 = iVar26 + iVar17;
                        if (((int)uVar20 < 0) || (lVar18 = *(long *)(param_1 + 0x48), lVar18 == 0))
                        goto LAB_0111163c;
                        goto LAB_011114a0;
                      }
                    }
                    bVar16 = iVar23 != iVar50;
                    iVar23 = iVar23 + 1;
                    iVar26 = iVar26 + iVar5;
                    iVar17 = iVar9;
                  } while (bVar16);
                }
              }
            }
LAB_0111163c:
            if (!bVar15) {
              return 0;
            }
            fStack_2dc = (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
            fStack_2ec = fStack_2dc;
            if ((char)pauVar25[1][0] < '\0') {
              NEON_ext(*pauVar25,*pauVar25,8,1);
              fStack_2ec = *(float *)pauVar25[2];
            }
            local_2a8 = local_2a8 & 0xffffffff00000000;
            fVar38 = modff(*(float *)(param_3 + 0xd) * 10000.0,(float *)&local_2a8);
            uVar20 = *(uint *)((long)param_3 + 100);
            if (uVar20 != 9) {
              fVar43 = 0.0;
              fVar41 = 0.0;
              if (uVar20 != 0xe) {
                fVar41 = fStack_2ec;
              }
              if ((uVar20 < 0x10) && ((1 << (ulong)(uVar20 & 0x1f) & 0x9800U) != 0)) {
                fVar43 = *(float *)((long)param_3 + 0x44);
              }
              fVar29 = fVar41 + fVar43 + *(float *)(&DAT_03d605d8 + (long)(int)uVar20 * 0x18);
              fStack_2bc = fVar41 + fVar43 + *(float *)(&DAT_03d605dc + (long)(int)uVar20 * 0x18);
              if (fVar29 <= fStack_2dc) {
                fVar29 = fStack_2dc;
              }
              if (fStack_2bc <= fStack_2dc) {
                fStack_2bc = fStack_2dc;
              }
              fStack_2bc = fStack_2bc + fVar38 * (fVar29 - fStack_2bc);
            }
            uVar11 = *(undefined8 *)(*param_2 + 8);
            uVar48 = *(undefined8 *)*param_2;
            uVar30 = (undefined1)((uint)fStack_2bc >> 8);
            uVar31 = (undefined1)((uint)fStack_2bc >> 0x10);
            uVar32 = (undefined1)((uint)fStack_2bc >> 0x18);
            *(undefined8 *)(*param_2 + 8) = uVar11;
            *(ulong *)*param_2 =
                 CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(SUB41(fStack_2bc,0),
                                                                          (int)uVar48))));
            if (*(int *)(param_3 + 0xc) == 5) {
              auVar13._12_4_ = uStack_2b4;
              auVar13._0_12_ = auVar14;
              auVar44 = NEON_rev64(auVar13,4);
              *(ulong *)(*param_2 + 8) =
                   CONCAT17((char)((ulong)uVar11 >> 0x38),
                            CONCAT16((char)((ulong)uVar11 >> 0x30),
                                     CONCAT15((char)((ulong)uVar11 >> 0x28),
                                              CONCAT14((char)((ulong)uVar11 >> 0x20),auVar44._12_4_)
                                             )));
              *(ulong *)*param_2 =
                   CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(SUB41(fStack_2bc,0),
                                                                            auVar44._4_4_))));
            }
            return 1;
          }
        }
        bVar15 = iVar23 == iVar50;
        iVar23 = iVar23 + 1;
        iVar26 = iVar26 + iVar5;
        if (bVar15) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


