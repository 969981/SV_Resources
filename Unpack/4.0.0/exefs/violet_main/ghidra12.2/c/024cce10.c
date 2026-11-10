/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024cce10; name: FUN_024cce10
 */


undefined8 * FUN_024cce10(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484ceb0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484ceb0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484ce80;
      }
      else {
        DAT_0484cea0 = 0;
        DAT_0484cea8 = 0;
        DAT_0484ce90 = 0;
        DAT_0484ce98 = 0;
        DAT_0484ce80 = 0;
        DAT_0484ce88 = 0;
        __cxa_guard_release(&DAT_0484ceb0);
        puVar2 = &DAT_0484ce80;
      }
    }
    else {
      puVar2 = &DAT_0484ce80;
    }
  }
  return puVar2;
}


