/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ccd54; name: FUN_024ccd54
 */


void FUN_024ccd54(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_024ccdd0(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    FUN_024ccd94(*(undefined8 *)(param_1 + 8));
  }
  return;
}


