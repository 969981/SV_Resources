/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01209d1c; name: FUN_01209d1c
 */


long * FUN_01209d1c(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x23;
  ulong uVar9;
  long lVar10;
  
  uVar1 = *param_2;
  uVar9 = (ulong)uVar1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = (int)uVar8 - 1 & uVar9;
      plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar9 && (plVar4[1] & uVar8 - 1) != unaff_x23)) goto LAB_01209d48;
        } while (*(ushort *)(plVar4 + 2) != uVar1);
        goto LAB_01209e74;
      }
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar7 * uVar8;
      }
      plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_01209d48;
          uVar7 = plVar4[1];
          if (uVar7 != uVar9) {
            if (uVar8 <= uVar7) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar2 * uVar8;
            }
            if (uVar7 != unaff_x23) goto LAB_01209d48;
          }
        } while (*(ushort *)(plVar4 + 2) != uVar1);
        goto LAB_01209e74;
      }
    }
  }
LAB_01209d48:
  plVar4 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar10 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *(ushort *)(plVar4 + 2) = *param_2;
    plVar4[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(ushort *)(plVar4 + 2) = *param_2;
    plVar4[3] = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar4 = 0;
  plVar4[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    FUN_0120a024(param_1,uVar7);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = (int)uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x23 = uVar9;
    }
    else {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      unaff_x23 = uVar9 - uVar7 * uVar8;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(*param_1 + unaff_x23 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar9 = *(ulong *)(*plVar4 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar7 * uVar8;
      }
      plVar6 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_01209ee8;
    }
  }
  else {
    *plVar4 = *plVar6;
LAB_01209ee8:
    *plVar6 = (long)plVar4;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_01209e74:
  return plVar4 + 3;
}


