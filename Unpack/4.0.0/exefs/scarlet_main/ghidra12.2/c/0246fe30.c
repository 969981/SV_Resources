/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0246fe30; name: FUN_0246fe30
 */


undefined8 * FUN_0246fe30(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04849a00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04849a00);
      if (iVar1 == 0) {
        puVar2 = &DAT_048499f0;
      }
      else {
        DAT_048499f0 = 0x44700000c4700000;
        DAT_048499f8 = 0x44070000c4070000;
        __cxa_guard_release(&DAT_04849a00);
        puVar2 = &DAT_048499f0;
      }
    }
    else {
      puVar2 = &DAT_048499f0;
    }
  }
  return puVar2;
}


