/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029bb464; name: FUN_029bb464
 */


void FUN_029bb464(long *param_1,ulong *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)(*param_1 + 0x28);
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar6 = uVar2;
    }
    else {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar2 / uVar3;
      }
      uVar6 = uVar2 - uVar6 * uVar3;
    }
    plVar4 = *(long **)(*(long *)(*param_1 + 0x20) + uVar6 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == uVar2) {
            if (plVar4[2] == uVar2) goto LAB_029bb4f0;
          }
          else if ((plVar4[1] & uVar3 - 1) != uVar6) {
            return;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == uVar2) {
            if (plVar4[2] == uVar2) {
LAB_029bb4f0:
              if (*param_3 != 1) {
                param_3[2] = (int)((float)param_3[2] +
                                  *(float *)(param_1 + 1) *
                                  (*(float *)(plVar4 + 7) - (float)param_3[2]));
                return;
              }
              if (*(float *)(param_1 + 1) <= 0.5) {
                return;
              }
              param_3[2] = (int)plVar4[7];
              return;
            }
          }
          else {
            if (uVar3 <= uVar5) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar5 / uVar3;
              }
              uVar5 = uVar5 - uVar1 * uVar3;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


