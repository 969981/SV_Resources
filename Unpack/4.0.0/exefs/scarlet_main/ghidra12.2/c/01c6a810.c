/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6a810; name: FUN_01c6a810
 */


undefined * FUN_01c6a810(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_048149f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048149f8), iVar1 != 0)) {
      FUN_015c52ec(&DAT_048140e0);
      __cxa_guard_release(&DAT_048149f8);
      puVar2 = &DAT_048140e0;
    }
    else {
      puVar2 = &DAT_048140e0;
    }
  }
  return puVar2;
}


