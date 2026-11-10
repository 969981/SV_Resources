/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d515c; name: FUN_018d515c
 */


void FUN_018d515c(undefined8 param_1,char *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 local_1c;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_LAB_047d40f8;
  if (DAT_04804360 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_3;
  FUN_018d51c0(param_1,puVar1,0,&local_18,&local_1c);
  return;
}


