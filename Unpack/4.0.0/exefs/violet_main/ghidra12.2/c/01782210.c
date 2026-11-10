/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01782210; name: FUN_01782210
 */


void FUN_01782210(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xc547045000b5bb0d;
  pcStack_28 = "ti_AIPerceptualComponent";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_0178226c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


