/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819960; name: FUN_00819960
 */


undefined8 FUN_00819960(long param_1,ulong param_2)

{
  if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) < param_2) {
    return 0;
  }
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
  return 1;
}


