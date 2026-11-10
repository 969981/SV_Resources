/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026eff48; name: FUN_026eff48
 */


void FUN_026eff48(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  FUN_026effac(PTR_DAT_047d8cd0);
  return;
}


