/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dad01c; name: FUN_01dad01c
 */


void FUN_01dad01c(void)

{
  int iVar1;
  
  FUN_016003a0();
  FUN_01dad178();
  if (((*PTR_DAT_047d82d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d82d8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8aa0,PTR_DAT_047d82e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82d8);
  }
  *(undefined8 *)PTR_DAT_047d82e8 = *(undefined8 *)PTR_DAT_047d82e0;
  FUN_01dad1d8();
  if (((*PTR_DAT_047d82a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82a0);
  }
  *(undefined8 *)PTR_DAT_047d82b0 = *(undefined8 *)PTR_DAT_047d82a8;
  FUN_01dad254();
  FUN_01dacea0();
  FUN_01dad294();
  FUN_01dad308();
  FUN_01dad328();
  if (((*PTR_DAT_047d8a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2dcb8,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  *(undefined8 *)PTR_DAT_047d8a80 = *(undefined8 *)PTR_DAT_047d8a78;
  FUN_01dad35c();
  return;
}


