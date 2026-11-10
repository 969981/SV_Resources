/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053fd2c; name: FUN_0053fd2c
 */


void FUN_0053fd2c(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047cde70 + 0x10;
  FUN_0053fe90(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


