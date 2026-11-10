/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a49034; name: FUN_00a49034
 */


void FUN_00a49034(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  float *pfVar33;
  float *pfVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  int local_138;
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
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  float *local_70;
  
  if (((((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
       (*(char *)(param_3 + 8) == '\0')) ||
      ((*(char *)(param_4 + 8) == '\0' || (*(char *)(param_5 + 8) == '\0')))) ||
     (*(char *)(param_6 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  iVar19 = (int)((ulong)(*(long *)(param_2 + 0x18) - (long)piVar2) >> 2);
  if (iVar19 < 1) {
    iVar35 = 0;
    iVar36 = 0;
  }
  else {
    iVar36 = *piVar2;
    if (iVar19 == 1) {
      iVar35 = 0;
    }
    else {
      iVar35 = piVar2[1];
      if (2 < iVar19) {
        iVar19 = piVar2[2];
        goto LAB_00a49108;
      }
    }
  }
  iVar19 = 0;
LAB_00a49108:
  if ((int)((ulong)(*(long *)(param_5 + 0x18) - (long)*(int **)(param_5 + 0x10)) >> 2) < 1) {
    local_138 = 0;
  }
  else {
    local_138 = **(int **)(param_5 + 0x10);
  }
  local_b0 = 0;
  local_f0 = &PTR_FUN_04540ef8;
  local_e8 = '\x01';
  iVar1 = iVar35;
  if (iVar35 < 0) {
    iVar1 = iVar35 + 1;
  }
  local_e0 = 0;
  lStack_d8 = 0;
  iVar1 = iVar1 >> 1;
  iVar17 = iVar19;
  if (iVar19 < 0) {
    iVar17 = iVar19 + 1;
  }
  local_d0 = 0;
  plStack_c8 = DAT_04836488;
  iVar17 = iVar17 >> 1;
  local_c0 = 0x3fffffffffffffff;
  uStack_b8 = 0;
  local_f8 = 0;
  local_98 = 0;
  plStack_90 = DAT_04836488;
  local_118 = 0;
  plStack_110 = DAT_04836488;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_88 = 0x3fffffffffffffff;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = (float *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0x3fffffffffffffff;
  uStack_100 = 0;
  local_134 = iVar36;
  iStack_130 = iVar1;
  local_12c = iVar17;
  FUN_00a416f8(&local_128,0,&local_134,&local_128);
  FUN_00a42c28(&local_f0,&local_128,0);
  plVar7 = plStack_110;
  lVar27 = local_128;
  if (local_e8 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    if (local_128 != 0) {
      local_120 = local_128;
      lVar18 = local_118 - local_128;
      uVar11 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar27,lVar18,4);
      }
      else {
        FUN_00c48fe8(plVar7,lVar27,lVar18,4);
      }
    }
  }
  else {
    if (local_128 != 0) {
      lVar18 = local_118 - local_128;
      local_120 = local_128;
      uVar11 = (**(code **)(*plStack_110 + 0xf8))();
      if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar27,lVar18,4);
      }
      else {
        FUN_00c48fe8(plVar7,lVar27,lVar18,4);
      }
    }
    if (0 < iVar36) {
      iVar16 = 0;
      iVar29 = iVar35 * 2 + -2;
      iVar10 = iVar19 * 2 + -2;
      pfVar21 = local_70;
      pfVar22 = *(float **)(param_4 + 0x80);
      do {
        fVar37 = *pfVar22;
        if ((int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2) < 1) {
          lVar27 = 0;
        }
        else {
          lVar27 = (long)**(int **)(param_3 + 0x48) * (long)iVar16;
        }
        if (1 < iVar35) {
          pfVar20 = (float *)(*(long *)(param_3 + 0x80) + lVar27 * 4);
          fVar38 = *pfVar20;
          fVar39 = pfVar20[1];
          fVar40 = pfVar20[2];
          fVar43 = pfVar20[3];
          fVar48 = pfVar20[8];
          iVar23 = 0;
          fVar44 = pfVar20[4];
          fVar45 = pfVar20[5];
          fVar46 = pfVar20[6];
          fVar47 = pfVar20[7];
          do {
            uVar28 = iVar23 * 2;
            iVar24 = uVar28 - 1;
            if ((iVar23 == 0) || (iVar35 < (int)uVar28)) {
              iVar30 = -iVar24;
              if (iVar23 != 0) {
                iVar30 = iVar24;
              }
              iVar24 = 0;
              if (iVar29 != 0) {
                iVar24 = iVar30 / iVar29;
              }
              iVar24 = iVar30 - iVar24 * iVar29;
              if (iVar35 <= iVar24) {
                iVar24 = iVar29 - iVar24;
              }
            }
            uVar26 = uVar28;
            if (iVar35 <= (int)uVar28) {
              iVar30 = 0;
              if (iVar29 != 0) {
                iVar30 = (int)uVar28 / iVar29;
              }
              uVar26 = uVar28 - iVar30 * iVar29;
              if (iVar35 <= (int)uVar26) {
                uVar26 = iVar29 - uVar26;
              }
            }
            uVar28 = uVar28 | 1;
            if (iVar35 <= (int)uVar28) {
              iVar30 = 0;
              if (iVar29 != 0) {
                iVar30 = (int)uVar28 / iVar29;
              }
              uVar28 = uVar28 - iVar30 * iVar29;
              if (iVar35 <= (int)uVar28) {
                uVar28 = iVar29 - uVar28;
              }
            }
            lVar27 = *(long *)(param_2 + 0x80);
            if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
              lVar12 = 0;
              lVar18 = lVar27;
              lVar13 = lVar27;
            }
            else {
              iVar30 = (*(int **)(param_2 + 0x48))[1];
              iVar8 = **(int **)(param_2 + 0x48) * iVar16;
              lVar12 = (long)(int)(iVar8 + iVar30 * uVar28);
              lVar18 = lVar27 + (long)(iVar8 + iVar30 * iVar24) * 4;
              lVar13 = lVar27 + (long)(int)(iVar8 + iVar30 * uVar26) * 4;
            }
            if (1 < iVar19) {
              lVar27 = lVar27 + lVar12 * 4;
              iVar24 = 0;
              iVar30 = 0;
              iVar8 = 1;
              pfVar20 = pfVar21;
              do {
                iVar14 = iVar24 + -1;
                if ((iVar30 == 0) || (iVar19 < iVar24)) {
                  iVar4 = iVar8;
                  if (iVar30 != 0) {
                    iVar4 = iVar14;
                  }
                  iVar14 = 0;
                  if (iVar10 != 0) {
                    iVar14 = iVar4 / iVar10;
                  }
                  iVar14 = iVar4 - iVar14 * iVar10;
                  if (iVar19 <= iVar14) {
                    iVar14 = iVar10 - iVar14;
                  }
                }
                iVar4 = iVar24;
                if (iVar19 <= iVar24) {
                  iVar4 = 0;
                  if (iVar10 != 0) {
                    iVar4 = iVar24 / iVar10;
                  }
                  iVar4 = iVar24 - iVar4 * iVar10;
                  if (iVar19 <= iVar4) {
                    iVar4 = iVar10 - iVar4;
                  }
                }
                iVar15 = iVar24 + 1;
                if (iVar19 <= iVar15) {
                  iVar5 = 0;
                  if (iVar10 != 0) {
                    iVar5 = iVar15 / iVar10;
                  }
                  iVar15 = iVar15 - iVar5 * iVar10;
                  if (iVar19 <= iVar15) {
                    iVar15 = iVar10 - iVar15;
                  }
                }
                iVar30 = iVar30 + 1;
                iVar24 = iVar24 + 2;
                pfVar21 = pfVar20 + 1;
                *pfVar20 = fVar37 + fVar38 * *(float *)(lVar18 + (long)iVar14 * 4) +
                           fVar39 * *(float *)(lVar18 + (long)iVar4 * 4) +
                           fVar40 * *(float *)(lVar18 + (long)iVar15 * 4) +
                           fVar43 * *(float *)(lVar13 + (long)iVar14 * 4) +
                           fVar44 * *(float *)(lVar13 + (long)iVar4 * 4) +
                           fVar45 * *(float *)(lVar13 + (long)iVar15 * 4) +
                           fVar46 * *(float *)(lVar27 + (long)iVar14 * 4) +
                           fVar47 * *(float *)(lVar27 + (long)iVar4 * 4) +
                           fVar48 * *(float *)(lVar27 + (long)iVar15 * 4);
                iVar8 = iVar8 + -2;
                pfVar20 = pfVar21;
              } while (iVar17 != iVar30);
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 != iVar1);
        }
        iVar16 = iVar16 + 1;
        pfVar22 = pfVar22 + 1;
      } while (iVar16 != iVar36);
    }
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    plStack_110 = DAT_04836488;
    local_108 = 0x3fffffffffffffff;
    uStack_100 = 0;
    local_f8 = 0;
    local_134 = local_138;
    iStack_130 = iVar1;
    local_12c = iVar17;
    FUN_00a416f8(&local_128,0,&local_134,&local_128);
    FUN_00a42c28(param_1,&local_128,0);
    plVar7 = plStack_110;
    lVar27 = local_128;
    cVar3 = *(char *)(param_1 + 8);
    if (local_128 != 0) {
      local_120 = local_128;
      lVar18 = local_118 - local_128;
      uVar11 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
      if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar27,lVar18,4);
      }
      else {
        FUN_00c48fe8(plVar7,lVar27,lVar18,4);
      }
    }
    if ((0 < local_138) && (cVar3 != '\0')) {
      uVar6 = iVar17 - 1;
      uVar28 = (uVar6 >> 2) + 1;
      uVar26 = uVar28 & 3;
      iVar17 = 0;
      iVar16 = -(uVar28 & 0x7ffffffc);
      pfVar21 = *(float **)(param_6 + 0x80);
      do {
        fVar37 = *pfVar21;
        if ((int)((ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) >> 2) < 1) {
          lVar27 = 0;
        }
        else {
          lVar27 = (long)**(int **)(param_5 + 0x48) * (long)iVar17;
        }
        if (0 < iVar36) {
          uVar28 = 0;
          pfVar22 = (float *)(*(long *)(param_5 + 0x80) + lVar27 * 4);
          do {
            if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 1) {
              lVar27 = 0;
            }
            else {
              lVar27 = (long)**(int **)(param_1 + 0x48) * (long)iVar17;
            }
            if ((int)((ulong)(lStack_d8 - local_e0) >> 2) < 1) {
              lVar18 = 0;
              pfVar20 = local_70;
            }
            else {
              lVar18 = (long)(int)(*local_a8 * (uVar28 | 1));
              pfVar20 = local_70 + (int)(*local_a8 * uVar28);
            }
            fVar38 = *pfVar22;
            if ((1 < iVar35) && (1 < iVar19)) {
              fVar39 = pfVar22[1];
              puVar32 = (undefined8 *)(*(long *)(param_1 + 0x80) + lVar27 * 4);
              pfVar34 = local_70 + lVar18;
              iVar29 = 0;
              do {
                if (uVar28 == 0) {
                  iVar10 = iVar16;
                  if (0xb < uVar6) {
                    do {
                      uVar41 = *(undefined8 *)pfVar20;
                      uVar42 = *(undefined8 *)pfVar34;
                      puVar32[1] = CONCAT44(fVar37 + fVar38 * (float)((ulong)*(undefined8 *)
                                                                              (pfVar20 + 2) >> 0x20)
                                            + fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 2)
                                                              >> 0x20),
                                            fVar37 + fVar38 * (float)*(undefined8 *)(pfVar20 + 2) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 2));
                      *puVar32 = CONCAT44(fVar37 + fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                          fVar39 * (float)((ulong)uVar42 >> 0x20),
                                          fVar37 + fVar38 * (float)uVar41 + fVar39 * (float)uVar42);
                      uVar41 = *(undefined8 *)(pfVar20 + 4);
                      uVar42 = *(undefined8 *)(pfVar34 + 4);
                      iVar10 = iVar10 + 4;
                      puVar32[3] = CONCAT44(fVar37 + fVar38 * (float)((ulong)*(undefined8 *)
                                                                              (pfVar20 + 6) >> 0x20)
                                            + fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 6)
                                                              >> 0x20),
                                            fVar37 + fVar38 * (float)*(undefined8 *)(pfVar20 + 6) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 6));
                      puVar32[2] = CONCAT44(fVar37 + fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            fVar37 + fVar38 * (float)uVar41 + fVar39 * (float)uVar42
                                           );
                      uVar41 = *(undefined8 *)(pfVar20 + 8);
                      uVar42 = *(undefined8 *)(pfVar34 + 8);
                      puVar32[5] = CONCAT44(fVar37 + fVar38 * (float)((ulong)*(undefined8 *)
                                                                              (pfVar20 + 10) >> 0x20
                                                                     ) +
                                            fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 10) >>
                                                            0x20),
                                            fVar37 + fVar38 * (float)*(undefined8 *)(pfVar20 + 10) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 10));
                      puVar32[4] = CONCAT44(fVar37 + fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            fVar37 + fVar38 * (float)uVar41 + fVar39 * (float)uVar42
                                           );
                      uVar41 = *(undefined8 *)(pfVar20 + 0xc);
                      pfVar25 = pfVar34 + 0xe;
                      uVar42 = *(undefined8 *)(pfVar34 + 0xc);
                      pfVar34 = pfVar34 + 0x10;
                      puVar32[7] = CONCAT44(fVar37 + fVar38 * (float)((ulong)*(undefined8 *)
                                                                              (pfVar20 + 0xe) >>
                                                                     0x20) +
                                            fVar39 * (float)((ulong)*(undefined8 *)pfVar25 >> 0x20),
                                            fVar37 + fVar38 * (float)*(undefined8 *)(pfVar20 + 0xe)
                                            + fVar39 * (float)*(undefined8 *)pfVar25);
                      puVar32[6] = CONCAT44(fVar37 + fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            fVar37 + fVar38 * (float)uVar41 + fVar39 * (float)uVar42
                                           );
                      puVar32 = puVar32 + 8;
                      pfVar20 = pfVar20 + 0x10;
                    } while (iVar10 != 0);
                  }
                  if (uVar26 != 0) {
                    pfVar25 = pfVar20;
                    puVar31 = puVar32;
                    pfVar33 = pfVar34;
                    uVar9 = uVar26;
                    do {
                      pfVar20 = pfVar25 + 4;
                      uVar41 = *(undefined8 *)pfVar25;
                      pfVar34 = pfVar33 + 4;
                      uVar42 = *(undefined8 *)pfVar33;
                      uVar9 = uVar9 - 1;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = CONCAT44(fVar37 + fVar38 * (float)((ulong)*(undefined8 *)
                                                                              (pfVar25 + 2) >> 0x20)
                                            + fVar39 * (float)((ulong)*(undefined8 *)(pfVar33 + 2)
                                                              >> 0x20),
                                            fVar37 + fVar38 * (float)*(undefined8 *)(pfVar25 + 2) +
                                            fVar39 * (float)*(undefined8 *)(pfVar33 + 2));
                      *puVar31 = CONCAT44(fVar37 + fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                          fVar39 * (float)((ulong)uVar42 >> 0x20),
                                          fVar37 + fVar38 * (float)uVar41 + fVar39 * (float)uVar42);
                      pfVar25 = pfVar20;
                      puVar31 = puVar32;
                      pfVar33 = pfVar34;
                    } while (uVar9 != 0);
                  }
                }
                else {
                  iVar10 = iVar16;
                  if (0xb < uVar6) {
                    do {
                      iVar10 = iVar10 + 4;
                      uVar41 = *(undefined8 *)pfVar20;
                      uVar42 = *(undefined8 *)pfVar34;
                      puVar32[1] = CONCAT44((float)((ulong)puVar32[1] >> 0x20) +
                                            fVar38 * (float)((ulong)*(undefined8 *)(pfVar20 + 2) >>
                                                            0x20) +
                                            fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >>
                                                            0x20),
                                            (float)puVar32[1] +
                                            fVar38 * (float)*(undefined8 *)(pfVar20 + 2) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 2));
                      *puVar32 = CONCAT44((float)((ulong)*puVar32 >> 0x20) +
                                          fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                          fVar39 * (float)((ulong)uVar42 >> 0x20),
                                          (float)*puVar32 + fVar38 * (float)uVar41 +
                                          fVar39 * (float)uVar42);
                      uVar41 = *(undefined8 *)(pfVar20 + 4);
                      uVar42 = *(undefined8 *)(pfVar34 + 4);
                      puVar32[3] = CONCAT44((float)((ulong)puVar32[3] >> 0x20) +
                                            fVar38 * (float)((ulong)*(undefined8 *)(pfVar20 + 6) >>
                                                            0x20) +
                                            fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 6) >>
                                                            0x20),
                                            (float)puVar32[3] +
                                            fVar38 * (float)*(undefined8 *)(pfVar20 + 6) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 6));
                      puVar32[2] = CONCAT44((float)((ulong)puVar32[2] >> 0x20) +
                                            fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            (float)puVar32[2] + fVar38 * (float)uVar41 +
                                            fVar39 * (float)uVar42);
                      uVar41 = *(undefined8 *)(pfVar20 + 8);
                      uVar42 = *(undefined8 *)(pfVar34 + 8);
                      puVar32[5] = CONCAT44((float)((ulong)puVar32[5] >> 0x20) +
                                            fVar38 * (float)((ulong)*(undefined8 *)(pfVar20 + 10) >>
                                                            0x20) +
                                            fVar39 * (float)((ulong)*(undefined8 *)(pfVar34 + 10) >>
                                                            0x20),
                                            (float)puVar32[5] +
                                            fVar38 * (float)*(undefined8 *)(pfVar20 + 10) +
                                            fVar39 * (float)*(undefined8 *)(pfVar34 + 10));
                      puVar32[4] = CONCAT44((float)((ulong)puVar32[4] >> 0x20) +
                                            fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            (float)puVar32[4] + fVar38 * (float)uVar41 +
                                            fVar39 * (float)uVar42);
                      pfVar25 = pfVar20 + 0xe;
                      uVar41 = *(undefined8 *)(pfVar20 + 0xc);
                      pfVar33 = pfVar34 + 0xe;
                      uVar42 = *(undefined8 *)(pfVar34 + 0xc);
                      pfVar34 = pfVar34 + 0x10;
                      pfVar20 = pfVar20 + 0x10;
                      puVar32[7] = CONCAT44((float)((ulong)puVar32[7] >> 0x20) +
                                            fVar38 * (float)((ulong)*(undefined8 *)pfVar25 >> 0x20)
                                            + fVar39 * (float)((ulong)*(undefined8 *)pfVar33 >> 0x20
                                                              ),
                                            (float)puVar32[7] +
                                            fVar38 * (float)*(undefined8 *)pfVar25 +
                                            fVar39 * (float)*(undefined8 *)pfVar33);
                      puVar32[6] = CONCAT44((float)((ulong)puVar32[6] >> 0x20) +
                                            fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                            fVar39 * (float)((ulong)uVar42 >> 0x20),
                                            (float)puVar32[6] + fVar38 * (float)uVar41 +
                                            fVar39 * (float)uVar42);
                      puVar32 = puVar32 + 8;
                    } while (iVar10 != 0);
                  }
                  if (uVar26 != 0) {
                    pfVar25 = pfVar20;
                    puVar31 = puVar32;
                    pfVar33 = pfVar34;
                    uVar9 = uVar26;
                    do {
                      uVar9 = uVar9 - 1;
                      pfVar20 = pfVar25 + 4;
                      uVar41 = *(undefined8 *)pfVar25;
                      pfVar34 = pfVar33 + 4;
                      uVar42 = *(undefined8 *)pfVar33;
                      puVar32 = puVar31 + 2;
                      puVar31[1] = CONCAT44((float)((ulong)puVar31[1] >> 0x20) +
                                            fVar38 * (float)((ulong)*(undefined8 *)(pfVar25 + 2) >>
                                                            0x20) +
                                            fVar39 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >>
                                                            0x20),
                                            (float)puVar31[1] +
                                            fVar38 * (float)*(undefined8 *)(pfVar25 + 2) +
                                            fVar39 * (float)*(undefined8 *)(pfVar33 + 2));
                      *puVar31 = CONCAT44((float)((ulong)*puVar31 >> 0x20) +
                                          fVar38 * (float)((ulong)uVar41 >> 0x20) +
                                          fVar39 * (float)((ulong)uVar42 >> 0x20),
                                          (float)*puVar31 + fVar38 * (float)uVar41 +
                                          fVar39 * (float)uVar42);
                      pfVar25 = pfVar20;
                      puVar31 = puVar32;
                      pfVar33 = pfVar34;
                    } while (uVar9 != 0);
                  }
                }
                iVar29 = iVar29 + 1;
              } while (iVar29 != iVar1);
            }
            uVar28 = uVar28 + 2;
            pfVar22 = pfVar22 + 2;
          } while ((int)uVar28 < iVar36);
        }
        iVar17 = iVar17 + 1;
        pfVar21 = pfVar21 + 1;
      } while (iVar17 != local_138);
    }
  }
  FUN_00a43810(&local_f0);
  return;
}


