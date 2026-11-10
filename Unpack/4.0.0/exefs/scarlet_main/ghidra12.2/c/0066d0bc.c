/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0066d0bc; name: FUN_0066d0bc
 */


void FUN_0066d0bc(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cf310 + 0x10;
  FUN_0066d114(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


