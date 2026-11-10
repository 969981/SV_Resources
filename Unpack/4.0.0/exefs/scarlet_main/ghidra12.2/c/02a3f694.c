/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3f694; name: FUN_02a3f694
 */


void FUN_02a3f694(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  uVar2 = *(ulong *)(param_1 + 0x138);
  puVar1 = (undefined8 *)(param_1 + 0x148);
  if (uVar2 < *(ulong *)(param_1 + 0x140)) {
    uVar8 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      FUN_02a406b4(uVar2,param_2);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_02a3f940:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_02a406b4(uVar2,param_2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    *(ulong *)(param_1 + 0x138) = uVar2 + 0x48;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x150);
    lVar4 = (long)(uVar2 - *(long *)(param_1 + 0x130)) >> 3;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar2 = lVar4 * -0x71c71c71c71c71c7 + 1;
    if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)(*(ulong *)(param_1 + 0x140) - *(long *)(param_1 + 0x130)) >> 3;
    local_60 = 0;
    uVar6 = lVar5 * 0x1c71c71c71c71c72;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar7 >> 1 <= (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
      uVar2 = uVar7;
    }
    puStack_58 = puVar1;
    if (uVar2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x48,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lVar4 = local_78 + lVar4 * 8;
    local_60 = local_78 + uVar2 * 0x48;
    uVar8 = *puVar1;
    lStack_70 = lVar4;
    local_68 = lVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      FUN_02a406b4(lVar4,param_2);
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_02a3f940;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      FUN_02a406b4(lVar4,param_2);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar4 = local_68;
    }
    local_68 = lVar4 + 0x48;
    FUN_02a41700(param_1 + 0x130,&local_78);
    FUN_02a41898(&local_78);
  }
  return;
}


