/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029753f0; name: FUN_029753f0
 */


void FUN_029753f0(long param_1,int param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if ((iVar5 == param_2) && (uVar2 = FUN_02943920(param_1,param_2), (uVar2 & 1) == 0)) {
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar2 = (**(code **)(*plVar3 + 0x308))();
    if ((uVar2 & 1) == 0) {
      local_24 = 0;
      local_2c = 0;
      uStack_28 = 0;
      local_34 = 0;
      uStack_30 = 0;
      local_3c = 0;
      uStack_38 = 0;
      local_44 = 0;
      uStack_40 = 0;
      local_4c = 0;
      local_50 = CONCAT22(local_50._2_2_,0x6d);
      uVar4 = FUN_014813ec(*(undefined8 *)(param_1 + 8));
      uVar1 = FUN_010e161c(uVar4,param_2);
      local_50 = CONCAT13(10,CONCAT12(uVar1,(undefined2)local_50));
      local_4c._0_4_ = CONCAT13(1,(undefined3)local_4c);
      FUN_02941ef0(param_1,&local_50);
    }
    local_4c._0_4_ = (uint)local_4c & 0xffffff00;
    uStack_30 = 0;
    local_2c = 0;
    uStack_40 = 0;
    local_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    uStack_28 = 0;
    local_4c = CONCAT44(0x8201b9,(uint)local_4c);
    local_50 = param_2;
    local_44 = param_2;
    FUN_01907920(param_1,&local_50);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x68) = 1;
  }
  return;
}


