/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796828; name: FUN_00796828
 */


long FUN_00796828(long param_1,long param_2)

{
  if (param_1 != param_2) {
    memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  }
  return param_1;
}


