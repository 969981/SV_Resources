/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fdbf0; name: FUN_001fdbf0
 */


void FUN_001fdbf0(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cbac0 + 0x10;
  FUN_00247104(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


