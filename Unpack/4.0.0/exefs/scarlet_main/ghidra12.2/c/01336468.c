/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01336468; name: FUN_01336468
 */


void FUN_01336468(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  *(undefined1 *)(param_1 + 0x108) = 1;
  plVar9 = *(long **)(param_1 + 0xa8);
  puVar1 = (undefined8 *)plVar9[1];
  if (puVar1 == (undefined8 *)plVar9[2]) {
    uVar8 = plVar9[4];
    lVar10 = (long)puVar1 - *plVar9 >> 3;
    uVar6 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = plVar9[2] - *plVar9;
    uVar7 = lVar3 >> 2;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar3 >> 3)) {
      uVar6 = uVar8;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)plVar9[3] + 0x10))((long *)plVar9[3],uVar6 << 3,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)plVar9[3] + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar3 + lVar10 * 8);
    lVar10 = plVar9[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_013367f0;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar10 = *plVar9;
    lVar4 = plVar9[1];
    puVar11 = puVar1;
    if (lVar4 != lVar10) {
      do {
        lVar12 = plVar9[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          puVar11[-1] = *(undefined8 *)(lVar4 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_013367f0;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          puVar11[-1] = *(undefined8 *)(lVar4 + -8);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar4 = lVar4 + -8;
        puVar11 = puVar11 + -1;
      } while (lVar10 != lVar4);
      lVar10 = *plVar9;
    }
    *plVar9 = (long)puVar11;
    plVar9[1] = (long)(puVar1 + 1);
    lVar4 = plVar9[2];
    plVar9[2] = lVar3 + uVar6 * 8;
    if (lVar10 != 0) {
      plVar9 = (long *)plVar9[3];
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar4 - lVar10,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar10,lVar4 - lVar10,8);
      }
    }
  }
  else {
    lVar10 = plVar9[3];
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
LAB_013367f0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    plVar9[1] = (long)(puVar1 + 1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


