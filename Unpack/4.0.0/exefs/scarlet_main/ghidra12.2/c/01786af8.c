/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01786af8; name: FUN_01786af8
 */


void FUN_01786af8(void)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = FUN_0126a9c0();
  if (((DAT_04839790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839790), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    FUN_01786b8c(local_18,&local_18,&DAT_03d5b88f);
  }
  return;
}


