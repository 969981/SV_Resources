/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172c2b0; name: FUN_0172c2b0
 */


void FUN_0172c2b0(long *param_1,long param_2,long param_3,long param_4)

{
  param_3 = param_3 - (*param_1 - param_4);
  if (0 < param_3) {
    nn::crypto::detail::Sha256Impl::Update(param_1 + 2,param_2 + (*param_1 - param_4));
    *param_1 = *param_1 + param_3;
  }
  return;
}


