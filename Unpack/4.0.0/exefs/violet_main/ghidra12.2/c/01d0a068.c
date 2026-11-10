/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0a068; name: FUN_01d0a068
 */


undefined8 * FUN_01d0a068(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0481cce8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481cce8);
      if (iVar1 == 0) {
        puVar2 = &DAT_0481ccd0;
      }
      else {
        DAT_0481ccd0 = 0;
        DAT_0481ccd8 = 0;
        DAT_0481cce0 = 0;
        __cxa_guard_release(&DAT_0481cce8);
        puVar2 = &DAT_0481ccd0;
      }
    }
    else {
      puVar2 = &DAT_0481ccd0;
    }
  }
  return puVar2;
}


