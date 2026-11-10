/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005db400; name: FUN_005db400
 */


void FUN_005db400(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047ce950 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047ce948 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_005db690(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


