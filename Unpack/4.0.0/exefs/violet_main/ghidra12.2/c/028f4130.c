/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f4130; name: FUN_028f4130
 */


void FUN_028f4130(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e2410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2410), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2508,PTR_DAT_047e2418,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2410);
  }
  FUN_028f4194(PTR_DAT_047e2418);
  return;
}


