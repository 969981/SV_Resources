/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f9828; name: FUN_028f9828
 */


void FUN_028f9828(MultiWaitType *param_1)

{
  MultiWaitType *pMVar1;
  
  pMVar1 = param_1 + 0x30;
  FUN_028f9860(pMVar1,*(undefined8 *)pMVar1);
  nn::os::FinalizeMultiWait(param_1);
  FUN_028f98b8(pMVar1);
  return;
}


