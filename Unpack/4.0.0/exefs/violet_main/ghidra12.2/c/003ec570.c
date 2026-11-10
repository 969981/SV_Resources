/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec570; name: FUN_003ec570
 */


bool FUN_003ec570(undefined8 *param_1,int param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == param_2)) {
    return true;
  }
  return param_2 == 0 && *(int *)(param_1 + 1) == 0;
}


