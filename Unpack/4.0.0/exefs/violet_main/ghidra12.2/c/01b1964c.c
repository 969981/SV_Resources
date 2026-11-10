/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b1964c; name: FUN_01b1964c
 */


void FUN_01b1964c(undefined8 param_1,char *param_2,undefined4 param_3)

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
  puVar1 = PTR_LAB_047d40f0;
  if (DAT_04804358 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_3;
  FUN_01b1ce60(param_1,puVar1,0,&local_18,&local_1c);
  return;
}


