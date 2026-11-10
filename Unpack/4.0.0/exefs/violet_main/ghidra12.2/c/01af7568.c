/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01af7568; name: FUN_01af7568
 */


void FUN_01af7568(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  undefined *puVar1;
  undefined1 local_20 [4];
  undefined2 local_1c [2];
  undefined1 local_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_LAB_047d3d40;
  if (DAT_04802180 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20[0] = param_5;
  local_1c[0] = param_4;
  local_18[0] = param_3;
  local_14 = param_2;
  FUN_01af76ec(param_1,puVar1,0,&local_14,local_18,local_1c,local_20);
  return;
}


