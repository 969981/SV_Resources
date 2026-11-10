/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054eee8; name: FUN_0054eee8
 */


void FUN_0054eee8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_044c8980;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_044c89b8;
  FUN_0054f038(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


