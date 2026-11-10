/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00353180; name: FUN_00353180
 */


void FUN_00353180(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 == -0x8000000000000000) {
    FUN_0038dd70(param_2);
    return;
  }
  if (param_1 == 0x7fffffffffffffff) {
    FUN_0038dd60(param_2);
    return;
  }
  if (param_2 == 3) {
    FUN_0038de20(param_1,3);
    return;
  }
  auVar1 = FUN_0038e1e0(DAT_047ef5f0,DAT_047ef5f8);
  auVar2 = FUN_0038de20(param_1,3);
  FUN_0038dee0(auVar1._0_8_,auVar1._8_8_,auVar2._0_8_,auVar2._8_8_);
  return;
}


