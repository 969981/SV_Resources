/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00958b40; name: FUN_00958b40
 */


void FUN_00958b40(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  puVar3 = (undefined8 *)param_1[1];
  plVar1 = param_1 + 3;
  if (puVar3 < (undefined8 *)param_1[2]) {
    lVar8 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar3 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00958db4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar3 = *param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 1);
  }
  else {
    uVar7 = param_1[4];
    lVar8 = (long)puVar3 - *param_1 >> 3;
    uVar2 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar6 = lVar5 >> 2;
    local_50 = 0;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar7 >> 1 <= (ulong)(lVar5 >> 3)) {
      uVar2 = uVar7;
    }
    plStack_48 = plVar1;
    if (uVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    puVar3 = (undefined8 *)(local_68 + lVar8 * 8);
    local_50 = local_68 + uVar2 * 8;
    lVar8 = *plVar1;
    puStack_60 = puVar3;
    local_58 = puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar3 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00958db4;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar3 = *param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    local_58 = local_58 + 1;
    FUN_012afc8c(param_1,&local_68);
    FUN_012afcf4(&local_68);
  }
  return;
}


