/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ad5b0; name: FUN_012ad5b0
 */


void FUN_012ad5b0(undefined8 param_1)

{
  undefined8 local_38;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x43118265ec705435;
  pcStack_28 = "pe_AnimationContainerComponent";
  local_20 = 0x1e;
  local_18 = (long *)0x0;
  local_38 = param_1;
  FUN_012adc68(&local_30,&local_38);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


