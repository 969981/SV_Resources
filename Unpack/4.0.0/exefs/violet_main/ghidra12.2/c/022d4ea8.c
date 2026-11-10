/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d4ea8; name: FUN_022d4ea8
 */


void FUN_022d4ea8(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  puVar1 = &LAB_02b816e0;
  if (DAT_048463f0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_1c = param_4;
  local_14 = param_3;
  FUN_022d7158(param_2,puVar1,0,&local_14,&local_18,&local_1c);
  return;
}


