/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d40f60; name: FUN_01d40f60
 */


uint FUN_01d40f60(undefined8 param_1,char *param_2,undefined2 param_3,char *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_28;
  undefined2 local_1c [2];
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_28 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_28 = 0;
  }
  puVar1 = PTR_FUN_047d78f8;
  if (DAT_0482f098 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c[0] = param_3;
  uVar2 = FUN_01d466d4(param_1,puVar1,0,&local_18,local_1c,&local_28);
  return uVar2 & 1;
}


