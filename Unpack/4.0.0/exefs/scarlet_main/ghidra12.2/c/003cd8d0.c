/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cd8d0; name: FUN_003cd8d0
 */


bool FUN_003cd8d0(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar10 = &DAT_044a1498;
    iVar6 = DAT_044a1498;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      return *param_1 == param_2;
    }
    piVar10 = &DAT_044a1528;
    iVar6 = DAT_044a1528;
  }
  if (iVar6 != 0) {
    iVar1 = 0xff00;
    if (param_2 != 0x100) {
      iVar1 = param_2;
    }
    do {
      if (iVar6 == param_2) {
        if (*(code **)(piVar10 + 2) != (code *)0x0) {
          piVar7 = (int *)(**(code **)(piVar10 + 2))();
          iVar6 = *piVar7;
          iVar4 = param_1[0x1a7];
          if ((iVar4 == 0) || (iVar6 == iVar4)) {
LAB_003cd9dc:
            iVar4 = FUN_003af490(param_1,9,0,iVar6,0);
            if (iVar4 != 0) {
              iVar4 = param_1[0x1a8];
              if ((iVar4 == 0) || (iVar6 == iVar4)) {
LAB_003cda3c:
                if (((*(ulong *)(piVar7 + 2) & (ulong)(uint)param_1[0x1a5]) == 0) &&
                   (((*(byte *)(piVar7 + 1) >> 1 & 1) == 0 ||
                    ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) == 0)))) {
                  if ((param_2 != 0x304) || (param_1[0xe] == 0)) goto LAB_003cdb24;
                  if ((*(long *)(param_1 + 0x198) != 0) && (*(long *)(param_1 + 0x21e) != 0)) {
                    if ((((*(long *)(*(long *)(param_1 + 0x198) + 0x1e0) != 0) ||
                         ((((*(long *)(*(long *)(param_1 + 0x21e) + 0x1e0) != 0 ||
                            (*(long *)(param_1 + 0x192) != 0)) || (*(long *)(param_1 + 0x194) != 0))
                          || (lVar9 = *(long *)(param_1 + 0x154), *(long *)(lVar9 + 0x1b8) != 0))))
                        || ((*(long *)(lVar9 + 0x20) != 0 && (*(long *)(lVar9 + 0x28) != 0)))) ||
                       ((*(long *)(lVar9 + 0x48) != 0 && (*(long *)(lVar9 + 0x50) != 0)))) {
LAB_003cdb24:
                      if (param_3 != (undefined8 *)0x0) {
                        uVar8 = (**(code **)(piVar10 + 2))();
                        *param_3 = uVar8;
                      }
                      return true;
                    }
                    if (((*(long *)(lVar9 + 0x98) != 0) && (*(long *)(lVar9 + 0xa0) != 0)) &&
                       (lVar9 = FUN_0043e6b0(), lVar9 != 0)) {
                      FUN_0040c210();
                      uVar5 = FUN_0040d580();
                      iVar6 = FUN_003d6230(param_1,uVar5);
                      if (iVar6 != 0) goto LAB_003cdb24;
                    }
                    lVar9 = *(long *)(param_1 + 0x154);
                    if (((*(long *)(lVar9 + 0x138) != 0) && (*(long *)(lVar9 + 0x140) != 0)) ||
                       ((*(long *)(lVar9 + 0x160) != 0 && (*(long *)(lVar9 + 0x168) != 0))))
                    goto LAB_003cdb24;
                  }
                }
              }
              else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
                if (iVar6 < iVar4) goto LAB_003cda3c;
              }
              else {
                iVar3 = 0xff00;
                if (iVar6 != 0x100) {
                  iVar3 = iVar6;
                }
                iVar6 = 0xff00;
                if (iVar4 != 0x100) {
                  iVar6 = iVar4;
                }
                if (iVar6 < iVar3) goto LAB_003cda3c;
              }
            }
          }
          else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (iVar4 <= iVar6) goto LAB_003cd9dc;
          }
          else {
            iVar3 = 0xff00;
            if (iVar6 != 0x100) {
              iVar3 = iVar6;
            }
            iVar2 = 0xff00;
            if (iVar4 != 0x100) {
              iVar2 = iVar4;
            }
            if (iVar3 <= iVar2) goto LAB_003cd9dc;
          }
        }
      }
      else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        if (iVar6 <= param_2) {
          return false;
        }
      }
      else {
        iVar4 = 0xff00;
        if (iVar6 != 0x100) {
          iVar4 = iVar6;
        }
        if (iVar1 <= iVar4) {
          return false;
        }
      }
      iVar6 = piVar10[6];
      piVar10 = piVar10 + 6;
    } while (iVar6 != 0);
  }
  return false;
}


