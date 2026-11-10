/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b1350; name: FUN_028b1350
 */


void FUN_028b1350(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e23f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e23f0), iVar1 != 0))
  {
    FUN_00100190(&LAB_02c7b4e8,PTR_DAT_047e23f8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e23f0);
  }
  FUN_012cb028(PTR_DAT_047e23f8,0);
  return;
}


