/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980090; name: FUN_02980090
 */


uint FUN_02980090(long param_1,ulong param_2)

{
  return (uint)(*(ulong *)(param_1 + 0x90) >> (param_2 & 0x3f)) & 1;
}


