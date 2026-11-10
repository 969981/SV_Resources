/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ce5ef4; name: FUN_01ce5ef4
 */


undefined * FUN_01ce5ef4(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_0481a0f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0481a0f0), iVar1 != 0)) {
      memset(&DAT_04819df8,0,0x2f4);
      __cxa_guard_release(&DAT_0481a0f0);
      puVar2 = &DAT_04819df8;
    }
    else {
      puVar2 = &DAT_04819df8;
    }
  }
  return puVar2;
}


