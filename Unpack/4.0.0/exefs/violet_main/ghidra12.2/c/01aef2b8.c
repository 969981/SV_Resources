/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aef2b8; name: FUN_01aef2b8
 */


void FUN_01aef2b8(undefined8 *param_1)

{
  *param_1 = &DAT_0451a9d0;
  param_1[4] = &PTR_LAB_0451aa00;
  FUN_01aef2f4(param_1 + 9);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  return;
}


