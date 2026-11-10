/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01876aa4; name: FUN_01876aa4
 */


void FUN_01876aa4(long *param_1,void *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  long lVar5;
  long local_68;
  void *pvStack_60;
  void *local_58;
  long local_50;
  long *plStack_48;
  
  if (param_1[1] != param_1[2]) {
    FUN_01876f00();
    return;
  }
  plVar1 = param_1 + 3;
  lVar3 = FUN_01876c54(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar5 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 6,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  __dest = (void *)(local_68 + (lVar4 - lVar5 >> 6) * 0x40);
  local_50 = local_68 + lVar3 * 0x40;
  lVar5 = *plVar1;
  pvStack_60 = __dest;
  local_58 = __dest;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    memcpy(__dest,param_2,0x40);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memcpy(__dest,param_2,0x40);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    __dest = local_58;
  }
  local_58 = (void *)((long)__dest + 0x40);
  FUN_01876ca4(param_1,&local_68);
  FUN_01876d0c(&local_68);
  return;
}


