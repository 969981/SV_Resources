/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032301bc; name: FUN_032301bc
 */


void FUN_032301bc(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_3 < 0x281) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x10));
    plVar1 = *(long **)(*(long *)(param_1 + 0x58) + (param_3 + 0xf >> 1 & 0x7ffffffffffffff8));
    plVar1[0xd] = plVar1[0xd] + 1;
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03230260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),param_2,param_3);
  return;
}


