/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b6fc; name: FUN_0298b6fc
 */


undefined1 FUN_0298b6fc(undefined8 param_1,long *param_2,undefined2 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined4 uStack_6e;
  uint3 local_6a;
  undefined1 uStack_67;
  undefined1 auStack_64 [36];
  undefined1 local_28 [8];
  
  _local_6a = 0x1000101;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_72 = 0;
  FUN_01246154(auStack_64);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_74 = (undefined2)uVar1;
  uStack_72 = (undefined2)((uint)uVar1 >> 0x10);
  local_6a = (uint3)(ushort)local_6a;
  uStack_6e = CONCAT13(1,(undefined3)uStack_6e);
  uStack_70 = param_3;
  FUN_0297eca8(auStack_64,param_4);
  FUN_01461214(param_1);
  uVar2 = FUN_01637120();
  FUN_016372e8(uVar2,local_28,&uStack_78);
  return local_28[0];
}


