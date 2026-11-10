/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005efeb8; name: FUN_005efeb8
 */


void FUN_005efeb8(long param_1,MultiWaitHolderType *param_2)

{
  nn::os::InitializeMultiWaitHolder(param_2,(EventType *)(param_1 + 0x10));
  return;
}


