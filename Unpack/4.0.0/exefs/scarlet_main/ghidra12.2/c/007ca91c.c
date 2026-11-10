/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca91c; name: FUN_007ca91c
 */


undefined8 FUN_007ca91c(MessageQueueType *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    nn::os::JamMessageQueue(param_1,param_2);
    return 1;
  }
  uVar1 = nn::os::TryJamMessageQueue(param_1,param_2);
  return uVar1;
}


