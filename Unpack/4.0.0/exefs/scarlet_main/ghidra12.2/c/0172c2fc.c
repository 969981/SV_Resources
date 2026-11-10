/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172c2fc; name: FUN_0172c2fc
 */


void FUN_0172c2fc(undefined8 *param_1)

{
  undefined1 auStack_60 [64];
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  nn::crypto::detail::Sha256Impl::Initialize();
  memcpy(auStack_60,&DAT_03d627a4,0x40);
  nn::crypto::detail::Sha256Impl::Update(param_1 + 2,(ulong)auStack_60);
  return;
}


