/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034852b4; name: FUN_034852b4
 */


void FUN_034852b4(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  switch(*param_2) {
  case 0:
  case 3:
    FUN_03485478(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  case 1:
    plVar2 = *(long **)(param_1 + 0x130);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            *(undefined4 *)(plVar2 + 10) = 1;
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if (*(int *)((long)plVar2 + 0x4c) == iVar1) {
              *(undefined4 *)(plVar2 + 10) = 1;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if (plVar2[1] == lVar3) {
            *(undefined4 *)(plVar2 + 10) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[1] == lVar3) && (*(int *)((long)plVar2 + 0x4c) == iVar1)) {
            *(undefined4 *)(plVar2 + 10) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    break;
  case 2:
    plVar2 = *(long **)(param_1 + 0x130);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            *(undefined4 *)(plVar2 + 10) = 0;
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if (*(int *)((long)plVar2 + 0x4c) == iVar1) {
              *(undefined4 *)(plVar2 + 10) = 0;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if (plVar2[1] == lVar3) {
            *(undefined4 *)(plVar2 + 10) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[1] == lVar3) && (*(int *)((long)plVar2 + 0x4c) == iVar1)) {
            *(undefined4 *)(plVar2 + 10) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


