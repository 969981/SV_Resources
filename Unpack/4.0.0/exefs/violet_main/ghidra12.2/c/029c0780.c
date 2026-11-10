/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c0780; name: FUN_029c0780
 */


void FUN_029c0780(long *param_1,ulong param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = ((long *)*param_1)[1];
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & param_2;
    }
    else if (param_2 < uVar2) {
      uVar5 = param_2;
    }
    else {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = param_2 / uVar2;
      }
      uVar5 = param_2 - uVar5 * uVar2;
    }
    plVar3 = *(long **)(*(long *)*param_1 + uVar5 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar3[1] == param_2) {
            if (plVar3[2] == param_2) goto LAB_029c0874;
          }
          else if ((plVar3[1] & uVar2 - 1) != uVar5) {
            return;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar3[1];
          if (uVar4 == param_2) {
            if (plVar3[2] == param_2) {
LAB_029c0874:
              if (*param_3 != 1) {
                param_3[2] = (int)((float)param_3[2] +
                                  *(float *)(param_1 + 1) *
                                  (*(float *)(plVar3 + 4) - (float)param_3[2]));
                return;
              }
              if (*(float *)(param_1 + 1) <= 0.5) {
                return;
              }
              param_3[2] = (int)plVar3[4];
              return;
            }
          }
          else {
            if (uVar2 <= uVar4) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar4 / uVar2;
              }
              uVar4 = uVar4 - uVar1 * uVar2;
            }
            if (uVar4 != uVar5) {
              return;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return;
}


