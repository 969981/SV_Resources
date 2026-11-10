/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113cb2c; name: FUN_0113cb2c
 */


long * FUN_0113cb2c(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  long *local_68;
  long *plStack_60;
  undefined1 local_58;
  
  uVar9 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar9;
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar9 && (plVar8[1] & uVar6) != unaff_x24))
          goto LAB_0113cbc4;
        } while (plVar8[2] != uVar9);
        goto LAB_0113cdc0;
      }
    }
    else {
      unaff_x24 = uVar9;
      if (uVar10 <= uVar9) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar9 / uVar10;
        }
        unaff_x24 = uVar9 - uVar6 * uVar10;
      }
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0113cbc4;
          uVar6 = plVar8[1];
          if (uVar6 != uVar9) {
            if (uVar10 <= uVar6) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar5 * uVar10;
            }
            if (uVar6 != unaff_x24) goto LAB_0113cbc4;
          }
        } while (plVar8[2] != uVar9);
        goto LAB_0113cdc0;
      }
    }
  }
LAB_0113cbc4:
  plVar8 = param_1 + 7;
  plVar3 = (long *)(**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,0x60,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0xe8))();
  }
  local_58 = 0;
  lVar11 = *plVar8;
  local_68 = plVar3;
  plStack_60 = plVar8;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  plVar8 = local_68;
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar3[2] = *param_2;
  plVar3[3] = param_2[1];
  plVar3[4] = param_2[2];
  uVar6 = param_2[3];
  puVar1 = PTR_DAT_047d2408 + 0x10;
  param_2[3] = 0;
  plVar3[7] = -1;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  plVar3[5] = uVar6;
  plVar3[6] = (long)puVar1;
  plVar3[0xb] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 10) = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = 1;
  *local_68 = 0;
  local_68[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar6) {
      uVar5 = uVar6;
LAB_0113cd20:
      FUN_0216cc8c(param_1,uVar5);
    }
    else if (uVar6 < uVar10) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar10 < 3) ||
         (uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar10) goto LAB_0113cd20;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x24 = uVar9;
    }
    else {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar9 / uVar10;
      }
      unaff_x24 = uVar9 - uVar6 * uVar10;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar8 != 0) {
      uVar9 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar9 = uVar9 & uVar10 - 1;
      }
      else if (uVar10 <= uVar9) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar9 / uVar10;
        }
        uVar9 = uVar9 - uVar6 * uVar10;
      }
      *(long **)(*param_1 + uVar9 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
  }
  local_68 = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_0113d3b4(&local_68);
LAB_0113cdc0:
  return plVar8 + 6;
}


