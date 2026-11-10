/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b02710; name: FUN_01b02710
 */


undefined1 * FUN_01b02710(byte *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined1 **)(param_1 + 8), puVar2 == (undefined1 *)0x0)) {
    if ((DAT_04802788 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04802788);
      if (iVar1 == 0) {
        puVar2 = &DAT_04802780;
      }
      else {
        DAT_04802780 = 0;
        __cxa_guard_release(&DAT_04802788);
        puVar2 = &DAT_04802780;
      }
    }
    else {
      puVar2 = &DAT_04802780;
    }
  }
  return puVar2;
}


