/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183c128; name: FUN_0183c128
 */


void FUN_0183c128(long param_1,undefined8 param_2,long param_3)

{
  if (*(int *)(param_3 + 0x36c) == 2) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0) {
      FUN_01840f7c();
      return;
    }
    FUN_0183f110();
    return;
  }
  if (*(int *)(param_3 + 0x36c) == 1) {
    FUN_0183e564();
    return;
  }
  FUN_0183d77c();
  return;
}


