/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01848800; name: FUN_01848800
 */


uint FUN_01848800(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((DAT_04840580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840580), iVar1 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  uVar2 = FUN_01848ba8();
  uVar3 = FUN_0184890c();
  uVar4 = FUN_018488a0();
  return uVar2 & uVar3 & uVar4 & 1;
}


