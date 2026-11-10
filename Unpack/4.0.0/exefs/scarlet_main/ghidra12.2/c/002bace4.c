/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bace4; name: FUN_002bace4
 */


void FUN_002bace4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = *(long **)(param_1 + 0x98);
  if (plVar4 != (long *)0x0) {
    uVar1 = param_2;
    if (4 < param_2) {
      uVar1 = FUN_00350fb0(param_2,param_2);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar1);
  }
  plVar6 = *(long **)(param_1 + 0x108);
  plVar4 = (long *)(param_1 + 0x110);
  if (plVar6 != plVar4) {
    if (param_2 < 5) {
      do {
        plVar7 = (long *)plVar6[7];
        while (plVar7 != plVar6 + 8) {
          (**(code **)(*(long *)plVar7[4] + 0x18))((long *)plVar7[4],param_2);
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar5 = plVar7 + 2;
            if (*(long **)*plVar5 == plVar7) {
              plVar7 = (long *)*plVar5;
            }
            else {
              do {
                lVar3 = *plVar5;
                plVar5 = (long *)(lVar3 + 0x10);
                plVar7 = (long *)*plVar5;
              } while (*plVar7 != lVar3);
            }
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 2;
          plVar5 = (long *)*plVar7;
          if ((long *)*plVar5 != plVar6) {
            do {
              lVar3 = *plVar7;
              plVar7 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar7;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar7;
            plVar7 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
    else {
      do {
        plVar7 = (long *)plVar6[7];
        while (plVar7 != plVar6 + 8) {
          plVar5 = (long *)plVar7[4];
          uVar2 = FUN_00350fb0(param_2);
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar2);
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar5 = plVar7 + 2;
            if (*(long **)*plVar5 == plVar7) {
              plVar7 = (long *)*plVar5;
            }
            else {
              do {
                lVar3 = *plVar5;
                plVar5 = (long *)(lVar3 + 0x10);
                plVar7 = (long *)*plVar5;
              } while (*plVar7 != lVar3);
            }
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 2;
          plVar5 = (long *)*plVar7;
          if ((long *)*plVar5 != plVar6) {
            do {
              lVar3 = *plVar7;
              plVar7 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar7;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar7;
            plVar7 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
  }
  plVar6 = *(long **)(param_1 + 0x120);
  plVar4 = (long *)(param_1 + 0x128);
  if (plVar6 != plVar4) {
    if (param_2 < 5) {
      do {
        plVar7 = (long *)plVar6[7];
        while (plVar7 != plVar6 + 8) {
          (**(code **)(*(long *)plVar7[4] + 0x18))((long *)plVar7[4],param_2);
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar5 = plVar7 + 2;
            if (*(long **)*plVar5 == plVar7) {
              plVar7 = (long *)*plVar5;
            }
            else {
              do {
                lVar3 = *plVar5;
                plVar5 = (long *)(lVar3 + 0x10);
                plVar7 = (long *)*plVar5;
              } while (*plVar7 != lVar3);
            }
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 2;
          plVar5 = (long *)*plVar7;
          if ((long *)*plVar5 != plVar6) {
            do {
              lVar3 = *plVar7;
              plVar7 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar7;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar7;
            plVar7 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
    else {
      do {
        plVar7 = (long *)plVar6[7];
        while (plVar7 != plVar6 + 8) {
          plVar5 = (long *)plVar7[4];
          uVar2 = FUN_00350fb0(param_2);
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar2);
          plVar5 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            plVar5 = plVar7 + 2;
            if (*(long **)*plVar5 == plVar7) {
              plVar7 = (long *)*plVar5;
            }
            else {
              do {
                lVar3 = *plVar5;
                plVar5 = (long *)(lVar3 + 0x10);
                plVar7 = (long *)*plVar5;
              } while (*plVar7 != lVar3);
            }
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 2;
          plVar5 = (long *)*plVar7;
          if ((long *)*plVar5 != plVar6) {
            do {
              lVar3 = *plVar7;
              plVar7 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar7;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar7;
            plVar7 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar4);
    }
  }
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


