/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a046d4; name: FUN_01a046d4
 */


undefined4 FUN_01a046d4(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 4) && (param_3 < *(byte *)(param_1 + (ulong)param_2 * 0x98 + 0x9e))) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 0x98 + (ulong)param_3 * 4 + 8);
  }
  return 0;
}


