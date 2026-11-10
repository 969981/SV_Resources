/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab994; name: FUN_007ab994
 */


bool FUN_007ab994(long param_1)

{
  return (*(uint *)(param_1 + 0x80) & (*(uint *)(param_1 + 0x84) ^ 0xffffffff)) != 0;
}


