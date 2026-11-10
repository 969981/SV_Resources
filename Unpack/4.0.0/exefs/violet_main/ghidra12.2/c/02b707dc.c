/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b707dc; name: FUN_02b707dc
 */


undefined8 FUN_02b707dc(long param_1,uint param_2)

{
  if (param_2 < 6) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x60);
  }
  return 0;
}


