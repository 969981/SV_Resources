/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216b9a0; name: FUN_0216b9a0
 */


void FUN_0216b9a0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dd280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  FUN_01510b8c(PTR_DAT_047dd288,0);
  return;
}


