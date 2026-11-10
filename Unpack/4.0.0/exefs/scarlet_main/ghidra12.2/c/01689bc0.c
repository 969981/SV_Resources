/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01689bc0; name: FUN_01689bc0
 */


long FUN_01689bc0(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  uint *local_50;
  long *local_48 [3];
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = (ulong)((int)uVar6 - 1U & uVar1);
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) ||
             (plVar3[1] != uVar5 && (plVar3[1] & uVar6 - 1) != unaff_x22)) goto LAB_01689c18;
        } while (*(uint *)(plVar3 + 2) != uVar1);
        goto LAB_01689cb4;
      }
    }
    else {
      unaff_x22 = uVar5;
      if (uVar6 <= uVar5) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar5 / uVar6;
        }
        unaff_x22 = uVar5 - uVar4 * uVar6;
      }
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_01689c18;
          uVar4 = plVar3[1];
          if (uVar4 != uVar5) {
            if (uVar6 <= uVar4) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar2 * uVar6;
            }
            if (uVar4 != unaff_x22) goto LAB_01689c18;
          }
        } while (*(uint *)(plVar3 + 2) != uVar1);
        goto LAB_01689cb4;
      }
    }
  }
LAB_01689c18:
  local_50 = param_2;
  FUN_01689dd4(local_48,param_1,uVar5,&local_50);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_01689eec(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = (ulong)((int)uVar6 - 1U & uVar1);
    }
    else if (uVar5 < uVar6) {
      unaff_x22 = uVar5;
    }
    else {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar5 / uVar6;
      }
      unaff_x22 = uVar5 - uVar4 * uVar6;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_48[0] != 0) {
      uVar5 = *(ulong *)(*local_48[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar5 = uVar5 & uVar6 - 1;
      }
      else if (uVar6 <= uVar5) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar4 * uVar6;
      }
      *(long **)(*param_1 + uVar5 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar3 = local_48[0];
LAB_01689cb4:
  return (long)plVar3 + 0x14;
}


