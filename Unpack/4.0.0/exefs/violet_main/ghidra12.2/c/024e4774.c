/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e4774; name: FUN_024e4774
 */


undefined8 * FUN_024e4774(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484d5d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484d5d0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484d5b0;
      }
      else {
        DAT_0484d5c0 = 0;
        DAT_0484d5c8 = 0;
        DAT_0484d5b0 = 0;
        DAT_0484d5b8 = 0;
        __cxa_guard_release(&DAT_0484d5d0);
        puVar2 = &DAT_0484d5b0;
      }
    }
    else {
      puVar2 = &DAT_0484d5b0;
    }
  }
  return puVar2;
}


