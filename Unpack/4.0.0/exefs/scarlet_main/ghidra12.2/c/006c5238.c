/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5238; name: FUN_006c5238
 */


void FUN_006c5238(byte *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  
  nn::os::SdkMutexType::Lock();
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  pbVar3 = param_1 + 8;
  *plVar1 = *(long *)pbVar3;
  *(byte **)(lVar2 + 8) = pbVar3;
  *(long **)(*(long *)pbVar3 + 8) = plVar1;
  *(long *)pbVar3 = lVar2;
  if ((*param_1 & 1) != 0) {
    FUN_006c50a0(param_2);
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


