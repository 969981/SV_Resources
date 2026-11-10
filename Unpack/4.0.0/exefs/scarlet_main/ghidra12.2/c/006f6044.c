/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006f6044; name: FUN_006f6044
 */


void FUN_006f6044(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044da9e0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_044daa18;
  FUN_006f6194(param_1 + 0x60);
  FUN_006c53d4(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


