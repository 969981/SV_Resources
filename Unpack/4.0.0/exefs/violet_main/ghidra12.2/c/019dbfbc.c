/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019dbfbc; name: FUN_019dbfbc
 */


long * FUN_019dbfbc(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  int *local_50;
  long *local_48 [3];
  
  iVar1 = *param_2;
  uVar5 = (ulong)iVar1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar5;
      plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) || (plVar3[1] != uVar5 && (plVar3[1] & uVar4) != unaff_x22))
          goto LAB_019dc088;
        } while ((int)plVar3[2] != iVar1);
        goto LAB_019dc028;
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
          if (plVar3 == (long *)0x0) goto LAB_019dc088;
          uVar4 = plVar3[1];
          if (uVar4 != uVar5) {
            if (uVar6 <= uVar4) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar2 * uVar6;
            }
            if (uVar4 != unaff_x22) goto LAB_019dc088;
          }
        } while ((int)plVar3[2] != iVar1);
        goto LAB_019dc028;
      }
    }
  }
LAB_019dc088:
  local_50 = param_2;
  FUN_019dc1d0(local_48,param_1,uVar5,&local_50);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_00ff0ac8(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = uVar6 - 1 & uVar5;
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
LAB_019dc028:
  return plVar3 + 3;
}


