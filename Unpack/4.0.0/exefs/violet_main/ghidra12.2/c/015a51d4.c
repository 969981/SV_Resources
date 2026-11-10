/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a51d4; name: FUN_015a51d4
 */


void FUN_015a51d4(undefined8 param_1,byte param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 local_18 [4];
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  puVar1 = PTR_FUN_047d51e8;
  if (DAT_0480be40 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18[0] = param_3;
  FUN_015a5220(param_1,puVar1,0,local_14,local_18);
  return;
}


