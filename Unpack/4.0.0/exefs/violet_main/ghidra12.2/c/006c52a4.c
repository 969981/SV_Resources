/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c52a4; name: FUN_006c52a4
 */


void FUN_006c52a4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::SdkMutexType::Lock();
  if (param_1 != param_2) {
    plVar1 = *(long **)(param_2 + 0x10);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 8) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 8);
    *(long *)(lVar2 + 8) = param_2 + 8;
    *(long *)(param_2 + 8) = lVar2;
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


