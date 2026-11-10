/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a52710; name: FUN_01a52710
 */


undefined * FUN_01a52710(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04833a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04833a08), iVar1 != 0)) {
      FUN_019e6d34(&DAT_04833888);
      FUN_00100190(&LAB_00a1a68c,&DAT_04833888,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04833a08);
      puVar2 = &DAT_04833888;
    }
    else {
      puVar2 = &DAT_04833888;
    }
  }
  return puVar2;
}


