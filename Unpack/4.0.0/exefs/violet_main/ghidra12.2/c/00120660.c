/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120660; name: FUN_00120660
 */


undefined4 FUN_00120660(long param_1)

{
  ThreadType *pTVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1f8);
  pTVar1 = (ThreadType *)(lVar2 + 0x18);
  nn::os::WaitThread(pTVar1);
  nn::os::DestroyThread(pTVar1);
  return *(undefined4 *)(lVar2 + 0x1d8);
}


