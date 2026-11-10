/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256af6c; name: FUN_0256af6c
 */


void FUN_0256af6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,char *param_7)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  if ((*param_7 == '\x01') || (*param_7 == '\0')) {
    local_48 = *(undefined8 *)(param_7 + 8);
  }
  else {
    local_48 = 0;
  }
  puVar1 = PTR_FUN_047df5b8;
  if (DAT_04850b48 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_3c = param_6;
  local_38 = param_5;
  uStack_34 = param_4;
  local_30[0] = param_2;
  local_20[0] = param_1;
  FUN_0256e828(param_3,puVar1,0,local_20,local_30,&uStack_34,&local_38,&local_3c,&local_48);
  return;
}


