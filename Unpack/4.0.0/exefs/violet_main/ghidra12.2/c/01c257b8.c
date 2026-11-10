/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c257b8; name: FUN_01c257b8
 */


void FUN_01c257b8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  byte local_4 [4];
  
  local_4[0] = param_3 & 1;
  puVar1 = PTR_LAB_047d5cf8;
  if (DAT_04812550 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c27fc8(auStack_30,param_2,puVar1,0,local_4);
  FUN_01c28030(param_1,auStack_30);
  FUN_01c102fc(auStack_30);
  return;
}


