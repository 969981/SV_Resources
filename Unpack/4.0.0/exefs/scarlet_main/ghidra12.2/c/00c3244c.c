/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c3244c; name: FUN_00c3244c
 */


void FUN_00c3244c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  byte *pbVar18;
  
  *param_1 = &PTR_FUN_0455c750;
  lVar7 = param_1[1];
  lVar16 = *(long *)(lVar7 + 0x28);
  if (*(long *)((long)param_1 + (long)*(int *)(lVar7 + 0xc)) != 0) {
    FUN_00bfee44();
    lVar7 = param_1[1];
  }
  if (*(int *)(lVar7 + 0x10) != -1) {
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x10));
    if (puVar1[3] == 0) {
      plVar14 = (long *)*puVar1;
      while (plVar14 != puVar1 + 1) {
        FUN_00c1f9ac(plVar14 + 5);
        plVar15 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar15 = plVar14 + 2;
          if (*(long **)*plVar15 == plVar14) {
            plVar14 = (long *)*plVar15;
          }
          else {
            do {
              lVar7 = *plVar15;
              plVar15 = (long *)(lVar7 + 0x10);
              plVar14 = (long *)*plVar15;
            } while (*plVar14 != lVar7);
          }
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
    }
    FUN_00c2c9d8(puVar1,puVar1[1]);
  }
  uVar11 = (ulong)*(uint *)(lVar16 + 0x2c);
  if (0 < (int)*(uint *)(lVar16 + 0x2c)) {
    lVar7 = 0;
    puVar17 = PTR_DAT_047dad58;
    do {
      lVar10 = *(long *)(lVar16 + 0x30);
      lVar12 = *(long *)(lVar10 + lVar7 * 0x90 + 0x58);
      lVar8 = param_1[1];
      if (lVar12 != 0) {
        iVar3 = (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x40)) >> 4);
        if (*(int *)((long)param_1 + (long)(*(int *)(lVar8 + 8) + iVar3 * -0x55555554)) ==
            *(int *)(lVar10 + lVar7 * 0x90 + 0x38)) {
          lVar12 = (long)*(int *)(*(long *)(lVar8 + 0x30) +
                                 (long)((int)uVar11 + iVar3 * -0x55555555) * 4);
          if (*(int *)(puVar17 + (ulong)*(uint *)(lVar10 + lVar7 * 0x90 + 0x3c) * 4) == 10) {
            plVar14 = *(long **)((long)param_1 + lVar12);
joined_r0x00c326d8:
            if (plVar14 != (long *)0x0) {
              pcVar9 = *(code **)(*plVar14 + 8);
LAB_00c326e4:
              (*pcVar9)(plVar14);
            }
          }
          else if (*(int *)(puVar17 + (ulong)*(uint *)(lVar10 + lVar7 * 0x90 + 0x3c) * 4) == 9) {
            pbVar13 = *(byte **)((long)param_1 + lVar12);
            pbVar18 = *(byte **)(*(long *)(lVar8 + 0x48) +
                                (long)*(int *)(*(long *)(lVar8 + 0x30) + lVar7 * 4));
            if (pbVar13 != pbVar18 && pbVar13 != (byte *)0x0) {
              lVar8 = tpidr_el0;
              if (((*pbVar13 & 1) != 0) && (lVar10 = *(long *)(pbVar13 + 0x10), lVar10 != 0)) {
                plVar14 = *(long **)(lVar8 + 0x30);
                if (plVar14 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar14 = DAT_04859430;
                  *(long **)(lVar8 + 0x30) = DAT_04859430;
                  puVar17 = PTR_DAT_047dad58;
                }
                uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar11 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                  (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
                }
                else {
                  FUN_00c48fe8(plVar14,lVar10,0,8);
                }
              }
              plVar14 = *(long **)(lVar8 + 0x30);
              if (plVar14 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar14 = DAT_04859430;
                *(long **)(lVar8 + 0x30) = DAT_04859430;
                puVar17 = PTR_DAT_047dad58;
              }
              uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
              if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar14 + 0x18))(plVar14,pbVar13,0,8);
              }
              else {
                FUN_00c48fe8(plVar14,pbVar13,0,8);
              }
            }
            *(byte **)((long)param_1 + lVar12) = pbVar18;
          }
        }
        goto switchD_00c32610_default;
      }
      lVar6 = lVar10 + lVar7 * 0x90;
      lVar12 = (long)*(int *)(*(long *)(lVar8 + 0x30) + lVar7 * 4);
      plVar14 = (long *)((long)param_1 + lVar12);
      uVar2 = *(uint *)(lVar6 + 0x3c);
      iVar3 = *(int *)(puVar17 + (ulong)uVar2 * 4);
      if (*(int *)(lVar6 + 0x40) != 3) {
        if (iVar3 == 10) {
          if ((*(undefined8 **)(lVar8 + 0x40) != param_1) &&
             (*(undefined8 **)(lVar8 + 0x40) != (undefined8 *)0x0)) {
            plVar14 = (long *)*plVar14;
            goto joined_r0x00c326d8;
          }
        }
        else if (iVar3 == 9) {
          pbVar18 = *(byte **)(*(long *)(lVar8 + 0x40) + lVar12);
          pbVar13 = (byte *)*plVar14;
          if (pbVar13 != pbVar18 && pbVar13 != (byte *)0x0) {
            if (((*pbVar13 & 1) != 0) && (lVar8 = *(long *)(pbVar13 + 0x10), lVar8 != 0)) {
              lVar10 = tpidr_el0;
              plVar15 = *(long **)(lVar10 + 0x30);
              if (plVar15 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar15 = DAT_04859430;
                *(long **)(lVar10 + 0x30) = DAT_04859430;
                puVar17 = PTR_DAT_047dad58;
              }
              uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
              if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,0,8);
              }
              else {
                FUN_00c48fe8(plVar15,lVar8,0,8);
              }
            }
            lVar8 = tpidr_el0;
            plVar15 = *(long **)(lVar8 + 0x30);
            if (plVar15 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar15 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
              puVar17 = PTR_DAT_047dad58;
            }
            uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
            if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar15 + 0x18))(plVar15,pbVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar15,pbVar13,0,8);
            }
          }
          *plVar14 = (long)pbVar18;
        }
        goto switchD_00c32610_default;
      }
      switch(iVar3) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        plVar14 = (long *)plVar14[1];
        if ((plVar14 != (long *)0x0) && (*plVar14 == 0)) {
          operator_delete__(plVar14);
        }
        break;
      case 9:
        puVar5 = (uint *)plVar14[2];
        if ((puVar5 != (uint *)0x0) && (*plVar14 == 0)) {
          uVar11 = (ulong)*puVar5;
          if (0 < (int)*puVar5) {
            do {
              puVar5 = puVar5 + 2;
              pbVar13 = *(byte **)puVar5;
              if (pbVar13 != (byte *)0x0) {
                if (((*pbVar13 & 1) != 0) && (lVar8 = *(long *)(pbVar13 + 0x10), lVar8 != 0)) {
                  lVar10 = tpidr_el0;
                  plVar15 = *(long **)(lVar10 + 0x30);
                  if (plVar15 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar15 = DAT_04859430;
                    *(long **)(lVar10 + 0x30) = DAT_04859430;
                  }
                  uVar4 = (**(code **)(*plVar15 + 0xf8))(plVar15);
                  if (((uVar4 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)
                     ) {
                    (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar15,lVar8,0,8);
                  }
                }
                lVar8 = tpidr_el0;
                plVar15 = *(long **)(lVar8 + 0x30);
                if (plVar15 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar15 = DAT_04859430;
                  *(long **)(lVar8 + 0x30) = DAT_04859430;
                }
                uVar4 = (**(code **)(*plVar15 + 0xf8))(plVar15);
                puVar17 = PTR_DAT_047dad58;
                if (((uVar4 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                  (**(code **)(*plVar15 + 0x18))(plVar15,pbVar13,0,8);
                }
                else {
                  FUN_00c48fe8(plVar15,pbVar13,0,8);
                }
              }
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
LAB_00c3295c:
            puVar5 = (uint *)plVar14[2];
            if (puVar5 == (uint *)0x0) goto LAB_00c329d4;
          }
LAB_00c329d0:
          operator_delete__(puVar5);
        }
        goto LAB_00c329d4;
      case 10:
        if ((uVar2 == 0xb) &&
           (*(char *)(*(long *)(*(long *)(lVar10 + lVar7 * 0x90 + 0x68) + 0x20) + 0x53) != '\0')) {
          pcVar9 = *(code **)*plVar14;
          goto LAB_00c326e4;
        }
        puVar5 = (uint *)plVar14[2];
        if ((puVar5 != (uint *)0x0) && (*plVar14 == 0)) {
          uVar11 = (ulong)*puVar5;
          if (0 < (int)*puVar5) {
            do {
              puVar5 = puVar5 + 2;
              if (*(long **)puVar5 != (long *)0x0) {
                (**(code **)(**(long **)puVar5 + 8))();
              }
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            goto LAB_00c3295c;
          }
          goto LAB_00c329d0;
        }
LAB_00c329d4:
        plVar14[2] = 0;
      }
switchD_00c32610_default:
      uVar11 = (ulong)*(int *)(lVar16 + 0x2c);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)uVar11);
  }
  return;
}


