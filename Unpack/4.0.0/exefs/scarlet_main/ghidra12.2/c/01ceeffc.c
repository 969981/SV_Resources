/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ceeffc; name: FUN_01ceeffc
 */


undefined * FUN_01ceeffc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_0481a660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0481a660), iVar1 != 0)) {
      FUN_019870dc(&DAT_0481a650);
      FUN_00100190(PTR_FUN_047d6d70,&DAT_0481a650,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0481a660);
      puVar2 = &DAT_0481a650;
    }
    else {
      puVar2 = &DAT_0481a650;
    }
  }
  return puVar2;
}


