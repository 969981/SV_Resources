/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a01ca0; name: FUN_02a01ca0
 */


bool FUN_02a01ca0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar5 = param_2[-1];
    lVar1 = *param_1;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    if (*(char *)(lVar1 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(lVar1 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar1 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(lVar1 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar1 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar1 - *plVar6) >> 4) * 0x38e38e39) {
      *param_1 = lVar5;
      param_2[-1] = lVar1;
      return true;
    }
    break;
  case 3:
    FUN_02a01590(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_02a01800(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_02a01a00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_02a01590(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar1 = 0;
      iVar2 = 0;
      plVar3 = param_1 + 3;
      plVar6 = param_1 + 2;
      do {
        plVar4 = plVar3;
        lVar7 = *plVar6;
        lVar5 = *plVar4;
        if (*(char *)(lVar5 + 0x44) == '\0') {
          plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar5 + 0x60) == 0) {
          plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
        }
        else {
          plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
        }
        if (*(char *)(lVar7 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar7 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar7 - *plVar6) >> 4) * 0x38e38e39) {
          lVar7 = lVar1;
          do {
            lVar8 = lVar7;
            *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0x10);
            if (lVar8 == -0x10) {
              plVar3 = param_1;
              goto LAB_02a01e70;
            }
            lVar9 = *(long *)((long)param_1 + lVar8 + 8);
            if (*(char *)(lVar5 + 0x44) == '\0') {
              plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar5 + 0x60) == 0) {
              plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
            }
            else {
              plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
            }
            if (*(char *)(lVar9 + 0x44) == '\0') {
              plVar6 = (long *)(*(long *)(lVar9 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar9 + 0x60) == 0) {
              plVar6 = (long *)(*(long *)(lVar9 + 0x30) + 0x88);
            }
            else {
              plVar6 = (long *)(*(long *)(lVar9 + 0x60) + 0x80);
            }
            lVar7 = lVar8 + -8;
          } while ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
                   (int)((ulong)(lVar9 - *plVar6) >> 4) * 0x38e38e39);
          plVar3 = (long *)((long)param_1 + lVar8 + 0x10);
LAB_02a01e70:
          iVar2 = iVar2 + 1;
          *plVar3 = lVar5;
          if (iVar2 == 8) {
            return plVar4 + 1 == param_2;
          }
        }
        lVar1 = lVar1 + 8;
        plVar3 = plVar4 + 1;
        plVar6 = plVar4;
      } while (plVar4 + 1 != param_2);
    }
  }
  return true;
}


