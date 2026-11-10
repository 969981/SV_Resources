/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01807a0c; name: FUN_01807a0c
 */


void FUN_01807a0c(undefined4 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x18) + 8) = param_1;
  }
  return;
}


