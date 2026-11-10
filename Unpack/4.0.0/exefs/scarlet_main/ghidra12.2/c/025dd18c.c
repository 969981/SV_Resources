/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025dd18c; name: FUN_025dd18c
 */


undefined8 * FUN_025dd18c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04853840 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04853840);
      if (iVar1 == 0) {
        puVar2 = &DAT_04853838;
      }
      else {
        DAT_04853838 = 0;
        __cxa_guard_release(&DAT_04853840);
        puVar2 = &DAT_04853838;
      }
    }
    else {
      puVar2 = &DAT_04853838;
    }
  }
  return puVar2;
}


