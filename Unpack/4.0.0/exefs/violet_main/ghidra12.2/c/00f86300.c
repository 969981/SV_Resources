/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f86300; name: FUN_00f86300
 */


long * FUN_00f86300(long *param_1,ulong *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long lVar10;
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - 1;
    if ((uVar9 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar8;
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar8 && (plVar2[1] & uVar5) != unaff_x24))
          goto LAB_00f8632c;
        } while (plVar2[2] != uVar8);
        goto LAB_00f86538;
      }
    }
    else {
      unaff_x24 = uVar8;
      if (uVar9 <= uVar8) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar8 / uVar9;
        }
        unaff_x24 = uVar8 - uVar5 * uVar9;
      }
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_00f8632c;
          uVar5 = plVar2[1];
          if (uVar5 != uVar8) {
            if (uVar9 <= uVar5) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar5 / uVar9;
              }
              uVar5 = uVar5 - uVar4 * uVar9;
            }
            if (uVar5 != unaff_x24) goto LAB_00f8632c;
          }
        } while (plVar2[2] != uVar8);
        goto LAB_00f86538;
      }
    }
  }
LAB_00f8632c:
  plVar2 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x38,8);
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
  uVar5 = param_2[3];
  param_2[3] = 0;
  plVar2[5] = uVar5;
  plVar2[6] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar2 = 0;
  plVar2[1] = uVar8;
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
LAB_00f86490:
      FUN_00f866bc(param_1,uVar4);
    }
    else if (uVar5 < uVar9) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar9 < 3) ||
         (uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar9) goto LAB_00f86490;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x24 = uVar8;
    }
    else {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar8 / uVar9;
      }
      unaff_x24 = uVar8 - uVar5 * uVar9;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar6;
    if (*plVar2 != 0) {
      uVar8 = *(ulong *)(*plVar2 + 8);
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
      plVar6 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00f86528;
    }
  }
  else {
    *plVar2 = *plVar6;
LAB_00f86528:
    *plVar6 = (long)plVar2;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_00f86538:
  return plVar2 + 6;
}


