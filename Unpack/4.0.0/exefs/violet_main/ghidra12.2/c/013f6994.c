/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f6994; name: FUN_013f6994
 */


long * FUN_013f6994(long *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - 1;
    if ((uVar9 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar8;
      plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) || (plVar7[1] != uVar8 && (plVar7[1] & uVar5) != unaff_x25))
          goto LAB_013f69f0;
        } while (plVar7[2] != uVar8);
        goto LAB_013f6b28;
      }
    }
    else {
      unaff_x25 = uVar8;
      if (uVar9 <= uVar8) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar8 / uVar9;
        }
        unaff_x25 = uVar8 - uVar5 * uVar9;
      }
      plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_013f69f0;
          uVar5 = plVar7[1];
          if (uVar5 != uVar8) {
            if (uVar9 <= uVar5) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar5 / uVar9;
              }
              uVar5 = uVar5 - uVar4 * uVar9;
            }
            if (uVar5 != unaff_x25) goto LAB_013f69f0;
          }
        } while (plVar7[2] != uVar8);
        goto LAB_013f6b28;
      }
    }
  }
LAB_013f69f0:
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x48,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar10 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  plVar7[2] = *param_2;
  plVar7[3] = param_2[1];
  plVar7[4] = param_2[2];
  plVar3 = (long *)param_2[3];
  plVar7[5] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *(undefined4 *)(plVar7 + 8) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = std::__next_prime(uVar5);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar5) {
      uVar4 = uVar5;
LAB_013f6ba0:
      FUN_013f6d6c(param_1,uVar4);
    }
    else if (uVar5 < uVar9) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar9 < 3) ||
         (uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar9) goto LAB_013f6ba0;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x25 = uVar8;
    }
    else {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar8 / uVar9;
      }
      unaff_x25 = uVar8 - uVar5 * uVar9;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar3;
    if (*plVar7 != 0) {
      uVar8 = *(ulong *)(*plVar7 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar5 * uVar9;
      }
      plVar3 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_013f6b18;
    }
  }
  else {
    *plVar7 = *plVar3;
LAB_013f6b18:
    *plVar3 = (long)plVar7;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_013f6b28:
  return plVar7 + 6;
}


