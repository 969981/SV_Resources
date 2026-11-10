/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f79700; name: FUN_01f79700
 */


void FUN_01f79700(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    *(undefined ***)(param_1 + 8) = &PTR_LAB_0455d788;
    FUN_01f7b094(param_1 + 0x10,param_2 + 8);
    *param_1 = '\x01';
  }
  else if (param_1 + 8 != param_2) {
    FUN_01f7af68(param_1 + 0x10,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  return;
}


