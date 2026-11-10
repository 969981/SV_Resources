/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c51d0; name: FUN_006c51d0
 */


void FUN_006c51d0(byte *param_1)

{
  byte *pbVar1;
  
  nn::os::SdkMutexType::Lock();
  if ((*param_1 & 1) == 0) {
    *param_1 = 1;
    for (pbVar1 = *(byte **)(param_1 + 0x10); pbVar1 != param_1 + 8; pbVar1 = *(byte **)(pbVar1 + 8)
        ) {
      FUN_006c50a0(pbVar1 + -8);
    }
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


