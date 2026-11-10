/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028556cc; name: FUN_028556cc
 */


void FUN_028556cc(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xdd344f64c81e84d;
  pcStack_28 = "CloseSession";
  local_20 = 0xc;
  local_18 = (long *)0x0;
  FUN_019166ac(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


