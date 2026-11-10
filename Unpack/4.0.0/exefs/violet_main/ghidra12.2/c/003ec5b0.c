/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec5b0; name: FUN_003ec5b0
 */


bool FUN_003ec5b0(undefined8 *param_1)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == 1)) {
    return *(int *)(param_1 + 2) == 0;
  }
  return false;
}


