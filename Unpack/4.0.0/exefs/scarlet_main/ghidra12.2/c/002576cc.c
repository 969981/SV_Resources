/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002576cc; name: FUN_002576cc
 */


void FUN_002576cc(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cc240 + 0x10;
  FUN_00256c98(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


