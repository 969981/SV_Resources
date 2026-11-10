/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019063c8; name: FUN_019063c8
 */


void FUN_019063c8(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_019067ec();
    return;
  }
  plVar1 = param_1 + 3;
  lVar3 = FUN_01906564(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar5 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 2,2);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar6 = (undefined4 *)(local_68 + (lVar4 - lVar5 >> 2) * 4);
  local_50 = local_68 + lVar3 * 4;
  lVar5 = *plVar1;
  puStack_60 = puVar6;
  local_58 = puVar6;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    *puVar6 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar6 = *param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar6 = local_58;
  }
  local_58 = puVar6 + 1;
  FUN_019065b4(param_1,&local_68);
  FUN_0190661c(&local_68);
  return;
}


