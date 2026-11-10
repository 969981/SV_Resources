/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255bfc4; name: FUN_0255bfc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0255bfc4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484fe30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484fe30);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484fdf0;
      }
      else {
        DAT_0484fe20 = 0;
        DAT_0484fe28 = 0;
        DAT_0484fdf0 = 0;
        DAT_0484fdf8 = 0;
        DAT_0484fe08 = _UNK_03cabe58;
        DAT_0484fe00 = _DAT_03cabe50;
        DAT_0484fe18 = _UNK_03caa988;
        DAT_0484fe10 = _DAT_03caa980;
        __cxa_guard_release(&DAT_0484fe30);
        puVar2 = &DAT_0484fdf0;
      }
    }
    else {
      puVar2 = &DAT_0484fdf0;
    }
  }
  return puVar2;
}


