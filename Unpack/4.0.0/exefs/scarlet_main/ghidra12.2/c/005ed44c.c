/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ed44c; name: FUN_005ed44c
 */


void FUN_005ed44c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044cfaa0;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_044cfad8;
  FUN_005ed558(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


