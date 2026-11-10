/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006e8234; name: FUN_006e8234
 */


void FUN_006e8234(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cfe48 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047cfe40 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_006e859c(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


