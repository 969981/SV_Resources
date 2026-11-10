/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0a8c; name: FUN_021f0a8c
 */


void FUN_021f0a8c(long param_1)

{
  FUN_00cf4cfc(*(undefined8 *)(param_1 + 0x70));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
    FUN_021f712c(*(long *)(param_1 + 0x70),1);
    return;
  }
  return;
}


