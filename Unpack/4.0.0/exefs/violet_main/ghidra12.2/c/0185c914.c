/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185c914; name: FUN_0185c914
 */


void FUN_0185c914(double param_1,undefined8 param_2,undefined4 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  undefined1 *puVar1;
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  local_1c[0] = param_4 & 1;
  local_20[0] = param_5 & 1;
  local_24[0] = param_6 & 1;
  puVar1 = &LAB_008f4ed0;
  if (DAT_04802ab0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_14 = param_3;
  FUN_0185c984(param_2,puVar1,0,&local_14,&local_18,local_1c,local_20,local_24);
  return;
}


