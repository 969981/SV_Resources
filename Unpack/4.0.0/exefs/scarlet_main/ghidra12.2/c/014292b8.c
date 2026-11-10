/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014292b8; name: FUN_014292b8
 */


void FUN_014292b8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x26;
  float fVar16;
  long *local_68;
  long *local_48;
  
  local_68 = (long *)0x0;
  pcVar13 = *(char **)(param_2 + 8);
  if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
    local_48 = (long *)FUN_00d44228();
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar5;
    FUN_00cf9884(&local_48,uVar5,pcVar13);
    plVar1 = local_68;
    local_68 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (local_48 != (long *)0x0) {
    puVar2 = (ulong *)(local_48 + 6);
  }
  uVar15 = *puVar2;
  uVar14 = *(ulong *)(param_1 + 0x2c0);
  plVar1 = (long *)(param_1 + 0x2b8);
  local_68 = local_48;
  if (uVar14 != 0) {
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar8 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar7 = 0;
    if (uVar14 != 0) {
      uVar7 = uVar15 / uVar14;
    }
    if (uVar8 < 2) {
      uVar10 = uVar14 - 1 & uVar15;
    }
    else {
      uVar10 = uVar15;
      if (uVar14 <= uVar15) {
        uVar10 = uVar15 - uVar7 * uVar14;
      }
    }
    lVar9 = *plVar1;
    plVar11 = *(long **)(lVar9 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == uVar15) {
            puVar2 = (ulong *)PTR_DAT_047d8b70;
            if (plVar11[2] != 0) {
              puVar2 = (ulong *)(plVar11[2] + 0x30);
            }
            if (*puVar2 == uVar15) goto LAB_0142967c;
          }
          else if ((plVar11[1] & uVar14 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar15) {
            puVar2 = (ulong *)PTR_DAT_047d8b70;
            if (plVar11[2] != 0) {
              puVar2 = (ulong *)(plVar11[2] + 0x30);
            }
            if (*puVar2 == uVar15) goto LAB_0142967c;
          }
          else {
            if (uVar14 <= uVar12) {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = uVar12 / uVar14;
              }
              uVar12 = uVar12 - uVar3 * uVar14;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (uVar8 < 2) {
      unaff_x26 = uVar14 - 1 & uVar15;
      plVar11 = *(long **)(lVar9 + unaff_x26 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) ||
             (plVar11[1] != uVar15 && (plVar11[1] & uVar14 - 1) != unaff_x26)) goto LAB_01429470;
          puVar2 = (ulong *)PTR_DAT_047d8b70;
          if (plVar11[2] != 0) {
            puVar2 = (ulong *)(plVar11[2] + 0x30);
          }
        } while (*puVar2 != uVar15);
        goto LAB_014295a8;
      }
    }
    else {
      unaff_x26 = uVar15;
      if (uVar14 <= uVar15) {
        unaff_x26 = uVar15 - uVar7 * uVar14;
      }
      plVar11 = *(long **)(lVar9 + unaff_x26 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_01429470;
          uVar7 = plVar11[1];
          if (uVar7 != uVar15) {
            if (uVar14 <= uVar7) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar7 / uVar14;
              }
              uVar7 = uVar7 - uVar8 * uVar14;
            }
            if (uVar7 != unaff_x26) goto LAB_01429470;
          }
          puVar2 = (ulong *)PTR_DAT_047d8b70;
          if (plVar11[2] != 0) {
            puVar2 = (ulong *)(plVar11[2] + 0x30);
          }
        } while (*puVar2 != uVar15);
        goto LAB_014295a8;
      }
    }
  }
LAB_01429470:
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x2f0) + 0x10))
                              (*(long **)(param_1 + 0x2f0),0x28,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0xe8))();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x2f0);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar5;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  plVar11[2] = (long)local_68;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  plVar11[3] = 0;
  plVar11[4] = 0;
  FUN_00d0a71c(plVar11 + 3,param_3);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar15;
  fVar16 = (float)(*(long *)(param_1 + 0x310) + 1);
  if ((uVar14 == 0) || (*(float *)(param_1 + 0x318) * (float)uVar14 < fVar16)) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar7 = (ulong)(fVar16 / *(float *)(param_1 + 0x318));
    if (uVar7 <= uVar14) {
      uVar7 = uVar14;
    }
    FUN_014297e8(plVar1,uVar7);
    uVar14 = *(ulong *)(param_1 + 0x2c0);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x26 = uVar14 - 1 & uVar15;
    }
    else if (uVar15 < uVar14) {
      unaff_x26 = uVar15;
    }
    else {
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = uVar15 / uVar14;
      }
      unaff_x26 = uVar15 - uVar7 * uVar14;
    }
  }
  plVar6 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar11 = *(long *)(param_1 + 0x2e8);
    *(long **)(param_1 + 0x2e8) = plVar11;
    *(long *)(*(long *)(param_1 + 0x2b8) + unaff_x26 * 8) = param_1 + 0x2e8;
    if (*plVar11 != 0) {
      uVar15 = *(ulong *)(*plVar11 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar15 = uVar15 & uVar14 - 1;
      }
      else if (uVar14 <= uVar15) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar15 / uVar14;
        }
        uVar15 = uVar15 - uVar7 * uVar14;
      }
      plVar6 = (long *)(*plVar1 + uVar15 * 8);
      goto LAB_01429598;
    }
  }
  else {
    *plVar11 = *plVar6;
LAB_01429598:
    *plVar6 = (long)plVar11;
  }
  *(long *)(param_1 + 0x310) = *(long *)(param_1 + 0x310) + 1;
LAB_014295a8:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
LAB_0142967c:
  uVar5 = FUN_01429c84(plVar1,&local_68);
  FUN_00d0a71c(uVar5,param_3);
  goto LAB_014295a8;
}


