/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b64ed4; name: FUN_02b64ed4
 */


void FUN_02b64ed4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return;
}


