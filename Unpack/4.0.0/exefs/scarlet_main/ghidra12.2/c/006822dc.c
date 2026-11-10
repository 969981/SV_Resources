/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006822dc; name: FUN_006822dc
 */


void FUN_006822dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044d5160;
  FUN_00682334(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


