/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229afc4; name: FUN_0229afc4
 */


undefined8 * FUN_0229afc4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04842e80 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04842e80);
      if (iVar1 == 0) {
        puVar2 = &DAT_04842e40;
      }
      else {
        DAT_04842e70 = 0;
        DAT_04842e78 = 0;
        DAT_04842e60 = 0;
        DAT_04842e68 = 0;
        DAT_04842e50 = 0;
        DAT_04842e58 = 0;
        DAT_04842e40 = 0;
        DAT_04842e48 = 0;
        __cxa_guard_release(&DAT_04842e80);
        puVar2 = &DAT_04842e40;
      }
    }
    else {
      puVar2 = &DAT_04842e40;
    }
  }
  return puVar2;
}


