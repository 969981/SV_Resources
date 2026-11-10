/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


