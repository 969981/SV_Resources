/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b1ccc; name: FUN_028b1ccc
 */


void FUN_028b1ccc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  FUN_01572e08(PTR_DAT_047d8b38,0);
  return;
}


