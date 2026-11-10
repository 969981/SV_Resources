/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015122a0; name: FUN_015122a0
 */


undefined8 FUN_015122a0(long param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  double dVar27;
  double __x;
  int local_f0;
  int local_ec;
  undefined1 auStack_c8 [8];
  char *local_c0;
  long *local_b0;
  long local_a8 [3];
  long *local_90;
  long local_88 [3];
  long *local_70;
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar13 = *(int *)(param_1 + 0xc);
    uVar22 = 0;
    if (iVar13 != 0) {
      uVar22 = iVar4 / iVar13;
    }
    uVar23 = iVar4 - uVar22 * iVar13;
  }
  else {
    iVar13 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 0x10);
    uVar23 = 0;
    if (iVar6 != 0) {
      uVar23 = iVar4 / iVar6;
    }
    uVar22 = iVar4 - uVar23 * iVar6;
  }
  if (iVar13 == 1) {
    iVar13 = *param_2;
    iVar4 = -iVar13;
    if (-1 < iVar13) {
      iVar4 = iVar13;
    }
    if (iVar4 < 1) goto LAB_01512300;
LAB_015126e4:
    *param_3 = 2;
  }
  else {
LAB_01512300:
    iVar4 = param_2[1];
    if (*(int *)(param_1 + 0x10) == 1) {
      iVar13 = -iVar4;
      if (-1 < iVar4) {
        iVar13 = iVar4;
      }
      if (0 < iVar13) goto LAB_015126e4;
    }
    iVar13 = *param_2;
    __x = (double)(iVar4 * iVar4 + iVar13 * iVar13);
    dVar27 = SQRT(__x);
    if (NAN(dVar27)) {
      dVar27 = sqrt(__x);
    }
    iVar14 = (int)dVar27;
    iVar6 = 0;
    if (iVar14 != 0) {
      iVar6 = *param_2 / iVar14;
    }
    iVar7 = 0;
    if (iVar14 != 0) {
      iVar7 = param_2[1] / iVar14;
    }
    FUN_0111e884(local_88,param_1,*(undefined4 *)(param_1 + 8));
    lVar20 = 0x18;
    if (*param_2 != 0) {
      lVar20 = 0x14;
    }
    iVar14 = 0;
    iVar5 = *(int *)(param_1 + lVar20);
    *param_3 = 0;
    local_ec = iVar7 + -1;
    iVar10 = 1;
    local_f0 = 0;
    lVar20 = local_88[0];
    iVar21 = iVar7;
    uVar12 = uVar23;
    uVar19 = uVar23;
    uVar11 = uVar22;
    do {
      uVar19 = uVar19 + iVar6;
      uVar24 = uVar22 + iVar21;
      uVar26 = uVar19;
      if (((((int)uVar19 < 0) || ((int)uVar24 < 0)) || (*(int *)(param_1 + 0xc) <= (int)uVar19)) ||
         (*(int *)(param_1 + 0x10) <= (int)uVar24)) {
        if (iVar5 == 1) {
          uVar26 = *(uint *)(param_1 + 0xc);
          uVar15 = *(uint *)(param_1 + 0x10);
          iVar18 = (uVar26 & (int)uVar19 >> 0x1f) + uVar19;
          iVar16 = 0;
          if (uVar26 != 0) {
            iVar16 = iVar18 / (int)uVar26;
          }
          uVar26 = iVar18 - iVar16 * uVar26;
          iVar18 = uVar22 + (uVar15 & (int)uVar24 >> 0x1f) + iVar21;
          iVar16 = 0;
          if (uVar15 != 0) {
            iVar16 = iVar18 / (int)uVar15;
          }
          *param_3 = 1;
          uVar24 = iVar18 - iVar16 * uVar15;
          if ((int)(uVar24 | uVar26) < 0) break;
        }
        else {
          if (iVar5 == 0) {
            uVar23 = uVar12;
            goto LAB_01512660;
          }
          if (iVar5 != 2) goto LAB_015123d8;
          uVar15 = uVar22 + iVar10 * iVar7;
          iVar18 = *(int *)(param_1 + 0xc);
          if ((int)uVar19 < 0) {
            iVar16 = 0;
            if (iVar18 != 0) {
              iVar16 = (int)(uVar19 + iVar18) / iVar18;
            }
            iVar1 = -iVar16;
            if (-1 < iVar16) {
              iVar1 = iVar16;
            }
            uVar26 = uVar19 + iVar18 * (iVar1 + 1);
            uVar24 = (uVar22 + local_ec) - iVar1;
            if ((int)uVar24 < 0) {
              *param_3 = 1;
              iVar18 = *(int *)(param_1 + 0x10);
              iVar16 = 0;
              if (iVar18 != 0) {
                iVar16 = (int)(uVar22 + local_ec + (iVar18 - iVar1)) / iVar18;
              }
              iVar2 = -iVar16;
              if (-1 < iVar16) {
                iVar2 = iVar16;
              }
              uVar24 = (uVar15 - (iVar1 + 1)) + (iVar2 + 1) * iVar18;
              goto LAB_01512720;
            }
            iVar18 = *(int *)(param_1 + 0x10);
          }
          else {
            if ((int)uVar19 < iVar18) {
              iVar18 = *(int *)(param_1 + 0x10);
              uVar26 = uVar23 + iVar10 * iVar6;
              uVar24 = uVar15;
            }
            else {
              iVar16 = 0;
              if (iVar18 != 0) {
                iVar16 = (int)uVar19 / iVar18;
              }
              uVar24 = uVar24 + iVar16;
              uVar26 = uVar19 - iVar16 * iVar18;
              iVar18 = *(int *)(param_1 + 0x10);
              if (iVar18 <= (int)uVar24) {
                *param_3 = 1;
                iVar18 = *(int *)(param_1 + 0x10);
                iVar16 = 0;
                if (iVar18 != 0) {
                  iVar16 = (int)uVar24 / iVar18;
                }
                uVar24 = uVar24 - iVar16 * iVar18;
              }
            }
LAB_01512720:
            if ((int)uVar24 < 0) {
              iVar16 = 0;
              if (iVar18 != 0) {
                iVar16 = (int)(uVar24 + iVar18) / iVar18;
              }
              iVar1 = -iVar16;
              if (-1 < iVar16) {
                iVar1 = iVar16;
              }
              uVar24 = uVar24 + (iVar1 + 1) * iVar18;
              uVar26 = uVar26 - (iVar1 + 1);
              if ((int)uVar26 < 0) {
                *param_3 = 1;
                iVar18 = *(int *)(param_1 + 0xc);
                iVar16 = 0;
                if (iVar18 != 0) {
                  iVar16 = (int)(iVar18 + uVar26) / iVar18;
                }
                iVar1 = -iVar16;
                if (-1 < iVar16) {
                  iVar1 = iVar16;
                }
                uVar26 = uVar26 + (iVar1 + 1) * iVar18;
              }
              goto LAB_015123d8;
            }
          }
          if (iVar18 <= (int)uVar24) {
            iVar16 = 0;
            if (iVar18 != 0) {
              iVar16 = (int)uVar24 / iVar18;
            }
            uVar26 = iVar16 + uVar26;
            uVar24 = uVar24 - iVar16 * iVar18;
            if (*(int *)(param_1 + 0xc) <= (int)uVar26) {
              *param_3 = 1;
              iVar18 = *(int *)(param_1 + 0xc);
              iVar16 = 0;
              if (iVar18 != 0) {
                iVar16 = (int)uVar26 / iVar18;
              }
              uVar26 = uVar26 - iVar16 * iVar18;
            }
          }
        }
      }
LAB_015123d8:
      bVar9 = *(int *)(param_1 + 0x1c) != 0;
      lVar17 = 0xc;
      if (bVar9) {
        lVar17 = 0x10;
      }
      uVar15 = uVar26;
      uVar3 = uVar24;
      if (bVar9) {
        uVar15 = uVar24;
        uVar3 = uVar26;
      }
      FUN_0111e884(local_a8,param_1,uVar15 + *(int *)(param_1 + lVar17) * uVar3);
      if (local_a8[0] == lVar20) {
        bVar25 = 0;
      }
      else {
        bVar9 = *(int *)(param_1 + 0x1c) != 0;
        lVar17 = 0xc;
        uVar15 = uVar24;
        if (bVar9) {
          lVar17 = 0x10;
          uVar15 = uVar26;
        }
        uVar3 = uVar26;
        if (bVar9) {
          uVar3 = uVar24;
        }
        FUN_0111e884(auStack_c8,param_1,uVar3 + *(int *)(param_1 + lVar17) * uVar15);
        if (*local_c0 == '\0') {
          bVar25 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            iVar18 = *(int *)(param_1 + 0xc);
            iVar16 = *(int *)(param_1 + 0x10);
            uVar15 = uVar26 + iVar18 * uVar24;
          }
          else {
            iVar18 = *(int *)(param_1 + 0xc);
            iVar16 = *(int *)(param_1 + 0x10);
            uVar15 = uVar24 + iVar16 * uVar26;
          }
          if (((int)uVar15 < iVar18 * iVar16) &&
             (lVar17 = *(long *)(*(long *)(param_1 + 0x40) + 0x20),
             **(char **)(lVar17 + (ulong)uVar15 * 0x28 + 8) != '\0')) {
            bVar25 = *(byte *)(lVar17 + (ulong)uVar15 * 0x28 + 0x20) & 1;
          }
          else {
            bVar25 = 0;
          }
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (bVar25 != 0) {
        bVar9 = *(int *)(param_1 + 0x1c) != 0;
        lVar20 = 0xc;
        uVar11 = uVar24;
        if (bVar9) {
          lVar20 = 0x10;
          uVar11 = uVar26;
        }
        uVar12 = uVar26;
        if (bVar9) {
          uVar12 = uVar24;
        }
        FUN_0111e884(local_a8,param_1,uVar12 + *(int *)(param_1 + lVar20) * uVar11);
        plVar8 = local_70;
        lVar20 = local_a8[0];
        local_70 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        iVar14 = iVar14 + 1;
        local_70 = local_90;
        uVar11 = uVar24;
        uVar12 = uVar26;
      }
      iVar18 = -iVar13;
      if (-1 < iVar13) {
        iVar18 = iVar13;
      }
      iVar16 = -iVar4;
      if (-1 < iVar4) {
        iVar16 = iVar4;
      }
      if ((iVar18 <= iVar14) && (iVar16 <= iVar14)) {
        uVar23 = uVar12;
        uVar22 = uVar11;
        goto LAB_0151256c;
      }
      iVar21 = iVar21 + iVar7;
      local_ec = local_ec + iVar7;
      local_f0 = local_f0 + 1;
      iVar10 = iVar10 + 1;
    } while (local_f0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc));
    uVar11 = uVar22;
LAB_01512660:
    *param_3 = 2;
    uVar22 = uVar11;
LAB_0151256c:
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return CONCAT44(uVar22,uVar23);
}


