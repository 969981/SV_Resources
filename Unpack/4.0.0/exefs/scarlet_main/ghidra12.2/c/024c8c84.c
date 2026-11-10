/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c8c84; name: FUN_024c8c84
 */


undefined8 * FUN_024c8c84(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484ccb0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484ccb0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484cc80;
      }
      else {
        DAT_0484cca0 = 0;
        DAT_0484cca8 = 0;
        DAT_0484cc90 = 0;
        DAT_0484cc98 = 0;
        DAT_0484cc80 = 0;
        DAT_0484cc88 = 0;
        __cxa_guard_release(&DAT_0484ccb0);
        puVar2 = &DAT_0484cc80;
      }
    }
    else {
      puVar2 = &DAT_0484cc80;
    }
  }
  return puVar2;
}


