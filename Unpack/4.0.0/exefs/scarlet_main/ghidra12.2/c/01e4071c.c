/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e4071c; name: FUN_01e4071c
 */


void FUN_01e4071c(locale *param_1,long *param_2,locale *param_3)

{
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  std::locale::locale(param_1,(locale *)(param_2 + 1));
  std::locale::operator=((locale *)(param_2 + 1),param_3);
  return;
}


