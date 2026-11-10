/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067823c; name: FUN_0067823c
 */


void FUN_0067823c(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cf430 + 0x10;
  FUN_001ff1dc(param_1 + 600);
  FUN_001ff1dc(param_1 + 0x208);
  FUN_001ff1dc(param_1 + 0x1b8);
  FUN_002723e4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


