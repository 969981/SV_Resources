/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a3a70; name: FUN_017a3a70
 */


void FUN_017a3a70(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  undefined1 *puVar1;
  undefined2 local_24 [2];
  undefined2 local_20 [2];
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  undefined4 local_14;
  
  puVar1 = &LAB_008fa0d4;
  if (DAT_04804310 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24[0] = param_6;
  local_20[0] = param_5;
  local_1c[0] = param_4;
  local_18[0] = param_3;
  local_14 = param_2;
  FUN_017a3ad0(param_1,puVar1,0,&local_14,local_18,local_1c,local_20,local_24);
  return;
}


