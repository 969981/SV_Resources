/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf9090; name: FUN_00bf9090
 */


undefined8 FUN_00bf9090(long *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar8;
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar6 != (long *)0x0) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar8 || (plVar6[1] & uVar3) == unaff_x24))) {
          if (plVar6[2] == uVar8) {
            return 0;
          }
        }
      }
    }
    else {
      unaff_x24 = uVar8;
      if (uVar9 <= uVar8) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar8 / uVar9;
        }
        unaff_x24 = uVar8 - uVar3 * uVar9;
      }
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar6 != (long *)0x0) {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar3 = plVar6[1];
          if (uVar3 != uVar8) {
            if (uVar9 <= uVar3) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar3 / uVar9;
              }
              uVar3 = uVar3 - uVar2 * uVar9;
            }
            if (uVar3 != unaff_x24) break;
          }
          if (plVar6[2] == uVar8) {
            return 0;
          }
        }
      }
    }
  }
  lVar7 = tpidr_el0;
  plVar6 = *(long **)(lVar7 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar7 + 0x30) = DAT_04859430;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
  uVar3 = param_2[1];
  plVar6[2] = *param_2;
  plVar6[3] = uVar3;
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = std::__next_prime(uVar3);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar3) {
      uVar2 = uVar3;
LAB_00bf9234:
      FUN_00bf885c(param_1,uVar2);
    }
    else if (uVar3 < uVar9) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) ||
         (uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
         1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      if (uVar2 < uVar9) goto LAB_00bf9234;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x24 = uVar8;
    }
    else {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar8 / uVar9;
      }
      unaff_x24 = uVar8 - uVar3 * uVar9;
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar5;
    if (*plVar6 == 0) goto LAB_00bf9368;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar3 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar6 = *plVar5;
  }
  *plVar5 = (long)plVar6;
LAB_00bf9368:
  param_1[3] = param_1[3] + 1;
  return 1;
}


