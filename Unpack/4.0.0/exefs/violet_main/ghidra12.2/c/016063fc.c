/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016063fc; name: FUN_016063fc
 */


void FUN_016063fc(undefined8 *param_1)

{
  FUN_01606448();
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_04602d00;
  param_1[1] = &PTR_LAB_04602d80;
  param_1[5] = 0;
  param_1[6] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 7),true,0);
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}


