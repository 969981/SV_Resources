/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e1f80; name: FUN_034e1f80
 */


void FUN_034e1f80(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  long local_a0;
  undefined8 local_98;
  long local_90;
  uint local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar15 = (long)&local_a0 - ((ulong)(uint)(*(int *)(param_1 + 0x1a0) << 3) + 0xf & 0x1fffffff0);
  lVar3 = *param_3;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x1a0) == 0) {
      FUN_034c7900(*(undefined8 *)PTR_DAT_047e6cc0,*(undefined4 *)(param_1 + 0x18),0);
      return;
    }
    plVar8 = *(long **)(param_1 + 0x1a8);
    if (plVar8 == (long *)0x0) {
      return;
    }
    uVar18 = 0;
    if (param_4 == (undefined8 *)0x0) {
      iVar6 = *(int *)(param_1 + 0x18);
      do {
        iVar12 = 0;
        if (plVar8[4] != 0) {
          lVar3 = *(long *)(plVar8[4] + 0x50);
          if (lVar3 != 0) {
            piVar7 = *(int **)(lVar3 + 0x20);
            uVar17 = *(uint *)(lVar3 + 0x28);
            if ((uVar17 == 0) || (*piVar7 == iVar6)) {
              piVar16 = piVar7;
            }
            else {
              lVar3 = (ulong)uVar17 * 0xc;
              piVar11 = piVar7;
              do {
                lVar3 = lVar3 + -0xc;
                if (lVar3 == 0) goto LAB_034e21fc;
                piVar16 = piVar11 + 3;
                piVar1 = piVar11 + 3;
                piVar11 = piVar16;
              } while (*piVar1 != iVar6);
            }
            if (piVar16 != piVar7 + (ulong)uVar17 * 3) {
              iVar12 = piVar16[1];
              goto LAB_034e2200;
            }
          }
LAB_034e21fc:
          iVar12 = 0;
        }
LAB_034e2200:
        if (iVar12 != param_2) {
          *(long **)(lVar15 + uVar18 * 8) = plVar8;
          uVar18 = (ulong)((int)uVar18 + 1);
        }
        uVar17 = (uint)uVar18;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        lVar3 = plVar8[4];
        if ((lVar3 == 0) || (lVar13 = *(long *)(lVar3 + 0x50), lVar13 == 0)) {
LAB_034e209c:
          iVar6 = 0;
        }
        else {
          piVar7 = *(int **)(lVar13 + 0x20);
          uVar17 = *(uint *)(lVar13 + 0x28);
          if ((uVar17 == 0) || (*piVar7 == *(int *)(param_1 + 0x18))) {
            piVar16 = piVar7;
          }
          else {
            lVar13 = (ulong)uVar17 * 0xc;
            piVar11 = piVar7;
            do {
              lVar13 = lVar13 + -0xc;
              if (lVar13 == 0) goto LAB_034e209c;
              piVar16 = piVar11 + 3;
              piVar1 = piVar11 + 3;
              piVar11 = piVar16;
            } while (*piVar1 != *(int *)(param_1 + 0x18));
          }
          if (piVar16 == piVar7 + (ulong)uVar17 * 3) goto LAB_034e209c;
          iVar6 = piVar16[1];
        }
        if (iVar6 != param_2) {
          local_88 = 0;
          local_80 = 0;
          local_78 = 0xff;
          local_70 = 0xff;
          local_68 = 0;
          local_90 = lVar3;
          uVar4 = (**(code **)*param_4)(param_4,&local_90);
          if ((uVar4 & 1) == 0) {
            *(long **)(lVar15 + uVar18 * 8) = plVar8;
            uVar18 = (ulong)((int)uVar18 + 1);
          }
        }
        uVar17 = (uint)uVar18;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    goto LAB_034e2218;
  }
  lVar13 = *(long *)(lVar3 + 0x50);
  if (lVar13 == 0) {
LAB_034e2150:
    iVar6 = 0;
  }
  else {
    piVar7 = *(int **)(lVar13 + 0x20);
    uVar17 = *(uint *)(lVar13 + 0x28);
    if ((uVar17 == 0) || (*piVar7 == *(int *)(param_1 + 0x18))) {
      piVar16 = piVar7;
    }
    else {
      lVar13 = (ulong)uVar17 * 0xc;
      piVar11 = piVar7;
      do {
        lVar13 = lVar13 + -0xc;
        if (lVar13 == 0) goto LAB_034e2150;
        piVar16 = piVar11 + 3;
        piVar1 = piVar11 + 3;
        piVar11 = piVar16;
      } while (*piVar1 != *(int *)(param_1 + 0x18));
    }
    if (piVar16 == piVar7 + (ulong)uVar17 * 3) goto LAB_034e2150;
    iVar6 = piVar16[1];
  }
  if (iVar6 == param_2) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x1a8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar18 = 0;
  do {
    if (plVar8[4] == lVar3) {
      *(long **)(lVar15 + uVar18 * 8) = plVar8;
      uVar18 = (ulong)((int)uVar18 + 1);
    }
    uVar17 = (uint)uVar18;
    plVar8 = (long *)*plVar8;
  } while (plVar8 != (long *)0x0);
LAB_034e2218:
  if (uVar17 != 0) {
    uVar18 = 0;
    local_a0 = lVar15;
    do {
      lVar3 = *(long *)(lVar15 + uVar18 * 8);
      lVar13 = *(long *)(lVar3 + 0x20);
      if ((lVar13 == 0) || (lVar9 = *(long *)(lVar13 + 0x50), lVar9 == 0)) {
LAB_034e22b8:
        uVar4 = 0;
        local_98 = 0;
      }
      else {
        piVar7 = *(int **)(lVar9 + 0x20);
        uVar2 = *(uint *)(lVar9 + 0x28);
        if ((uVar2 == 0) || (*piVar7 == *(int *)(param_1 + 0x18))) {
          piVar16 = piVar7;
        }
        else {
          lVar9 = (ulong)uVar2 * 0xc;
          piVar11 = piVar7;
          do {
            lVar9 = lVar9 + -0xc;
            if (lVar9 == 0) goto LAB_034e22b8;
            piVar16 = piVar11 + 3;
            piVar1 = piVar11 + 3;
            piVar11 = piVar16;
          } while (*piVar1 != *(int *)(param_1 + 0x18));
        }
        if (piVar16 == piVar7 + (ulong)uVar2 * 3) goto LAB_034e22b8;
        uVar4 = (ulong)(uint)piVar16[1];
        local_98 = (ulong)(uint)piVar16[2] << 0x20;
      }
      local_98 = local_98 | uVar4;
      plVar8 = *(long **)(param_1 + 0x150);
      if (plVar8 == (long *)0x0) {
        param_2 = *(int *)(param_1 + 0x144);
        local_98 = CONCAT44(1,param_2);
      }
      else {
        plVar14 = plVar8;
        do {
          if ((int)plVar14[1] == (int)uVar4) {
            plVar14 = plVar14 + 2;
            goto LAB_034e22fc;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
        plVar14 = (long *)0x0;
LAB_034e22fc:
        plVar10 = plVar8;
        do {
          if ((int)plVar10[1] == param_2) {
            plVar10 = plVar10 + 2;
            goto joined_r0x034e2480;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
        param_2 = *(int *)(param_1 + 0x144);
        do {
          if ((int)plVar8[1] == param_2) {
            plVar10 = plVar8 + 2;
            goto joined_r0x034e2480;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        plVar10 = (long *)0x0;
joined_r0x034e2480:
        if (plVar14 == (long *)0x0) {
          bVar5 = true;
        }
        else {
          uVar4 = (ulong)*(uint *)(plVar14 + 2);
          if (*(uint *)(plVar14 + 2) == 0) {
            bVar5 = false;
          }
          else {
            piVar7 = (int *)plVar14[1];
            if (plVar10 == (long *)0x0) {
              do {
                for (plVar8 = *(long **)(param_1 + 0x178); plVar8 != (long *)0x0;
                    plVar8 = (long *)*plVar8) {
                  if (*(int *)(plVar8 + 1) == *piVar7) {
                    local_90 = *(long *)((long)plVar8 + 0xc);
                    local_88 = *(uint *)((long)plVar8 + 0x14);
                    goto LAB_034e2448;
                  }
                }
                local_88 = local_88 & 0xffffffe0;
                local_90 = 0;
LAB_034e2448:
                FUN_034e3610(param_1,*piVar7,&local_90,lVar13);
                piVar7 = piVar7 + 1;
              } while (piVar7 != (int *)(plVar14[1] + (ulong)*(uint *)(plVar14 + 2) * 4));
            }
            else {
              piVar16 = piVar7;
              do {
                iVar6 = *piVar16;
                for (plVar8 = *(long **)(param_1 + 0x178); plVar8 != (long *)0x0;
                    plVar8 = (long *)*plVar8) {
                  if (*(int *)(plVar8 + 1) == iVar6) {
                    local_90 = *(long *)((long)plVar8 + 0xc);
                    local_88 = *(uint *)((long)plVar8 + 0x14);
                    goto LAB_034e239c;
                  }
                }
                local_88 = local_88 & 0xffffffe0;
                local_90 = 0;
LAB_034e239c:
                if ((((*(byte *)(param_1 + 0xdd) >> 3 & 1) != 0) && (((byte)local_88 >> 4 & 1) != 0)
                    ) && (*(uint *)(plVar10 + 2) != 0)) {
                  lVar15 = (ulong)*(uint *)(plVar10 + 2) << 2;
                  piVar11 = (int *)plVar10[1];
                  do {
                    if (*piVar11 == iVar6) goto LAB_034e23e8;
                    lVar15 = lVar15 + -4;
                    piVar11 = piVar11 + 1;
                  } while (lVar15 != 0);
                }
                FUN_034e3610(param_1,iVar6,&local_90,lVar13);
                piVar7 = (int *)plVar14[1];
                uVar4 = (ulong)*(uint *)(plVar14 + 2);
LAB_034e23e8:
                piVar16 = piVar16 + 1;
              } while (piVar16 != piVar7 + uVar4);
              lVar15 = local_a0;
            }
            bVar5 = false;
          }
        }
        local_98 = CONCAT44(1,param_2);
        if ((plVar10 != (long *)0x0) &&
           (uVar4 = (ulong)*(uint *)(plVar10 + 2), *(uint *)(plVar10 + 2) != 0)) {
          piVar7 = (int *)plVar10[1];
          if (!bVar5) {
            piVar16 = piVar7;
LAB_034e24f4:
            iVar6 = *piVar16;
            for (plVar8 = *(long **)(param_1 + 0x178); plVar8 != (long *)0x0;
                plVar8 = (long *)*plVar8) {
              if (*(int *)(plVar8 + 1) == iVar6) {
                if (((*(byte *)((long)plVar8 + 0x14) >> 4 & 1) != 0) &&
                   (*(uint *)(plVar14 + 2) != 0)) {
                  lVar13 = (ulong)*(uint *)(plVar14 + 2) << 2;
                  piVar11 = (int *)plVar14[1];
                  goto LAB_034e2530;
                }
                break;
              }
            }
            goto LAB_034e2544;
          }
          do {
            for (plVar8 = *(long **)(param_1 + 0x178);
                (plVar8 != (long *)0x0 && (*(int *)(plVar8 + 1) != *piVar7));
                plVar8 = (long *)*plVar8) {
            }
            FUN_034e32c8(param_1,*piVar7,lVar3);
            piVar7 = piVar7 + 1;
          } while (piVar7 != (int *)(plVar10[1] + (ulong)*(uint *)(plVar10 + 2) * 4));
        }
      }
LAB_034e256c:
      FUN_034c7718(*(undefined8 *)PTR_DAT_047e6cc0,*(undefined8 *)(lVar3 + 0x20),
                   *(undefined4 *)(param_1 + 0x18),&local_98);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar17);
  }
  return;
  while (lVar13 = lVar13 + -4, piVar11 = piVar11 + 1, lVar13 != 0) {
LAB_034e2530:
    if (*piVar11 == iVar6) goto LAB_034e2558;
  }
LAB_034e2544:
  FUN_034e32c8(param_1,iVar6,lVar3);
  piVar7 = (int *)plVar10[1];
  uVar4 = (ulong)*(uint *)(plVar10 + 2);
LAB_034e2558:
  piVar16 = piVar16 + 1;
  if (piVar16 == piVar7 + uVar4) goto LAB_034e256c;
  goto LAB_034e24f4;
}


