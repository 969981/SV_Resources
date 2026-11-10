/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b184a4; name: FUN_01b184a4
 */


void FUN_01b184a4(undefined8 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_20 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_20 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_28 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_28 = 0;
  }
  if ((*param_5 == '\x01') || (*param_5 == '\0')) {
    local_30 = *(undefined8 *)(param_5 + 8);
  }
  else {
    local_30 = 0;
  }
  puVar1 = PTR_FUN_047d40d0;
  if (DAT_04804338 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_34 = param_6;
  FUN_01b1cd24(param_1,puVar1,0,&local_18,&local_20,&local_28,&local_30,&local_34);
  return;
}


