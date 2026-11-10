/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bfdf0; name: FUN_028bfdf0
 */


bool FUN_028bfdf0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    plVar4 = (long *)0x0;
    if (param_2[-1] != 0) {
      plVar4 = (long *)(param_2[-1] + -0x18);
    }
    lVar7 = *param_1;
    uVar1 = (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)0x0;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + -0x18);
    }
    uVar2 = (**(code **)(*plVar4 + 0x40))();
    if (uVar1 < uVar2) {
      lVar7 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = lVar7;
    }
    break;
  case 3:
    FUN_00dbe2e0(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_00dbe4a0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00dbe600(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_00dbe2e0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      plVar4 = param_1 + 3;
      plVar5 = param_1 + 2;
      do {
        plVar3 = plVar4;
        lVar6 = *plVar5;
        plVar4 = (long *)0x0;
        if (*plVar3 != 0) {
          plVar4 = (long *)(*plVar3 + -0x18);
        }
        uVar1 = (**(code **)(*plVar4 + 0x40))();
        plVar4 = (long *)0x0;
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + -0x18);
        }
        uVar2 = (**(code **)(*plVar4 + 0x40))();
        if (uVar1 < uVar2) {
          lVar6 = *plVar3;
          plVar4 = (long *)0x0;
          if (lVar6 != 0) {
            plVar4 = (long *)(lVar6 + -0x18);
          }
          lVar10 = lVar7;
          do {
            lVar9 = lVar10;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            if (lVar9 == -0x10) {
              plVar4 = param_1;
              goto LAB_028bff88;
            }
            lVar10 = *(long *)((long)param_1 + lVar9 + 8);
            uVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
            plVar5 = (long *)0x0;
            if (lVar10 != 0) {
              plVar5 = (long *)(lVar10 + -0x18);
            }
            uVar2 = (**(code **)(*plVar5 + 0x40))();
            lVar10 = lVar9 + -8;
          } while (uVar1 < uVar2);
          plVar4 = (long *)((long)param_1 + lVar9 + 0x10);
LAB_028bff88:
          iVar8 = iVar8 + 1;
          *plVar4 = lVar6;
          if (iVar8 == 8) {
            return plVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        plVar4 = plVar3 + 1;
        plVar5 = plVar3;
      } while (plVar3 + 1 != param_2);
    }
  }
  return true;
}


