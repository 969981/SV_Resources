/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9e22c; name: FUN_01c9e22c
 */


undefined8 * FUN_01c9e22c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_048170e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048170e8);
      if (iVar1 == 0) {
        puVar2 = &DAT_048170d8;
      }
      else {
        DAT_048170d8 = 0x100000000;
        DAT_048170e0 = 0x5dc00000000;
        __cxa_guard_release(&DAT_048170e8);
        puVar2 = &DAT_048170d8;
      }
    }
    else {
      puVar2 = &DAT_048170d8;
    }
  }
  return puVar2;
}


