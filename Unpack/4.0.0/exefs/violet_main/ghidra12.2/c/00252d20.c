/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00252d20; name: FUN_00252d20
 */


void FUN_00252d20(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0448b460;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_0448b4b0;
  FUN_00252e70(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


