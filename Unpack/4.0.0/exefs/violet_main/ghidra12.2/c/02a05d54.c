/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a05d54; name: FUN_02a05d54
 */


undefined4 FUN_02a05d54(long param_1)

{
  if ((ulong)(*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 2) < 2) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x158) + 4);
}


