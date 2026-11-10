/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025faa8; name: FUN_0025faa8
 */


void FUN_0025faa8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0448bb28;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_0448bb78;
  FUN_0025fed4(param_1 + 0x60);
  FUN_006c53d4(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


