/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4ae0; name: FUN_006c4ae0
 */


void FUN_006c4ae0(void)

{
  int iVar1;
  int local_8 [2];
  
  if (((DAT_047f86c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f86c8), iVar1 != 0)) {
    local_8[0] = nn::os::SdkAllocateTlsSlot((TlsSlot *)&DAT_047f86c0,(_func_void_ulong *)0x0);
    if (local_8[0] != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)local_8,"");
    }
    FUN_00100190(PTR__SdkThreadLocalStorage_047cfa80,&DAT_047f86c0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f86c8);
  }
  nn::os::GetTlsValue(DAT_047f86c0);
  return;
}


