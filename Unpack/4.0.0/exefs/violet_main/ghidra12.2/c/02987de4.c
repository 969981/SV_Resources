/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987de4; name: FUN_02987de4
 */


void FUN_02987de4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  undefined1 auStack_7c [76];
  undefined1 local_18 [8];
  
  plVar2 = (long *)FUN_0124e4c0(param_2,param_3);
  local_18[0] = 0;
  FUN_02985c98(auStack_88);
  local_84 = (**(code **)(*plVar2 + 0x98))(plVar2);
  local_80 = (**(code **)(*plVar2 + 0x110))(plVar2);
  FUN_01582534(param_1);
  uVar3 = FUN_014813ec();
  cVar1 = FUN_010e161c(uVar3,local_84);
  if (cVar1 != '\n') {
    FUN_02943244(auStack_7c,2,1);
    FUN_0294325c(auStack_7c,local_84);
  }
  FUN_01461214(param_1);
  uVar3 = FUN_02985cd4();
  FUN_02985cdc(uVar3,local_18,auStack_88);
  return;
}


