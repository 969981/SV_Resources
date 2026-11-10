/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0223c; name: FUN_00e0223c
 */


void FUN_00e0223c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  plVar1 = param_1 + 3;
  lVar5 = FUN_027169d4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar9 = *param_1;
  lVar6 = param_1[1];
  local_70 = 0;
  plStack_68 = plVar1;
  if (lVar5 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 << 3,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined8 *)(local_88 + (lVar6 - lVar9 >> 3) * 8);
  local_70 = local_88 + lVar5 * 8;
  lVar9 = *plVar1;
  local_80 = puVar2;
  local_78 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    uVar8 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar8;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00e02494:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    uVar8 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  puVar3 = PTR_LAB_047d3900;
  local_78 = local_78 + 1;
  lVar9 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar9) {
    lVar6 = lVar9;
  }
  else {
    do {
      puVar2 = local_80;
      lVar5 = *plVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(lVar6 + -8);
        *(undefined8 *)(lVar6 + -8) = 0;
        puVar2[-1] = uVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00e02494;
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        uVar8 = *(undefined8 *)(lVar6 + -8);
        *(undefined8 *)(lVar6 + -8) = 0;
        puVar2[-1] = uVar8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      lVar6 = lVar6 + -8;
      local_80 = local_80 + -1;
    } while (lVar9 != lVar6);
    lVar9 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar5 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar9;
  local_80 = (undefined8 *)lVar9;
  local_78 = (undefined8 *)lVar6;
  local_70 = lVar5;
  FUN_00dff9e8(&local_88);
  return;
}


