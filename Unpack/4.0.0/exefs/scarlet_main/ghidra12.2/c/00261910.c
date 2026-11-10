/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00261910; name: FUN_00261910
 */


void FUN_00261910(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0448bca0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_0448bcf0;
  FUN_00261de4(param_1 + 0x60);
  FUN_006c53d4(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


