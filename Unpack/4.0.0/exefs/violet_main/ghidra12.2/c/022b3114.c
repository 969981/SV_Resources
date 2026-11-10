/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b3114; name: FUN_022b3114
 */


void FUN_022b3114(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_022b32ec(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_022b32b8(*(undefined8 *)(param_2 + 8));
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


