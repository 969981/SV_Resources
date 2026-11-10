/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6cf04; name: FUN_00c6cf04
 */


void FUN_00c6cf04(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00885458(*(long *)(param_1 + 200),param_2);
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN_00885458(*(long *)(param_1 + 0xd0),param_2);
  return;
}


