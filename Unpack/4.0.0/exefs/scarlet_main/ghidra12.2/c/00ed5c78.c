/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed5c78; name: FUN_00ed5c78
 */


void FUN_00ed5c78(long *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  long *local_78;
  long *plStack_70;
  undefined1 local_68;
  
  uVar8 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar8;
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar5 != (long *)0x0) {
        while ((plVar5 = (long *)*plVar5, plVar5 != (long *)0x0 &&
               (plVar5[1] == uVar8 || (plVar5[1] & uVar4) == unaff_x25))) {
          if (plVar5[2] == uVar8) {
            return;
          }
        }
      }
    }
    else {
      unaff_x25 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x25 = uVar8 - uVar4 * uVar9;
      }
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar5 != (long *)0x0) {
        while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
          uVar4 = plVar5[1];
          if (uVar4 != uVar8) {
            if (uVar9 <= uVar4) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar4 / uVar9;
              }
              uVar4 = uVar4 - uVar3 * uVar9;
            }
            if (uVar4 != unaff_x25) break;
          }
          if (plVar5[2] == uVar8) {
            return;
          }
        }
      }
    }
  }
  plVar6 = param_1 + 7;
  plVar5 = (long *)(**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x30,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)*plVar6 + 0xe8))();
  }
  local_68 = 0;
  lVar10 = *plVar6;
  local_78 = plVar5;
  plStack_70 = plVar6;
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
  plVar5[2] = *param_2;
  lVar10 = *param_3;
  *param_3 = 0;
  plVar5[3] = lVar10;
  lVar10 = param_3[1];
  param_3[1] = 0;
  plVar5[4] = lVar10;
  *(int *)(plVar5 + 5) = (int)param_3[2];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  local_68 = 1;
  *plVar5 = 0;
  plVar5[1] = uVar8;
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar4) {
      uVar3 = uVar4;
LAB_00ed5e50:
      FUN_00ed6194(param_1,uVar3);
    }
    else if (uVar4 < uVar9) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar9 < 3) ||
         (uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      if (uVar3 < uVar9) goto LAB_00ed5e50;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x25 = uVar8;
    }
    else {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar8 / uVar9;
      }
      unaff_x25 = uVar8 - uVar4 * uVar9;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar5 = *plVar6;
    *plVar6 = (long)plVar5;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar6;
    if (*plVar5 == 0) goto LAB_00ed5ecc;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar4 * uVar9;
    }
    plVar6 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar5 = *plVar6;
  }
  *plVar6 = (long)plVar5;
LAB_00ed5ecc:
  local_78 = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_00ed6068(&local_78);
  return;
}


