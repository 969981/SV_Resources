/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034db12c; name: FUN_034db12c
 */


int FUN_034db12c(long *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  long **pplVar20;
  long *local_70;
  uint local_68;
  int local_64;
  
  pplVar20 = &local_70;
  uVar3 = (**(code **)(*param_1 + 0x78))();
  if ((uVar3 & 1) == 0) {
    return 0x34;
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    lVar8 = lVar6;
    do {
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar17 = uVar17 + 1;
    } while (lVar8 != 0);
    if (uVar17 != 0) {
      pplVar20 = (long **)((long)&local_70 - ((ulong)uVar17 * 4 + 0xf & 0x7fffffff0));
      puVar9 = (undefined4 *)pplVar20;
      do {
        puVar18 = puVar9 + 1;
        *puVar9 = *(undefined4 *)(lVar6 + 0x38);
        lVar6 = *(long *)(lVar6 + 0x10);
        puVar9 = puVar18;
      } while (lVar6 != 0);
      puVar18 = puVar18 + -(ulong)uVar17;
      goto LAB_034db1e0;
    }
  }
  puVar18 = (undefined4 *)0x0;
LAB_034db1e0:
  iVar16 = 1;
  uVar19 = 0;
  if (param_2 != 0) {
    local_70 = param_1;
    do {
      param_1 = local_70;
      uVar3 = 0;
      local_64 = param_2;
      if ((puVar18 == (undefined4 *)0x0) || (uVar17 == 0)) {
LAB_034db228:
        if ((uint)uVar3 == uVar17) {
          iVar2 = *param_3;
          goto LAB_034db234;
        }
        uVar17 = uVar17 - 1;
        puVar18[uVar3 & 0xffffffff] = puVar18[uVar17];
        iVar2 = *param_3;
        plVar4 = (long *)(**(code **)(*local_70 + 0x80))(local_70);
        do {
          lVar6 = *plVar4;
          plVar4 = (long *)(lVar6 + 0x10);
        } while (*(int *)(lVar6 + 0x38) != iVar2);
        uVar7 = (undefined1)param_3[2];
        uVar19 = uVar19 | (uint)*(byte *)(lVar6 + 0x40) != (param_3[2] & 0xffU);
      }
      else {
        iVar2 = *param_3;
        uVar3 = 0;
        do {
          if (puVar18[uVar3] == iVar2) goto LAB_034db228;
          uVar3 = uVar3 + 1;
        } while (uVar17 != uVar3);
LAB_034db234:
        lVar6 = (**(code **)(*local_70 + 0x60))(local_70,iVar2,1);
        if (lVar6 == 0) {
          iVar16 = 0x34;
          uVar19 = 1;
          break;
        }
        uVar7 = (undefined1)param_3[2];
        uVar19 = 1;
      }
      *(undefined1 *)(lVar6 + 0x40) = uVar7;
      pplVar20 = (long **)((long)pplVar20 +
                          -((ulong)*(uint *)(lVar6 + 0x34) * 4 + 0xf & 0x7fffffff0));
      if (*(int *)(lVar6 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        lVar8 = *(long *)(lVar6 + 0x28);
        uVar3 = 0;
        do {
          plVar4 = (long *)(lVar8 + 8);
          lVar8 = lVar8 + 0x10;
          *(undefined4 *)((long)pplVar20 + uVar3 * 4) = *(undefined4 *)(*plVar4 + 0x10);
          uVar3 = uVar3 + 1;
        } while (lVar8 != *(long *)(lVar6 + 0x28) + (ulong)*(uint *)(lVar6 + 0x30) * 0x10);
      }
      uVar15 = (uint)uVar3;
      if (param_3[1] != 0) {
        uVar14 = 0;
        do {
          iVar2 = (int)uVar3;
          if (iVar2 == 0) {
            uVar10 = 0;
LAB_034db344:
            if ((int)uVar10 == iVar2) {
              iVar5 = *param_4;
              goto LAB_034db350;
            }
            uVar3 = (ulong)(iVar2 - 1);
            *(undefined4 *)((long)pplVar20 + (uVar10 & 0xffffffff) * 4) =
                 *(undefined4 *)((long)pplVar20 + uVar3 * 4);
          }
          else {
            iVar5 = *param_4;
            uVar10 = 0;
            do {
              if (*(int *)((long)pplVar20 + uVar10 * 4) == iVar5) goto LAB_034db344;
              uVar10 = uVar10 + 1;
            } while ((uVar3 & 0xffffffff) != uVar10);
LAB_034db350:
            iVar2 = FUN_034dae74(lVar6,iVar5,param_4[1],0);
            if (iVar2 != 1) {
              iVar16 = iVar2;
            }
            uVar19 = 1;
          }
          uVar15 = (uint)uVar3;
          uVar14 = uVar14 + 1;
          param_4 = param_4 + 2;
        } while (uVar14 < (uint)param_3[1]);
      }
      local_68 = uVar19 | uVar15 != 0;
      if (uVar15 != 0) {
        uVar10 = (ulong)*(uint *)(lVar6 + 0x30);
        uVar3 = 0;
        do {
          iVar2 = *(int *)((long)pplVar20 + uVar3 * 4);
          piVar11 = *(int **)(lVar6 + 0x28);
          if (((int)uVar10 == 0) || (*piVar11 == iVar2)) {
            piVar12 = piVar11;
          }
          else {
            lVar8 = uVar10 * 0x10;
            piVar13 = piVar11;
            do {
              lVar8 = lVar8 + -0x10;
              if (lVar8 == 0) goto LAB_034db4a8;
              piVar12 = piVar13 + 4;
              piVar1 = piVar13 + 4;
              piVar13 = piVar12;
            } while (*piVar1 != iVar2);
          }
          if (piVar12 != piVar11 + uVar10 * 4) {
            *(undefined8 *)(*(long *)(piVar12 + 2) + 0x20) = 0;
            (**(code **)(**(long **)(piVar12 + 2) + 0x18))();
            piVar12 = *(int **)(lVar6 + 0x28);
            uVar19 = *(uint *)(lVar6 + 0x30);
            uVar10 = (ulong)uVar19;
            piVar11 = piVar12 + uVar10 * 4;
            if ((uVar19 != 0) && (*piVar12 != iVar2)) {
              lVar8 = uVar10 * 0x10;
              do {
                lVar8 = lVar8 + -0x10;
                if (lVar8 == 0) {
                  piVar12 = piVar11;
                  break;
                }
                piVar1 = piVar12 + 4;
                piVar13 = piVar12 + 4;
                piVar12 = piVar1;
              } while (*piVar13 != iVar2);
            }
            if (piVar11 != piVar12) {
              if (piVar12 < piVar11 + -4) {
                do {
                  piVar13 = piVar12 + 4;
                  *(undefined8 *)piVar12 = *(undefined8 *)piVar13;
                  *(undefined8 *)(piVar12 + 2) = *(undefined8 *)(piVar12 + 6);
                  piVar12 = piVar13;
                } while (piVar13 < piVar11 + -4);
                uVar19 = *(uint *)(lVar6 + 0x30);
              }
              uVar10 = (ulong)(uVar19 - 1);
              *(uint *)(lVar6 + 0x30) = uVar19 - 1;
            }
          }
LAB_034db4a8:
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar15);
      }
      param_2 = local_64 + -1;
      param_3 = param_3 + 3;
      param_1 = local_70;
      uVar19 = local_68;
    } while (param_2 != 0);
  }
  if (uVar17 != 0) {
    uVar3 = (ulong)uVar17;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,*puVar18,0);
      uVar3 = uVar3 - 1;
      puVar18 = puVar18 + 1;
    } while (uVar3 != 0);
  }
  if (uVar17 != 0 || (uVar19 & 1) != 0) {
    FUN_034da454(param_1);
  }
  return iVar16;
}


