/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db6b08; name: FUN_01db6b08
 */


void FUN_01db6b08(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2e150,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  FUN_01874d4c(PTR_DAT_047d8558,0);
  return;
}


