/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025011c0; name: FUN_025011c0
 */


void FUN_025011c0(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_02501248(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    FUN_02501208(*(undefined8 *)(param_1 + 8));
  }
  return;
}


