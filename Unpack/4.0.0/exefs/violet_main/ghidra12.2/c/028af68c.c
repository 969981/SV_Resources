/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028af68c; name: FUN_028af68c
 */


void FUN_028af68c(ConditionVariableType *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  while (((lVar1 = *param_3, *(long *)(lVar1 + 0x3d8) != 0 || (*(long *)(lVar1 + 0x3b0) != 0)) &&
         ((*(byte *)(lVar1 + 0x248) & 1) == 0))) {
    nn::os::WaitConditionVariable(param_1,(MutexType *)*param_2);
  }
  return;
}


