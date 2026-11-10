/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298a10c; name: FUN_0298a10c
 */


void FUN_0298a10c(undefined8 param_1,long *param_2,undefined2 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 local_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined4 local_62;
  undefined1 auStack_5c [36];
  undefined1 auStack_38 [8];
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uStack_68 = 0;
  uStack_66 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_6a = 0;
  local_62 = 0x1000101;
  FUN_01246154(auStack_5c);
  local_70 = (undefined4)uVar1;
  uStack_6c = (undefined2)uVar1;
  local_6a = (undefined2)(uVar1 >> 0x10);
  local_62._0_3_ = CONCAT12(1,(undefined2)local_62);
  uStack_68 = param_3;
  FUN_02943244(auStack_5c,2,0x82);
  FUN_0294325c(auStack_5c,uVar1 & 0xffffffff);
  FUN_01461214(param_1);
  uVar2 = FUN_01637120();
  FUN_016372e8(uVar2,auStack_38,&local_70);
  return;
}


