/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dca6d8; name: FUN_00dca6d8
 */


long * FUN_00dca6d8(long *param_1,ulong *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x25 = uVar7 & uVar8;
      plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar8 && (plVar2[1] & uVar7) != unaff_x25))
          goto LAB_00dca704;
        } while (plVar2[2] != uVar8);
        goto LAB_00dca870;
      }
    }
    else {
      unaff_x25 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x25 = uVar8 - uVar7 * uVar9;
      }
      plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_00dca704;
          uVar7 = plVar2[1];
          if (uVar7 != uVar8) {
            if (uVar9 <= uVar7) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar5 * uVar9;
            }
            if (uVar7 != unaff_x25) goto LAB_00dca704;
          }
        } while (plVar2[2] != uVar8);
        goto LAB_00dca870;
      }
    }
  }
LAB_00dca704:
  plVar2 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x40,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar10 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar2[2] = *param_2;
  plVar2[3] = param_2[1];
  plVar2[4] = param_2[2];
  plVar4 = (long *)param_2[3];
  plVar2[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar2[6] = 0;
  plVar2[7] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar2 = 0;
  plVar2[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar7) {
      uVar5 = uVar7;
LAB_00dca820:
      FUN_00dcaaa8(param_1,uVar5);
    }
    else if (uVar7 < uVar9) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar9 < 3) ||
         (uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar9) goto LAB_00dca820;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x25 = uVar8;
    }
    else {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar8 / uVar9;
      }
      unaff_x25 = uVar8 - uVar7 * uVar9;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *plVar2 = *plVar4;
    *plVar4 = (long)plVar2;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar2 != 0) {
      uVar8 = *(ulong *)(*plVar2 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar7 * uVar9;
      }
      plVar4 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00dca950;
    }
  }
  else {
    *plVar2 = *plVar4;
LAB_00dca950:
    *plVar4 = (long)plVar2;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_00dca870:
  return plVar2 + 6;
}


