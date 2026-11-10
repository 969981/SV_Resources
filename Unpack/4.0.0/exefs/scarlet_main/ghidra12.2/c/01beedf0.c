/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01beedf0; name: FUN_01beedf0
 */


undefined8 FUN_01beedf0(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_0480f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480f8d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0480f8d8);
  }
  if (((*PTR_DAT_047d57c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d57c8), iVar1 != 0))
  {
    FUN_00100190(&LAB_02a30078,PTR_DAT_047d57d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d57c8);
  }
  lVar2 = *(long *)PTR_DAT_047d57d0;
  *(long *)PTR_DAT_047d57d8 = lVar2;
  *(undefined8 *)(lVar2 + 0xc58) = 0xffffffffffffffff;
  return 0;
}


