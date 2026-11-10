/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f50810; name: FUN_01f50810
 */


void FUN_01f50810(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_00cbd7c0(param_1 + 4,param_2 + 4);
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    *param_1 = '\0';
  }
  else {
    FUN_018ff39c(param_1 + 4,param_2 + 4);
  }
  return;
}


