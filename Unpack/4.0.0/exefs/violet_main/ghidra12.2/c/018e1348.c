/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e1348; name: FUN_018e1348
 */


void FUN_018e1348(undefined8 param_1,undefined4 param_2,undefined2 param_3,byte param_4)

{
  undefined8 local_28;
  byte local_1c [4];
  undefined2 local_18 [2];
  undefined4 local_14;
  
  local_1c[0] = param_4 & 1;
  local_28 = 0x36933bdffaa1e9fb;
  local_18[0] = param_3;
  local_14 = param_2;
  FUN_018e139c(param_1,&local_28,&local_14,&local_14,local_18,local_1c);
  return;
}


