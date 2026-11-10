/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d06f8; name: FUN_005d06f8
 */


void FUN_005d06f8(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047ce820 + 0x10;
  FUN_001ff1dc(param_1 + 600);
  FUN_001ff1dc(param_1 + 0x208);
  FUN_001ff1dc(param_1 + 0x1b8);
  FUN_002723e4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


