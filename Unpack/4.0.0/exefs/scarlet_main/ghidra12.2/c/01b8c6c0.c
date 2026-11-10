/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8c6c0; name: FUN_01b8c6c0
 */


undefined8 * FUN_01b8c6c0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480a7b0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480a7b0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0480a7a8;
      }
      else {
        DAT_0480a7a8 = 0;
        __cxa_guard_release(&DAT_0480a7b0);
        puVar2 = &DAT_0480a7a8;
      }
    }
    else {
      puVar2 = &DAT_0480a7a8;
    }
  }
  return puVar2;
}


