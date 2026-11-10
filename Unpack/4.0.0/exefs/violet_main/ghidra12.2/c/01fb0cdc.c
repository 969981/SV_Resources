/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb0cdc; name: FUN_01fb0cdc
 */


void FUN_01fb0cdc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d4d78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4d78), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4d90,PTR_DAT_047d4d80,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4d78);
  }
  FUN_01fb0d40(PTR_DAT_047d4d80);
  return;
}


