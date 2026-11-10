/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054eba8; name: FUN_0054eba8
 */


void FUN_0054eba8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044c88d0;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_044c8908;
  FUN_0054ecf8(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


