/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db5e20; name: FUN_01db5e20
 */


void FUN_01db5e20(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2df0c,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  FUN_01801724(PTR_DAT_047d8a28,0);
  return;
}


