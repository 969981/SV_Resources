/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


