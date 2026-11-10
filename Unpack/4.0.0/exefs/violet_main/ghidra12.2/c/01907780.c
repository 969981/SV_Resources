/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01907780; name: FUN_01907780
 */


undefined8 FUN_01907780(long param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,0x30a);
  if (((((uVar6 & 1) == 0) ||
       (uVar6 = (**(code **)(*plVar5 + 0x90))(plVar5,0x30a,0), (uVar6 & 1) == 0)) ||
      (uVar6 = (**(code **)(*plVar5 + 0x5b0))(plVar5), (uVar6 & 1) != 0)) ||
     (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0)) {
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 0;
    FUN_01852230(param_1,param_2);
    local_74 = 0;
    local_6c = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_80 = CONCAT44(local_80._4_4_,param_2) & 0xffffff00ffffffff;
    local_78 = 0x1034e;
    FUN_01907920(param_1,&local_80);
    uVar7 = 1;
    local_78._0_3_ = 0x100;
    local_6c = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    local_80 = (ulong)CONCAT16(1,CONCAT24(1,param_2));
    local_74 = CONCAT44(param_2,0x8201bf);
    FUN_019079a0(param_1,&local_80);
    local_78 = (uint)local_78._3_1_ << 0x18;
    local_74 = 0;
    local_6c = 0xa0a0000;
    local_48 = 0;
    local_80 = CONCAT44(param_2,param_2);
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_50 = 0;
    uVar4 = (**(code **)(*plVar5 + 0x140))(plVar5);
    uVar2 = local_74;
    uVar1 = (ushort)(uVar4 >> 3) & 0x1fff;
    if ((uVar4 & 0xffff) < 8) {
      uVar1 = 1;
    }
    local_74 = CONCAT44(local_74._4_4_,param_3);
    uVar3 = local_74;
    local_74._6_2_ = SUB82(uVar2,6);
    local_74._0_6_ = CONCAT15(1,(int5)uVar3);
    local_78 = CONCAT22(CONCAT11(local_78._3_1_,param_4),uVar1);
    FUN_01907960(param_1,&local_80);
    FUN_01852150(param_1,param_2);
  }
  return uVar7;
}


