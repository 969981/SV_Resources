/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017096f4; name: FUN_017096f4
 */


void FUN_017096f4(undefined8 param_1,byte param_2,byte param_3)

{
  undefined *puVar1;
  byte local_18 [4];
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  puVar1 = PTR_LAB_047d3bc8;
  if (DAT_04802138 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18[0] = param_3 & 1;
  FUN_01709744(param_1,puVar1,0,local_14,local_18);
  return;
}


