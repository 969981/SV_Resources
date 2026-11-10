/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004915c0; name: FUN_004915c0
 */


/* WARNING: Removing unreachable block (ram,0x00491674) */
/* WARNING: Removing unreachable block (ram,0x00491688) */

ulong FUN_004915c0(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if (((*(long *)(param_1 + 0x98) == 0) || (iVar3 = FUN_0047e430(), iVar3 == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x98);
  if (((lVar8 != 0) && (iVar3 = FUN_0047e430(lVar8), 0 < iVar3)) && (param_1 != 0)) {
    if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) goto LAB_00491654;
    lVar7 = FUN_0047e450(lVar8,0);
    puVar13 = *(undefined8 **)(lVar7 + 0x128);
    if (puVar13 == (undefined8 *)0x0) {
      return 1;
    }
    iVar3 = FUN_00490a20(*puVar13);
    if ((iVar3 == 0) || (iVar3 = FUN_00490a20(puVar13[1]), iVar3 == 0)) {
      if (param_1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(long *)(param_1 + 0xb8) = lVar7;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      uVar10 = uVar6 & 0xffffffff;
      if ((int)uVar6 == 0) {
        return uVar6;
      }
    }
    else {
      uVar10 = 1;
    }
    piVar9 = (int *)*puVar13;
    if (piVar9 == (int *)0x0) {
LAB_0049171c:
      lVar11 = 0;
      bVar1 = false;
      piVar9 = (int *)puVar13[1];
      if (piVar9 != (int *)0x0) goto LAB_00491748;
LAB_00491764:
      lVar12 = 0;
LAB_00491770:
      bVar2 = false;
    }
    else {
      if (*piVar9 == 1) {
        lVar11 = *(long *)(piVar9 + 2);
        bVar1 = false;
        piVar9 = (int *)puVar13[1];
      }
      else {
        if (*piVar9 != 0) goto LAB_0049171c;
        lVar11 = 0;
        bVar1 = true;
        piVar9 = (int *)puVar13[1];
      }
      if (piVar9 == (int *)0x0) goto LAB_00491764;
LAB_00491748:
      if (*piVar9 == 1) {
        lVar12 = *(long *)(piVar9 + 2);
        goto LAB_00491770;
      }
      if (*piVar9 != 0) goto LAB_00491764;
      lVar12 = 0;
      bVar2 = true;
    }
    iVar3 = 1;
    iVar4 = FUN_0047e430(lVar8);
    if (1 < iVar4) {
      do {
        lVar7 = FUN_0047e450(lVar8,iVar3);
        if (lVar7 == 0) goto LAB_00491650;
        puVar13 = *(undefined8 **)(lVar7 + 0x128);
        if (puVar13 == (undefined8 *)0x0) {
          if (lVar11 == 0 && lVar12 == 0) {
            lVar11 = 0;
            lVar12 = 0;
          }
          else {
            if (param_1 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar10 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
              return uVar6;
            }
          }
        }
        else {
          iVar4 = FUN_00490a20(*puVar13);
          if ((iVar4 == 0) || (iVar4 = FUN_00490a20(puVar13[1]), iVar4 == 0)) {
            if (param_1 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(long *)(param_1 + 0xb8) = lVar7;
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            puVar13 = *(undefined8 **)(lVar7 + 0x128);
            uVar10 = uVar10 & 0xffffffff;
            piVar9 = (int *)*puVar13;
            if ((lVar11 != 0) && (piVar9 == (int *)0x0)) goto LAB_00491830;
          }
          else {
            puVar13 = *(undefined8 **)(lVar7 + 0x128);
            piVar9 = (int *)*puVar13;
            if ((lVar11 != 0) && (piVar9 == (int *)0x0)) {
              if (param_1 == 0) {
                return 0;
              }
LAB_00491830:
              *(int *)(param_1 + 0xac) = iVar3;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(long *)(param_1 + 0xb8) = lVar7;
              uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar10 == 0) {
                return uVar10;
              }
              puVar13 = *(undefined8 **)(lVar7 + 0x128);
              uVar10 = uVar10 & 0xffffffff;
              lVar11 = 0;
              bVar1 = false;
              piVar9 = (int *)*puVar13;
            }
          }
          if ((piVar9 == (int *)0x0) || (*piVar9 != 1)) {
LAB_00491894:
            piVar9 = (int *)puVar13[1];
            if ((lVar12 != 0) && (piVar9 == (int *)0x0)) {
              if (param_1 == 0) {
                return 0;
              }
LAB_004918a4:
              *(int *)(param_1 + 0xac) = iVar3;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(long *)(param_1 + 0xb8) = lVar7;
              uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar10 == 0) {
                return uVar10;
              }
              uVar10 = uVar10 & 0xffffffff;
              lVar12 = 0;
              bVar2 = false;
              piVar9 = *(int **)(*(long *)(lVar7 + 0x128) + 8);
            }
          }
          else {
            if (bVar1) {
LAB_0049188c:
              lVar11 = *(long *)(piVar9 + 2);
              bVar1 = false;
              goto LAB_00491894;
            }
            iVar4 = FUN_00491470(*(undefined8 *)(piVar9 + 2),lVar11);
            if (iVar4 != 0) {
              puVar13 = *(undefined8 **)(lVar7 + 0x128);
              piVar9 = (int *)*puVar13;
              goto LAB_0049188c;
            }
            if (param_1 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar7;
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            uVar10 = uVar10 & 0xffffffff;
            bVar1 = false;
            piVar9 = *(int **)(*(long *)(lVar7 + 0x128) + 8);
            if ((lVar12 != 0) && (piVar9 == (int *)0x0)) goto LAB_004918a4;
          }
          if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
            if (!bVar2) {
              iVar4 = FUN_00491470(*(undefined8 *)(piVar9 + 2),lVar12);
              if (iVar4 == 0) {
                if (param_1 == 0) {
                  return 0;
                }
                *(int *)(param_1 + 0xac) = iVar3;
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(long *)(param_1 + 0xb8) = lVar7;
                uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                uVar10 = (ulong)uVar5;
                bVar2 = false;
                if (uVar5 == 0) {
                  return 0;
                }
                goto LAB_00491798;
              }
              piVar9 = *(int **)(*(long *)(lVar7 + 0x128) + 8);
            }
            lVar12 = *(long *)(piVar9 + 2);
            bVar2 = false;
          }
        }
LAB_00491798:
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0047e430(lVar8);
      } while (iVar3 < iVar4);
    }
    uVar5 = (uint)uVar10;
    if (lVar7 != 0) {
      puVar13 = *(undefined8 **)(lVar7 + 0x128);
      if (puVar13 != (undefined8 *)0x0) {
        if (((int *)*puVar13 == (int *)0x0) || (*(int *)*puVar13 != 0)) {
          piVar9 = (int *)puVar13[1];
        }
        else {
          if (param_1 == 0) {
            return 0;
          }
          *(int *)(param_1 + 0xac) = iVar3;
          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
          *(long *)(param_1 + 0xb8) = lVar7;
          uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
          uVar5 = (uint)uVar10;
          if (uVar5 == 0) {
            return uVar10;
          }
          uVar10 = uVar10 & 0xffffffff;
          piVar9 = *(int **)(*(long *)(lVar7 + 0x128) + 8);
        }
        if (piVar9 != (int *)0x0) {
          if (*piVar9 == 0) {
            uVar5 = 0;
          }
          if (param_1 == 0) {
            return (ulong)uVar5;
          }
          if (*piVar9 == 0) {
            *(int *)(param_1 + 0xac) = iVar3;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00491a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar10;
          }
          return (ulong)uVar5;
        }
      }
      return uVar10;
    }
  }
LAB_00491650:
  if (param_1 == 0) {
    return 0;
  }
LAB_00491654:
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}


