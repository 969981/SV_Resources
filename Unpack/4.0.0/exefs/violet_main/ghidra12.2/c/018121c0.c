/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018121c0; name: FUN_018121c0
 */


void FUN_018121c0(undefined8 *param_1)

{
  FUN_01812200();
  *param_1 = &PTR_LAB_04581f18;
  param_1[4] = &PTR_LAB_04581f48;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  return;
}


