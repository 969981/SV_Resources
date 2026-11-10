/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01314a94; name: FUN_01314a94
 */


void FUN_01314a94(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)&DAT_0486ac70);
  if (DAT_0486ac50 == (long *)0x0) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    FUN_01315110(&local_80,*(undefined8 *)(lVar11 + 0x30));
    plVar2 = local_80;
    plVar10 = DAT_0486ac50;
    local_80 = (long *)0x0;
    DAT_0486ac50 = plVar2;
    if (plVar10 == (long *)0x0) {
      DAT_0486ac58 = local_78;
      DAT_0486ac60 = uStack_70;
      DAT_0486ac68 = local_68;
      local_80 = (long *)0x0;
    }
    else {
      FUN_0185d190(&DAT_0486ac58);
      local_80 = (long *)0x0;
      DAT_0486ac58 = local_78;
      DAT_0486ac60 = uStack_70;
      DAT_0486ac68 = local_68;
    }
  }
  plVar10 = DAT_0486ac50;
  puVar1 = (undefined8 *)DAT_0486ac50[1];
  if (puVar1 < (undefined8 *)DAT_0486ac50[2]) {
    lVar11 = DAT_0486ac50[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar1 = param_1;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01314ee4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar1 = param_1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    plVar10[1] = (long)(puVar1 + 1);
  }
  else {
    uVar9 = DAT_0486ac50[4];
    lVar11 = (long)puVar1 - *DAT_0486ac50 >> 3;
    uVar7 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = DAT_0486ac50[2] - *DAT_0486ac50;
    uVar8 = lVar4 >> 2;
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)(lVar4 >> 3)) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)DAT_0486ac50[3] + 0x10))((long *)DAT_0486ac50[3],uVar7 << 3,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)plVar10[3] + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar4 + lVar11 * 8);
    lVar11 = plVar10[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar1 = param_1;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01314ee4;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar1 = param_1;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar11 = *plVar10;
    lVar5 = plVar10[1];
    puVar13 = puVar1;
    if (lVar5 != lVar11) {
      do {
        lVar12 = plVar10[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          puVar13[-1] = *(undefined8 *)(lVar5 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01314ee4;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          puVar13[-1] = *(undefined8 *)(lVar5 + -8);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar5 = lVar5 + -8;
        puVar13 = puVar13 + -1;
      } while (lVar11 != lVar5);
      lVar11 = *plVar10;
    }
    *plVar10 = (long)puVar13;
    plVar10[1] = (long)(puVar1 + 1);
    lVar5 = plVar10[2];
    plVar10[2] = lVar4 + uVar7 * 8;
    if (lVar11 != 0) {
      plVar10 = (long *)plVar10[3];
      uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if ((uVar7 & 1) != 0) {
        lVar4 = FUN_00c4e600();
        if (0 < *(int *)(lVar4 + 0x12c8)) {
          FUN_00c48fe8(plVar10,lVar11,lVar5 - lVar11,8);
          goto LAB_01314b34;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar5 - lVar11,8);
    }
  }
LAB_01314b34:
  nn::os::UnlockMutex((MutexType *)&DAT_0486ac70);
  return;
}


