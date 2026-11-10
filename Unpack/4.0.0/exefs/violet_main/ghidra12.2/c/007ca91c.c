/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


