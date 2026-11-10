/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c1ba0; name: FUN_017c1ba0
 */


undefined4 FUN_017c1ba0(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x30);
}


