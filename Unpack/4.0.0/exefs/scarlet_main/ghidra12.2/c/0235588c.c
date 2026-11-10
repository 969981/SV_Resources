/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0235588c; name: FUN_0235588c
 */


undefined * FUN_0235588c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04848348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04848348), iVar1 != 0)) {
      FUN_02355264(&DAT_04848310);
      FUN_00100190(FUN_02b85124,&DAT_04848310,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04848348);
      puVar2 = &DAT_04848310;
    }
    else {
      puVar2 = &DAT_04848310;
    }
  }
  return puVar2;
}


