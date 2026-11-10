/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db6308; name: FUN_01db6308
 */


void FUN_01db6308(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2dfb4,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  FUN_01875ad8(PTR_DAT_047d8940,0);
  return;
}


