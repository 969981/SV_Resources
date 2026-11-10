/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a49c8; name: FUN_022a49c8
 */


void FUN_022a49c8(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_022a4bf8(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_022a4b98(*(undefined8 *)(param_2 + 8));
    return;
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


