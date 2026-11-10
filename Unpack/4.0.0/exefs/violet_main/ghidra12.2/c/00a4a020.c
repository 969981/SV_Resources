/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4a020; name: FUN_00a4a020
 */


void FUN_00a4a020(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  float *pfVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  int iVar33;
  float *pfVar34;
  uint uVar35;
  undefined8 *puVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  int iVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int local_134;
  int iStack_130;
  int local_12c;
  long local_128;
  long local_120;
  long local_118;
  long *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined **local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 *local_70;
  
  if (((((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
       (*(char *)(param_4 + 8) == '\0')) ||
      ((*(char *)(param_5 + 8) == '\0' || (*(char *)(param_6 + 8) == '\0')))) ||
     (*(char *)(param_7 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  puVar2 = *(uint **)(param_2 + 0x10);
  iVar33 = (int)((ulong)(*(long *)(param_2 + 0x18) - (long)puVar2) >> 2);
  if (iVar33 < 1) {
    uVar35 = 0;
    uVar37 = 0;
  }
  else {
    uVar37 = *puVar2;
    if (iVar33 == 1) {
      uVar35 = 0;
    }
    else {
      uVar35 = puVar2[1];
      if (2 < iVar33) {
        iVar33 = puVar2[2] << 1;
        goto LAB_00a4a0fc;
      }
    }
  }
  iVar33 = 0;
LAB_00a4a0fc:
  if ((int)((ulong)(*(long *)(param_6 + 0x18) - (long)*(int **)(param_6 + 0x10)) >> 2) < 1) {
    iVar42 = 0;
  }
  else {
    iVar42 = **(int **)(param_6 + 0x10);
  }
  iVar4 = uVar35 * 2;
  local_f0 = &PTR_FUN_04540ef8;
  local_e8 = '\x01';
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  plStack_c8 = DAT_04836488;
  local_b0 = 0;
  local_f8 = 0;
  local_c0 = 0x3fffffffffffffff;
  uStack_b8 = 0;
  local_98 = 0;
  plStack_90 = DAT_04836488;
  local_118 = 0;
  plStack_110 = DAT_04836488;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0x3fffffffffffffff;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = (undefined8 *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0x3fffffffffffffff;
  uStack_100 = 0;
  local_134 = iVar42;
  iStack_130 = iVar4;
  local_12c = iVar33;
  FUN_00a416f8(&local_128,0,&local_134,&local_128);
  FUN_00a42c28(&local_f0,&local_128,0);
  plVar19 = plStack_110;
  lVar38 = local_128;
  if (local_e8 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    if (local_128 != 0) {
      local_120 = local_128;
      lVar32 = local_118 - local_128;
      uVar25 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar25 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar38,lVar32,4);
      }
      else {
        FUN_00c48fe8(plVar19,lVar38,lVar32,4);
      }
    }
  }
  else {
    if (local_128 != 0) {
      lVar32 = local_118 - local_128;
      local_120 = local_128;
      uVar25 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar25 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar38,lVar32,4);
      }
      else {
        FUN_00c48fe8(plVar19,lVar38,lVar32,4);
      }
    }
    if (0 < (int)uVar37) {
      uVar25 = 0;
      iVar6 = uVar35 * 4 + -2;
      iVar7 = iVar33 * 2 + -2;
      lVar38 = (long)iVar33;
      pfVar34 = *(float **)(param_5 + 0x80);
      do {
        fVar44 = *pfVar34;
        if ((int)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) >> 2) < 1) {
          lVar32 = 0;
        }
        else {
          lVar32 = (long)**(int **)(param_4 + 0x48) * (long)(int)uVar25;
        }
        if (0 < (int)uVar35) {
          pfVar29 = (float *)(*(long *)(param_4 + 0x80) + lVar32 * 4);
          fVar9 = *pfVar29;
          fVar10 = pfVar29[1];
          fVar11 = pfVar29[2];
          fVar12 = pfVar29[3];
          fVar13 = pfVar29[4];
          fVar14 = pfVar29[5];
          fVar15 = pfVar29[6];
          fVar16 = pfVar29[7];
          fVar17 = pfVar29[8];
          puVar36 = local_70;
          uVar39 = 0;
          do {
            if (uVar39 == 0) {
              iVar21 = 0;
              if (iVar6 != 0) {
                iVar21 = -1 / iVar6;
              }
              iVar22 = -1 - iVar21 * iVar6;
              iVar21 = iVar22 + iVar6;
              if (-iVar22 < iVar4) {
                iVar21 = -iVar22;
              }
              if (iVar21 < 0) {
                iVar21 = iVar21 + 1;
              }
              uVar40 = iVar21 >> 1;
            }
            else {
              uVar40 = uVar39 - 1 >> 1;
            }
            uVar1 = uVar39 + 1;
            uVar20 = uVar1;
            if (iVar4 <= (int)uVar1) {
              iVar21 = 0;
              if (iVar6 != 0) {
                iVar21 = (int)uVar1 / iVar6;
              }
              uVar20 = uVar1 - iVar21 * iVar6;
              if (iVar4 <= (int)uVar20) {
                uVar20 = iVar6 - uVar20;
              }
            }
            lVar32 = *(long *)(param_2 + 0x80);
            if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
              lVar26 = 0;
              lVar28 = lVar32;
              lVar41 = lVar32;
            }
            else {
              iVar21 = (*(int **)(param_2 + 0x48))[1];
              if ((int)uVar20 < 0) {
                uVar20 = uVar20 + 1;
              }
              iVar22 = **(int **)(param_2 + 0x48) * (int)uVar25;
              lVar26 = (long)(iVar22 + iVar21 * ((int)uVar20 >> 1));
              lVar28 = lVar32 + (long)(int)(iVar22 + iVar21 * uVar40) * 4;
              lVar41 = lVar32 + (long)(int)(iVar22 + iVar21 * (uVar39 >> 1)) * 4;
            }
            if (0 < iVar33) {
              lVar32 = lVar32 + lVar26 * 4;
              uVar31 = 0;
              do {
                if (uVar31 == 0) {
                  iVar21 = 0;
                  if (iVar7 != 0) {
                    iVar21 = -1 / iVar7;
                  }
                  iVar22 = -1 - iVar21 * iVar7;
                  iVar21 = iVar22 + iVar7;
                  if (-iVar22 < iVar33) {
                    iVar21 = -iVar22;
                  }
                  if (iVar21 < 0) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar39 = iVar21 >> 1;
                }
                else {
                  uVar39 = (int)uVar31 - 1U >> 1;
                }
                uVar27 = uVar31 | 1;
                if (lVar38 <= (long)uVar27) {
                  iVar21 = 0;
                  if (iVar7 != 0) {
                    iVar21 = (int)uVar27 / iVar7;
                  }
                  uVar40 = (int)uVar27 - iVar21 * iVar7;
                  if (iVar33 <= (int)uVar40) {
                    uVar40 = iVar7 - uVar40;
                  }
                  uVar27 = (ulong)uVar40;
                }
                iVar21 = (int)uVar27;
                if (iVar21 < 0) {
                  iVar21 = iVar21 + 1;
                }
                uVar27 = uVar31 | 2;
                if (lVar38 <= (long)uVar27) {
                  iVar22 = 0;
                  if (iVar7 != 0) {
                    iVar22 = (int)uVar27 / iVar7;
                  }
                  uVar40 = (int)uVar27 - iVar22 * iVar7;
                  if (iVar33 <= (int)uVar40) {
                    uVar40 = iVar7 - uVar40;
                  }
                  uVar27 = (ulong)uVar40;
                }
                iVar22 = (int)uVar27;
                if (iVar22 < 0) {
                  iVar22 = iVar22 + 1;
                }
                uVar27 = uVar31 | 3;
                if (lVar38 <= (long)uVar27) {
                  iVar23 = 0;
                  if (iVar7 != 0) {
                    iVar23 = (int)uVar27 / iVar7;
                  }
                  uVar40 = (int)uVar27 - iVar23 * iVar7;
                  if (iVar33 <= (int)uVar40) {
                    uVar40 = iVar7 - uVar40;
                  }
                  uVar27 = (ulong)uVar40;
                }
                iVar23 = (int)uVar27;
                if (iVar23 < 0) {
                  iVar23 = iVar23 + 1;
                }
                uVar27 = uVar31 + 4;
                iVar5 = 0;
                iVar24 = (int)uVar27;
                if (iVar7 != 0) {
                  iVar5 = iVar24 / iVar7;
                }
                iVar5 = iVar24 - iVar5 * iVar7;
                if (iVar33 <= iVar5) {
                  iVar5 = iVar7 - iVar5;
                }
                if (lVar38 <= (long)uVar27) {
                  iVar24 = iVar5;
                }
                if (iVar24 < 0) {
                  iVar24 = iVar24 + 1;
                }
                if (0 < iVar42) {
                  uVar31 = uVar31 >> 1;
                  iVar21 = iVar21 >> 1;
                  fVar48 = *(float *)(lVar28 + uVar31 * 4);
                  iVar22 = iVar22 >> 1;
                  iVar23 = iVar23 >> 1;
                  fVar49 = *(float *)(lVar28 + (long)iVar21 * 4);
                  iVar24 = iVar24 >> 1;
                  fVar45 = *(float *)(lVar28 + (long)iVar22 * 4);
                  fVar50 = *(float *)(lVar28 + (long)iVar23 * 4);
                  fVar51 = *(float *)(lVar41 + uVar31 * 4);
                  fVar52 = *(float *)(lVar41 + (long)iVar21 * 4);
                  fVar53 = *(float *)(lVar41 + (long)iVar23 * 4);
                  fVar54 = *(float *)(lVar32 + uVar31 * 4);
                  fVar46 = *(float *)(lVar41 + (long)iVar22 * 4);
                  fVar55 = *(float *)(lVar32 + (long)iVar21 * 4);
                  fVar56 = *(float *)(lVar32 + (long)iVar22 * 4);
                  fVar57 = *(float *)(lVar32 + (long)iVar23 * 4);
                  pfVar29 = *(float **)(param_7 + 0x80);
                  iVar21 = 1;
                  fVar47 = fVar44 + fVar9 * *(float *)(lVar28 + (long)(int)uVar39 * 4) +
                           fVar10 * fVar48 + fVar11 * fVar49 +
                           fVar12 * *(float *)(lVar41 + (long)(int)uVar39 * 4) + fVar13 * fVar51 +
                           fVar14 * fVar52 + fVar15 * *(float *)(lVar32 + (long)(int)uVar39 * 4) +
                           fVar16 * fVar54 + fVar17 * fVar55;
                  fVar48 = fVar44 + fVar9 * fVar48 + fVar10 * fVar49 + fVar11 * fVar45 +
                           fVar12 * fVar51 + fVar13 * fVar52 + fVar14 * fVar46 + fVar15 * fVar54 +
                           fVar16 * fVar55 + fVar17 * fVar56;
                  fVar49 = fVar44 + fVar9 * fVar49 + fVar10 * fVar45 + fVar11 * fVar50 +
                           fVar12 * fVar52 + fVar13 * fVar46 + fVar14 * fVar53 + fVar15 * fVar55 +
                           fVar16 * fVar56 + fVar17 * fVar57;
                  fVar45 = fVar44 + fVar9 * fVar45 + fVar10 * fVar50 +
                           fVar11 * *(float *)(lVar28 + (long)iVar24 * 4) + fVar12 * fVar46 +
                           fVar13 * fVar53 + fVar14 * *(float *)(lVar41 + (long)iVar24 * 4) +
                           fVar15 * fVar56 + fVar16 * fVar57 +
                           fVar17 * *(float *)(lVar32 + (long)iVar24 * 4);
                  do {
                    if ((int)((ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) >> 2) <
                        1) {
                      fVar50 = *(float *)(*(long *)(param_6 + 0x80) + uVar25 * 4);
                      fVar46 = fVar50;
                      fVar51 = fVar50;
                      fVar52 = fVar50;
                      if (uVar25 != 0) goto LAB_00a4a5b8;
LAB_00a4a5f4:
                      fVar53 = *pfVar29;
                      fVar54 = pfVar29[2];
                      fVar55 = pfVar29[3];
                      fVar56 = pfVar29[1];
                      pfVar29 = pfVar29 + 4;
                      puVar36[5] = CONCAT44(fVar54 + fVar51 * fVar45,fVar54 + fVar51 * fVar49);
                      puVar36[4] = CONCAT44(fVar54 + fVar51 * fVar48,fVar54 + fVar51 * fVar47);
                      puVar36[7] = CONCAT44(fVar55 + fVar52 * fVar45,fVar55 + fVar52 * fVar49);
                      puVar36[6] = CONCAT44(fVar55 + fVar52 * fVar48,fVar55 + fVar52 * fVar47);
                      puVar36[1] = CONCAT44(fVar53 + fVar46 * fVar45,fVar53 + fVar46 * fVar49);
                      *puVar36 = CONCAT44(fVar53 + fVar46 * fVar48,fVar53 + fVar46 * fVar47);
                      puVar36[3] = CONCAT44(fVar56 + fVar50 * fVar45,fVar56 + fVar50 * fVar49);
                      puVar36[2] = CONCAT44(fVar56 + fVar50 * fVar48,fVar56 + fVar50 * fVar47);
                    }
                    else {
                      lVar26 = *(long *)(param_6 + 0x80) + uVar25 * 4;
                      iVar22 = **(int **)(param_6 + 0x48);
                      fVar46 = *(float *)(lVar26 + (long)(iVar22 * (iVar21 + -1)) * 4);
                      fVar50 = *(float *)(lVar26 + (long)(iVar22 * iVar21) * 4);
                      fVar51 = *(float *)(lVar26 + (long)(iVar22 * (iVar21 + 1)) * 4);
                      fVar52 = *(float *)(lVar26 + (long)(iVar22 * (iVar21 + 2)) * 4);
                      if (uVar25 == 0) goto LAB_00a4a5f4;
LAB_00a4a5b8:
                      puVar36[1] = CONCAT44((float)((ulong)puVar36[1] >> 0x20) + fVar46 * fVar45,
                                            (float)puVar36[1] + fVar46 * fVar49);
                      *puVar36 = CONCAT44((float)((ulong)*puVar36 >> 0x20) + fVar46 * fVar48,
                                          (float)*puVar36 + fVar46 * fVar47);
                      puVar36[3] = CONCAT44((float)((ulong)puVar36[3] >> 0x20) + fVar50 * fVar45,
                                            (float)puVar36[3] + fVar50 * fVar49);
                      puVar36[2] = CONCAT44((float)((ulong)puVar36[2] >> 0x20) + fVar50 * fVar48,
                                            (float)puVar36[2] + fVar50 * fVar47);
                      puVar36[5] = CONCAT44((float)((ulong)puVar36[5] >> 0x20) + fVar51 * fVar45,
                                            (float)puVar36[5] + fVar51 * fVar49);
                      puVar36[4] = CONCAT44((float)((ulong)puVar36[4] >> 0x20) + fVar51 * fVar48,
                                            (float)puVar36[4] + fVar51 * fVar47);
                      puVar36[7] = CONCAT44((float)((ulong)puVar36[7] >> 0x20) + fVar52 * fVar45,
                                            (float)puVar36[7] + fVar52 * fVar49);
                      puVar36[6] = CONCAT44((float)((ulong)puVar36[6] >> 0x20) + fVar52 * fVar48,
                                            (float)puVar36[6] + fVar52 * fVar47);
                    }
                    iVar22 = iVar21 + 3;
                    puVar36 = puVar36 + 8;
                    iVar21 = iVar21 + 4;
                  } while (iVar22 < iVar42);
                }
                uVar31 = uVar27;
              } while ((long)uVar27 < lVar38);
            }
            uVar39 = uVar1;
          } while ((int)uVar1 < iVar4);
        }
        uVar25 = uVar25 + 1;
        pfVar34 = pfVar34 + 1;
      } while (uVar25 != uVar37);
    }
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    plStack_110 = DAT_04836488;
    local_108 = 0x3fffffffffffffff;
    uStack_100 = 0;
    local_f8 = 0;
    local_134 = iVar42;
    iStack_130 = iVar4;
    local_12c = iVar33;
    FUN_00a416f8(&local_128,0,&local_134,&local_128);
    FUN_00a42c28(param_1,&local_128,0);
    plVar19 = plStack_110;
    lVar38 = local_128;
    cVar3 = *(char *)(param_1 + 8);
    if (local_128 != 0) {
      local_120 = local_128;
      lVar32 = local_118 - local_128;
      uVar25 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar25 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar38,lVar32,4);
      }
      else {
        FUN_00c48fe8(plVar19,lVar38,lVar32,4);
      }
    }
    if (cVar3 != '\0') {
      uVar37 = iVar33 * iVar4;
      if ((0 < (int)uVar37) && (0 < iVar42)) {
        uVar27 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar37 << 1;
        uVar31 = (ulong)uVar37;
        uVar39 = iVar42 - 1U >> 2;
        uVar35 = uVar39 + 1;
        lVar38 = (long)(int)(uVar37 * 4) * 4;
        uVar25 = 0;
        lVar32 = (uVar27 + (long)(int)uVar37) * 4;
        puVar36 = local_70;
        do {
          puVar30 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar25 * 4);
          if (uVar39 != 0) {
            iVar33 = -(uVar35 & 0x7ffffffe);
            do {
              uVar43 = *puVar36;
              iVar33 = iVar33 + 2;
              puVar30[1] = puVar36[1];
              *puVar30 = uVar43;
              uVar43 = puVar36[2];
              puVar8 = (undefined8 *)((long)puVar30 + uVar31 * 4);
              puVar8[1] = puVar36[3];
              *puVar8 = uVar43;
              uVar43 = puVar36[4];
              puVar8 = (undefined8 *)((long)puVar30 + uVar27 * 4);
              puVar8[1] = puVar36[5];
              *puVar8 = uVar43;
              uVar43 = puVar36[6];
              puVar8 = (undefined8 *)((long)puVar30 + lVar32);
              puVar8[1] = puVar36[7];
              *puVar8 = uVar43;
              uVar43 = puVar36[8];
              ((undefined8 *)((long)puVar30 + lVar38))[1] = puVar36[9];
              *(undefined8 *)((long)puVar30 + lVar38) = uVar43;
              uVar43 = puVar36[10];
              puVar8 = (undefined8 *)((long)puVar30 + lVar38 + uVar31 * 4);
              puVar8[1] = puVar36[0xb];
              *puVar8 = uVar43;
              uVar43 = puVar36[0xc];
              puVar8 = (undefined8 *)((long)puVar30 + lVar38 + uVar27 * 4);
              puVar8[1] = puVar36[0xd];
              *puVar8 = uVar43;
              puVar18 = puVar36 + 0xf;
              uVar43 = puVar36[0xe];
              puVar36 = puVar36 + 0x10;
              puVar8 = (undefined8 *)((long)puVar30 + lVar38 + (uVar27 + (long)(int)uVar37) * 4);
              puVar8[1] = *puVar18;
              *puVar8 = uVar43;
              puVar30 = puVar30 + (int)(uVar37 * 4);
            } while (iVar33 != 0);
          }
          if ((uVar35 & 1) != 0) {
            uVar43 = *puVar36;
            puVar30[1] = puVar36[1];
            *puVar30 = uVar43;
            uVar43 = puVar36[2];
            puVar8 = (undefined8 *)((long)puVar30 + uVar31 * 4);
            puVar8[1] = puVar36[3];
            *puVar8 = uVar43;
            uVar43 = puVar36[4];
            puVar8 = (undefined8 *)((long)puVar30 + uVar27 * 4);
            puVar8[1] = puVar36[5];
            *puVar8 = uVar43;
            puVar8 = puVar36 + 7;
            uVar43 = puVar36[6];
            puVar36 = puVar36 + 8;
            puVar30 = (undefined8 *)((long)puVar30 + lVar32);
            puVar30[1] = *puVar8;
            *puVar30 = uVar43;
          }
          uVar25 = uVar25 + 4;
        } while (uVar25 < uVar31);
      }
    }
  }
  FUN_00a43810(&local_f0);
  return;
}


