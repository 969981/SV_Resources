/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00252b9c; name: FUN_00252b9c
 */


void FUN_00252b9c(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cc1a8 + 0x10;
  FUN_00252bf0(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


