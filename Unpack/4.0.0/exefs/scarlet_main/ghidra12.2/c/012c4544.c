/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c4544; name: FUN_012c4544
 */


void FUN_012c4544(undefined8 *param_1)

{
  param_1[2] = 0xffffffffffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x1f;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1e,0,1);
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x26),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2a),true,0);
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0xbf800000;
  return;
}


