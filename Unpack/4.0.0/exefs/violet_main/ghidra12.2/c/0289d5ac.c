/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289d5ac; name: FUN_0289d5ac
 */


void FUN_0289d5ac(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  FUN_0289d610(PTR_DAT_047da9c0);
  return;
}


