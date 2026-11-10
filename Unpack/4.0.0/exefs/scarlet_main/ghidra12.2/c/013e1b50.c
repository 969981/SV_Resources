/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e1b50; name: FUN_013e1b50
 */


undefined8 FUN_013e1b50(void)

{
  int iVar1;
  
  if (((DAT_04832648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04832648), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04832648);
  }
  if (((*PTR_DAT_047d8168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8168), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a8a92c,PTR_DAT_047d8170,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8168);
  }
  *(undefined8 *)PTR_DAT_047d8178 = *(undefined8 *)PTR_DAT_047d8170;
  FUN_013e1bfc();
  return 0;
}


