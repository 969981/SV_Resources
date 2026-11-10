/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00568e58; name: FUN_00568e58
 */


void FUN_00568e58(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047ce078 + 0x10;
  FUN_00568ed8(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


