/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006e01b0; name: FUN_006e01b0
 */


void FUN_006e01b0(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cfd98 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047cfd90 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_006e0440(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


