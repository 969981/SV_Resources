/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f4da4; name: FUN_014f4da4
 */


long * FUN_014f4da4(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  long *plVar7;
  long *local_58 [3];
  uint *local_28;
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = (ulong)((int)uVar6 - 1U & uVar1);
      plVar7 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar5 && (plVar7[1] & uVar6 - 1) != unaff_x22)) goto LAB_014f4e78;
        } while (*(uint *)(plVar7 + 2) != uVar1);
        goto LAB_014f4e18;
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
      plVar7 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_014f4e78;
          uVar4 = plVar7[1];
          if (uVar4 != uVar5) {
            if (uVar6 <= uVar4) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar2 * uVar6;
            }
            if (uVar4 != unaff_x22) goto LAB_014f4e78;
          }
        } while (*(uint *)(plVar7 + 2) != uVar1);
        goto LAB_014f4e18;
      }
    }
  }
LAB_014f4e78:
  local_28 = param_2;
  FUN_014f5240(local_58,param_1,uVar5,&local_28);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_01826100(param_1,uVar4);
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
  plVar7 = local_58[0];
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_58[0] != 0) {
      uVar5 = *(ulong *)(*local_58[0] + 8);
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
      *(long **)(*param_1 + uVar5 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
  }
  local_58[0] = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_014f4fc8(local_58);
LAB_014f4e18:
  return plVar7 + 3;
}


