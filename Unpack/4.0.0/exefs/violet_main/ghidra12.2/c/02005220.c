/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02005220; name: FUN_02005220
 */


void FUN_02005220(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar6 = param_2[1];
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x22 = uVar7 - 1 & uVar6;
    }
    else {
      unaff_x22 = uVar6;
      if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        unaff_x22 = uVar6 - uVar3 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (*param_2 != 0) {
        plVar1 = (long *)(*param_2 + 0x30);
      }
      if (uVar4 < 2) {
        while ((plVar5 = (long *)*plVar5, plVar5 != (long *)0x0 &&
               (plVar5[1] == uVar6 || (plVar5[1] & uVar7 - 1) == unaff_x22))) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar5[2] != 0) {
            plVar2 = (long *)(plVar5[2] + 0x30);
          }
          if (*plVar2 == *plVar1) {
            return;
          }
        }
      }
      else {
        while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
          uVar4 = plVar5[1];
          if (uVar4 != uVar6) {
            if (uVar7 <= uVar4) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar3 * uVar7;
            }
            if (uVar4 != unaff_x22) break;
          }
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar5[2] != 0) {
            plVar2 = (long *)(plVar5[2] + 0x30);
          }
          if (*plVar2 == *plVar1) {
            return;
          }
        }
      }
    }
  }
  FUN_02005d24(local_48,param_1,uVar6);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    FUN_02005dac(param_1,uVar4);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x22 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      unaff_x22 = uVar6;
    }
    else {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar6 / uVar7;
      }
      unaff_x22 = uVar6 - uVar4 * uVar7;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *local_48[0] = *plVar5;
    *plVar5 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar5;
    if (*local_48[0] != 0) {
      uVar6 = *(ulong *)(*local_48[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar4 * uVar7;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar5;
    *plVar5 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


