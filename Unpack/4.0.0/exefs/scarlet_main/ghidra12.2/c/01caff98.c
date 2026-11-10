/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01caff98; name: FUN_01caff98
 */


undefined * FUN_01caff98(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04818628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04818628), iVar1 != 0)) {
      memset(&DAT_04818260,0,0x3c8);
      __cxa_guard_release(&DAT_04818628);
      puVar2 = &DAT_04818260;
    }
    else {
      puVar2 = &DAT_04818260;
    }
  }
  return puVar2;
}


