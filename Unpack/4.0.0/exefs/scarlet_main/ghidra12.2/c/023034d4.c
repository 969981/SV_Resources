/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023034d4; name: FUN_023034d4
 */


undefined8 * FUN_023034d4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04845418 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04845418);
      if (iVar1 == 0) {
        puVar2 = &DAT_04845408;
      }
      else {
        DAT_04845408 = 0x40490fdb00000000;
        DAT_04845410 = 0x40490fdb;
        __cxa_guard_release(&DAT_04845418);
        puVar2 = &DAT_04845408;
      }
    }
    else {
      puVar2 = &DAT_04845408;
    }
  }
  return puVar2;
}


