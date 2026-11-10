/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d91984; name: FUN_01d91984
 */


void FUN_01d91984(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8300), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a1510c,PTR_DAT_047d8308,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8300);
  }
  *(undefined8 *)PTR_DAT_047d8310 = *(undefined8 *)PTR_DAT_047d8308;
  return;
}


