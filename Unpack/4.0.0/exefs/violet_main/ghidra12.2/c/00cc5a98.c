/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc5a98; name: FUN_00cc5a98
 */


undefined * FUN_00cc5a98(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e1c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e1c58), iVar1 != 0))
  {
    FUN_00100190(&LAB_02bc72d0,PTR_DAT_047e1c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e1c58);
  }
  return PTR_DAT_047e1c60;
}


