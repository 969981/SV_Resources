/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdd54c; name: FUN_00bdd54c
 */


void FUN_00bdd54c(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  byte *__src;
  long lVar17;
  byte local_60 [8];
  void *local_58;
  
  pbVar10 = local_60;
  pbVar7 = local_60;
  pbVar12 = local_60;
  pbVar13 = local_60;
  pbVar8 = local_60;
  __src = local_60;
  iVar16 = (int)local_60;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar15 = (int *)(param_2 + 2);
    iVar6 = *piVar15;
    if (iVar6 < 5) {
      local_60[0] = 10;
      if (iVar6 < 1) {
        iVar11 = 1;
        pvVar5 = (void *)param_2[1];
        pbVar10 = local_60;
        do {
          memcpy(pvVar5,pbVar10,(long)iVar6);
          iVar1 = *(int *)(param_2 + 2);
          uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
          if ((uVar4 & 1) == 0) {
            pbVar10 = (byte *)0x0;
            param_2[1] = 0;
            iVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00bdd64c;
          }
          iVar6 = *(int *)(param_2 + 2);
          iVar11 = iVar11 - iVar1;
          pbVar10 = pbVar10 + iVar1;
          param_2[1] = local_58;
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar6;
          pvVar5 = local_58;
        } while (iVar6 < iVar11);
      }
      else {
        iVar11 = 1;
        pvVar5 = (void *)param_2[1];
      }
      memcpy(pvVar5,pbVar10,(long)iVar11);
      pbVar10 = (byte *)(param_2[1] + (long)iVar11);
      iVar11 = *(int *)(param_2 + 2) - iVar11;
      param_2[1] = pbVar10;
    }
    else {
      *(undefined1 *)param_2[1] = 10;
      pbVar10 = (byte *)(param_2[1] + 1);
      param_2[1] = pbVar10;
      iVar11 = *(int *)(param_2 + 2) + -1;
    }
    *(int *)(param_2 + 2) = iVar11;
LAB_00bdd64c:
    uVar9 = *(uint *)(param_1 + 0x28);
    if (iVar11 < 5) {
      if (0x7f < uVar9) {
        pbVar10 = local_60;
        uVar14 = uVar9;
        do {
          uVar9 = uVar14 >> 7;
          uVar2 = uVar14 >> 0xe;
          pbVar7 = pbVar10 + 1;
          *pbVar10 = (byte)uVar14 | 0x80;
          pbVar10 = pbVar7;
          uVar14 = uVar9;
        } while (uVar2 != 0);
      }
      *pbVar7 = (byte)uVar9;
      iVar6 = ((int)pbVar7 - iVar16) + 1;
      iVar11 = *(int *)(param_2 + 2);
      pvVar5 = (void *)param_2[1];
      if (iVar11 < iVar6) {
        pbVar12 = local_60;
        do {
          memcpy(pvVar5,pbVar12,(long)iVar11);
          iVar1 = *(int *)(param_2 + 2);
          uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
          if ((uVar4 & 1) == 0) {
            param_2[1] = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00bdd770;
          }
          iVar11 = *(int *)(param_2 + 2);
          iVar6 = iVar6 - iVar1;
          pbVar12 = pbVar12 + iVar1;
          param_2[1] = local_58;
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar11;
          pvVar5 = local_58;
        } while (iVar11 < iVar6);
      }
      memcpy(pvVar5,pbVar12,(long)iVar6);
      param_2[1] = param_2[1] + (long)iVar6;
      iVar6 = *(int *)(param_2 + 2) - iVar6;
    }
    else {
      pbVar12 = pbVar10;
      if (0x7f < uVar9) {
        pbVar7 = pbVar10;
        uVar14 = uVar9;
        do {
          uVar9 = uVar14 >> 7;
          uVar2 = uVar14 >> 0xe;
          pbVar12 = pbVar7 + 1;
          *pbVar7 = (byte)uVar14 | 0x80;
          pbVar7 = pbVar12;
          uVar14 = uVar9;
        } while (uVar2 != 0);
      }
      *pbVar12 = (byte)uVar9;
      iVar6 = ((int)pbVar12 - (int)pbVar10) + 1;
      param_2[1] = param_2[1] + (long)iVar6;
      iVar6 = *(int *)(param_2 + 2) - iVar6;
    }
    *(int *)(param_2 + 2) = iVar6;
LAB_00bdd770:
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar17 = 0;
      do {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + lVar17 * 4 + 8);
        if ((int)uVar9 < 0) {
          FUN_00c0998c(param_2,(long)(int)uVar9);
        }
        else {
          if (*piVar15 < 5) {
            pbVar10 = local_60;
            if (0x7f < uVar9) {
              pbVar12 = local_60;
              uVar4 = (ulong)uVar9;
              do {
                uVar9 = (uint)(uVar4 >> 7);
                uVar3 = uVar4 >> 0xe;
                pbVar10 = pbVar12 + 1;
                *pbVar12 = (byte)uVar4 | 0x80;
                pbVar12 = pbVar10;
                uVar4 = uVar4 >> 7;
              } while (uVar3 != 0);
            }
            *pbVar10 = (byte)uVar9;
            iVar6 = ((int)pbVar10 - iVar16) + 1;
            iVar11 = *(int *)(param_2 + 2);
            pvVar5 = (void *)param_2[1];
            pbVar10 = local_60;
            if (iVar11 < iVar6) {
              pbVar10 = local_60;
              do {
                memcpy(pvVar5,pbVar10,(long)iVar11);
                iVar1 = *(int *)(param_2 + 2);
                uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
                if ((uVar4 & 1) == 0) {
                  param_2[1] = 0;
                  *(undefined4 *)(param_2 + 2) = 0;
                  *(undefined1 *)(param_2 + 3) = 1;
                  goto LAB_00bdd8d0;
                }
                iVar11 = *(int *)(param_2 + 2);
                iVar6 = iVar6 - iVar1;
                pbVar10 = pbVar10 + iVar1;
                param_2[1] = local_58;
                *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar11;
                pvVar5 = local_58;
              } while (iVar11 < iVar6);
            }
            memcpy(pvVar5,pbVar10,(long)iVar6);
            param_2[1] = param_2[1] + (long)iVar6;
            iVar6 = *(int *)(param_2 + 2) - iVar6;
          }
          else {
            pbVar10 = (byte *)param_2[1];
            if (uVar9 < 0x80) {
              pbVar12 = pbVar10;
            }
            else {
              pbVar7 = pbVar10;
              uVar4 = (ulong)uVar9;
              do {
                uVar9 = (uint)(uVar4 >> 7);
                uVar3 = uVar4 >> 0xe;
                pbVar12 = pbVar7 + 1;
                *pbVar7 = (byte)uVar4 | 0x80;
                pbVar7 = pbVar12;
                uVar4 = uVar4 >> 7;
              } while (uVar3 != 0);
            }
            *pbVar12 = (byte)uVar9;
            iVar6 = ((int)pbVar12 - (int)pbVar10) + 1;
            param_2[1] = param_2[1] + (long)iVar6;
            iVar6 = *(int *)(param_2 + 2) - iVar6;
          }
          *(int *)(param_2 + 2) = iVar6;
        }
LAB_00bdd8d0:
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x18));
    }
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    piVar15 = (int *)(param_2 + 2);
    iVar6 = *piVar15;
    if (iVar6 < 5) {
      local_60[0] = 0x12;
      if (iVar6 < 1) {
        iVar11 = 1;
        pvVar5 = (void *)param_2[1];
        pbVar13 = local_60;
        do {
          memcpy(pvVar5,pbVar13,(long)iVar6);
          iVar1 = *(int *)(param_2 + 2);
          uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
          if ((uVar4 & 1) == 0) {
            pbVar10 = (byte *)0x0;
            param_2[1] = 0;
            iVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00bdd9d0;
          }
          iVar6 = *(int *)(param_2 + 2);
          iVar11 = iVar11 - iVar1;
          pbVar13 = pbVar13 + iVar1;
          param_2[1] = local_58;
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar6;
          pvVar5 = local_58;
        } while (iVar6 < iVar11);
      }
      else {
        iVar11 = 1;
        pvVar5 = (void *)param_2[1];
      }
      memcpy(pvVar5,pbVar13,(long)iVar11);
      pbVar10 = (byte *)(param_2[1] + (long)iVar11);
      iVar11 = *(int *)(param_2 + 2) - iVar11;
      param_2[1] = pbVar10;
    }
    else {
      *(undefined1 *)param_2[1] = 0x12;
      pbVar10 = (byte *)(param_2[1] + 1);
      param_2[1] = pbVar10;
      iVar11 = *(int *)(param_2 + 2) + -1;
    }
    *(int *)(param_2 + 2) = iVar11;
LAB_00bdd9d0:
    uVar9 = *(uint *)(param_1 + 0x40);
    if (iVar11 < 5) {
      if (0x7f < uVar9) {
        pbVar10 = local_60;
        uVar14 = uVar9;
        do {
          uVar9 = uVar14 >> 7;
          uVar2 = uVar14 >> 0xe;
          pbVar8 = pbVar10 + 1;
          *pbVar10 = (byte)uVar14 | 0x80;
          pbVar10 = pbVar8;
          uVar14 = uVar9;
        } while (uVar2 != 0);
      }
      *pbVar8 = (byte)uVar9;
      iVar6 = ((int)pbVar8 - iVar16) + 1;
      iVar11 = *(int *)(param_2 + 2);
      pvVar5 = (void *)param_2[1];
      if (iVar11 < iVar6) {
        __src = local_60;
        do {
          memcpy(pvVar5,__src,(long)iVar11);
          iVar1 = *(int *)(param_2 + 2);
          uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
          if ((uVar4 & 1) == 0) {
            param_2[1] = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00bddaf4;
          }
          iVar11 = *(int *)(param_2 + 2);
          iVar6 = iVar6 - iVar1;
          __src = __src + iVar1;
          param_2[1] = local_58;
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar11;
          pvVar5 = local_58;
        } while (iVar11 < iVar6);
      }
      memcpy(pvVar5,__src,(long)iVar6);
      param_2[1] = param_2[1] + (long)iVar6;
      iVar6 = *(int *)(param_2 + 2) - iVar6;
    }
    else {
      pbVar12 = pbVar10;
      if (0x7f < uVar9) {
        pbVar13 = pbVar10;
        uVar14 = uVar9;
        do {
          uVar9 = uVar14 >> 7;
          uVar2 = uVar14 >> 0xe;
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar14 | 0x80;
          pbVar13 = pbVar12;
          uVar14 = uVar9;
        } while (uVar2 != 0);
      }
      *pbVar12 = (byte)uVar9;
      iVar6 = ((int)pbVar12 - (int)pbVar10) + 1;
      param_2[1] = param_2[1] + (long)iVar6;
      iVar6 = *(int *)(param_2 + 2) - iVar6;
    }
    *(int *)(param_2 + 2) = iVar6;
LAB_00bddaf4:
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar17 = 0;
      do {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x38) + lVar17 * 4 + 8);
        if ((int)uVar9 < 0) {
          FUN_00c0998c(param_2,(long)(int)uVar9);
        }
        else {
          if (*piVar15 < 5) {
            pbVar10 = local_60;
            if (0x7f < uVar9) {
              pbVar12 = local_60;
              uVar4 = (ulong)uVar9;
              do {
                uVar9 = (uint)(uVar4 >> 7);
                uVar3 = uVar4 >> 0xe;
                pbVar10 = pbVar12 + 1;
                *pbVar12 = (byte)uVar4 | 0x80;
                pbVar12 = pbVar10;
                uVar4 = uVar4 >> 7;
              } while (uVar3 != 0);
            }
            *pbVar10 = (byte)uVar9;
            iVar6 = ((int)pbVar10 - iVar16) + 1;
            iVar11 = *(int *)(param_2 + 2);
            pvVar5 = (void *)param_2[1];
            pbVar10 = local_60;
            if (iVar11 < iVar6) {
              pbVar10 = local_60;
              do {
                memcpy(pvVar5,pbVar10,(long)iVar11);
                iVar1 = *(int *)(param_2 + 2);
                uVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_58,piVar15);
                if ((uVar4 & 1) == 0) {
                  param_2[1] = 0;
                  *(undefined4 *)(param_2 + 2) = 0;
                  *(undefined1 *)(param_2 + 3) = 1;
                  goto LAB_00bddc54;
                }
                iVar11 = *(int *)(param_2 + 2);
                iVar6 = iVar6 - iVar1;
                pbVar10 = pbVar10 + iVar1;
                param_2[1] = local_58;
                *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar11;
                pvVar5 = local_58;
              } while (iVar11 < iVar6);
            }
            memcpy(pvVar5,pbVar10,(long)iVar6);
            param_2[1] = param_2[1] + (long)iVar6;
            iVar6 = *(int *)(param_2 + 2) - iVar6;
          }
          else {
            pbVar10 = (byte *)param_2[1];
            if (uVar9 < 0x80) {
              pbVar12 = pbVar10;
            }
            else {
              pbVar13 = pbVar10;
              uVar4 = (ulong)uVar9;
              do {
                uVar9 = (uint)(uVar4 >> 7);
                uVar3 = uVar4 >> 0xe;
                pbVar12 = pbVar13 + 1;
                *pbVar13 = (byte)uVar4 | 0x80;
                pbVar13 = pbVar12;
                uVar4 = uVar4 >> 7;
              } while (uVar3 != 0);
            }
            *pbVar12 = (byte)uVar9;
            iVar6 = ((int)pbVar12 - (int)pbVar10) + 1;
            param_2[1] = param_2[1] + (long)iVar6;
            iVar6 = *(int *)(param_2 + 2) - iVar6;
          }
          *(int *)(param_2 + 2) = iVar6;
        }
LAB_00bddc54:
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x30));
    }
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 >> 2 & 1) != 0) {
    FUN_00c0c288(3,*(undefined8 *)(param_1 + 0x48),param_2);
    uVar9 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    FUN_00c0c288(4,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar17 = 0;
    do {
      FUN_00c0bea8(6,*(undefined8 *)(*(long *)(param_1 + 0x68) + lVar17 * 8 + 8),param_2);
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x60));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


