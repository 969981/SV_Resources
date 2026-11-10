/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fab268; name: FUN_00fab268
 */


undefined8 FUN_00fab268(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar3 = param_2[2];
  param_2[1] = uVar3;
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      plVar5 = *(long **)(*param_1 + (uVar4 & uVar3) * 8);
      if (plVar5 != (long *)0x0) {
        while ((plVar5 = (long *)*plVar5, plVar5 != (long *)0x0 &&
               ((plVar5[1] & uVar4) == (uVar4 & uVar3)))) {
          if (plVar5[2] == uVar3) {
            return 0;
          }
        }
      }
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
      plVar5 = *(long **)(*param_1 + uVar4 * 8);
      if (plVar5 != (long *)0x0) {
        while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
          uVar6 = plVar5[1];
          if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) break;
          if (plVar5[2] == uVar3) {
            return 0;
          }
        }
      }
    }
  }
  if ((uVar2 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar2 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar2 < 3 || (uVar2 & uVar2 - 1) != 0) | uVar2 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
      uVar2 = param_1[1];
    }
    if (uVar2 < uVar4) {
LAB_00fab470:
      FUN_00fac180(param_1);
    }
    else if (uVar4 < uVar2) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar2 < 3) ||
         (uVar6 = uVar2 - (uVar2 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      if (uVar3 < uVar2) goto LAB_00fab470;
    }
    uVar2 = param_1[1];
    uVar3 = param_2[1];
  }
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar3 = uVar2 - 1 & uVar3;
  }
  else if (uVar2 <= uVar3) {
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar3 / uVar2;
    }
    uVar3 = uVar3 - uVar6 * uVar2;
  }
  plVar5 = *(long **)(*param_1 + uVar3 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar3 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_00fab3fc;
    uVar3 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar3 = uVar3 & uVar2 - 1;
    }
    else if (uVar2 <= uVar3) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar3 = uVar3 - uVar4 * uVar2;
    }
    plVar5 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *param_2 = *plVar5;
  }
  *plVar5 = (long)param_2;
LAB_00fab3fc:
  param_1[0xb] = param_1[0xb] + 1;
  return 1;
}


