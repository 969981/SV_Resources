/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf8d00; name: FUN_00bf8d00
 */


undefined4 FUN_00bf8d00(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  byte *__s2;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  ulong uVar10;
  long *plVar11;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    pbVar6 = __s2;
    do {
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 * 5 + (ulong)bVar3;
      bVar3 = *pbVar6;
    } while (bVar3 != 0);
  }
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      unaff_x24 = uVar10 & uVar8;
      plVar11 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar11 != (long *)0x0) {
        while ((plVar11 = (long *)*plVar11, plVar11 != (long *)0x0 &&
               (plVar11[1] == uVar8 || (plVar11[1] & uVar10) == unaff_x24))) {
          iVar1 = strcmp((char *)plVar11[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
    else {
      unaff_x24 = uVar8;
      if (uVar9 <= uVar8) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar8 / uVar9;
        }
        unaff_x24 = uVar8 - uVar10 * uVar9;
      }
      plVar11 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar11 != (long *)0x0) {
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if (uVar10 != uVar8) {
            if (uVar9 <= uVar10) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar2 * uVar9;
            }
            if (uVar10 != unaff_x24) break;
          }
          iVar1 = strcmp((char *)plVar11[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
  }
  lVar7 = tpidr_el0;
  plVar11 = *(long **)(lVar7 + 0x30);
  if (plVar11 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar11 = DAT_04859430;
    *(long **)(lVar7 + 0x30) = DAT_04859430;
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x20,8);
  lVar7 = param_2[1];
  plVar11[2] = *param_2;
  plVar11[3] = lVar7;
  *plVar11 = 0;
  plVar11[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__next_prime(uVar10);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar10) {
      uVar2 = uVar10;
LAB_00bf8ed0:
      FUN_00bf83a8(param_1,uVar2);
    }
    else if (uVar10 < uVar9) {
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
      if (uVar2 <= uVar10) {
        uVar2 = uVar10;
      }
      if (uVar2 < uVar9) goto LAB_00bf8ed0;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x24 = uVar8;
    }
    else {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      unaff_x24 = uVar8 - uVar10 * uVar9;
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar11 = *plVar5;
    *plVar5 = (long)plVar11;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar5;
    if (*plVar11 == 0) goto LAB_00bf9004;
    uVar8 = *(ulong *)(*plVar11 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar10 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar11 = *plVar5;
  }
  *plVar5 = (long)plVar11;
LAB_00bf9004:
  param_1[3] = param_1[3] + 1;
  return 1;
}


