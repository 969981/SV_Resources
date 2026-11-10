/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b68ae4; name: FUN_01b68ae4
 */


void FUN_01b68ae4(undefined8 param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 byte param_5,byte param_6)

{
  undefined *puVar1;
  byte local_24 [4];
  byte local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined2 local_14 [2];
  
  local_20[0] = param_5 & 1;
  local_24[0] = param_6 & 1;
  puVar1 = PTR_FUN_047d4bb0;
  if (DAT_04809c08 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c[0] = param_4;
  local_18 = param_3;
  local_14[0] = param_2;
  FUN_01b69cb0(param_1,puVar1,0,local_14,&local_18,local_1c,local_20,local_24);
  return;
}


