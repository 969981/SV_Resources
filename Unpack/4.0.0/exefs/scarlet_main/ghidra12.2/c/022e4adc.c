/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e4adc; name: FUN_022e4adc
 */


bool FUN_022e4adc(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  piVar2 = (int *)FUN_022e4980(param_1 + 0x128);
  iVar1 = *piVar2;
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  return iVar1 == 1;
}


