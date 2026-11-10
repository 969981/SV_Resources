/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01782580; name: FUN_01782580
 */


void FUN_01782580(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x199b8b80dc246826;
  pcStack_28 = "ti_CaptureComponent";
  local_20 = 0x13;
  local_18 = (long *)0x0;
  FUN_017825dc(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


