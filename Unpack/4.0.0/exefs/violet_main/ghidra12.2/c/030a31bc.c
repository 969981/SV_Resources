/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a31bc; name: FUN_030a31bc
 */


void FUN_030a31bc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_274;
  undefined1 auStack_270 [448];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  lVar21 = *(long *)(param_1 + 0x18);
  iVar7 = *(int *)(param_2 + 4);
  lVar8 = (long)*(int *)(param_2 + 8);
  piVar20 = (int *)(lVar21 + lVar8 * 0x38);
  uVar6 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar6) {
    lVar11 = *(long *)(param_1 + 0x68);
    lVar24 = 0;
    uVar15 = 0;
    do {
      if (*(long *)(lVar11 + uVar15 * 8) == lVar21 + (long)iVar7 * 0x38) {
        iVar5 = (int)uVar15;
        if (iVar5 < 1) goto LAB_030a32b0;
        lVar14 = lVar21 + lVar8 * 0x38;
        piVar12 = *(int **)(lVar11 + (ulong)(iVar5 - 1) * 8);
        fVar28 = (float)piVar12[6];
        fVar26 = *(float *)(lVar14 + 8);
        fVar27 = *(float *)(lVar14 + 0xc);
        fVar29 = (float)piVar12[3] + fVar28 * (fVar26 - (float)piVar12[2]);
        bVar4 = fVar27 < fVar29;
        if ((fVar27 == fVar29) &&
           (fVar29 = *(float *)(lVar21 + lVar8 * 0x38 + 0x18), bVar4 = fVar29 < fVar28,
           fVar29 == fVar28)) {
          bVar3 = *(byte *)(lVar21 + lVar8 * 0x38 + 4);
          if (bVar3 == *(byte *)(piVar12 + 1)) {
            if (*piVar12 <= *piVar20) goto LAB_030a32b0;
          }
          else if (*(byte *)(piVar12 + 1) <= bVar3) goto LAB_030a32b0;
        }
        else if (!bVar4) goto LAB_030a32b0;
        if (1 < iVar5) {
          lVar14 = lVar21 + lVar8 * 0x38;
          uVar17 = (ulong)(iVar5 - 1);
          goto LAB_030a3444;
        }
        uVar17 = 0;
        local_274 = 0xffffffff;
        uVar25 = 0;
        goto LAB_030a3750;
      }
      uVar15 = uVar15 + 1;
      lVar24 = lVar24 + 0x100000000;
    } while (uVar6 != uVar15);
  }
  local_a0 = 1;
  uStack_98 = 0;
  local_90 = auStack_270;
  uStack_88 = 0;
  local_b0 = PTR_DAT_047e34b8 + 0x10;
  uStack_a8 = 0xffffffff;
  local_80 = 0x1bf;
  local_78 = 0;
  memset(auStack_270,0,0x1c0);
  FUN_0322bd4c(&local_b0,"edge not on sweep line",0x16);
  iVar5 = FUN_03226f50(0x3cbb03f2,auStack_270,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar5 != 0) {
    CallSupervisor(0x26);
  }
  uVar6 = *(uint *)(param_1 + 0x70);
  uVar15 = 0;
LAB_030a32b0:
  uVar10 = (uint)((long)(int)uVar6 + -1);
  iVar5 = (int)uVar15;
  if (iVar5 < (int)uVar10) {
    lVar24 = *(long *)(param_1 + 0x68);
    lVar11 = lVar21 + lVar8 * 0x38;
    piVar12 = *(int **)(lVar24 + (long)iVar5 * 8 + 8);
    fVar28 = (float)piVar12[6];
    fVar26 = *(float *)(lVar11 + 8);
    fVar27 = *(float *)(lVar11 + 0xc);
    fVar29 = (float)piVar12[3] + fVar28 * (fVar26 - (float)piVar12[2]);
    bVar4 = fVar27 < fVar29;
    if ((fVar27 == fVar29) &&
       (fVar29 = *(float *)(lVar21 + lVar8 * 0x38 + 0x18), bVar4 = fVar29 < fVar28, fVar29 == fVar28
       )) {
      bVar3 = *(byte *)(lVar21 + lVar8 * 0x38 + 4);
      if (bVar3 == *(byte *)(piVar12 + 1)) {
        if (*piVar12 <= *piVar20) {
LAB_030a3510:
          lVar11 = (long)iVar5 + 2;
          uVar19 = uVar6;
          if ((int)lVar11 < (int)uVar6) {
            lVar13 = lVar21 + lVar8 * 0x38;
            lVar14 = (int)uVar6 - lVar11;
            puVar9 = (undefined8 *)(lVar24 + lVar11 * 8);
            uVar19 = iVar5 + 2;
            do {
              piVar12 = (int *)*puVar9;
              fVar28 = (float)piVar12[6];
              fVar29 = (float)piVar12[3] + fVar28 * (fVar26 - (float)piVar12[2]);
              bVar4 = fVar27 < fVar29;
              if ((fVar27 == fVar29) &&
                 (fVar29 = *(float *)(lVar13 + 0x18), bVar4 = fVar29 < fVar28, fVar29 == fVar28)) {
                bVar3 = *(byte *)(lVar13 + 4);
                if (bVar3 == *(byte *)(piVar12 + 1)) {
                  if (*piVar20 < *piVar12) goto LAB_030a35b8;
                }
                else if (bVar3 < *(byte *)(piVar12 + 1)) goto LAB_030a35b8;
              }
              else if (bVar4) goto LAB_030a35b8;
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar14 != 0);
            uVar19 = uVar6;
          }
LAB_030a35b8:
          uVar1 = uVar19 - 1;
          if (uVar6 != 0) {
            uVar2 = uVar6;
            if ((int)(iVar5 - 1U) <= (int)uVar6) {
              uVar2 = iVar5 - 1U;
            }
            if (iVar5 < 1) {
              uVar2 = 0;
            }
            uVar17 = (ulong)uVar2;
            uVar22 = uVar6;
            if ((int)uVar19 <= (int)uVar6) {
              uVar22 = uVar19;
            }
            uVar23 = 0;
            if (-1 < (int)uVar19) {
              uVar23 = uVar22;
            }
            if (uVar23 == uVar6) {
              *(undefined4 *)(*(long *)(lVar24 + (long)(int)uVar10 * 8) + 0x20) =
                   *(undefined4 *)(param_1 + 0x60);
              uVar23 = uVar10;
            }
            if ((int)uVar2 < (int)uVar23) {
              uVar25 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
              do {
                lVar24 = *(long *)(*(long *)(param_1 + 0x68) + uVar25);
                if (*(int *)(lVar24 + 0x1c) == 0) {
                  FUN_030a4544(param_1,uVar17);
                  lVar24 = *(long *)(*(long *)(param_1 + 0x68) + uVar25);
                }
                uVar6 = (int)uVar17 + 1;
                uVar17 = (ulong)uVar6;
                uVar25 = uVar25 + 8;
                *(undefined4 *)(lVar24 + 0x20) = *(undefined4 *)(param_1 + 0x60);
              } while (uVar23 != uVar6);
            }
          }
          iVar7 = 1;
          if (*(char *)(lVar21 + lVar8 * 0x38 + 4) == '\0') {
            iVar7 = -1;
          }
          if (iVar5 < (int)uVar1) {
            lVar24 = (long)iVar5;
            do {
              puVar9 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar24 * 8);
              *puVar9 = puVar9[1];
              lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar24 * 8);
              lVar24 = lVar24 + 1;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + iVar7;
            } while ((int)uVar1 != lVar24);
          }
          lVar21 = lVar21 + lVar8 * 0x38;
          *(int *)(lVar21 + 0x1c) =
               *(int *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)(uVar19 - 2) * 8) + 0x1c) -
               iVar7;
          *(int **)(*(long *)(param_1 + 0x68) + (long)(int)uVar1 * 8) = piVar20;
          *(undefined4 *)(lVar21 + 0x20) = *(undefined4 *)(param_1 + 0x60);
          FUN_030a40e4(param_1,uVar15 & 0xffffffff);
          FUN_030a40e4(param_1,uVar19 - 2);
          uVar15 = (ulong)uVar1;
          goto LAB_030a36f4;
        }
      }
      else if (*(byte *)(piVar12 + 1) <= bVar3) goto LAB_030a3510;
    }
    else if (!bVar4) goto LAB_030a3510;
  }
  uVar19 = iVar5 - 1;
  if (uVar6 != 0) {
    uVar1 = uVar6;
    if ((int)uVar19 <= (int)uVar6) {
      uVar1 = uVar19;
    }
    if (iVar5 < 1) {
      uVar1 = 0;
    }
    uVar17 = (ulong)uVar1;
    uVar2 = uVar6;
    if (iVar5 < (int)uVar6) {
      uVar2 = iVar5 + 1;
    }
    uVar22 = 0;
    if (-2 < iVar5) {
      uVar22 = uVar2;
    }
    if (uVar22 == uVar6) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + ((long)(int)uVar6 + -1) * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
      uVar22 = uVar10;
    }
    if ((int)uVar1 < (int)uVar22) {
      uVar25 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
      do {
        lVar24 = *(long *)(*(long *)(param_1 + 0x68) + uVar25);
        if (*(int *)(lVar24 + 0x1c) == 0) {
          FUN_030a4544(param_1,uVar17);
          lVar24 = *(long *)(*(long *)(param_1 + 0x68) + uVar25);
        }
        uVar6 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar6;
        uVar25 = uVar25 + 8;
        *(undefined4 *)(lVar24 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      } while (uVar22 != uVar6);
    }
  }
  lVar8 = lVar21 + lVar8 * 0x38;
  *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(lVar21 + (long)iVar7 * 0x38 + 0x1c);
  *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
  *(int **)(*(long *)(param_1 + 0x68) + (long)iVar5 * 8) = piVar20;
  FUN_030a40e4(param_1,uVar19);
  uVar15 = uVar15 & 0xffffffff;
LAB_030a36f4:
  FUN_030a40e4(param_1,uVar15);
  return;
LAB_030a3444:
  do {
    piVar12 = *(int **)(lVar11 + -8 + uVar17 * 8);
    fVar28 = (float)piVar12[6];
    fVar29 = (float)piVar12[3] + fVar28 * (fVar26 - (float)piVar12[2]);
    bVar4 = fVar27 < fVar29;
    if ((fVar27 == fVar29) &&
       (fVar29 = *(float *)(lVar14 + 0x18), bVar4 = fVar29 < fVar28, fVar29 == fVar28)) {
      bVar3 = *(byte *)(lVar14 + 4);
      if (bVar3 == *(byte *)(piVar12 + 1)) {
        if (*piVar12 <= *piVar20) {
LAB_030a34b0:
          local_274 = (int)uVar17 - 1;
          uVar10 = uVar6;
          if ((int)local_274 <= (int)uVar6) {
            uVar10 = local_274;
          }
          if ((int)uVar17 < 1) {
            uVar10 = 0;
          }
          uVar25 = (ulong)uVar10;
          goto LAB_030a3750;
        }
      }
      else if (*(byte *)(piVar12 + 1) <= bVar3) goto LAB_030a34b0;
    }
    else if (!bVar4) goto LAB_030a34b0;
    bVar4 = 1 < (long)uVar17;
    uVar17 = uVar17 - 1;
  } while (bVar4);
  uVar17 = 0;
  uVar25 = 0;
  local_274 = 0xffffffff;
LAB_030a3750:
  uVar10 = uVar6;
  if (iVar5 < (int)uVar6) {
    uVar10 = iVar5 + 1;
  }
  if (uVar10 == uVar6) {
    *(undefined4 *)(*(long *)(lVar11 + (ulong)(uVar6 - 1) * 8) + 0x20) =
         *(undefined4 *)(param_1 + 0x60);
    uVar10 = uVar6 - 1;
  }
  if ((int)uVar25 < (int)uVar10) {
    uVar18 = -(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + uVar18);
      if (*(int *)(lVar11 + 0x1c) == 0) {
        FUN_030a4544(param_1,uVar25);
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + uVar18);
      }
      uVar6 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar6;
      uVar18 = uVar18 + 8;
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    } while (uVar10 != uVar6);
  }
  iVar7 = -1;
  if (*(char *)(lVar21 + lVar8 * 0x38 + 4) == '\0') {
    iVar7 = 1;
  }
  iVar16 = (int)uVar17;
  if (iVar16 < iVar5) {
    lVar24 = lVar24 >> 0x20;
    do {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar24 * 8);
      *puVar9 = puVar9[-1];
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + lVar24 * 8);
      lVar24 = lVar24 + -1;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + iVar7;
    } while (iVar16 < lVar24);
  }
  if (iVar16 == 0) {
    *(int *)(lVar21 + lVar8 * 0x38 + 0x1c) = iVar7 + 1;
    puVar9 = *(undefined8 **)(param_1 + 0x68);
  }
  else {
    *(int *)(lVar21 + lVar8 * 0x38 + 0x1c) =
         *(int *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)local_274 * 8) + 0x1c) + iVar7;
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar16 * 8);
  }
  *puVar9 = piVar20;
  *(undefined4 *)(lVar21 + lVar8 * 0x38 + 0x20) = *(undefined4 *)(param_1 + 0x60);
  FUN_030a40e4(param_1);
  FUN_030a40e4(param_1,uVar17 & 0xffffffff);
  FUN_030a40e4(param_1,uVar15 & 0xffffffff);
  return;
}


