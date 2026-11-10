/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfb894; name: FUN_01dfb894
 */


undefined4 FUN_01dfb894(long param_1,uint *param_2)

{
  if (*param_2 < 0x23) {
    return *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)*param_2 * 4);
  }
  return 0xffffffff;
}


