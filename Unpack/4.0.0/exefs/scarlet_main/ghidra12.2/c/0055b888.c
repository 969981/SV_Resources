/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055b888; name: FUN_0055b888
 */


void FUN_0055b888(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044c9470;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_044c94a8;
  FUN_0055b9d8(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


