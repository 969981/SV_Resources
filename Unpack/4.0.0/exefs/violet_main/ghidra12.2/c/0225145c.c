/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225145c; name: FUN_0225145c
 */


void FUN_0225145c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dda18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dda18), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047ddc90,PTR_DAT_047dda20,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dda18);
  }
  FUN_022514c0(PTR_DAT_047dda20);
  return;
}


