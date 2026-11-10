/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e4d0c; name: FUN_022e4d0c
 */


void FUN_022e4d0c(undefined8 param_1,long param_2)

{
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  FUN_01e14aa8(param_2 + 0x128);
  FUN_022e4d70(param_1);
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  return;
}


