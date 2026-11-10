/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9faf8; name: FUN_01e9faf8
 */


void FUN_01e9faf8(char *param_1,undefined8 *param_2)

{
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    *param_1 = '\x01';
  }
  else {
    FUN_01ea0e70(param_1 + 8);
  }
  return;
}


