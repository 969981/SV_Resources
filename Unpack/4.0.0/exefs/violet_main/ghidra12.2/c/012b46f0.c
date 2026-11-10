/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b46f0; name: FUN_012b46f0
 */


void FUN_012b46f0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0xcd3596fce39f3585;
  pcStack_38 = "pe_UikitViewComponent";
  local_30 = 0x15;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012b47ac(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xa3f17673fa74e4c1;
  pcStack_38 = "pe_UikitManagerComponent";
  local_30 = 0x18;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012b48b8(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


