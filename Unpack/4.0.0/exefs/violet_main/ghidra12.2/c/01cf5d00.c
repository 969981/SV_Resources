/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf5d00; name: FUN_01cf5d00
 */


uint FUN_01cf5d00(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_FUN_047d6ed8;
  if (DAT_0482cc60 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30 = param_5;
  uStack_2c = param_4;
  local_28 = param_3;
  local_24 = param_2;
  uVar3 = FUN_01cf667c(param_6);
  uVar2 = FUN_01cf66fc(param_1,puVar1,0,&local_24,&local_28,&uStack_2c,&local_30,uVar3);
  return uVar2 & 1;
}


