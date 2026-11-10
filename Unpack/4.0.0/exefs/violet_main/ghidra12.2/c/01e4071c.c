/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e4071c; name: FUN_01e4071c
 */


void FUN_01e4071c(locale *param_1,long *param_2,locale *param_3)

{
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  std::locale::locale(param_1,(locale *)(param_2 + 1));
  std::locale::operator=((locale *)(param_2 + 1),param_3);
  return;
}


