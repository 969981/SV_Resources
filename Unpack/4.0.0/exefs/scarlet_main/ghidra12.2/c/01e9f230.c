/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9f230; name: FUN_01e9f230
 */


void FUN_01e9f230(char *param_1,undefined8 *param_2)

{
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    *param_1 = '\x01';
  }
  else {
    FUN_01ea0db8(param_1 + 8);
  }
  return;
}


