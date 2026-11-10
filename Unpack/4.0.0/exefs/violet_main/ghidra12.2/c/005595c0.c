/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005595c0; name: FUN_005595c0
 */


void FUN_005595c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044c9210;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_044c9248;
  FUN_00559710(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


