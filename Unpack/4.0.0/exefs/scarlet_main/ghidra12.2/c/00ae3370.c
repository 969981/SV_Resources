/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae3370; name: FUN_00ae3370
 */


void FUN_00ae3370(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    param_1[4] = '\0';
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
      param_1[4] = '\x01';
    }
    *param_1 = '\x01';
  }
  else {
    if (param_1[4] != '\0') {
      if (*param_2 == '\0') {
        param_1[4] = '\0';
        return;
      }
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
      return;
    }
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
      param_1[4] = '\x01';
      return;
    }
  }
  return;
}


