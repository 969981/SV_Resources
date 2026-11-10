/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4cb4; name: FUN_006c4cb4
 */


void FUN_006c4cb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  Result *pRVar5;
  long lVar6;
  long *plVar7;
  int local_30 [2];
  int local_28 [2];
  
  pRVar5 = (Result *)local_30;
  if (((DAT_047f86c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_047f86c8), iVar4 != 0)) {
    local_30[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_047f86c0,(_func_void_ulong *)0x0);
    if (local_30[0] != 0) goto LAB_006c4e10;
    FUN_00100190(PTR__SdkThreadLocalStorage_047cfa80,&DAT_047f86c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f86c8);
  }
  nn::os::GetTlsValue(DAT_047f86c0);
  if (((DAT_047f86c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_047f86c8), iVar4 != 0)) {
    local_28[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_047f86c0,(_func_void_ulong *)0x0);
    if (local_28[0] != 0) {
      pRVar5 = (Result *)local_28;
LAB_006c4e10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,pRVar5,"");
    }
    FUN_00100190(PTR__SdkThreadLocalStorage_047cfa80,&DAT_047f86c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f86c8);
  }
  nn::os::SetTlsValue(DAT_047f86c0,0);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


