/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018deb8c; name: FUN_018deb8c
 */


void FUN_018deb8c(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 local_48;
  undefined8 *local_40;
  char local_38;
  
  FUN_00f338dc(&local_48);
  fVar1 = *(float *)(param_1 + 0x520);
  FUN_01daf000(fVar1,local_48,param_2);
  *(float *)(param_1 + 0x520) = fVar1 + 0.01;
  if (local_38 != '\0') {
    *local_40 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_40 + 1));
  }
  return;
}


