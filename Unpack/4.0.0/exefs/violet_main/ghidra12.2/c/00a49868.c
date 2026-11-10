/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a49868; name: FUN_00a49868
 */


void FUN_00a49868(long param_1,long param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  long local_d8;
  long local_d0;
  long local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  
  if ((((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
      (*(char *)(param_4 + 8) == '\0')) || (*(char *)(param_5 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  iVar13 = (int)((ulong)(*(long *)(param_2 + 0x18) - (long)piVar2) >> 2);
  if (iVar13 < 1) {
    iVar26 = 0;
    iVar25 = 0;
  }
  else {
    iVar25 = *piVar2;
    if (iVar13 == 1) {
      iVar26 = 0;
    }
    else {
      iVar26 = piVar2[1];
      if (2 < iVar13) {
        iVar13 = piVar2[2];
        goto LAB_00a49948;
      }
    }
  }
  iVar13 = 0;
LAB_00a49948:
  if ((int)((ulong)(*(long *)(param_4 + 0x18) - (long)*(int **)(param_4 + 0x10)) >> 2) < 1) {
    iVar23 = 0;
  }
  else {
    iVar23 = **(int **)(param_4 + 0x10);
  }
  local_c8 = 0;
  plStack_c0 = DAT_04836488;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b8 = 0x3fffffffffffffff;
  uStack_b0 = 0;
  iStack_e4 = iVar23;
  local_e0 = iVar26 * param_3;
  iStack_dc = iVar13 * param_3;
  FUN_00a416f8(&local_d8,0,&iStack_e4,&local_d8);
  FUN_00a42c28(param_1,&local_d8,0);
  plVar7 = plStack_c0;
  lVar19 = local_d8;
  cVar3 = *(char *)(param_1 + 8);
  if (local_d8 != 0) {
    local_d0 = local_d8;
    lVar24 = local_c8 - local_d8;
    uVar8 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar19,lVar24,4);
    }
    else {
      FUN_00c48fe8(plVar7,lVar19,lVar24,4);
    }
  }
  if ((0 < iVar23) && (cVar3 != '\0')) {
    iVar5 = iVar13 + -1;
    iVar6 = iVar13 * param_3 + -1;
    iVar12 = 0;
    pfVar14 = *(float **)(param_5 + 0x80);
    do {
      fVar27 = *pfVar14;
      if (0 < iVar25) {
        iVar15 = 0;
        do {
          if ((int)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) >> 2) < 2) {
            lVar19 = 0;
          }
          else {
            lVar19 = (long)(**(int **)(param_4 + 0x48) * iVar12 +
                           (*(int **)(param_4 + 0x48))[1] * iVar15);
          }
          pfVar17 = (float *)(*(long *)(param_4 + 0x80) + lVar19 * 4);
          fVar28 = *pfVar17;
          fVar42 = pfVar17[1];
          fVar29 = pfVar17[2];
          fVar45 = pfVar17[3];
          fVar31 = pfVar17[8];
          fVar46 = pfVar17[4];
          fVar47 = pfVar17[5];
          fVar30 = pfVar17[6];
          fVar49 = pfVar17[7];
          pfVar17 = *(float **)(param_2 + 0x80);
          if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
            lVar19 = 0;
            pfVar9 = pfVar17;
          }
          else {
            iVar11 = **(int **)(param_2 + 0x48) * iVar15;
            lVar19 = (long)(iVar11 + (*(int **)(param_2 + 0x48))[1] * (iVar26 + -1));
            pfVar9 = pfVar17 + iVar11;
          }
          pfVar17 = pfVar17 + lVar19;
          pfVar20 = *(float **)(param_1 + 0x80);
          if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 2) {
            lVar19 = 0;
            pfVar18 = pfVar20;
          }
          else {
            iVar11 = **(int **)(param_1 + 0x48) * iVar12;
            lVar19 = (long)(iVar11 + (*(int **)(param_1 + 0x48))[1] * (iVar26 * param_3 + -1));
            pfVar18 = pfVar20 + iVar11;
          }
          pfVar20 = pfVar20 + lVar19;
          fVar36 = fVar27;
          fVar38 = fVar27;
          if (iVar15 != 0) {
            fVar36 = *pfVar18;
            fVar38 = *pfVar20;
          }
          fVar32 = fVar28 + fVar42;
          fVar33 = fVar32 + fVar29;
          fVar34 = fVar33 + fVar45 + fVar46 + fVar47;
          fVar39 = *pfVar17;
          fVar37 = fVar34 + fVar30 + fVar49 + fVar31;
          *pfVar18 = fVar36 + fVar37 * *pfVar9;
          *pfVar20 = fVar38 + fVar37 * fVar39;
          fVar36 = fVar27;
          fVar38 = fVar27;
          if (iVar15 != 0) {
            fVar36 = pfVar18[iVar6];
            fVar38 = pfVar20[iVar6];
          }
          fVar39 = pfVar17[iVar5];
          pfVar18[iVar6] = fVar36 + fVar37 * pfVar9[iVar5];
          pfVar20[iVar6] = fVar38 + fVar37 * fVar39;
          if (1 < iVar13) {
            pfVar18 = pfVar18 + 1;
            pfVar20 = pfVar20 + 1;
            pfVar9 = pfVar9 + 1;
            fVar38 = fVar29 + fVar47 + fVar31;
            fVar36 = fVar32 + fVar45 + fVar46 + fVar30 + fVar49;
            fVar37 = fVar28 + fVar45 + fVar30;
            pfVar17 = pfVar17 + 1;
            fVar39 = fVar31 + fVar47 + fVar29 + fVar42 + fVar46 + fVar49;
            iVar11 = iVar5;
            if (iVar15 == 0) {
              do {
                fVar35 = pfVar9[-1];
                fVar41 = *pfVar9;
                fVar40 = pfVar17[-1];
                fVar43 = *pfVar17;
                pfVar17 = pfVar17 + 1;
                pfVar18[1] = fVar27 + fVar37 * fVar35 + fVar39 * fVar41;
                iVar11 = iVar11 + -1;
                pfVar9 = pfVar9 + 1;
                *pfVar18 = fVar27 + fVar36 * fVar35 + fVar38 * fVar41;
                *pfVar20 = fVar27 + fVar36 * fVar40 + fVar38 * fVar43;
                pfVar20[1] = fVar27 + fVar37 * fVar40 + fVar39 * fVar43;
                pfVar18 = pfVar18 + 2;
                pfVar20 = pfVar20 + 2;
              } while (iVar11 != 0);
            }
            else {
              do {
                fVar43 = pfVar9[-1];
                fVar50 = *pfVar9;
                fVar44 = pfVar17[-1];
                fVar35 = *pfVar17;
                fVar40 = *pfVar20;
                fVar41 = pfVar20[1];
                iVar11 = iVar11 + -1;
                pfVar9 = pfVar9 + 1;
                pfVar17 = pfVar17 + 1;
                *pfVar18 = *pfVar18 + fVar36 * fVar43 + fVar38 * fVar50;
                pfVar18[1] = pfVar18[1] + fVar37 * fVar43 + fVar39 * fVar50;
                *pfVar20 = fVar40 + fVar36 * fVar44 + fVar38 * fVar35;
                pfVar20[1] = fVar41 + fVar37 * fVar44 + fVar39 * fVar35;
                pfVar18 = pfVar18 + 2;
                pfVar20 = pfVar20 + 2;
              } while (iVar11 != 0);
            }
          }
          if (1 < iVar26) {
            fVar42 = fVar42 + fVar29;
            fVar37 = fVar32 + fVar45 + fVar46;
            fVar36 = fVar30 + fVar49;
            fVar39 = fVar42 + fVar46 + fVar47;
            fVar35 = fVar46 + fVar47 + fVar49 + fVar31;
            fVar38 = fVar45 + fVar46 + fVar47 + fVar30 + fVar49 + fVar31;
            fVar46 = fVar45 + fVar46 + fVar30 + fVar49;
            iVar11 = 0;
            do {
              pfVar17 = *(float **)(param_2 + 0x80);
              if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 2) {
                lVar19 = 0;
                pfVar9 = pfVar17;
              }
              else {
                iVar16 = (*(int **)(param_2 + 0x48))[1];
                iVar4 = **(int **)(param_2 + 0x48) * iVar15;
                lVar19 = (long)(iVar4 + iVar16 * (iVar11 + 1));
                pfVar9 = pfVar17 + (iVar4 + iVar16 * iVar11);
              }
              iVar16 = iVar11 + 1;
              pfVar17 = pfVar17 + lVar19;
              pfVar20 = *(float **)(param_1 + 0x80);
              if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 2) {
                lVar19 = 0;
                pfVar18 = pfVar20;
              }
              else {
                uVar1 = iVar11 << 1 | 1;
                iVar11 = (*(int **)(param_1 + 0x48))[1];
                iVar4 = **(int **)(param_1 + 0x48) * iVar12;
                lVar19 = (long)(int)(iVar4 + iVar11 * (uVar1 + 1));
                pfVar18 = pfVar20 + (int)(iVar4 + iVar11 * uVar1);
              }
              pfVar20 = pfVar20 + lVar19;
              fVar40 = fVar27;
              fVar41 = fVar27;
              if (iVar15 != 0) {
                fVar40 = *pfVar18;
                fVar41 = *pfVar20;
              }
              fVar44 = *pfVar9;
              fVar43 = *pfVar17;
              *pfVar18 = fVar40 + fVar34 * fVar44 + (fVar36 + fVar31) * fVar43;
              *pfVar20 = fVar41 + fVar33 * fVar44 + fVar38 * fVar43;
              fVar40 = fVar27;
              fVar41 = fVar27;
              if (iVar15 != 0) {
                fVar40 = pfVar18[iVar6];
                fVar41 = pfVar20[iVar6];
              }
              fVar44 = pfVar9[iVar5];
              fVar43 = pfVar17[iVar5];
              pfVar18[iVar6] = fVar40 + fVar34 * fVar44 + (fVar36 + fVar31) * fVar43;
              pfVar20[iVar6] = fVar41 + fVar33 * fVar44 + fVar38 * fVar43;
              if (1 < iVar13) {
                pfVar9 = pfVar9 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar21 = pfVar18 + 1;
                pfVar18 = pfVar18 + 1;
                pfVar22 = pfVar20 + 1;
                pfVar20 = pfVar20 + 1;
                iVar11 = iVar5;
                if (iVar15 == 0) {
                  do {
                    fVar43 = pfVar9[-1];
                    fVar44 = *pfVar9;
                    pfVar9 = pfVar9 + 1;
                    fVar41 = pfVar17[-1];
                    fVar40 = *pfVar17;
                    iVar11 = iVar11 + -1;
                    *pfVar21 = fVar27 + fVar37 * fVar43 + (fVar29 + fVar47) * fVar44 +
                               fVar36 * fVar41 + fVar31 * fVar40;
                    pfVar21[1] = fVar27 + (fVar28 + fVar45) * fVar43 + fVar39 * fVar44 +
                                 fVar30 * fVar41 + (fVar49 + fVar31) * fVar40;
                    *pfVar22 = fVar27 + fVar32 * fVar43 + fVar29 * fVar44 + fVar46 * fVar41 +
                               (fVar47 + fVar31) * fVar40;
                    pfVar22[1] = fVar27 + fVar28 * fVar43 + fVar42 * fVar44 +
                                 (fVar45 + fVar30) * fVar41 + fVar35 * fVar40;
                    pfVar17 = pfVar17 + 1;
                    pfVar21 = pfVar21 + 2;
                    pfVar22 = pfVar22 + 2;
                  } while (iVar11 != 0);
                }
                else {
                  do {
                    fVar48 = pfVar9[-1];
                    fVar43 = *pfVar9;
                    fVar40 = *pfVar20;
                    fVar41 = pfVar20[1];
                    fVar44 = pfVar17[-1];
                    fVar50 = *pfVar17;
                    pfVar17 = pfVar17 + 1;
                    iVar11 = iVar11 + -1;
                    pfVar9 = pfVar9 + 1;
                    *pfVar18 = *pfVar18 + fVar37 * fVar48 + (fVar29 + fVar47) * fVar43 +
                               fVar36 * fVar44 + fVar31 * fVar50;
                    pfVar18[1] = pfVar18[1] + (fVar28 + fVar45) * fVar48 + fVar39 * fVar43 +
                                 fVar30 * fVar44 + (fVar49 + fVar31) * fVar50;
                    *pfVar20 = fVar40 + fVar32 * fVar48 + fVar29 * fVar43 + fVar46 * fVar44 +
                               (fVar47 + fVar31) * fVar50;
                    pfVar20[1] = fVar41 + fVar28 * fVar48 + fVar42 * fVar43 +
                                 (fVar45 + fVar30) * fVar44 + fVar35 * fVar50;
                    pfVar18 = pfVar18 + 2;
                    pfVar20 = pfVar20 + 2;
                  } while (iVar11 != 0);
                }
              }
              iVar11 = iVar16;
            } while (iVar16 < iVar26 + -1);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != iVar25);
      }
      iVar12 = iVar12 + 1;
      pfVar14 = pfVar14 + 1;
    } while (iVar12 != iVar23);
  }
  return;
}


