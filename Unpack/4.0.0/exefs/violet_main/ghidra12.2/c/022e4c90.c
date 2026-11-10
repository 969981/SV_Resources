/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4c90; name: FUN_022e4c90
 */


undefined1  [16] FUN_022e4c90(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  FUN_022e4980(param_1 + 0x128);
  auVar1 = FUN_022e4cf4();
  uVar2 = auVar1._8_8_;
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  auVar1._8_8_ = uVar2;
  return auVar1;
}


