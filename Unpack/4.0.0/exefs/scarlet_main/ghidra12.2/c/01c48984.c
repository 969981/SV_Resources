/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c48984; name: FUN_01c48984
 */


undefined8 * FUN_01c48984(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04812bb0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04812bb0);
      if (iVar1 == 0) {
        puVar2 = &DAT_04812b90;
      }
      else {
        DAT_04812bae = 0;
        DAT_04812bac = 0x100;
        DAT_04812b90 = 0;
        DAT_04812b98 = 0;
        DAT_04812ba0 = 0;
        DAT_04812ba8 = 0x3f800000;
        __cxa_guard_release(&DAT_04812bb0);
        puVar2 = &DAT_04812b90;
      }
    }
    else {
      puVar2 = &DAT_04812b90;
    }
  }
  return puVar2;
}


