/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192d7f4; name: FUN_0192d7f4
 */


void FUN_0192d7f4(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x40) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) {
LAB_0192d888:
              if (**(char **)(param_1 + 0x158) != '\0') {
                return;
              }
              *(ulong *)(param_1 + 0x150) = uVar3;
              *(ulong *)(param_1 + 0x158) = param_2[1];
              *(ulong *)(param_1 + 0x160) = param_2[2];
              plVar7 = (long *)param_2[3];
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x18))(plVar7);
              }
              plVar2 = *(long **)(param_1 + 0x168);
              *(long **)(param_1 + 0x168) = plVar7;
              if (plVar2 == (long *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x0192d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x20))();
              return;
            }
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_0192d888;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


