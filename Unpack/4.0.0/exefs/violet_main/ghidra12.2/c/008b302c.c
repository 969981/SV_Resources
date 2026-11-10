/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b302c; name: FUN_008b302c
 */


undefined4 FUN_008b302c(long param_1,int param_2)

{
  if (param_2 == 1) {
    return *(undefined4 *)(*(long *)(param_1 + 0x150) + 4);
  }
  if (param_2 == 0) {
    return **(undefined4 **)(param_1 + 0x150);
  }
  return 0;
}


