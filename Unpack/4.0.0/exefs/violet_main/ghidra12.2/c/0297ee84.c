/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297ee84; name: FUN_0297ee84
 */


undefined1 FUN_0297ee84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined1 local_28 [8];
  
  uVar1 = FUN_01893e2c(param_4);
  uVar2 = FUN_01893e94(param_4);
  FUN_0189372c(&local_88);
  FUN_0297db40(param_1,uVar2,param_2,&local_88);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_0189372c(&local_60);
  local_4c = 0x1010000000000;
  local_50 = 0;
  local_60 = local_88;
  uStack_58 = uStack_80;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = uVar1;
  FUN_01461214(param_1);
  uVar3 = FUN_01894b08();
  FUN_01895308(uVar3,local_28,&local_78);
  return local_28[0];
}


