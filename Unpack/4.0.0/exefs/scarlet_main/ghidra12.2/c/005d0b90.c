/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d0b90; name: FUN_005d0b90
 */


void FUN_005d0b90(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047ce838 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047ce830 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_005d0eac(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


