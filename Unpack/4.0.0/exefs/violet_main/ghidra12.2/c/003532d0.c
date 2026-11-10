/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003532d0; name: FUN_003532d0
 */


long FUN_003532d0(undefined8 param_1)

{
  double dVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_0038e6b0(param_1,DAT_047ef5e8);
  dVar1 = (double)auVar2._0_8_ * 1000.0 + (double)auVar2._8_4_ / 1000000.0 + 0.999999999;
  if (dVar1 < 0.0) {
    return 0;
  }
  if (9.223372036854776e+18 < dVar1) {
    return 0x7fffffffffffffff;
  }
  return (long)dVar1;
}


