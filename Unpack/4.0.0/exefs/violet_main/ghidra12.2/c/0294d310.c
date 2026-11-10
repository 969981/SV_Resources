/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294d310; name: FUN_0294d310
 */


void FUN_0294d310(undefined8 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint local_78;
  undefined2 uStack_74;
  undefined2 local_72;
  undefined2 uStack_70;
  undefined4 uStack_6e;
  undefined4 local_6a;
  undefined1 auStack_64 [36];
  
  iVar3 = FUN_0293d760();
  if (iVar3 != 0) {
    plVar5 = (long *)FUN_0293d610(param_1,iVar3);
    uVar6 = (**(code **)(*plVar5 + 0x1f8))();
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_0294d2d0(param_1,8);
      plVar5 = (long *)FUN_0293d610(param_1,uVar4);
      uStack_70 = 0;
      uStack_6e = 0;
      local_78 = 0;
      uStack_74 = 0;
      local_72 = 0;
      local_6a = 0x1000101;
      FUN_01246154(auStack_64);
      uStack_74 = (undefined2)iVar3;
      local_72 = (undefined2)((uint)iVar3 >> 0x10);
      local_78 = uVar4;
      uVar2 = (**(code **)(*plVar5 + 0x140))(plVar5);
      uStack_70 = FUN_02944940(uVar2,2);
      uVar1 = FUN_0294d2d0(param_1,0);
      local_6a._0_3_ = CONCAT12(uVar1,(undefined2)local_6a);
      FUN_02943244(auStack_64,2,0xe5);
      FUN_0294325c(auStack_64,uVar4);
      FUN_0293dcd0(param_1,&local_78);
    }
  }
  return;
}


