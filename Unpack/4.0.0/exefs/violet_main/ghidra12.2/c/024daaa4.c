/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024daaa4; name: FUN_024daaa4
 */


void FUN_024daaa4(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_024dab2c(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    FUN_024daae8(*(undefined8 *)(param_1 + 8));
  }
  return;
}


