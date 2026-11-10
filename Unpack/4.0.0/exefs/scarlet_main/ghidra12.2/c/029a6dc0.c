/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a6dc0; name: FUN_029a6dc0
 */


bool FUN_029a6dc0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 8) < *(int *)(param_2[-1] + 8)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar2;
      return true;
    }
    break;
  case 3:
    FUN_0160d060(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_029a6c30(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_029a6ce0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_0160d060(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar2 = 0;
      iVar3 = 0;
      plVar7 = param_1 + 3;
      plVar8 = param_1 + 2;
      do {
        plVar4 = plVar7;
        lVar5 = *plVar4;
        if (*(int *)(*plVar8 + 8) < *(int *)(lVar5 + 8)) {
          lVar1 = lVar2;
          do {
            lVar6 = lVar1;
            *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar6 + 0x10);
            if (lVar6 == -0x10) {
              plVar7 = param_1;
              goto LAB_029a6eb0;
            }
            lVar1 = lVar6 + -8;
          } while (*(int *)(*(long *)((long)param_1 + lVar6 + 8) + 8) < *(int *)(lVar5 + 8));
          plVar7 = (long *)((long)param_1 + lVar6 + 0x10);
LAB_029a6eb0:
          iVar3 = iVar3 + 1;
          *plVar7 = lVar5;
          if (iVar3 == 8) {
            return plVar4 + 1 == param_2;
          }
        }
        lVar2 = lVar2 + 8;
        plVar7 = plVar4 + 1;
        plVar8 = plVar4;
      } while (plVar4 + 1 != param_2);
    }
  }
  return true;
}


