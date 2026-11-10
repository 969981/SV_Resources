/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c69710; name: FUN_01c69710
 */


undefined8 FUN_01c69710(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_01eaf224();
  return uVar2;
}


