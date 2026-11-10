/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e1414; name: FUN_034e1414
 */


void FUN_034e1414(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  switch(*param_2) {
  case 0:
  case 3:
    FUN_034e1628(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  case 1:
    plVar2 = *(long **)(param_1 + 0x1a8);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            if ((int)plVar2[0xe] != 1) {
              *(undefined4 *)(plVar2 + 0xe) = 1;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if ((*(int *)((long)plVar2 + 0x1c) == iVar1) && ((int)plVar2[0xe] != 1)) {
              *(undefined4 *)(plVar2 + 0xe) = 1;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if ((plVar2[4] == lVar3) && ((int)plVar2[0xe] != 1)) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if (((plVar2[4] == lVar3) && (*(int *)((long)plVar2 + 0x1c) == iVar1)) &&
             ((int)plVar2[0xe] != 1)) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    break;
  case 2:
    plVar2 = *(long **)(param_1 + 0x1a8);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      iVar1 = param_2[4];
      if (lVar3 == 0) {
        if (iVar1 == 0) {
          do {
            if ((int)plVar2[0xe] != 0) {
              *(undefined4 *)(plVar2 + 0xe) = 0;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
        else {
          do {
            if ((*(int *)((long)plVar2 + 0x1c) == iVar1) && ((int)plVar2[0xe] != 0)) {
              *(undefined4 *)(plVar2 + 0xe) = 0;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)0x0);
        }
      }
      else if (iVar1 == 0) {
        do {
          if ((plVar2[4] == lVar3) && ((int)plVar2[0xe] != 0)) {
            *(undefined4 *)(plVar2 + 0xe) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if (((plVar2[4] == lVar3) && (*(int *)((long)plVar2 + 0x1c) == iVar1)) &&
             ((int)plVar2[0xe] != 0)) {
            *(undefined4 *)(plVar2 + 0xe) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


