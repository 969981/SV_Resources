/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7cce8; name: FUN_01e7cce8
 */


void FUN_01e7cce8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d4ec8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4ec8), iVar1 != 0))
  {
    FUN_00100190(&LAB_02a2ca1c,PTR_DAT_047d4ed0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4ec8);
  }
  *(undefined8 *)PTR_DAT_047d4ed8 = *(undefined8 *)PTR_DAT_047d4ed0;
  FUN_02a29318();
  return;
}


