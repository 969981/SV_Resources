/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c3a20; name: FUN_003c3a20
 */


bool FUN_003c3a20(long param_1)

{
  if (((*(int *)(param_1 + 0x7d8) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
     (*(int *)(param_1 + 0x5c) == 0x2e)) {
    return *(int *)(param_1 + 0x5a0) != 2;
  }
  return false;
}


