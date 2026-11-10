/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a06d20; name: FUN_01a06d20
 */


void FUN_01a06d20(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_01bf45d4(param_1 + 8);
    return;
  }
  if (*param_1 == '\0') {
    FUN_01bf4528(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}


