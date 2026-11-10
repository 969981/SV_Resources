/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2ac4; name: FUN_005f2ac4
 */


void FUN_005f2ac4(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047ceb68 + 0x10;
  FUN_005f2c88(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


