/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f0020; name: FUN_012f0020
 */


void FUN_012f0020(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x517268bc305b66f2;
  pcStack_28 = "trinity_NavmeshComponent";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_012f00c0(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x5c03c13b24e7f9e1;
  pcStack_28 = "trinity_NavigatorComponent";
  local_20 = 0x1a;
  local_18 = (long *)0x0;
  FUN_012f01c0(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


