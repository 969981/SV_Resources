/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011cb3ac; name: FUN_011cb3ac
 */


long * FUN_011cb3ac(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  long *plVar6;
  long *local_58 [3];
  ulong *local_28;
  
  uVar4 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - 1;
    if ((uVar5 & uVar2) == 0) {
      unaff_x22 = uVar2 & uVar4;
      plVar6 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar4 && (plVar6[1] & uVar2) != unaff_x22))
          goto LAB_011cb498;
        } while (plVar6[2] != uVar4);
        goto LAB_011cb47c;
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
      plVar6 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_011cb498;
          uVar2 = plVar6[1];
          if (uVar2 != uVar4) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x22) goto LAB_011cb498;
          }
        } while (plVar6[2] != uVar4);
        goto LAB_011cb47c;
      }
    }
  }
LAB_011cb498:
  local_28 = param_2;
  FUN_011cccf4(local_58,param_1,uVar4,&local_28);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_011cc8a8(param_1,uVar2);
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
  plVar6 = local_58[0];
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_58[0] != 0) {
      uVar4 = *(ulong *)(*local_58[0] + 8);
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
      *(long **)(*param_1 + uVar4 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
  }
  local_58[0] = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_01430c10(local_58);
LAB_011cb47c:
  return plVar6 + 6;
}


