/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b2401c; name: FUN_00b2401c
 */


void FUN_00b2401c(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    param_1[4] = '\0';
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
      param_1[4] = '\x01';
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
    *param_1 = '\x01';
    return;
  }
  if (param_1[4] == '\0') {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
      param_1[4] = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    param_1[4] = '\0';
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  return;
}


