/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8c640; name: FUN_01b8c640
 */


undefined2 * FUN_01b8c640(byte *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined2 **)(param_1 + 8), puVar2 == (undefined2 *)0x0)) {
    if ((DAT_0480a790 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480a790);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480a788;
      }
      else {
        DAT_0480a788 = 0;
        __cxa_guard_release(&DAT_0480a790);
        puVar2 = &DAT_0480a788;
      }
    }
    else {
      puVar2 = &DAT_0480a788;
    }
  }
  return puVar2;
}


