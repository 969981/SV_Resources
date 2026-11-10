/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b0fdc; name: FUN_021b0fdc
 */


void FUN_021b0fdc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar4 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - 1;
    if ((uVar5 & uVar2) == 0) {
      unaff_x22 = uVar2 & uVar4;
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               (plVar3[1] == uVar4 || (plVar3[1] & uVar2) == unaff_x22))) {
          if (plVar3[2] == uVar4) {
            return;
          }
        }
      }
    }
    else {
      unaff_x22 = uVar4;
      if (uVar5 <= uVar4) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar4 / uVar5;
        }
        unaff_x22 = uVar4 - uVar2 * uVar5;
      }
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if (uVar2 != uVar4) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x22) break;
          }
          if (plVar3[2] == uVar4) {
            return;
          }
        }
      }
    }
  }
  FUN_021b11e0(local_48,param_1,uVar4,param_2);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_00ec26b8(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x22 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      unaff_x22 = uVar4;
    }
    else {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar4 / uVar5;
      }
      unaff_x22 = uVar4 - uVar2 * uVar5;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_48[0] != 0) {
      uVar4 = *(ulong *)(*local_48[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar4 = uVar4 & uVar5 - 1;
      }
      else if (uVar5 <= uVar4) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar2 * uVar5;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


