/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a46fec; name: FUN_00a46fec
 */


void FUN_00a46fec(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  long *plVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  float *pfVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  long lVar38;
  float *pfVar39;
  uint uVar40;
  float *pfVar41;
  long lVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  int local_15c;
  uint local_138;
  int local_134;
  int iStack_130;
  uint local_12c;
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
  }
  else {
    if ((int)((ulong)(*(long *)(param_5 + 0x18) - (long)*(int **)(param_5 + 0x10)) >> 2) < 1) {
      local_15c = 0;
    }
    else {
      local_15c = **(int **)(param_5 + 0x10);
    }
    iVar16 = 0;
    if (param_7 != 0) {
      iVar16 = 0x2c0 / param_7;
    }
    local_f0 = &PTR_FUN_04540ef8;
    local_e8 = '\x01';
    local_134 = 3;
    uVar17 = 0;
    if (param_7 != 0) {
      uVar17 = 0x500 / param_7;
    }
    local_b0 = 0;
    local_e0 = 0;
    lStack_d8 = 0;
    local_d0 = 0;
    plStack_c8 = DAT_04836488;
    local_c0 = 0x3fffffffffffffff;
    uStack_b8 = 0;
    local_f8 = 0;
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    plStack_90 = DAT_04836488;
    local_88 = 0x3fffffffffffffff;
    uStack_80 = 0;
    local_78 = 0;
    local_118 = 0;
    plStack_110 = DAT_04836488;
    local_70 = (float *)0x0;
    local_128 = 0;
    local_120 = 0;
    local_108 = 0x3fffffffffffffff;
    uStack_100 = 0;
    iStack_130 = iVar16;
    local_12c = uVar17;
    FUN_00a416f8(&local_128,0,&local_134,&local_128);
    FUN_00a42c28(&local_f0,&local_128,0);
    plVar27 = plStack_110;
    lVar38 = local_128;
    if (local_e8 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
      if (local_128 != 0) {
        local_120 = local_128;
        lVar42 = local_118 - local_128;
        uVar29 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
        if (((uVar29 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar38,lVar42,4);
        }
        else {
          FUN_00c48fe8(plVar27,lVar38,lVar42,4);
        }
      }
    }
    else {
      if (local_128 != 0) {
        local_120 = local_128;
        lVar42 = local_118 - local_128;
        uVar29 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
        if (((uVar29 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar38,lVar42,4);
        }
        else {
          FUN_00c48fe8(plVar27,lVar38,lVar42,4);
        }
      }
      iVar34 = 0;
      pfVar35 = *(float **)(param_4 + 0x80);
      pfVar31 = local_70;
      do {
        fVar44 = *pfVar35;
        if ((int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2) < 1) {
          lVar38 = 0;
        }
        else {
          lVar38 = (long)**(int **)(param_3 + 0x48) * (long)iVar34;
        }
        if (0 < iVar16) {
          pfVar41 = (float *)(*(long *)(param_3 + 0x80) + lVar38 * 4);
          iVar28 = 0;
          local_138 = 4;
          do {
            if (0 < (int)uVar17) {
              uVar33 = 0;
              pfVar39 = pfVar31;
              do {
                lVar38 = *(long *)(param_2 + 0x80);
                fVar45 = fVar44;
                if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2)
                {
                  uVar19 = uVar33 - 4;
                  uVar9 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar9 = 4 - uVar33;
                  }
                  uVar9 = uVar9 % 0x9fe;
                  if (0x4ff < uVar9) {
                    uVar9 = 0x9fe - uVar9;
                  }
                  uVar20 = uVar33 - 3;
                  uVar10 = uVar20;
                  if ((int)uVar20 < 0) {
                    uVar10 = 3 - uVar33;
                  }
                  uVar10 = uVar10 % 0x9fe;
                  if (0x4ff < uVar10) {
                    uVar10 = 0x9fe - uVar10;
                  }
                  uVar21 = uVar33 - 2;
                  uVar11 = uVar21;
                  if ((int)uVar21 < 0) {
                    uVar11 = 2 - uVar33;
                  }
                  uVar11 = uVar11 % 0x9fe;
                  uVar32 = uVar33 - 1;
                  uVar12 = uVar33 % 0x9fe;
                  uVar13 = (uVar33 + 1) % 0x9fe;
                  if (0x4ff < uVar11) {
                    uVar11 = 0x9fe - uVar11;
                  }
                  uVar18 = 1 - uVar33;
                  if (uVar33 != 0) {
                    uVar18 = uVar32;
                  }
                  uVar18 = uVar18 % 0x9fe;
                  if (0x4ff < uVar18) {
                    uVar18 = 0x9fe - uVar18;
                  }
                  if (0x4ff < uVar12) {
                    uVar12 = 0x9fe - uVar12;
                  }
                  if (0x4ff < uVar13) {
                    uVar13 = 0x9fe - uVar13;
                  }
                  uVar40 = (uVar33 + 2) % 0x9fe;
                  if (0x4ff < uVar40) {
                    uVar40 = 0x9fe - uVar40;
                  }
                  uVar14 = (uVar33 + 3) % 0x9fe;
                  if (0x4ff < uVar14) {
                    uVar14 = 0x9fe - uVar14;
                  }
                  uVar15 = (uVar33 + 4) % 0x9fe;
                  if (0x4ff < uVar15) {
                    uVar15 = 0x9fe - uVar15;
                  }
                  if (0x4ff < uVar19) {
                    uVar19 = uVar9;
                  }
                  if (0x4ff < uVar20) {
                    uVar20 = uVar10;
                  }
                  if (0x4ff < uVar21) {
                    uVar21 = uVar11;
                  }
                  if (0x4ff < uVar32) {
                    uVar32 = uVar18;
                  }
                  uVar9 = uVar33;
                  if (0x4ff < uVar33) {
                    uVar9 = uVar12;
                  }
                  if (uVar33 < 0x4ff) {
                    uVar13 = uVar33 + 1;
                  }
                  uVar10 = uVar33 + 2;
                  if (0x4fd < uVar33) {
                    uVar10 = uVar40;
                  }
                  uVar11 = uVar33 + 3;
                  if (0x4fc < uVar33) {
                    uVar11 = uVar14;
                  }
                  uVar12 = uVar33 + 4;
                  if (0x4fb < uVar33) {
                    uVar12 = uVar15;
                  }
                  lVar42 = 0;
                  do {
                    pfVar31 = (float *)((long)pfVar41 + lVar42);
                    lVar42 = lVar42 + 0x24;
                    fVar45 = fVar45 + *pfVar31 * *(float *)(lVar38 + (ulong)uVar19 * 4) +
                             pfVar31[1] * *(float *)(lVar38 + (ulong)uVar20 * 4) +
                             pfVar31[2] * *(float *)(lVar38 + (ulong)uVar21 * 4) +
                             pfVar31[3] * *(float *)(lVar38 + (ulong)uVar32 * 4) +
                             pfVar31[4] * *(float *)(lVar38 + (ulong)uVar9 * 4) +
                             pfVar31[5] * *(float *)(lVar38 + (long)(int)uVar13 * 4) +
                             pfVar31[6] * *(float *)(lVar38 + (long)(int)uVar10 * 4) +
                             pfVar31[7] * *(float *)(lVar38 + (long)(int)uVar11 * 4) +
                             pfVar31[8] * *(float *)(lVar38 + (long)(int)uVar12 * 4);
                  } while ((int)lVar42 != 0x144);
                }
                else {
                  uVar19 = uVar33 - 4;
                  uVar9 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar9 = 4 - uVar33;
                  }
                  uVar9 = uVar9 % 0x9fe;
                  if (0x4ff < uVar9) {
                    uVar9 = 0x9fe - uVar9;
                  }
                  uVar20 = uVar33 - 3;
                  uVar10 = uVar20;
                  if ((int)uVar20 < 0) {
                    uVar10 = 3 - uVar33;
                  }
                  uVar10 = uVar10 % 0x9fe;
                  if (0x4ff < uVar10) {
                    uVar10 = 0x9fe - uVar10;
                  }
                  uVar21 = uVar33 - 2;
                  uVar11 = uVar21;
                  if ((int)uVar21 < 0) {
                    uVar11 = 2 - uVar33;
                  }
                  uVar11 = uVar11 % 0x9fe;
                  uVar18 = uVar33 - 1;
                  uVar12 = uVar33 % 0x9fe;
                  uVar13 = (uVar33 + 1) % 0x9fe;
                  uVar32 = (uVar33 + 2) % 0x9fe;
                  if (0x4ff < uVar11) {
                    uVar11 = 0x9fe - uVar11;
                  }
                  uVar40 = 1 - uVar33;
                  if (uVar33 != 0) {
                    uVar40 = uVar18;
                  }
                  uVar14 = (uVar33 + 3) % 0x9fe;
                  uVar15 = (uVar33 + 4) % 0x9fe;
                  uVar40 = uVar40 % 0x9fe;
                  if (0x4ff < uVar40) {
                    uVar40 = 0x9fe - uVar40;
                  }
                  if (0x4ff < uVar12) {
                    uVar12 = 0x9fe - uVar12;
                  }
                  if (0x4ff < uVar13) {
                    uVar13 = 0x9fe - uVar13;
                  }
                  if (0x4ff < uVar32) {
                    uVar32 = 0x9fe - uVar32;
                  }
                  if (0x4ff < uVar14) {
                    uVar14 = 0x9fe - uVar14;
                  }
                  if (0x4ff < uVar15) {
                    uVar15 = 0x9fe - uVar15;
                  }
                  if (0x4ff < uVar19) {
                    uVar19 = uVar9;
                  }
                  if (0x4ff < uVar20) {
                    uVar20 = uVar10;
                  }
                  if (0x4ff < uVar21) {
                    uVar21 = uVar11;
                  }
                  if (0x4ff < uVar18) {
                    uVar18 = uVar40;
                  }
                  uVar9 = uVar33;
                  if (0x4ff < uVar33) {
                    uVar9 = uVar12;
                  }
                  if (uVar33 < 0x4ff) {
                    uVar13 = uVar33 + 1;
                  }
                  uVar10 = uVar33 + 2;
                  if (0x4fd < uVar33) {
                    uVar10 = uVar32;
                  }
                  uVar11 = uVar33 + 3;
                  if (0x4fc < uVar33) {
                    uVar11 = uVar14;
                  }
                  uVar12 = uVar33 + 4;
                  if (0x4fb < uVar33) {
                    uVar12 = uVar15;
                  }
                  iVar43 = -4;
                  pfVar31 = pfVar41;
                  uVar32 = local_138;
                  do {
                    uVar40 = iVar28 + iVar43;
                    if (0x2bf < uVar40) {
                      uVar14 = uVar32;
                      if (-1 < (int)uVar40) {
                        uVar14 = uVar40;
                      }
                      uVar40 = uVar14 % 0x57e;
                      if (0x2bf < uVar40) {
                        uVar40 = 0x57e - uVar40;
                      }
                    }
                    fVar46 = *pfVar31;
                    pfVar22 = pfVar31 + 1;
                    iVar43 = iVar43 + 1;
                    lVar42 = lVar38 + (long)(int)(**(int **)(param_2 + 0x48) * iVar34 +
                                                 uVar40 * (*(int **)(param_2 + 0x48))[1]) * 4;
                    pfVar2 = pfVar31 + 2;
                    pfVar23 = pfVar31 + 3;
                    pfVar3 = pfVar31 + 4;
                    pfVar24 = pfVar31 + 5;
                    uVar32 = uVar32 - 1;
                    pfVar4 = pfVar31 + 6;
                    pfVar25 = pfVar31 + 7;
                    pfVar1 = pfVar31 + 8;
                    pfVar31 = pfVar31 + 9;
                    fVar45 = fVar45 + fVar46 * *(float *)(lVar42 + (ulong)uVar19 * 4) +
                             *pfVar22 * *(float *)(lVar42 + (ulong)uVar20 * 4) +
                             *pfVar2 * *(float *)(lVar42 + (ulong)uVar21 * 4) +
                             *pfVar23 * *(float *)(lVar42 + (ulong)uVar18 * 4) +
                             *pfVar3 * *(float *)(lVar42 + (ulong)uVar9 * 4) +
                             *pfVar24 * *(float *)(lVar42 + (long)(int)uVar13 * 4) +
                             *pfVar4 * *(float *)(lVar42 + (long)(int)uVar10 * 4) +
                             *pfVar25 * *(float *)(lVar42 + (long)(int)uVar11 * 4) +
                             *pfVar1 * *(float *)(lVar42 + (long)(int)uVar12 * 4);
                  } while (iVar43 != 5);
                }
                uVar33 = uVar33 + 1;
                pfVar31 = pfVar39 + 1;
                *pfVar39 = fVar45;
                pfVar39 = pfVar31;
              } while (uVar33 != uVar17);
            }
            local_138 = local_138 - 1;
            iVar28 = iVar28 + 1;
          } while (iVar28 != iVar16);
        }
        iVar34 = iVar34 + 1;
        pfVar35 = pfVar35 + 1;
      } while (iVar34 != 3);
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      plStack_110 = DAT_04836488;
      local_108 = 0x3fffffffffffffff;
      uStack_100 = 0;
      local_134 = local_15c;
      local_f8 = 0;
      iStack_130 = iVar16;
      local_12c = uVar17;
      FUN_00a416f8(&local_128,0,&local_134,&local_128);
      FUN_00a42c28(param_1,&local_128,0);
      plVar27 = plStack_110;
      lVar38 = local_128;
      cVar8 = *(char *)(param_1 + 8);
      if (local_128 != 0) {
        local_120 = local_128;
        lVar42 = local_118 - local_128;
        uVar29 = (**(code **)(*plStack_110 + 0xf8))(plStack_110);
        if (((uVar29 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar38,lVar42,4);
        }
        else {
          FUN_00c48fe8(plVar27,lVar38,lVar42,4);
        }
      }
      if ((0 < local_15c) && (cVar8 != '\0')) {
        uVar9 = uVar17 - 1 >> 2;
        puVar36 = *(undefined8 **)(param_1 + 0x80);
        uVar33 = uVar9 + 1;
        iVar34 = 0;
        pfVar35 = *(float **)(param_6 + 0x80);
        do {
          fVar44 = *pfVar35;
          if ((int)((ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) >> 2) < 1) {
            lVar38 = 0;
          }
          else {
            lVar38 = (long)**(int **)(param_5 + 0x48) * (long)iVar34;
          }
          pfVar31 = (float *)(*(long *)(param_5 + 0x80) + lVar38 * 4);
          fVar45 = *pfVar31;
          if ((0 < iVar16) && (0 < (int)uVar17)) {
            fVar46 = pfVar31[1];
            fVar26 = pfVar31[2];
            iVar28 = 0;
            puVar37 = puVar36;
            do {
              if ((int)((ulong)(lStack_d8 - local_e0) >> 2) < 2) {
                lVar38 = 0;
                pfVar31 = local_70;
                pfVar41 = local_70;
              }
              else {
                iVar43 = local_a8[1] * iVar28;
                lVar38 = (long)(iVar43 + *local_a8 * 2);
                pfVar31 = local_70 + (iVar43 + *local_a8);
                pfVar41 = local_70 + iVar43;
              }
              pfVar39 = local_70 + lVar38;
              if (uVar9 != 0) {
                lVar38 = 0;
                iVar43 = -(uVar33 & 0x7ffffffe);
                do {
                  puVar36 = (undefined8 *)((long)pfVar41 + lVar38);
                  uVar47 = *puVar36;
                  puVar5 = (undefined8 *)((long)pfVar31 + lVar38);
                  uVar48 = *puVar5;
                  puVar6 = (undefined8 *)((long)pfVar39 + lVar38);
                  uVar49 = *puVar6;
                  puVar7 = (undefined8 *)((long)puVar37 + lVar38);
                  lVar38 = lVar38 + 0x20;
                  puVar7[1] = CONCAT44(fVar44 + fVar45 * (float)((ulong)puVar36[1] >> 0x20) +
                                       fVar46 * (float)((ulong)puVar5[1] >> 0x20) +
                                       fVar26 * (float)((ulong)puVar6[1] >> 0x20),
                                       fVar44 + fVar45 * (float)puVar36[1] +
                                       fVar46 * (float)puVar5[1] + fVar26 * (float)puVar6[1]);
                  *puVar7 = CONCAT44(fVar44 + fVar45 * (float)((ulong)uVar47 >> 0x20) +
                                     fVar46 * (float)((ulong)uVar48 >> 0x20) +
                                     fVar26 * (float)((ulong)uVar49 >> 0x20),
                                     fVar44 + fVar45 * (float)uVar47 + fVar46 * (float)uVar48 +
                                     fVar26 * (float)uVar49);
                  uVar47 = puVar36[2];
                  uVar48 = puVar5[2];
                  uVar49 = puVar6[2];
                  iVar43 = iVar43 + 2;
                  puVar7[3] = CONCAT44(fVar44 + fVar45 * (float)((ulong)puVar36[3] >> 0x20) +
                                       fVar46 * (float)((ulong)puVar5[3] >> 0x20) +
                                       fVar26 * (float)((ulong)puVar6[3] >> 0x20),
                                       fVar44 + fVar45 * (float)puVar36[3] +
                                       fVar46 * (float)puVar5[3] + fVar26 * (float)puVar6[3]);
                  puVar7[2] = CONCAT44(fVar44 + fVar45 * (float)((ulong)uVar47 >> 0x20) +
                                       fVar46 * (float)((ulong)uVar48 >> 0x20) +
                                       fVar26 * (float)((ulong)uVar49 >> 0x20),
                                       fVar44 + fVar45 * (float)uVar47 + fVar46 * (float)uVar48 +
                                       fVar26 * (float)uVar49);
                } while (iVar43 != 0);
                pfVar39 = (float *)((long)pfVar39 + lVar38);
                pfVar31 = (float *)((long)pfVar31 + lVar38);
                pfVar41 = (float *)((long)pfVar41 + lVar38);
                puVar37 = (undefined8 *)((long)puVar37 + lVar38);
              }
              puVar36 = puVar37;
              if ((uVar33 & 1) != 0) {
                uVar47 = *(undefined8 *)pfVar41;
                uVar48 = *(undefined8 *)pfVar31;
                uVar49 = *(undefined8 *)pfVar39;
                puVar36 = puVar37 + 2;
                puVar37[1] = CONCAT44(fVar44 + fVar45 * (float)((ulong)*(undefined8 *)(pfVar41 + 2)
                                                               >> 0x20) +
                                      fVar46 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)
                                      + fVar26 * (float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20
                                                        ),
                                      fVar44 + fVar45 * (float)*(undefined8 *)(pfVar41 + 2) +
                                      fVar46 * (float)*(undefined8 *)(pfVar31 + 2) +
                                      fVar26 * (float)*(undefined8 *)(pfVar39 + 2));
                *puVar37 = CONCAT44(fVar44 + fVar45 * (float)((ulong)uVar47 >> 0x20) +
                                    fVar46 * (float)((ulong)uVar48 >> 0x20) +
                                    fVar26 * (float)((ulong)uVar49 >> 0x20),
                                    fVar44 + fVar45 * (float)uVar47 + fVar46 * (float)uVar48 +
                                    fVar26 * (float)uVar49);
              }
              iVar28 = iVar28 + 1;
              puVar37 = puVar36;
            } while (iVar28 != iVar16);
          }
          iVar34 = iVar34 + 1;
          pfVar35 = pfVar35 + 1;
        } while (iVar34 != local_15c);
      }
    }
    FUN_00a43810(&local_f0);
  }
  return;
}


