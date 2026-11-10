/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00248470; name: FUN_00248470
 */


void FUN_00248470(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0448a918;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_0448a968;
  FUN_002485c0(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


