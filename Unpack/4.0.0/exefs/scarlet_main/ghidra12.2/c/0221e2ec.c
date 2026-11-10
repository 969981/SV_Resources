/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221e2ec; name: FUN_0221e2ec
 */


void FUN_0221e2ec(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045abec8;
  param_1[4] = &PTR_LAB_045abef8;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x54));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x29));
  FUN_0221e350(param_1 + 0x1c);
  pcVar1 = (code *)param_1[0xd];
  if (pcVar1 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar1)(param_1 + 0x10);
  }
  FUN_0221e390(param_1 + 5);
  return;
}


