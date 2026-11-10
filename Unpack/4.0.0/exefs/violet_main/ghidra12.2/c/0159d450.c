/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159d450; name: FUN_0159d450
 */


void FUN_0159d450(undefined4 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x38) != 0) {
    if ((*(uint *)(param_2 + 0x4c) & 0xfffffffd) == 1) {
      *(undefined4 *)(param_2 + 0x4c) = 1;
    }
    *(undefined4 *)(param_2 + 0x54) = param_1;
  }
  return;
}


