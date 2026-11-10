/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be2b0c; name: FUN_01be2b0c
 */


void FUN_01be2b0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  cVar2 = DAT_0480eed8;
  lVar3 = FUN_01be3754(param_2);
  local_50 = 0;
  local_60 = PTR_DAT_047d53f8 + 0x10;
  uStack_58 = 0;
  FUN_00d0a71c(&uStack_58,lVar3 + 8);
  local_48 = 0;
  uStack_40 = 0;
  FUN_00c6c994(&local_48,lVar3 + 0x18);
  local_38 = *(long **)(lVar3 + 0x28);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  uVar1 = 0x60;
  if (cVar2 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_01be37f4(param_1,uVar1,&local_60);
  FUN_01bb6044(&local_60);
  return;
}


