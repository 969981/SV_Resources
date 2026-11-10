/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b1d9c; name: FUN_028b1d9c
 */


void FUN_028b1d9c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dcb08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcb98,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dcb08);
  }
  FUN_012cda18(PTR_DAT_047dcb10,0);
  return;
}


