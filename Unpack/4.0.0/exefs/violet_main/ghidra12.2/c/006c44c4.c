/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c44c4; name: FUN_006c44c4
 */


void FUN_006c44c4(MultiWaitType *param_1)

{
  *(MultiWaitType **)(param_1 + 0x30) = param_1 + 0x30;
  *(MultiWaitType **)(param_1 + 0x38) = param_1 + 0x30;
  nn::os::InitializeMultiWait(param_1);
  return;
}


