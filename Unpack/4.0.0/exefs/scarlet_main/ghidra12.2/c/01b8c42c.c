/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8c42c; name: FUN_01b8c42c
 */


undefined4 * FUN_01b8c42c(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if ((DAT_0480a670 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480a670);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480a668;
      }
      else {
        DAT_0480a66c = 0;
        DAT_0480a668 = 0;
        __cxa_guard_release(&DAT_0480a670);
        puVar2 = &DAT_0480a668;
      }
    }
    else {
      puVar2 = &DAT_0480a668;
    }
  }
  return puVar2;
}


