/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0af44; name: FUN_00d0af44
 */


void FUN_00d0af44(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *local_68;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 2)) {
    FUN_00d0b604(param_1,param_2);
    return;
  }
  uVar9 = param_1[4];
  lVar8 = param_1[1] - *param_1 >> 2;
  uVar4 = param_2 + lVar8;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 1;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  plVar10 = param_1 + 3;
  if (uVar9 >> 1 <= (ulong)(lVar5 >> 2)) {
    uVar4 = uVar9;
  }
  local_70 = 0;
  local_68 = plVar10;
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar4 << 2,4);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  puVar11 = (undefined4 *)(lVar5 + lVar8 * 4);
  lVar8 = param_2 * 4;
  local_70 = lVar5 + uVar4 * 4;
  puVar1 = puVar11 + param_2;
  plVar7 = plVar10;
  local_80 = puVar11;
  local_78 = puVar11;
  while( true ) {
    lVar8 = lVar8 + -4;
    lVar5 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar11 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar11 = 0;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    if (lVar8 == 0) break;
    puVar11 = puVar11 + 1;
    plVar7 = local_68;
  }
  local_78 = puVar1;
  FUN_00ee7ee0(plVar10,*param_1,param_1[1],&local_80);
  puVar11 = (undefined4 *)*param_1;
  lVar8 = param_1[1];
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar5 = param_1[2];
  param_1[2] = local_70;
  local_78 = (undefined4 *)lVar8;
  if (lVar8 - (long)puVar11 != 0) {
    local_78 = (undefined4 *)(lVar8 + ((lVar8 - (long)puVar11) - 4U >> 2 ^ 0xffffffffffffffff) * 4);
  }
  if (puVar11 != (undefined4 *)0x0) {
    lVar8 = lVar5 - (long)puVar11;
    plVar10 = (long *)*local_68;
    local_80 = puVar11;
    local_70 = lVar5;
    uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar4 & 1) != 0) && (lVar5 = FUN_00c4e600(), 0 < *(int *)(lVar5 + 0x12c8))) {
      FUN_00c48fe8(plVar10,puVar11,lVar8,4);
      return;
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,lVar8,4);
  }
  return;
}


