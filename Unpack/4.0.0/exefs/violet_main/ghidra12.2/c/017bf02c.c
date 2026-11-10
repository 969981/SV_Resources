/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017bf02c; name: FUN_017bf02c
 */


uint FUN_017bf02c(long param_1,long *param_2,undefined1 *param_3,void *param_4,size_t param_5)

{
  uint uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  if ((*param_2 == 0) || (0x100 < param_5 + 3)) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = *param_3;
    *(undefined2 *)(param_1 + 0xa1) = *(undefined2 *)(param_3 + 2);
    memcpy((void *)(param_1 + 0xa3),param_4,param_5);
    uVar1 = (**(code **)(*(long *)*param_2 + 0x70))
                      ((long *)*param_2,(undefined1 *)(param_1 + 0xa0),param_5 + 3 & 0xffffffff);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return uVar1 & 1;
}


