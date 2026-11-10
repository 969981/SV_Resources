/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156f824; name: FUN_0156f824
 */


long * FUN_0156f824(long *param_1,ulong param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      param_2 = uVar3 - 1 & param_2;
    }
    else if (uVar3 <= param_2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_2 / uVar3;
      }
      param_2 = param_2 - uVar1 * uVar3;
    }
    plVar2 = *(long **)(*param_1 + param_2 * 8);
    if (plVar2 != (long *)0x0) {
      if (uVar4 < 2) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 &&
               ((plVar2[1] & uVar3 - 1) == param_2))) {
          if (*(int *)(plVar2 + 2) == *param_3) {
            return plVar2;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar4 = plVar2[1];
          if (uVar3 <= uVar4) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar1 * uVar3;
          }
          if (uVar4 != param_2) break;
          if ((int)plVar2[2] == *param_3) {
            return plVar2;
          }
        }
      }
    }
  }
  if ((uVar3 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar3 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_0156f964(param_1,uVar4);
  }
  return (long *)0x0;
}


