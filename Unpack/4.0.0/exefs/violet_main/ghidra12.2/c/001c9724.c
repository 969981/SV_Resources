/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9724; name: FUN_001c9724
 */


void FUN_001c9724(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_001c8c04(param_2);
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001dc298(param_1,3,2);
  }
  FUN_001c8c04(param_2);
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  FUN_001dc2d8(param_1,3);
  return;
}


