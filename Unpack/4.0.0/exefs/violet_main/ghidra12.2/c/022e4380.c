/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4380; name: FUN_022e4380
 */


byte FUN_022e4380(long param_1)

{
  byte bVar1;
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  if (*(long *)(param_1 + 0x350) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x350) + 0x1e8) & 1;
  }
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  return bVar1;
}


