/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01363bf0; name: FUN_01363bf0
 */


undefined4 FUN_01363bf0(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x10 + 8);
  }
  return 0;
}


