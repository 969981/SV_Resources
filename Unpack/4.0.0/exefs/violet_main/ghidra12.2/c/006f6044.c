/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006f6044; name: FUN_006f6044
 */


void FUN_006f6044(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044da9e0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_044daa18;
  FUN_006f6194(param_1 + 0x60);
  FUN_006c53d4(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


