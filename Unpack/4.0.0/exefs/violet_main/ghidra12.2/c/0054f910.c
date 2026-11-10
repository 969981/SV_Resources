/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054f910; name: FUN_0054f910
 */


void FUN_0054f910(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cdf58 + 0x10;
  *(undefined **)param_1 = PTR_DAT_047cdf50 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1;
  FUN_0054fbf0(param_1 + 0x50);
  FUN_006c53d4(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


