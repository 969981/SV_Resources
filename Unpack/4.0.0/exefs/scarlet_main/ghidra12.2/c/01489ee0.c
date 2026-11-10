/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01489ee0; name: FUN_01489ee0
 */


undefined8 FUN_01489ee0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_04809360 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04809360), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04809360);
  }
  if (((*PTR_DAT_047d4c80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c80), iVar2 != 0))
  {
    FUN_00100190(&LAB_02acf048,PTR_DAT_047d4c88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c80);
  }
  *(undefined8 *)PTR_DAT_047d4c90 = *(undefined8 *)PTR_DAT_047d4c88;
  uVar1 = FUN_01489fa4();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


