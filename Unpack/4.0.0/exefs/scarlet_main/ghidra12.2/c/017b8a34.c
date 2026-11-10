/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b8a34; name: FUN_017b8a34
 */


void FUN_017b8a34(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  long local_50;
  undefined8 *local_48;
  
  local_6c = param_2;
  if (*(ulong *)(param_1 + 0x458) < *(ulong *)(param_1 + 0x460)) {
    FUN_017b8ddc(param_1 + 0x450,&local_6c);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x470);
    lVar9 = (long)(*(ulong *)(param_1 + 0x458) - *(long *)(param_1 + 0x450)) >> 2;
    uVar3 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(ulong *)(param_1 + 0x460) - *(long *)(param_1 + 0x450);
    uVar5 = lVar4 >> 1;
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    puVar1 = (undefined8 *)(param_1 + 0x468);
    if (uVar6 >> 1 <= (ulong)(lVar4 >> 2)) {
      uVar3 = uVar6;
    }
    local_50 = 0;
    local_48 = puVar1;
    if (uVar3 == 0) {
      local_68 = (undefined4 *)0x0;
    }
    else {
      local_68 = (undefined4 *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar3 << 2,4);
      if (local_68 == (undefined4 *)0x0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))((long *)*puVar1);
      }
    }
    puVar7 = (undefined4 *)((long)local_68 + lVar9 * 4);
    local_50 = (long)local_68 + uVar3 * 4;
    uVar10 = *puVar1;
    local_60 = puVar7;
    local_58 = puVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *puVar7 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar7 = param_2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      puVar7 = local_58;
    }
    local_58 = puVar7 + 1;
    FUN_017b8cbc(puVar1,*(undefined8 *)(param_1 + 0x450),*(undefined8 *)(param_1 + 0x458),&local_60)
    ;
    puVar7 = *(undefined4 **)(param_1 + 0x450);
    *(undefined4 **)(param_1 + 0x450) = local_60;
    lVar4 = *(long *)(param_1 + 0x458);
    *(undefined4 **)(param_1 + 0x458) = local_58;
    lVar9 = *(long *)(param_1 + 0x460);
    *(long *)(param_1 + 0x460) = local_50;
    local_58 = (undefined4 *)lVar4;
    if (lVar4 - (long)puVar7 != 0) {
      local_58 = (undefined4 *)(lVar4 + ((lVar4 - (long)puVar7) - 4U >> 2 ^ 0xffffffffffffffff) * 4)
      ;
    }
    if (puVar7 != (undefined4 *)0x0) {
      lVar4 = lVar9 - (long)puVar7;
      plVar8 = (long *)*local_48;
      local_68 = puVar7;
      local_60 = puVar7;
      local_50 = lVar9;
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) != 0) && (lVar9 = FUN_00c4e600(), 0 < *(int *)(lVar9 + 0x12c8))) {
        FUN_00c48fe8(plVar8,puVar7,lVar4,4);
        return;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,lVar4,4);
    }
  }
  return;
}


