/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4b84; name: FUN_006c4b84
 */


void FUN_006c4b84(undefined8 *param_1)

{
  int iVar1;
  Result *pRVar2;
  int local_30 [2];
  int local_28 [2];
  
  pRVar2 = (Result *)local_30;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((DAT_047f86c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f86c8), iVar1 != 0)) {
    local_30[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_047f86c0,(_func_void_ulong *)0x0);
    if (local_30[0] != 0) goto LAB_006c4ca0;
    FUN_00100190(PTR__SdkThreadLocalStorage_047cfa80,&DAT_047f86c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f86c8);
  }
  nn::os::GetTlsValue(DAT_047f86c0);
  if (((DAT_047f86c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f86c8), iVar1 != 0)) {
    local_28[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_047f86c0,(_func_void_ulong *)0x0);
    if (local_28[0] != 0) {
      pRVar2 = (Result *)local_28;
LAB_006c4ca0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,pRVar2,"");
    }
    FUN_00100190(PTR__SdkThreadLocalStorage_047cfa80,&DAT_047f86c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f86c8);
  }
  nn::os::SetTlsValue(DAT_047f86c0,param_1);
  return;
}


