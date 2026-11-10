/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0226fcec; name: FUN_0226fcec
 */


void FUN_0226fcec(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dda30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dda30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047ddd70,PTR_DAT_047dda38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dda30);
  }
  FUN_0226fd50(PTR_DAT_047dda38);
  return;
}


