/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d8f14; name: FUN_012d8f14
 */


void FUN_012d8f14(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6,byte param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long local_a0;
  long local_90;
  long *local_68;
  
  puVar5 = PTR_DAT_047d4250;
  puVar4 = PTR_DAT_047d4248;
  puVar3 = PTR_DAT_047d4240;
  lVar16 = *(long *)(param_1 + 0x48);
  pcVar17 = *(char **)(param_3 + 8);
  if (*pcVar17 == '\0') {
    plVar18 = (long *)FUN_00d44228();
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar7;
    FUN_00cf9884(&local_68,uVar7,pcVar17);
    plVar18 = local_68;
  }
  pcVar17 = *(char **)(param_5 + 8);
  if (*pcVar17 == '\0') {
    plVar10 = (long *)FUN_00d44228();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  else {
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar7;
    FUN_00cf9884(&local_68,uVar7,pcVar17);
    plVar10 = local_68;
  }
  plVar22 = (long *)PTR_DAT_047d8b70;
  plVar23 = (long *)PTR_PTR_047d4508;
  plVar15 = (long *)PTR_DAT_047d8b70;
  if (plVar18 != (long *)0x0) {
    plVar15 = plVar18 + 6;
  }
  lVar11 = *plVar15;
  plVar15 = (long *)PTR_PTR_047d4508;
  if (plVar18 != (long *)0x0) {
    plVar15 = plVar18 + 7;
  }
  lVar20 = *plVar15;
  if (plVar18 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = plVar18[8];
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  if (plVar10 != (long *)0x0) {
    plVar22 = plVar10 + 6;
  }
  lVar12 = *plVar22;
  if (plVar10 != (long *)0x0) {
    plVar23 = plVar10 + 7;
  }
  lVar19 = *plVar23;
  if (plVar10 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = plVar10[8];
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  lVar21 = lVar16 + param_2 * 0x38;
  plVar22 = (long *)(lVar21 + 8);
  plVar15 = (long *)*plVar22;
  puVar1 = (undefined8 *)(lVar21 + 0x18);
  plVar23 = (long *)(lVar21 + 0x10);
  if (plVar15 < (long *)*plVar23) {
    uVar7 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 != 0) {
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_012d970c;
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar7;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    }
    *plVar15 = lVar11;
    plVar15[1] = lVar20;
    plVar15[2] = local_90;
    plVar15[3] = (long)plVar18;
    *(undefined4 *)(plVar15 + 4) = param_4;
    plVar15[5] = lVar12;
    plVar15[6] = lVar19;
    plVar15[7] = local_a0;
    plVar15[8] = (long)plVar10;
    plVar15[0xb] = (long)plVar18;
    plVar15[0xc] = (long)plVar10;
    plVar15[9] = param_6;
    *(byte *)(plVar15 + 10) = param_7 & 1;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    *plVar22 = (long)(plVar15 + 0xd);
  }
  else {
    plVar8 = (long *)(lVar16 + param_2 * 0x38);
    uVar14 = *(ulong *)(lVar16 + param_2 * 0x38 + 0x20);
    lVar16 = (long)plVar15 - *plVar8 >> 3;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar2 = lVar16 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = *plVar23 - *plVar8 >> 3;
    uVar13 = lVar21 * -0x6276276276276276;
    if (uVar2 <= uVar13) {
      uVar2 = uVar13;
    }
    if (uVar14 >> 1 <= (ulong)(lVar21 * 0x4ec4ec4ec4ec4ec5)) {
      uVar2 = uVar14;
    }
    if (uVar2 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x68,8);
      if (lVar21 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    uVar7 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_012d970c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar7;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    plVar15 = (long *)(lVar21 + lVar16 * 8);
    *plVar15 = lVar11;
    lVar16 = lVar21 + lVar16 * 8;
    *(long **)(lVar16 + 0x18) = plVar18;
    *(long *)(lVar16 + 8) = lVar20;
    *(long *)(lVar16 + 0x10) = local_90;
    *(undefined4 *)(lVar16 + 0x20) = param_4;
    *(long *)(lVar16 + 0x28) = lVar12;
    *(long *)(lVar16 + 0x30) = lVar19;
    *(long *)(lVar16 + 0x38) = local_a0;
    *(long **)(lVar16 + 0x40) = plVar10;
    *(long *)(lVar16 + 0x48) = param_6;
    *(byte *)(lVar16 + 0x50) = param_7 & 1;
    *(long **)(lVar16 + 0x58) = plVar18;
    *(long **)(lVar16 + 0x60) = plVar10;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    lVar11 = *plVar8;
    lVar16 = *plVar22;
    if (lVar16 == lVar11) {
      plVar18 = plVar15;
      lVar16 = lVar11;
    }
    else {
      lVar20 = 0;
      do {
        uVar7 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_012d970c;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar7;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        lVar19 = lVar16 + lVar20;
        *(undefined8 *)((long)plVar15 + lVar20 + -0x68) = *(undefined8 *)(lVar19 + -0x68);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x60) = *(undefined8 *)(lVar19 + -0x60);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x58) = *(undefined8 *)(lVar19 + -0x58);
        uVar7 = *(undefined8 *)(lVar19 + -0x50);
        *(undefined8 *)(lVar19 + -0x50) = 0;
        *(undefined8 *)((long)plVar15 + lVar20 + -0x50) = uVar7;
        *(undefined4 *)((long)plVar15 + lVar20 + -0x48) = *(undefined4 *)(lVar19 + -0x48);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x40) = *(undefined8 *)(lVar19 + -0x40);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x38) = *(undefined8 *)(lVar19 + -0x38);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x30) = *(undefined8 *)(lVar19 + -0x30);
        uVar7 = *(undefined8 *)(lVar19 + -0x28);
        *(undefined8 *)(lVar19 + -0x28) = 0;
        *(undefined8 *)((long)plVar15 + lVar20 + -0x28) = uVar7;
        uVar7 = *(undefined8 *)(lVar19 + -0x20);
        *(undefined1 *)((long)plVar15 + lVar20 + -0x18) = *(undefined1 *)(lVar19 + -0x18);
        *(undefined8 *)((long)plVar15 + lVar20 + -0x20) = uVar7;
        uVar7 = *(undefined8 *)(lVar19 + -0x10);
        *(undefined8 *)(lVar19 + -0x10) = 0;
        *(undefined8 *)((long)plVar15 + lVar20 + -0x10) = uVar7;
        uVar7 = *(undefined8 *)(lVar19 + -8);
        *(undefined8 *)(lVar19 + -8) = 0;
        *(undefined8 *)((long)plVar15 + lVar20 + -8) = uVar7;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x68;
      } while (lVar11 - lVar16 != lVar20);
      lVar11 = *plVar8;
      plVar18 = (long *)((long)plVar15 + lVar20);
      lVar16 = *plVar22;
    }
    *plVar8 = (long)plVar18;
    *plVar22 = (long)(plVar15 + 0xd);
    lVar20 = *plVar23;
    *plVar23 = lVar21 + uVar2 * 0x68;
    if (lVar16 != lVar11) {
      if (*(long **)(lVar16 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -8) + 0x20))();
      }
      if (*(long **)(lVar16 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -0x10) + 0x20))();
      }
      if (*(long **)(lVar16 + -0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -0x28) + 0x20))();
      }
      if (*(long **)(lVar16 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar16 + -0x50) + 0x20))();
      }
      if (lVar16 + -0x68 != lVar11) {
        do {
          if (*(long **)(lVar16 + -0x70) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0x70) + 0x20))();
          }
          if (*(long **)(lVar16 + -0x78) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0x78) + 0x20))();
          }
          if (*(long **)(lVar16 + -0x90) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0x90) + 0x20))();
          }
          if (*(long **)(lVar16 + -0xb8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + -0xb8) + 0x20))();
          }
          lVar16 = lVar16 + -0x68;
        } while (lVar11 + 0x68 != lVar16);
      }
    }
    if (lVar11 != 0) {
      plVar18 = (long *)*puVar1;
      uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar14 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x012d93cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar20 - lVar11,8);
        return;
      }
      FUN_00c48fe8(plVar18,lVar11,lVar20 - lVar11,8);
      return;
    }
  }
  return;
}


