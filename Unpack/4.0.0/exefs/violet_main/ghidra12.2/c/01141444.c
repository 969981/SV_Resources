/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01141444; name: FUN_01141444
 */


long * FUN_01141444(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x21;
  long *local_48 [3];
  long *local_18;
  
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)(*(short *)(*param_2 + 0x1a) != 0);
  }
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x21 = (int)uVar5 + 1 & uVar4;
    }
    else {
      unaff_x21 = uVar4;
      if (uVar5 <= uVar4) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar4 / uVar5;
        }
        unaff_x21 = uVar4 - uVar1 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar3 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) ||
             (plVar3[1] != uVar4 && (plVar3[1] & uVar5 - 1) != unaff_x21)) goto LAB_01141560;
        } while (plVar3[2] != *param_2);
      }
      else {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_01141560;
          uVar2 = plVar3[1];
          if (uVar2 != uVar4) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x21) goto LAB_01141560;
          }
        } while (plVar3[2] != *param_2);
      }
      goto LAB_01141504;
    }
  }
LAB_01141560:
  local_18 = param_2;
  FUN_011426d0(local_48,param_1,uVar4,&local_18);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_01141c2c(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x21 = (int)uVar5 + 1 & uVar4;
    }
    else {
      unaff_x21 = uVar4;
      if (uVar5 <= uVar4) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar4 / uVar5;
        }
        unaff_x21 = uVar4 - uVar2 * uVar5;
      }
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x21 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x21 * 8) = plVar3;
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
  plVar3 = local_48[0];
LAB_01141504:
  return plVar3 + 4;
}


