/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca8dc; name: FUN_007ca8dc
 */


ulong FUN_007ca8dc(MessageQueueType *param_1,int param_2)

{
  ulong uVar1;
  ulong local_8;
  
  if (param_2 == 0) {
    nn::os::ReceiveMessageQueue(&local_8,param_1);
    return local_8;
  }
  uVar1 = nn::os::TryReceiveMessageQueue(&local_8,param_1);
  if ((uVar1 & 1) == 0) {
    local_8 = 0;
  }
  return local_8;
}


