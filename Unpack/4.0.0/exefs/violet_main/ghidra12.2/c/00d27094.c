/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d27094; name: FUN_00d27094
 */


long * FUN_00d27094(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  ulong *local_50;
  long *local_48 [3];
  
  uVar5 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar5;
      plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar5 && (plVar2[1] & uVar4) != unaff_x22))
          goto LAB_00d27124;
        } while (plVar2[2] != uVar5);
        goto LAB_00d27184;
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
      plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_00d27124;
          uVar4 = plVar2[1];
          if (uVar4 != uVar5) {
            if (uVar6 <= uVar4) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar1 * uVar6;
            }
            if (uVar4 != unaff_x22) goto LAB_00d27124;
          }
        } while (plVar2[2] != uVar5);
        goto LAB_00d27184;
      }
    }
  }
LAB_00d27124:
  local_50 = param_2;
  FUN_029c2ee4(local_48,param_1,uVar5,&local_50);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar6 = param_1[1];
    if (uVar6 < uVar4) {
LAB_00d271f0:
      FUN_00d26d4c(param_1);
    }
    else if (uVar4 < uVar6) {
      uVar1 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar6 < 3) ||
         (uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
         uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333),
         1 < (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      if (uVar1 < uVar6) goto LAB_00d271f0;
    }
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
  plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar2;
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
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar2 = local_48[0];
LAB_00d27184:
  return plVar2 + 6;
}


