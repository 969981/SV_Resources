/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7ec2c; name: FUN_00e7ec2c
 */


undefined8 FUN_00e7ec2c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  if (1 < *(int *)(param_1 + 0x3f4) - 3U) {
    return 0;
  }
  plVar6 = *(long **)(param_1 + 0x438);
  if (plVar6 == (long *)0x0) {
    plVar8 = *(long **)(param_1 + 8);
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
    if (plVar6 == (long *)0x0) {
      plVar8 = (long *)0x0;
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00e7f09c;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[3] = 0;
      plVar6[4] = 0;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      FUN_00e7f824(plVar6);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      uVar10 = 8;
      uVar11 = 0x38;
    }
    lVar9 = *(long *)(param_1 + 0x438);
    *(long **)(param_1 + 0x438) = plVar6;
    if (lVar9 != 0) {
      FUN_014f20b4(param_1 + 0x440);
      plVar6 = *(long **)(param_1 + 0x438);
    }
    *(long **)(param_1 + 0x440) = plVar8;
    *(undefined8 *)(param_1 + 0x448) = uVar11;
    *(undefined8 *)(param_1 + 0x450) = uVar10;
  }
  puVar7 = (undefined8 *)plVar6[1];
  plVar8 = plVar6 + 3;
  if (puVar7 < (undefined8 *)plVar6[2]) {
    lVar9 = *plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      puVar7[1] = param_2[1];
      *puVar7 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00e7f09c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar7[1] = param_2[1];
      *puVar7 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    plVar6[1] = (long)(puVar7 + 2);
  }
  else {
    uVar5 = plVar6[4];
    lVar9 = (long)puVar7 - *plVar6 >> 4;
    uVar3 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = plVar6[2] - *plVar6;
    uVar4 = lVar2 >> 3;
    local_50 = 0;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar5 >> 1 <= (ulong)(lVar2 >> 4)) {
      uVar3 = uVar5;
    }
    local_48 = plVar8;
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar3 << 4,0x10);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    puVar7 = (undefined8 *)(lVar2 + lVar9 * 0x10);
    local_50 = lVar2 + uVar3 * 0x10;
    lVar9 = *plVar8;
    local_60 = puVar7;
    local_58 = puVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      puVar7[1] = param_2[1];
      *puVar7 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00e7f09c;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar7[1] = param_2[1];
      *puVar7 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar7 = local_58;
    }
    local_58 = puVar7 + 2;
    FUN_00e7f5a4(plVar8,*plVar6,plVar6[1],&local_60);
    puVar7 = (undefined8 *)*plVar6;
    *plVar6 = (long)local_60;
    lVar2 = plVar6[1];
    plVar6[1] = (long)local_58;
    lVar9 = plVar6[2];
    plVar6[2] = local_50;
    local_58 = (undefined8 *)lVar2;
    if (lVar2 - (long)puVar7 != 0) {
      local_58 = (undefined8 *)
                 (lVar2 + ((lVar2 - (long)puVar7) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar2 = lVar9 - (long)puVar7;
      plVar6 = (long *)*local_48;
      local_60 = puVar7;
      local_50 = lVar9;
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,lVar2,0x10);
      }
      else {
        FUN_00c48fe8(plVar6,puVar7,lVar2,0x10);
      }
    }
  }
  return 1;
}


