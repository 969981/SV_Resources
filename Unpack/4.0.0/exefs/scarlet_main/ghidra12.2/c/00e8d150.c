/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8d150; name: FUN_00e8d150
 */


long * FUN_00e8d150(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      param_2 = uVar5 - 1 & param_2;
    }
    else if (uVar5 <= param_2) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = param_2 / uVar5;
      }
      param_2 = param_2 - uVar3 * uVar5;
    }
    plVar4 = *(long **)(*param_1 + param_2 * 8);
    if (plVar4 != (long *)0x0) {
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (*param_3 != 0) {
        plVar1 = (long *)(*param_3 + 0x30);
      }
      if (uVar6 < 2) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               ((plVar4[1] & uVar5 - 1) == param_2))) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar4[2] != 0) {
            plVar2 = (long *)(plVar4[2] + 0x30);
          }
          if (*plVar2 == *plVar1) {
            return plVar4;
          }
        }
      }
      else {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar6 = plVar4[1];
          if (uVar5 <= uVar6) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar3 * uVar5;
          }
          if (uVar6 != param_2) break;
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar4[2] != 0) {
            plVar2 = (long *)(plVar4[2] + 0x30);
          }
          if (*plVar2 == *plVar1) {
            return plVar4;
          }
        }
      }
    }
  }
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_00e8d2cc(param_1,uVar6);
  }
  return (long *)0x0;
}


