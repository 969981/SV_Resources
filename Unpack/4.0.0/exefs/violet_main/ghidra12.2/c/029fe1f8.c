/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fe1f8; name: FUN_029fe1f8
 */


void FUN_029fe1f8(long param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) == 0) {
    FUN_030bb974(param_1 + 0x20,1);
  }
  if (*(int *)(param_1 + 0x28) != 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  **(undefined4 **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


