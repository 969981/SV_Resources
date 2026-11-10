/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01da0968; name: FUN_01da0968
 */


void FUN_01da0968(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  *(undefined8 *)PTR_DAT_047d8560 = *(undefined8 *)PTR_DAT_047d8558;
  FUN_01dbf9b8();
  return;
}


