/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116d3a8; name: FUN_0116d3a8
 */


void FUN_0116d3a8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 < *(undefined8 **)(param_1 + 0xb8)) {
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0116d7c8;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar1 + 1;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 200);
    lVar3 = (long)puVar1 - *(long *)(param_1 + 0xa8) >> 3;
    uVar5 = lVar3 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(param_1 + 0xb8) - *(long *)(param_1 + 0xa8);
    uVar7 = lVar6 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                        (*(long **)(param_1 + 0xc0),uVar5 << 3,8);
      if (lVar6 == 0) {
        (**(code **)(**(long **)(param_1 + 0xc0) + 0xe8))();
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    puVar1 = (undefined8 *)(lVar6 + lVar3 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0116d7c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar3 = *(long *)(param_1 + 0xa8);
    lVar11 = *(long *)(param_1 + 0xb0);
    puVar12 = puVar1;
    if (lVar11 != lVar3) {
      do {
        uVar10 = *(undefined8 *)(param_1 + 0xc0);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          puVar12[-1] = *(undefined8 *)(lVar11 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0116d7c8;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          puVar12[-1] = *(undefined8 *)(lVar11 + -8);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar11 = lVar11 + -8;
        puVar12 = puVar12 + -1;
      } while (lVar3 != lVar11);
      lVar3 = *(long *)(param_1 + 0xa8);
    }
    *(undefined8 **)(param_1 + 0xa8) = puVar12;
    *(undefined8 **)(param_1 + 0xb0) = puVar1 + 1;
    lVar11 = *(long *)(param_1 + 0xb8);
    *(ulong *)(param_1 + 0xb8) = lVar6 + uVar5 * 8;
    if (lVar3 != 0) {
      plVar9 = *(long **)(param_1 + 0xc0);
      lVar11 = lVar11 - lVar3;
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar3,lVar11,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar3,lVar11,8);
      }
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
  iVar2 = (**(code **)*param_2)(param_2);
  if (0 < iVar2) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x100));
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar2;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
    for (lVar3 = *(long *)(param_1 + 0x68); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x68)) {
      nn::os::LockMutex((MutexType *)(lVar3 + 0x100));
      *(int *)(lVar3 + 0x120) = *(int *)(lVar3 + 0x120) + iVar2;
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x100));
    }
  }
  return;
}


