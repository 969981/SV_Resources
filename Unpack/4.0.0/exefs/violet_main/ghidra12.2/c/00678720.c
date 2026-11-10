/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00678720; name: FUN_00678720
 */


void FUN_00678720(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cf448 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047cf440 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_00678a3c(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


