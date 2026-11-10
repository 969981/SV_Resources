/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dffa0; name: FUN_018dffa0
 */


undefined * FUN_018dffa0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04807af0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04807af0), iVar1 != 0)) {
      FUN_017cb954(&DAT_048070e0);
      FUN_00100190(FUN_009326a8,&DAT_048070e0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04807af0);
      puVar2 = &DAT_048070e0;
    }
    else {
      puVar2 = &DAT_048070e0;
    }
  }
  return puVar2;
}


