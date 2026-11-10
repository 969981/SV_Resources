/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca8c0; name: FUN_007ca8c0
 */


undefined8 FUN_007ca8c0(MessageQueueType *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    nn::os::SendMessageQueue(param_1,param_2);
    return 1;
  }
  uVar1 = nn::os::TrySendMessageQueue(param_1,param_2);
  return uVar1;
}


