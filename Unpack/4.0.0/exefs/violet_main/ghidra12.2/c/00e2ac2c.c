/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e2ac2c; name: FUN_00e2ac2c
 */


void FUN_00e2ac2c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  long *local_48 [3];
  
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)(*(short *)(*param_2 + 0x1a) != 0);
  }
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x22 = (int)uVar5 + 1 & uVar4;
    }
    else {
      unaff_x22 = uVar4;
      if (uVar5 <= uVar4) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar4 / uVar5;
        }
        unaff_x22 = uVar4 - uVar1 * uVar5;
      }
    }
    plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar2 != (long *)0x0) {
      if (uVar3 < 2) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 &&
               (plVar2[1] == uVar4 || (plVar2[1] & uVar5 - 1) == unaff_x22))) {
          if (plVar2[2] == *param_2) {
            return;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar3 = plVar2[1];
          if (uVar3 != uVar4) {
            if (uVar5 <= uVar3) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar3 / uVar5;
              }
              uVar3 = uVar3 - uVar1 * uVar5;
            }
            if (uVar3 != unaff_x22) break;
          }
          if (plVar2[2] == *param_2) {
            return;
          }
        }
      }
    }
  }
  FUN_00e2ae7c(local_48,param_1,uVar4);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_00e2b000(param_1,uVar3);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x22 = (int)uVar5 + 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      unaff_x22 = uVar4;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar4 / uVar5;
      }
      unaff_x22 = uVar4 - uVar3 * uVar5;
    }
  }
  plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar2;
    if (*local_48[0] != 0) {
      uVar4 = *(ulong *)(*local_48[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar4 = uVar4 & uVar5 - 1;
      }
      else if (uVar5 <= uVar4) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar3 * uVar5;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


