/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251f800; name: FUN_0251f800
 */


void FUN_0251f800(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  byte local_24 [4];
  undefined8 local_20 [2];
  
  local_24[0] = param_3 & 1;
  puVar1 = PTR_FUN_047df378;
  if (DAT_0484f2b0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20[0] = param_1;
  FUN_02520d44(param_2,puVar1,0,local_20,local_24);
  return;
}


