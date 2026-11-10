/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014b65d8; name: FUN_014b65d8
 */


undefined8 FUN_014b65d8(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  lVar2 = *(long *)PTR_DAT_047dd4c8;
  *(long *)PTR_DAT_047dd4d0 = lVar2;
  return *(undefined8 *)(lVar2 + 0x28);
}


