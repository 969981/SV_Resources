/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c40310; name: FUN_01c40310
 */


undefined4 FUN_01c40310(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_04839660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839660), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  DAT_04839648 = DAT_04839650;
  if (DAT_04839650 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_04839650 + 0x38);
  }
  return uVar1;
}


