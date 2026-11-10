/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a54460; name: FUN_00a54460
 */


void FUN_00a54460(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  
LAB_00a5449c:
  puVar23 = param_2 + -0xc;
  puVar11 = param_1;
LAB_00a544a4:
  param_1 = puVar11;
  uVar9 = (long)param_2 - (long)param_1;
  switch(((long)uVar9 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00a54cd4_caseD_0;
  case 2:
    lVar14 = *(long *)(*(long *)*param_3 + 0x64d0);
    if (lVar14 == 0) {
      return;
    }
    uVar5 = param_2[-0xc];
    lVar16 = *(long *)*param_3 + 0x64d0;
    uVar4 = *param_1;
    lVar10 = lVar16;
    lVar21 = lVar14;
    do {
      if ((int)(uint)uVar5 <= *(int *)(lVar21 + 0x1c)) {
        lVar10 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar5) * 8);
    } while (lVar21 != 0);
    lVar21 = lVar16;
    if ((lVar10 == lVar16) || ((int)(uint)uVar5 < *(int *)(lVar10 + 0x1c))) {
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = *(int *)(lVar10 + 0x20);
    }
    do {
      if ((int)(uint)uVar4 <= *(int *)(lVar14 + 0x1c)) {
        lVar21 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x1c) < (int)(uint)uVar4) * 8);
    } while (lVar14 != 0);
    if ((lVar21 == lVar16) || ((int)(uint)uVar4 < *(int *)(lVar21 + 0x1c))) {
      iVar8 = 0x7fffffff;
    }
    else {
      iVar8 = *(int *)(lVar21 + 0x20);
    }
    if (iVar6 < iVar8) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_2 + -4);
      uVar17 = *(undefined8 *)puVar23;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)param_1 = uVar17;
      *(undefined8 *)(param_2 + -8) = uVar2;
      *(undefined8 *)(param_2 + -4) = uVar19;
      *(undefined8 *)puVar23 = uVar1;
      return;
    }
    return;
  case 3:
    FUN_00a55040(param_1,param_1 + 0xc,puVar23,param_3);
    return;
  case 4:
    FUN_00a55460(param_1,param_1 + 0xc,param_1 + 0x18,puVar23,param_3);
    return;
  case 5:
    FUN_00a55740(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,puVar23,param_3);
    return;
  default:
    if (0x2e7 < (long)uVar9) {
      puVar11 = param_1 + (uVar9 / 0x30) * 0xc;
      if ((long)uVar9 < 0x5da9) {
        iVar6 = FUN_00a55040(param_1,puVar11,puVar23,param_3);
      }
      else {
        lVar14 = (uVar9 / 0x60) * 2 + uVar9 / 0x60;
        iVar6 = FUN_00a55740(param_1,param_1 + lVar14 * 4,puVar11,puVar11 + lVar14 * 4,puVar23,
                             param_3);
      }
      uVar4 = *param_1;
      uVar5 = *puVar11;
      lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
      lVar14 = *(long *)*param_3 + 0x64d0;
      uVar13 = (uint)uVar4;
      uVar18 = (uint)uVar5;
      if (lVar16 == 0) {
LAB_00a545c8:
        puVar12 = puVar23;
        while( true ) {
          puVar15 = puVar12;
          puVar12 = puVar15 + -0xc;
          if (param_1 == puVar12) break;
          if (lVar16 == 0) {
            iVar8 = 0x7fffffff;
LAB_00a54660:
            iVar20 = 0x7fffffff;
          }
          else {
            uVar4 = puVar15[-0xc];
            lVar10 = lVar14;
            lVar21 = lVar16;
            do {
              if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
                lVar10 = lVar21;
              }
              lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
            } while (lVar21 != 0);
            if ((lVar10 == lVar14) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
              iVar8 = 0x7fffffff;
            }
            else {
              iVar8 = *(int *)(lVar10 + 0x20);
            }
            lVar10 = lVar14;
            lVar21 = lVar16;
            do {
              if ((int)uVar18 <= *(int *)(lVar21 + 0x1c)) {
                lVar10 = lVar21;
              }
              lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar18) * 8);
            } while (lVar21 != 0);
            if ((lVar10 == lVar14) || ((int)uVar18 < *(int *)(lVar10 + 0x1c))) goto LAB_00a54660;
            iVar20 = *(int *)(lVar10 + 0x20);
          }
          if (iVar8 < iVar20) goto LAB_00a546c0;
        }
        puVar12 = param_1 + 0xc;
        puVar11 = puVar12;
        if (lVar16 == 0) goto LAB_00a54a3c;
        uVar4 = param_2[-0xc];
        lVar10 = lVar14;
        lVar21 = lVar16;
        do {
          if ((int)uVar13 <= *(int *)(lVar21 + 0x1c)) {
            lVar10 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar13) * 8);
        } while (lVar21 != 0);
        if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
          iVar6 = 0x7fffffff;
        }
        else {
          iVar6 = *(int *)(lVar10 + 0x20);
        }
        lVar10 = lVar14;
        lVar21 = lVar16;
        do {
          if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
            lVar10 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
        } while (lVar21 != 0);
        if ((lVar10 == lVar14) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
          iVar8 = 0x7fffffff;
        }
        else {
          iVar8 = *(int *)(lVar10 + 0x20);
        }
        if (iVar8 <= iVar6) {
LAB_00a54a3c:
          do {
            if (puVar11 == puVar23) {
              return;
            }
            if (lVar16 != 0) {
              uVar4 = *puVar11;
              lVar10 = lVar14;
              lVar21 = lVar16;
              do {
                if ((int)uVar13 <= *(int *)(lVar21 + 0x1c)) {
                  lVar10 = lVar21;
                }
                lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar13) * 8);
              } while (lVar21 != 0);
              if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
                iVar6 = 0x7fffffff;
              }
              else {
                iVar6 = *(int *)(lVar10 + 0x20);
              }
              lVar10 = lVar14;
              lVar21 = lVar16;
              do {
                if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
                  lVar10 = lVar21;
                }
                lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8)
                ;
              } while (lVar21 != 0);
              if ((lVar10 == lVar14) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
                iVar8 = 0x7fffffff;
              }
              else {
                iVar8 = *(int *)(lVar10 + 0x20);
              }
              if (iVar6 < iVar8) {
                uVar1 = *(undefined8 *)puVar11;
                uVar2 = *(undefined8 *)(puVar11 + 4);
                uVar19 = *(undefined8 *)(puVar11 + 8);
                uVar3 = *(undefined8 *)(param_2 + -4);
                uVar17 = *(undefined8 *)puVar23;
                *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(param_2 + -8);
                *(undefined8 *)(puVar11 + 8) = uVar3;
                puVar12 = puVar11 + 0xc;
                *(undefined8 *)puVar11 = uVar17;
                *(undefined8 *)(param_2 + -8) = uVar2;
                *(undefined8 *)(param_2 + -4) = uVar19;
                *(undefined8 *)puVar23 = uVar1;
                break;
              }
            }
            puVar11 = puVar11 + 0xc;
          } while( true );
        }
        if (puVar12 == puVar23) {
          return;
        }
        puVar15 = puVar23;
        do {
          uVar4 = *param_1;
          lVar14 = *(long *)*param_3 + 0x64d0;
          lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
          do {
            puVar11 = puVar12;
            uVar13 = (uint)uVar4;
            if (lVar16 == 0) {
              iVar6 = 0x7fffffff;
LAB_00a54bb4:
              iVar8 = 0x7fffffff;
            }
            else {
              uVar5 = *puVar11;
              lVar10 = lVar14;
              lVar21 = lVar16;
              do {
                if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
                  lVar10 = lVar21;
                }
                lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8)
                ;
              } while (lVar21 != 0);
              if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
                iVar6 = 0x7fffffff;
              }
              else {
                iVar6 = *(int *)(lVar10 + 0x20);
              }
              lVar10 = lVar14;
              lVar21 = lVar16;
              do {
                if ((int)(uint)uVar5 <= *(int *)(lVar21 + 0x1c)) {
                  lVar10 = lVar21;
                }
                lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar5) * 8)
                ;
              } while (lVar21 != 0);
              if ((lVar10 == lVar14) || ((int)(uint)uVar5 < *(int *)(lVar10 + 0x1c)))
              goto LAB_00a54bb4;
              iVar8 = *(int *)(lVar10 + 0x20);
            }
            puVar12 = puVar11 + 0xc;
          } while (iVar8 <= iVar6);
          do {
            puVar24 = puVar15;
            puVar15 = puVar24 + -0xc;
            uVar4 = *puVar15;
            if (lVar16 == 0) break;
            lVar10 = lVar14;
            lVar21 = lVar16;
            do {
              if ((int)uVar13 <= *(int *)(lVar21 + 0x1c)) {
                lVar10 = lVar21;
              }
              lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar13) * 8);
            } while (lVar21 != 0);
            if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
              iVar6 = 0x7fffffff;
            }
            else {
              iVar6 = *(int *)(lVar10 + 0x20);
            }
            lVar10 = lVar14;
            lVar21 = lVar16;
            do {
              if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
                lVar10 = lVar21;
              }
              lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
            } while (lVar21 != 0);
            if ((lVar10 == lVar14) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
              iVar8 = 0x7fffffff;
            }
            else {
              iVar8 = *(int *)(lVar10 + 0x20);
            }
          } while (iVar6 < iVar8);
          if (puVar15 <= puVar11) goto LAB_00a544a4;
          uVar1 = *(undefined8 *)puVar11;
          uVar2 = *(undefined8 *)(puVar11 + 4);
          uVar19 = *(undefined8 *)(puVar11 + 8);
          uVar3 = *(undefined8 *)(puVar24 + -4);
          uVar17 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar24 + -8);
          *(undefined8 *)(puVar11 + 8) = uVar3;
          *(undefined8 *)puVar11 = uVar17;
          *(undefined8 *)(puVar24 + -8) = uVar2;
          *(undefined8 *)(puVar24 + -4) = uVar19;
          *(undefined8 *)puVar15 = uVar1;
        } while( true );
      }
      lVar10 = lVar14;
      lVar21 = lVar16;
      do {
        if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
          lVar10 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
      } while (lVar21 != 0);
      if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
        iVar8 = 0x7fffffff;
      }
      else {
        iVar8 = *(int *)(lVar10 + 0x20);
      }
      lVar10 = lVar14;
      lVar21 = lVar16;
      do {
        if ((int)(uint)uVar5 <= *(int *)(lVar21 + 0x1c)) {
          lVar10 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar5) * 8);
      } while (lVar21 != 0);
      if ((lVar10 == lVar14) || ((int)uVar18 < *(int *)(lVar10 + 0x1c))) {
        iVar20 = 0x7fffffff;
      }
      else {
        iVar20 = *(int *)(lVar10 + 0x20);
      }
      if (iVar20 <= iVar8) goto LAB_00a545c8;
      puVar12 = puVar23;
      goto LAB_00a546f4;
    }
    FUN_00a55040(param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    puVar11 = param_1 + 0x18;
    puVar23 = param_1 + 0x24;
    goto joined_r0x00a54d58;
  }
LAB_00a546c0:
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  iVar6 = iVar6 + 1;
  uVar19 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(puVar15 + -4);
  uVar17 = *(undefined8 *)puVar12;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar15 + -8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)param_1 = uVar17;
  *(undefined8 *)(puVar15 + -8) = uVar2;
  *(undefined8 *)(puVar15 + -4) = uVar19;
  *(undefined8 *)puVar12 = uVar1;
LAB_00a546f4:
  puVar15 = param_1 + 0xc;
  if (puVar15 < puVar12) {
    puVar24 = puVar15;
    do {
      uVar4 = *puVar11;
      lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
      lVar14 = *(long *)*param_3 + 0x64d0;
      puVar22 = puVar24;
      do {
        puVar15 = puVar22;
        uVar13 = (uint)uVar4;
        if (lVar16 == 0) {
          puVar22 = puVar24 + 0xc;
          puVar15 = puVar24;
          break;
        }
        uVar5 = *puVar15;
        lVar10 = lVar14;
        lVar21 = lVar16;
        do {
          if ((int)(uint)uVar5 <= *(int *)(lVar21 + 0x1c)) {
            lVar10 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar5) * 8);
        } while (lVar21 != 0);
        if ((lVar10 == lVar14) || ((int)(uint)uVar5 < *(int *)(lVar10 + 0x1c))) {
          iVar8 = 0x7fffffff;
        }
        else {
          iVar8 = *(int *)(lVar10 + 0x20);
        }
        lVar10 = lVar14;
        lVar21 = lVar16;
        do {
          if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
            lVar10 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
        } while (lVar21 != 0);
        if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
          iVar20 = 0x7fffffff;
        }
        else {
          iVar20 = *(int *)(lVar10 + 0x20);
        }
        puVar22 = puVar15 + 0xc;
      } while (iVar8 < iVar20);
      do {
        puVar24 = puVar12;
        puVar12 = puVar24 + -0xc;
        uVar4 = *puVar12;
        if (lVar16 == 0) {
          iVar8 = 0x7fffffff;
LAB_00a5484c:
          iVar20 = 0x7fffffff;
        }
        else {
          lVar10 = lVar14;
          lVar21 = lVar16;
          do {
            if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
              lVar10 = lVar21;
            }
            lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
          } while (lVar21 != 0);
          if ((lVar10 == lVar14) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
            iVar8 = 0x7fffffff;
          }
          else {
            iVar8 = *(int *)(lVar10 + 0x20);
          }
          lVar10 = lVar14;
          lVar21 = lVar16;
          do {
            if ((int)uVar13 <= *(int *)(lVar21 + 0x1c)) {
              lVar10 = lVar21;
            }
            lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar13) * 8);
          } while (lVar21 != 0);
          if ((lVar10 == lVar14) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) goto LAB_00a5484c;
          iVar20 = *(int *)(lVar10 + 0x20);
        }
      } while (iVar20 <= iVar8);
      if (puVar12 < puVar15) break;
      uVar1 = *(undefined8 *)puVar15;
      uVar2 = *(undefined8 *)(puVar15 + 4);
      uVar19 = *(undefined8 *)(puVar15 + 8);
      uVar3 = *(undefined8 *)(puVar24 + -4);
      uVar17 = *(undefined8 *)puVar12;
      *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar24 + -8);
      *(undefined8 *)(puVar15 + 8) = uVar3;
      *(undefined8 *)puVar15 = uVar17;
      *(undefined8 *)(puVar24 + -8) = uVar2;
      *(undefined8 *)(puVar24 + -4) = uVar19;
      iVar6 = iVar6 + 1;
      *(undefined8 *)puVar12 = uVar1;
      puVar24 = puVar12;
      if (puVar11 != puVar15) {
        puVar24 = puVar11;
      }
      puVar11 = puVar24;
      puVar24 = puVar22;
    } while( true );
  }
  if (puVar15 != puVar11) {
    lVar14 = *(long *)(*(long *)*param_3 + 0x64d0);
    if (lVar14 != 0) {
      uVar4 = *puVar11;
      lVar16 = *(long *)*param_3 + 0x64d0;
      uVar5 = *puVar15;
      lVar10 = lVar16;
      lVar21 = lVar14;
      do {
        if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
          lVar10 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
      } while (lVar21 != 0);
      lVar21 = lVar16;
      if ((lVar10 == lVar16) || ((int)(uint)uVar4 < *(int *)(lVar10 + 0x1c))) {
        iVar8 = 0x7fffffff;
      }
      else {
        iVar8 = *(int *)(lVar10 + 0x20);
      }
      do {
        if ((int)(uint)uVar5 <= *(int *)(lVar14 + 0x1c)) {
          lVar21 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x1c) < (int)(uint)uVar5) * 8);
      } while (lVar14 != 0);
      if ((lVar21 == lVar16) || ((int)(uint)uVar5 < *(int *)(lVar21 + 0x1c))) {
        iVar20 = 0x7fffffff;
      }
      else {
        iVar20 = *(int *)(lVar21 + 0x20);
      }
      if (iVar8 < iVar20) {
        uVar1 = *(undefined8 *)puVar15;
        uVar2 = *(undefined8 *)(puVar15 + 4);
        iVar6 = iVar6 + 1;
        uVar19 = *(undefined8 *)(puVar15 + 8);
        uVar3 = *(undefined8 *)(puVar11 + 8);
        uVar17 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar11 + 4);
        *(undefined8 *)(puVar15 + 8) = uVar3;
        *(undefined8 *)puVar15 = uVar17;
        *(undefined8 *)(puVar11 + 4) = uVar2;
        *(undefined8 *)(puVar11 + 8) = uVar19;
        *(undefined8 *)puVar11 = uVar1;
      }
    }
  }
  if (iVar6 == 0) {
    uVar9 = FUN_00a55b00(param_1,puVar15,param_3);
    uVar7 = FUN_00a55b00(puVar15 + 0xc,param_2,param_3);
    if ((uVar7 & 1) != 0) goto LAB_00a54cb4;
    puVar11 = puVar15 + 0xc;
    if ((uVar9 & 1) != 0) goto LAB_00a544a4;
  }
  if (((long)param_2 - (long)puVar15 >> 3) * -0x5555555555555555 <=
      ((long)puVar15 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_00a54460(puVar15 + 0xc,param_2,param_3);
    param_2 = puVar15;
    goto LAB_00a5449c;
  }
  FUN_00a54460(param_1,puVar15,param_3);
  puVar11 = puVar15 + 0xc;
  goto LAB_00a544a4;
LAB_00a54cb4:
  param_2 = puVar15;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_00a5449c;
joined_r0x00a54d58:
  if (puVar23 == param_2) {
switchD_00a54cd4_caseD_0:
    return;
  }
  uVar4 = *puVar23;
  lVar14 = *(long *)(*(long *)*param_3 + 0x64d0);
  if (lVar14 != 0) {
    uVar5 = *puVar11;
    lVar16 = *(long *)*param_3 + 0x64d0;
    lVar10 = lVar16;
    lVar21 = lVar14;
    do {
      if ((int)(uint)uVar4 <= *(int *)(lVar21 + 0x1c)) {
        lVar10 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)(uint)uVar4) * 8);
    } while (lVar21 != 0);
    uVar13 = (uint)uVar4;
    lVar21 = lVar16;
    if ((lVar10 == lVar16) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = *(int *)(lVar10 + 0x20);
    }
    do {
      if ((int)(uint)uVar5 <= *(int *)(lVar14 + 0x1c)) {
        lVar21 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x1c) < (int)(uint)uVar5) * 8);
    } while (lVar14 != 0);
    if ((lVar21 == lVar16) || ((int)(uint)uVar5 < *(int *)(lVar21 + 0x1c))) {
      iVar8 = 0x7fffffff;
    }
    else {
      iVar8 = *(int *)(lVar21 + 0x20);
    }
    if (iVar6 < iVar8) {
      uVar1 = *(undefined8 *)(puVar23 + 1);
      uVar2 = *(undefined8 *)(puVar23 + 5);
      uStack_68 = (undefined6)((ulong)*(undefined8 *)(puVar23 + 8) >> 0x10);
      uStack_6a = (undefined2)((ulong)uVar2 >> 0x30);
      puVar12 = puVar23;
      do {
        puVar15 = puVar11;
        uVar3 = *(undefined8 *)(puVar15 + 4);
        uVar17 = *(undefined8 *)(puVar15 + 8);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar12 + 4) = uVar3;
        *(undefined8 *)(puVar12 + 8) = uVar17;
        if (puVar15 == param_1) {
          puVar15 = param_1;
          break;
        }
        uVar5 = puVar15[-0xc];
        lVar14 = *(long *)(*(long *)*param_3 + 0x64d0);
        if (lVar14 == 0) break;
        lVar16 = *(long *)*param_3 + 0x64d0;
        lVar10 = lVar16;
        lVar21 = lVar14;
        do {
          if ((int)uVar13 <= *(int *)(lVar21 + 0x1c)) {
            lVar10 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x1c) < (int)uVar13) * 8);
        } while (lVar21 != 0);
        lVar21 = lVar16;
        if ((lVar10 == lVar16) || ((int)uVar13 < *(int *)(lVar10 + 0x1c))) {
          iVar6 = 0x7fffffff;
        }
        else {
          iVar6 = *(int *)(lVar10 + 0x20);
        }
        do {
          if ((int)(uint)uVar5 <= *(int *)(lVar14 + 0x1c)) {
            lVar21 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x1c) < (int)(uint)uVar5) * 8);
        } while (lVar14 != 0);
        if ((lVar21 == lVar16) || ((int)(uint)uVar5 < *(int *)(lVar21 + 0x1c))) {
          iVar8 = 0x7fffffff;
        }
        else {
          iVar8 = *(int *)(lVar21 + 0x20);
        }
        puVar11 = puVar15 + -0xc;
        puVar12 = puVar15;
      } while (iVar6 < iVar8);
      *puVar15 = uVar4;
      *(ulong *)(puVar15 + 8) = CONCAT62(uStack_68,uStack_6a);
      *(undefined8 *)(puVar15 + 5) = uVar2;
      *(undefined8 *)(puVar15 + 1) = uVar1;
    }
  }
  puVar11 = puVar23;
  puVar23 = puVar23 + 0xc;
  goto joined_r0x00a54d58;
}


