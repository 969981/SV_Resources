/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d369c; name: FUN_024d369c
 */


uint FUN_024d369c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  byte local_14 [4];
  
  puVar1 = PTR_FUN_047def90;
  if (DAT_0484f060 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_016af0b8(param_3);
  local_14[0] = param_4 & 1;
  local_40[0] = param_1;
  uVar2 = FUN_024d9df8(param_2,puVar1,0,uVar3,local_40,local_14);
  return uVar2 & 1;
}


