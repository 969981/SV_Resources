/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c55e0; name: FUN_006c55e0
 */


void FUN_006c55e0(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cfaa8;
  *(undefined **)param_1 = PTR_DAT_047cfaa0 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


