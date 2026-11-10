/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


