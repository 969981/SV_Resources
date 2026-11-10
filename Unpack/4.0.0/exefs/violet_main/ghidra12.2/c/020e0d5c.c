/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e0d5c; name: FUN_020e0d5c
 */


void FUN_020e0d5c(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  undefined8 *puStack_68;
  
  if (((*(char *)(param_1 + 0x311) != '\0') || (*(char *)(param_1 + 0x748) == '\0')) ||
     (lVar4 = FUN_012037cc(param_1,param_3,param_4 & 1), lVar4 == 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x508));
  puVar12 = *(undefined8 **)(param_1 + 0x4d8);
  puVar1 = (undefined8 *)(param_1 + 0x4e8);
  if (puVar12 < *(undefined8 **)(param_1 + 0x4e0)) {
    uVar13 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_020e1188:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    *puVar12 = *param_2;
    puVar12[1] = param_2[1];
    puVar12[2] = param_2[2];
    plVar6 = (long *)param_2[3];
    puVar12[3] = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar12[4] = lVar4;
    *(undefined4 *)(puVar12 + 5) = param_5;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x4d8) = puVar12 + 6;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x4f0);
    lVar5 = (long)puVar12 - *(long *)(param_1 + 0x4d0) >> 4;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar2 = lVar5 * -0x5555555555555555 + 1;
    if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(undefined8 **)(param_1 + 0x4e0) - *(long *)(param_1 + 0x4d0) >> 4;
    local_70 = 0;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    if (uVar11 >> 1 <= (ulong)(lVar8 * -0x5555555555555555)) {
      uVar2 = uVar11;
    }
    puStack_68 = puVar1;
    if (uVar2 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x30,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar12 = (undefined8 *)(lVar8 + lVar5 * 0x10);
    local_70 = lVar8 + uVar2 * 0x30;
    uVar13 = *puVar1;
    local_88 = lVar8;
    local_80 = puVar12;
    local_78 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_020e1188;
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar13;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    *puVar12 = *param_2;
    lVar9 = lVar8 + lVar5 * 0x10;
    *(undefined8 *)(lVar9 + 8) = param_2[1];
    *(undefined8 *)(lVar9 + 0x10) = param_2[2];
    plVar6 = (long *)param_2[3];
    *(long **)(lVar9 + 0x18) = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar8 = lVar8 + lVar5 * 0x10;
    *(long *)(lVar8 + 0x20) = lVar4;
    *(undefined4 *)(lVar8 + 0x28) = param_5;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    local_78 = local_78 + 6;
    FUN_01203650(param_1 + 0x4d0,&local_88);
    puVar1 = local_80;
    if (local_78 != local_80) {
      puVar12 = local_78 + -6;
      plVar6 = local_78 + -3;
      local_78 = puVar12;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
      while (puVar12 != puVar1) {
        local_78 = puVar12 + -6;
        plVar6 = puVar12 + -3;
        puVar12 = local_78;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x20))();
        }
      }
    }
    lVar4 = local_88;
    if (local_88 != 0) {
      lVar5 = local_70 - local_88;
      plVar6 = (long *)*puStack_68;
      uVar11 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar4,lVar5,8);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x508));
  return;
}


