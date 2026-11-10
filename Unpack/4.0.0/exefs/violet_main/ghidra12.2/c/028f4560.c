/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f4560; name: FUN_028f4560
 */


void FUN_028f4560(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  FUN_012d1138(PTR_DAT_047d91d8,0);
  return;
}


