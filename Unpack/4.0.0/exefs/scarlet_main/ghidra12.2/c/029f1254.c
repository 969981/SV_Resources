/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f1254; name: FUN_029f1254
 */


void FUN_029f1254(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      uVar11 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar11;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_029f1610;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar11 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x28);
    lVar10 = (long)puVar1 - *(long *)(param_1 + 8) >> 4;
    uVar3 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)*(undefined8 **)(param_1 + 0x18) - *(long *)(param_1 + 8);
    uVar6 = lVar5 >> 3;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    if (uVar8 >> 1 <= (ulong)(lVar5 >> 4)) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),uVar3 << 4,8);
      if (lVar5 == 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))();
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      uVar11 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar11;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_029f1610:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar11 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    lVar10 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    puVar12 = puVar1;
    if (lVar7 != lVar10) {
      do {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          uVar11 = *(undefined8 *)(lVar7 + -8);
          puVar12[-2] = *(undefined8 *)(lVar7 + -0x10);
          puVar12[-1] = uVar11;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_029f1610;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar11;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          uVar11 = *(undefined8 *)(lVar7 + -8);
          puVar12[-2] = *(undefined8 *)(lVar7 + -0x10);
          puVar12[-1] = uVar11;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0x10;
        puVar12 = puVar12 + -2;
      } while (lVar10 != lVar7);
      lVar10 = *(long *)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 8) = puVar12;
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
    lVar7 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = lVar5 + uVar3 * 0x10;
    if (lVar10 != 0) {
      plVar9 = *(long **)(param_1 + 0x20);
      lVar7 = lVar7 - lVar10;
      uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar3 & 1) != 0) {
        lVar5 = FUN_00c4e600();
        if (0 < *(int *)(lVar5 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar10,lVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x029f13c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar7,8);
      return;
    }
  }
  return;
}


