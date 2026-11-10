/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb9a54; name: FUN_00fb9a54
 */


void FUN_00fb9a54(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      std::locale::locale((locale *)(param_1 + 8),(locale *)(param_2 + 8));
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    std::locale::~locale((locale *)(param_1 + 8));
    *param_1 = '\0';
  }
  else {
    std::locale::operator=((locale *)(param_1 + 8),(locale *)(param_2 + 8));
  }
  return;
}


