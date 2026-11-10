/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4ed8; name: FUN_022e4ed8
 */


void FUN_022e4ed8(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  uVar1 = FUN_01e14aa8(param_1 + 0x128);
  FUN_022e4f34(uVar1,param_2 & 1);
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  return;
}


