/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf9ae0; name: FUN_00cf9ae0
 */


long * FUN_00cf9ae0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x23;
  ulong uVar8;
  long lVar9;
  
  uVar8 = *param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar8;
      plVar6 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar8 && (plVar6[1] & uVar5) != unaff_x23))
          goto LAB_00cf9b74;
        } while (plVar6[2] != uVar8);
        goto LAB_00cf9c80;
      }
    }
    else {
      unaff_x23 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x23 = uVar8 - uVar5 * uVar7;
      }
      plVar6 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00cf9b74;
          uVar5 = plVar6[1];
          if (uVar5 != uVar8) {
            if (uVar7 <= uVar5) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar1 * uVar7;
            }
            if (uVar5 != unaff_x23) goto LAB_00cf9b74;
          }
        } while (plVar6[2] != uVar8);
        goto LAB_00cf9c80;
      }
    }
  }
LAB_00cf9b74:
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar9 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    plVar6[2] = *param_2;
    plVar6[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar6[2] = *param_2;
    plVar6[3] = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    FUN_00d04eb4(param_1,uVar5);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x23 = uVar7 - 1 & uVar8;
    }
    else if (uVar8 < uVar7) {
      unaff_x23 = uVar8;
    }
    else {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar8 / uVar7;
      }
      unaff_x23 = uVar8 - uVar5 * uVar7;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
    *(long **)(*param_1 + unaff_x23 * 8) = plVar4;
    if (*plVar6 != 0) {
      uVar8 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar5 * uVar7;
      }
      plVar4 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00cf9c70;
    }
  }
  else {
    *plVar6 = *plVar4;
LAB_00cf9c70:
    *plVar4 = (long)plVar6;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_00cf9c80:
  return plVar6 + 3;
}


