/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00820770; name: FUN_00820770
 */


void FUN_00820770(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,int param_6)

{
  if (param_6 == 0) {
    FUN_019bfa00();
    return;
  }
  if (param_5 + param_6 != param_2) {
    FUN_0081f870();
    return;
  }
  if (param_6 < 0xffff) {
    FUN_008200f0();
    return;
  }
  FUN_0081f180();
  return;
}


