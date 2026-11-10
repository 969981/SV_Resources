/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f38594; name: FUN_00f38594
 */


long * FUN_00f38594(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  long *local_38 [3];
  ulong *local_8;
  
  uVar3 = *param_2;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
    if ((uVar4 & uVar5) == 0) {
      local_48 = uVar5 & uVar3;
      plVar2 = *(long **)(*param_1 + local_48 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar3 && (plVar2[1] & uVar5) != local_48))
          goto LAB_00f38628;
        } while (plVar2[2] != uVar3);
        goto LAB_00f38738;
      }
    }
    else {
      local_48 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        local_48 = uVar3 - uVar5 * uVar4;
      }
      plVar2 = *(long **)(*param_1 + local_48 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_00f38628;
          uVar5 = plVar2[1];
          if (uVar5 != uVar3) {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != local_48) goto LAB_00f38628;
          }
        } while (plVar2[2] != uVar3);
        goto LAB_00f38738;
      }
    }
  }
LAB_00f38628:
  local_8 = param_2;
  FUN_00f387d0(local_38,param_1,uVar3,&local_8);
  if ((uVar4 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar4 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    FUN_0130fdd0(param_1,uVar5);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar3 = uVar4 - 1 & uVar3;
    }
    else if (uVar4 <= uVar3) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar5 * uVar4;
    }
    local_48 = uVar3;
  }
  plVar2 = *(long **)(*param_1 + local_48 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
    *(long **)(*param_1 + local_48 * 8) = plVar2;
    if (*local_38[0] != 0) {
      uVar3 = *(ulong *)(*local_38[0] + 8);
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar3 = uVar3 & uVar4 - 1;
      }
      else if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        uVar3 = uVar3 - uVar5 * uVar4;
      }
      *(long **)(*param_1 + uVar3 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar2 = local_38[0];
LAB_00f38738:
  return plVar2 + 6;
}


