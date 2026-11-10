/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010833f4; name: FUN_010833f4
 */


void FUN_010833f4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar10 - 1 & uVar11;
    }
    else {
      uVar7 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        uVar7 = uVar11 - uVar7 * uVar10;
      }
    }
    lVar6 = *param_1;
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar8[1] == uVar11) {
            if (plVar8[2] == uVar11) {
              return;
            }
          }
          else if ((plVar8[1] & uVar10 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar11) {
            if (plVar8[2] == uVar11) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar9) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar1 * uVar10;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (uVar4 < 2) {
      unaff_x24 = uVar10 - 1 & uVar11;
      plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar11 || (plVar8[1] & uVar10 - 1) == unaff_x24))) {
          if (plVar8[2] == uVar11) {
            return;
          }
        }
      }
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar4 * uVar10;
      }
      plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar4 = plVar8[1];
          if (uVar4 != uVar11) {
            if (uVar10 <= uVar4) {
              uVar7 = 0;
              if (uVar10 != 0) {
                uVar7 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar7 * uVar10;
            }
            if (uVar4 != unaff_x24) break;
          }
          if (plVar8[2] == uVar11) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x28,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar6 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    plVar8[2] = *param_2;
    *(undefined4 *)(plVar8 + 3) = 0;
    *(undefined8 *)((long)plVar8 + 0x1c) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar8[2] = *param_2;
    *(undefined4 *)(plVar8 + 3) = 0;
    *(undefined8 *)((long)plVar8 + 0x1c) = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar11;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_010837bc(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else if (uVar11 < uVar10) {
      unaff_x24 = uVar11;
    }
    else {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      unaff_x24 = uVar11 - uVar4 * uVar10;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_01083670;
    uVar11 = *(ulong *)(*plVar8 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_01083670:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


