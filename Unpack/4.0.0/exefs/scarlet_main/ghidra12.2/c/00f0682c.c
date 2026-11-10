/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0682c; name: FUN_00f0682c
 */


void FUN_00f0682c(undefined1 param_1 [16],long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  undefined8 uVar11;
  float fVar12;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1310));
  uVar10 = *(ulong *)(param_2 + 0x12b0);
  plVar1 = (long *)(param_2 + 0x12a8);
  if (uVar10 != 0) {
    uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar10 - 1 & param_3;
    }
    else if (param_3 < uVar10) {
      uVar7 = param_3;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = param_3 / uVar10;
      }
      uVar7 = param_3 - uVar7 * uVar10;
    }
    lVar6 = *plVar1;
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar8[1] == param_3) {
            if (plVar8[2] == param_3) goto LAB_00f06adc;
          }
          else if ((plVar8[1] & uVar10 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == param_3) {
            if (plVar8[2] == param_3) goto LAB_00f06adc;
          }
          else {
            if (uVar10 <= uVar9) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar2 * uVar10;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (uVar4 < 2) {
      unaff_x25 = uVar10 - 1 & param_3;
      plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != param_3 && (plVar8[1] & uVar10 - 1) != unaff_x25)) goto LAB_00f06a18;
        } while (plVar8[2] != param_3);
        goto LAB_00f06adc;
      }
    }
    else {
      if (param_3 < uVar10) {
        unaff_x25 = param_3;
      }
      else {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = param_3 / uVar10;
        }
        unaff_x25 = param_3 - uVar4 * uVar10;
      }
      plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00f06a18;
          uVar4 = plVar8[1];
          if (uVar4 != param_3) {
            if (uVar10 <= uVar4) {
              uVar7 = 0;
              if (uVar10 != 0) {
                uVar7 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar7 * uVar10;
            }
            if (uVar4 != unaff_x25) goto LAB_00f06a18;
          }
        } while (plVar8[2] != param_3);
        goto LAB_00f06adc;
      }
    }
  }
LAB_00f06a18:
  plVar8 = (long *)(**(code **)(**(long **)(param_2 + 0x12e0) + 0x10))
                             (*(long **)(param_2 + 0x12e0),0x30,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x12e0) + 0xe8))();
  }
  uVar11 = *(undefined8 *)(param_2 + 0x12e0);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    plVar8[2] = param_3;
    plVar8[5] = param_1._8_8_;
    plVar8[4] = param_1._0_8_;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar8[2] = param_3;
    plVar8[5] = param_1._8_8_;
    plVar8[4] = param_1._0_8_;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = param_3;
  fVar12 = (float)(*(long *)(param_2 + 0x1300) + 1);
  if ((uVar10 == 0) || (*(float *)(param_2 + 0x1308) * (float)uVar10 < fVar12)) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar4 = (ulong)(fVar12 / *(float *)(param_2 + 0x1308));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_01617a40(plVar1,uVar4);
    uVar10 = *(ulong *)(param_2 + 0x12b0);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & param_3;
    }
    else if (param_3 < uVar10) {
      unaff_x25 = param_3;
    }
    else {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = param_3 / uVar10;
      }
      unaff_x25 = param_3 - uVar4 * uVar10;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar8 = *(long *)(param_2 + 0x12d8);
    *(long **)(param_2 + 0x12d8) = plVar8;
    *(long *)(*(long *)(param_2 + 0x12a8) + unaff_x25 * 8) = param_2 + 0x12d8;
    if (*plVar8 != 0) {
      uVar4 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar7 * uVar10;
      }
      plVar5 = (long *)(*plVar1 + uVar4 * 8);
      goto LAB_00f06acc;
    }
  }
  else {
    *plVar8 = *plVar5;
LAB_00f06acc:
    *plVar5 = (long)plVar8;
  }
  *(long *)(param_2 + 0x1300) = *(long *)(param_2 + 0x1300) + 1;
LAB_00f06adc:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1310));
  return;
}


