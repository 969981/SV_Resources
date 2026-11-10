/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01983d50; name: FUN_01983d50
 */


void FUN_01983d50(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 local_48;
  undefined8 *local_40;
  char local_38;
  
  FUN_00f338dc(&local_48);
  fVar1 = *(float *)(param_1 + 0x520);
  FUN_01983dd4(fVar1,local_48,param_2);
  *(float *)(param_1 + 0x520) = fVar1 + 0.01;
  if (local_38 != '\0') {
    *local_40 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_40 + 1));
  }
  return;
}


