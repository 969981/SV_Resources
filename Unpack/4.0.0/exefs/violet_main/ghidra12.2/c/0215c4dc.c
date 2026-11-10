/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215c4dc; name: FUN_0215c4dc
 */


undefined4 FUN_0215c4dc(long param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    param_2 = param_2 + 1;
  }
  return *param_2;
}


