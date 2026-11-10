/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021dbf44; name: FUN_021dbf44
 */


void FUN_021dbf44(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045a7170;
  param_1[4] = &PTR_LAB_045a71a0;
  pcVar1 = (code *)param_1[0x15];
  if (pcVar1 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar1)(param_1 + 0x18);
  }
  FUN_021dbf98(param_1 + 8);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 6));
  return;
}


