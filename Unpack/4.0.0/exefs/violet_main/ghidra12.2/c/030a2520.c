/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a2520; name: FUN_030a2520
 */


void FUN_030a2520(undefined4 param_1,undefined4 param_2,undefined4 *param_3,long *param_4,
                 long *param_5)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float *pfVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  int *piVar23;
  byte *pbVar24;
  long lVar25;
  undefined4 *puVar26;
  int *piVar27;
  long lVar28;
  float fVar29;
  long lVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_84;
  undefined8 local_7c;
  int local_74;
  undefined2 local_64;
  undefined1 local_62;
  
  param_3[4] = 0x7f7fffee;
  *param_3 = param_1;
  param_3[1] = param_2;
  *(undefined1 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0x8000000000000000;
  puVar17 = (undefined8 *)(param_3 + 0xc);
  *puVar17 = 0;
  *(undefined8 *)(param_3 + 0xe) = 0x8000000000000000;
  puVar18 = (undefined8 *)(param_3 + 0x10);
  *puVar18 = 0;
  *(undefined8 *)(param_3 + 0x16) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0x12) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x1a) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0x8000000000000000;
  if (param_4 != param_5) {
    uVar36 = 0;
    plVar15 = param_4;
    do {
      plVar1 = plVar15 + 1;
      plVar15 = plVar15 + 2;
      uVar36 = (long)(int)*plVar1 + (long)(int)uVar36;
    } while (param_5 != plVar15);
    iVar35 = (int)uVar36;
    if (iVar35 < 1) {
      uVar14 = 0;
    }
    else {
      FUN_030a4888(puVar18,uVar36 & 0xffffffff);
      uVar14 = param_3[0xf] & 0x7fffffff;
    }
    if ((int)uVar14 < iVar35) {
      FUN_030a499c(puVar17,uVar36);
    }
    if ((int)(param_3[9] & 0x7fffffff) < iVar35) {
      FUN_030a4ac8(param_3 + 6,(long)iVar35);
    }
    if ((int)(param_3[0x1d] & 0x7fffffff) < iVar35) {
      FUN_030a4bfc(param_3 + 0x1a,(long)iVar35);
    }
    iVar35 = 0;
    do {
      uVar14 = *(uint *)(param_4 + 1);
      if (0 < (int)uVar14) {
        lVar19 = 0;
        uVar36 = 0;
        iVar32 = 0;
        iVar21 = uVar14 - 1;
        do {
          lVar25 = *param_4;
          pfVar2 = (float *)(lVar25 + (long)iVar21 * 8);
          pfVar3 = (float *)(lVar25 + lVar19);
          fVar39 = *pfVar3;
          fVar38 = *pfVar2;
          if (fVar38 - fVar39 != 0.0) {
            iVar33 = param_3[8];
            uVar5 = uVar36;
            pfVar12 = pfVar3;
            uVar13 = (long)iVar21;
            if (fVar38 >= fVar39) {
              uVar5 = (long)iVar21;
              pfVar12 = pfVar2;
              pfVar2 = pfVar3;
              uVar13 = uVar36;
            }
            fVar8 = *pfVar12;
            fVar9 = *(float *)(lVar25 + uVar13 * 8 + 4);
            fVar10 = *pfVar2;
            fVar31 = *(float *)(lVar25 + uVar5 * 8 + 4);
            fVar40 = fVar8 - fVar10;
            if ((fVar40 == 0.0) ||
               (fVar40 = (fVar31 - fVar9) / fVar40, fVar29 = fVar9, 10000.0 < ABS(fVar40))) {
              fVar40 = 0.0;
              fVar29 = fVar31;
              if (fVar38 < fVar39 == fVar31 <= fVar9) {
                fVar29 = fVar9;
              }
              fVar31 = fVar29;
            }
            piVar27 = (int *)(*(long *)(param_3 + 6) + (long)iVar33 * 0x38);
            *piVar27 = iVar33;
            *(bool *)(piVar27 + 1) = fVar38 < fVar39;
            piVar27[2] = (int)fVar10;
            piVar27[3] = (int)fVar29;
            piVar27[4] = (int)fVar8;
            piVar27[5] = (int)fVar31;
            piVar27[6] = (int)fVar40;
            *(undefined1 *)((long)piVar27 + 7) = local_62;
            *(undefined2 *)((long)piVar27 + 5) = local_64;
            iVar32 = iVar32 + 1;
            *(undefined8 *)(piVar27 + 7) = local_84;
            piVar27[0xb] = local_74;
            *(undefined8 *)(piVar27 + 9) = local_7c;
            piVar27[0xc] = 0;
            piVar27[0xd] = 0;
            param_3[8] = iVar33 + 1;
          }
          iVar21 = (int)uVar36;
          uVar36 = uVar36 + 1;
          lVar19 = lVar19 + 8;
        } while (uVar14 != uVar36);
        iVar21 = iVar32 + iVar35;
        if (iVar32 < 1) {
          iVar35 = iVar21;
        }
        else {
          iVar33 = iVar35;
          do {
            lVar25 = *(long *)(param_3 + 6);
            iVar7 = param_3[0x12];
            lVar19 = (long)iVar7 + 1;
            iVar6 = iVar35;
            if (iVar33 + 1 != iVar21) {
              iVar6 = iVar33 + 1;
            }
            if ((int)(param_3[0x13] & 0x7fffffff) <= iVar7) {
              FUN_030a4de4(puVar18,lVar19);
            }
            puVar4 = (undefined4 *)(*(long *)(param_3 + 0x10) + (long)iVar7 * 8);
            param_3[0x12] = (int)lVar19;
            puVar4[1] = param_3[0xe];
            lVar37 = (long)iVar33;
            lVar19 = (long)(int)param_3[0xe];
            lVar34 = (long)iVar6;
            if ((int)(param_3[0xf] & 0x7fffffff) <= (int)param_3[0xe]) {
              FUN_030a4ef8(puVar17,lVar19 + 1);
            }
            lVar16 = *(long *)(param_3 + 0xc);
            param_3[0xe] = (int)(lVar19 + 1);
            pbVar22 = (byte *)(lVar25 + lVar34 * 0x38 + 4);
            bVar11 = *pbVar22;
            puVar26 = (undefined4 *)(lVar16 + lVar19 * 0xc);
            pbVar24 = (byte *)(lVar25 + lVar37 * 0x38 + 4);
            if (bVar11 == *pbVar24) {
              if (bVar11 == 0) {
                lVar25 = lVar25 + lVar34 * 0x38;
                *(undefined4 **)(lVar25 + 0x28) = puVar26;
                lVar16 = lVar16 + lVar19 * 0xc;
                *puVar26 = 1;
                *(int *)(lVar16 + 4) = iVar6;
                *(int *)(lVar16 + 8) = iVar33;
              }
              else {
                lVar25 = lVar25 + lVar37 * 0x38;
                *(undefined4 **)(lVar25 + 0x28) = puVar26;
                lVar16 = lVar16 + lVar19 * 0xc;
                *puVar26 = 1;
                *(int *)(lVar16 + 4) = iVar33;
                *(int *)(lVar16 + 8) = iVar6;
              }
              puVar26 = (undefined4 *)(lVar25 + 0x10);
            }
            else {
              piVar23 = (int *)(lVar25 + (long)iVar33 * 0x38);
              piVar27 = (int *)(lVar25 + (long)iVar6 * 0x38);
              if (bVar11 == 0) {
                lVar28 = lVar25 + lVar37 * 0x38;
                *(undefined4 **)(lVar28 + 0x28) = puVar26;
                lVar30 = lVar25 + lVar34 * 0x38;
                *(undefined4 **)(lVar30 + 0x28) = puVar26;
                *puVar26 = 3;
                fVar38 = *(float *)(lVar28 + 0x14);
                fVar39 = *(float *)(lVar30 + 0x14);
                if (fVar38 == fVar39) {
                  fVar38 = *(float *)(lVar25 + lVar37 * 0x38 + 0x18);
                  fVar39 = *(float *)(lVar25 + lVar34 * 0x38 + 0x18);
                  if (fVar38 != fVar39) {
                    piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                    if (fVar38 <= fVar39) goto LAB_030a2988;
                    goto LAB_030a294c;
                  }
                  if (*pbVar24 != *pbVar22) {
                    piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                    if (*pbVar22 <= *pbVar24) goto LAB_030a2988;
                    goto LAB_030a294c;
                  }
                  piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                  if (*piVar23 < *piVar27) goto LAB_030a294c;
LAB_030a2988:
                  *piVar20 = iVar6;
                }
                else {
                  piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                  if (fVar39 <= fVar38) goto LAB_030a2988;
LAB_030a294c:
                  *piVar20 = iVar33;
                  iVar33 = iVar6;
                }
                *(int *)(lVar16 + lVar19 * 0xc + 8) = iVar33;
                puVar26 = (undefined4 *)(lVar25 + lVar34 * 0x38 + 0x10);
              }
              else {
                *puVar26 = 2;
                fVar38 = *(float *)(lVar25 + lVar37 * 0x38 + 0xc);
                fVar39 = *(float *)(lVar25 + lVar34 * 0x38 + 0xc);
                if (fVar38 == fVar39) {
                  fVar38 = *(float *)(lVar25 + lVar37 * 0x38 + 0x18);
                  fVar39 = *(float *)(lVar25 + lVar34 * 0x38 + 0x18);
                  if (fVar38 != fVar39) goto LAB_030a28c0;
                  if (*pbVar24 != *pbVar22) {
                    piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                    if (*pbVar24 < *pbVar22) goto LAB_030a28d8;
                    goto LAB_030a2a20;
                  }
                  piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                  if (*piVar27 <= *piVar23) goto LAB_030a2a20;
LAB_030a28d8:
                  *piVar20 = iVar33;
                  iVar33 = iVar6;
                }
                else {
LAB_030a28c0:
                  piVar20 = (int *)(lVar16 + lVar19 * 0xc + 4);
                  if (fVar38 < fVar39) goto LAB_030a28d8;
LAB_030a2a20:
                  *piVar20 = iVar6;
                }
                *(int *)(lVar16 + lVar19 * 0xc + 8) = iVar33;
                puVar26 = (undefined4 *)(lVar25 + lVar34 * 0x38 + 8);
              }
            }
            iVar32 = iVar32 + -1;
            *puVar4 = *puVar26;
            iVar33 = iVar6;
          } while (iVar32 != 0);
          iVar35 = iVar21;
        }
      }
      param_4 = param_4 + 2;
    } while (param_4 != param_5);
  }
  if ((int)param_3[0x12] < 2) {
    return;
  }
  FUN_030a4d10(*puVar18,0,param_3[0x12] + -1);
  return;
}


