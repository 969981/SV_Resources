/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019be1c4; name: FUN_019be1c4
 */


long * FUN_019be1c4(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
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
      plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar5 && (plVar4[1] & uVar6 - 1) != unaff_x22)) goto LAB_019be1ec;
        } while (*(uint *)(plVar4 + 2) != uVar1);
        goto LAB_019be2ac;
      }
    }
    else {
      unaff_x22 = uVar5;
      if (uVar6 <= uVar5) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        unaff_x22 = uVar5 - uVar3 * uVar6;
      }
      plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_019be1ec;
          uVar3 = plVar4[1];
          if (uVar3 != uVar5) {
            if (uVar6 <= uVar3) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar3 / uVar6;
              }
              uVar3 = uVar3 - uVar2 * uVar6;
            }
            if (uVar3 != unaff_x22) goto LAB_019be1ec;
          }
        } while (*(uint *)(plVar4 + 2) != uVar1);
        goto LAB_019be2ac;
      }
    }
  }
LAB_019be1ec:
  local_50 = param_2;
  FUN_019be3d0(local_48,param_1,uVar5,&local_50);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    FUN_019be548(param_1,uVar3);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = (ulong)((int)uVar6 - 1U & uVar1);
    }
    else if (uVar5 < uVar6) {
      unaff_x22 = uVar5;
    }
    else {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar5 / uVar6;
      }
      unaff_x22 = uVar5 - uVar3 * uVar6;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar4;
    if (*local_48[0] != 0) {
      uVar5 = *(ulong *)(*local_48[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar5 = uVar5 & uVar6 - 1;
      }
      else if (uVar6 <= uVar5) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar3 * uVar6;
      }
      *(long **)(*param_1 + uVar5 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar4 = local_48[0];
LAB_019be2ac:
  return plVar4 + 3;
}


