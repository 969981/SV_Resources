/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344aa8c; name: FUN_0344aa8c
 */


void FUN_0344aa8c(long param_1,int param_2,long param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (DAT_048afc28 != 0) {
    plVar8 = (long *)(param_1 + 8);
    plVar9 = (long *)*plVar8;
    if (plVar9 != (long *)0x0) {
      if (param_2 == 0) {
        if (param_3 == -1) {
          do {
            plVar10 = (long *)plVar9[1];
            if ((param_4 == 0) || (*(int *)((long)plVar9 + 0x2c) == param_4)) {
              FUN_0344bd98(param_1,plVar9);
              plVar5 = *(long **)(param_1 + 8);
              plVar6 = (long *)0x0;
              plVar7 = plVar5;
              if ((plVar5 != (long *)0x0) && (plVar9 != plVar5)) {
                do {
                  plVar6 = plVar7;
                  plVar7 = (long *)plVar6[1];
                } while (plVar7 != (long *)0x0 && plVar9 != plVar7);
              }
              if (plVar7 != (long *)0x0) {
                plVar1 = plVar8;
                if (plVar7 != plVar5) {
                  plVar1 = plVar6 + 1;
                }
                *plVar1 = plVar7[1];
              }
              (**(code **)(*plVar9 + 0x40))(plVar9);
              iVar2 = *(int *)((long)plVar9 + 0x4c) + -1;
              *(int *)((long)plVar9 + 0x4c) = iVar2;
              if (iVar2 == 0) {
                (**(code **)*plVar9)(plVar9);
                (**(code **)(puVar3 + 0x30))(0,plVar9);
              }
            }
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            plVar10 = (long *)plVar9[1];
            if (plVar9[2] == 0) {
              lVar4 = -1;
            }
            else {
              lVar4 = *(long *)(plVar9[2] + 0x78);
            }
            if ((lVar4 == param_3) && ((param_4 == 0 || (*(int *)((long)plVar9 + 0x2c) == param_4)))
               ) {
              FUN_0344bd98(param_1,plVar9);
              plVar5 = *(long **)(param_1 + 8);
              plVar6 = (long *)0x0;
              plVar7 = plVar5;
              if ((plVar5 != (long *)0x0) && (plVar9 != plVar5)) {
                do {
                  plVar6 = plVar7;
                  plVar7 = (long *)plVar6[1];
                } while (plVar7 != (long *)0x0 && plVar9 != plVar7);
              }
              if (plVar7 != (long *)0x0) {
                plVar1 = plVar8;
                if (plVar7 != plVar5) {
                  plVar1 = plVar6 + 1;
                }
                *plVar1 = plVar7[1];
              }
              (**(code **)(*plVar9 + 0x40))(plVar9);
              iVar2 = *(int *)((long)plVar9 + 0x4c) + -1;
              *(int *)((long)plVar9 + 0x4c) = iVar2;
              if (iVar2 == 0) {
                (**(code **)*plVar9)(plVar9);
                (**(code **)(puVar3 + 0x30))(0,plVar9);
              }
            }
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      else if (param_3 == -1) {
        do {
          plVar10 = (long *)plVar9[1];
          if ((*(int *)((long)plVar9 + 0x3c) == param_2) &&
             ((param_4 == 0 || (*(int *)((long)plVar9 + 0x2c) == param_4)))) {
            FUN_0344bd98(param_1,plVar9);
            plVar5 = *(long **)(param_1 + 8);
            plVar6 = (long *)0x0;
            plVar7 = plVar5;
            if ((plVar5 != (long *)0x0) && (plVar9 != plVar5)) {
              do {
                plVar6 = plVar7;
                plVar7 = (long *)plVar6[1];
              } while (plVar7 != (long *)0x0 && plVar9 != plVar7);
            }
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar8;
              if (plVar7 != plVar5) {
                plVar1 = plVar6 + 1;
              }
              *plVar1 = plVar7[1];
            }
            (**(code **)(*plVar9 + 0x40))(plVar9);
            iVar2 = *(int *)((long)plVar9 + 0x4c) + -1;
            *(int *)((long)plVar9 + 0x4c) = iVar2;
            if (iVar2 == 0) {
              (**(code **)*plVar9)(plVar9);
              (**(code **)(puVar3 + 0x30))(0,plVar9);
            }
          }
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          plVar10 = (long *)plVar9[1];
          if (*(int *)((long)plVar9 + 0x3c) == param_2) {
            if (plVar9[2] == 0) {
              lVar4 = -1;
            }
            else {
              lVar4 = *(long *)(plVar9[2] + 0x78);
            }
            if ((lVar4 == param_3) && ((param_4 == 0 || (*(int *)((long)plVar9 + 0x2c) == param_4)))
               ) {
              FUN_0344bd98(param_1,plVar9);
              plVar5 = *(long **)(param_1 + 8);
              plVar6 = (long *)0x0;
              plVar7 = plVar5;
              if ((plVar5 != (long *)0x0) && (plVar9 != plVar5)) {
                do {
                  plVar6 = plVar7;
                  plVar7 = (long *)plVar6[1];
                } while (plVar7 != (long *)0x0 && plVar9 != plVar7);
              }
              if (plVar7 != (long *)0x0) {
                plVar1 = plVar8;
                if (plVar7 != plVar5) {
                  plVar1 = plVar6 + 1;
                }
                *plVar1 = plVar7[1];
              }
              (**(code **)(*plVar9 + 0x40))(plVar9);
              iVar2 = *(int *)((long)plVar9 + 0x4c) + -1;
              *(int *)((long)plVar9 + 0x4c) = iVar2;
              if (iVar2 == 0) {
                (**(code **)*plVar9)(plVar9);
                (**(code **)(puVar3 + 0x30))(0,plVar9);
              }
            }
          }
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


