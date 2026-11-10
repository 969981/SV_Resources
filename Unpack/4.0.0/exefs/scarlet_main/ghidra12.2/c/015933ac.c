/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015933ac; name: FUN_015933ac
 */


void FUN_015933ac(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1[1] != param_1[2]) {
    puVar10 = (undefined8 *)param_1[1];
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    *puVar10 = *param_2;
    puVar10[1] = param_2[1];
    puVar10[2] = param_2[2];
    plVar3 = (long *)param_2[3];
    puVar10[3] = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar10 + 4);
    return;
  }
  uVar9 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 5;
  uVar4 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar7 = lVar6 >> 4;
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  if (uVar9 >> 1 <= (ulong)(lVar6 >> 5)) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 5,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar13 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_01593758:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar13;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  puVar10 = (undefined8 *)(lVar6 + lVar12 * 0x20);
  *puVar10 = *param_2;
  puVar10[1] = param_2[1];
  puVar10[2] = param_2[2];
  plVar3 = (long *)param_2[3];
  puVar10[3] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  lVar12 = *param_1;
  lVar13 = param_1[1];
  puVar11 = puVar10;
  if (lVar13 == lVar12) {
    lVar13 = lVar12;
  }
  else {
    do {
      lVar2 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 != 0) {
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01593758;
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      puVar11[-4] = *(undefined8 *)(lVar13 + -0x20);
      puVar11[-3] = *(undefined8 *)(lVar13 + -0x18);
      puVar11[-2] = *(undefined8 *)(lVar13 + -0x10);
      uVar8 = *(undefined8 *)(lVar13 + -8);
      *(undefined8 *)(lVar13 + -8) = 0;
      lVar13 = lVar13 + -0x20;
      puVar11[-1] = uVar8;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      puVar11 = puVar11 + -4;
    } while (lVar12 != lVar13);
    lVar12 = *param_1;
    lVar13 = param_1[1];
  }
  lVar2 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar10 + 4);
  param_1[2] = lVar6 + uVar4 * 0x20;
  if (lVar13 != lVar12) {
    if (*(long **)(lVar13 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar13 + -8) + 0x20))();
    }
    if (lVar13 + -0x20 != lVar12) {
      do {
        if (*(long **)(lVar13 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + -0x28) + 0x20))();
        }
        lVar13 = lVar13 + -0x20;
      } while (lVar12 + 0x20 != lVar13);
    }
  }
  if (lVar12 == 0) {
    return;
  }
  plVar3 = (long *)param_1[3];
  uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x015935bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar12,lVar2 - lVar12,8);
    return;
  }
  FUN_00c48fe8(plVar3,lVar12,lVar2 - lVar12,8);
  return;
}


