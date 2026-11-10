/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8c4b0; name: FUN_01b8c4b0
 */


undefined4 * FUN_01b8c4b0(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if ((DAT_0480a6c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480a6c0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480a6b8;
      }
      else {
        DAT_0480a6b8 = 0;
        __cxa_guard_release(&DAT_0480a6c0);
        puVar2 = &DAT_0480a6b8;
      }
    }
    else {
      puVar2 = &DAT_0480a6b8;
    }
  }
  return puVar2;
}


