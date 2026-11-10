/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f2d98; name: FUN_018f2d98
 */


void FUN_018f2d98(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  *(undefined8 *)PTR_DAT_047d9220 = *(undefined8 *)PTR_DAT_047d9218;
  DAT_0483bdad = 1;
  return;
}


