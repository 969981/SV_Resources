/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02970d10; name: FUN_02970d10
 */


undefined8 FUN_02970d10(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined2 uStack_78;
  ushort uStack_76;
  undefined4 uStack_74;
  undefined1 uStack_70;
  uint uStack_6f;
  undefined1 local_6b;
  undefined2 uStack_6a;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar1 = (**(code **)(*param_4 + 0x220))(param_4,0x22);
  if ((uVar1 & 1) == 0) {
    local_98 = CONCAT31(local_98._1_3_,1);
    local_a0 = param_4;
    uVar1 = FUN_029422f0(param_1,&local_a0);
    if ((uVar1 & 1) != 0) {
      local_a0 = (long *)0x0;
      local_98 = local_98 & 0xffff0000;
      FUN_0189372c(&local_90);
      uStack_80 = 0;
      local_7c = 1;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      local_6b = 0;
      uStack_6a = 0;
      uStack_68 = 0;
      local_63 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      local_a0 = (long *)CONCAT44(param_3,param_2);
      local_98 = CONCAT22(local_98._2_2_,0x20);
      auVar2 = FUN_0123e080(param_2);
      uStack_78 = 0x165;
      local_90 = auVar2._0_4_;
      uStack_8c = auVar2._4_4_;
      uStack_88 = auVar2._8_4_;
      local_84 = auVar2._12_4_;
      uStack_76 = uStack_76 & 0xc000 | 0x82;
      uStack_74 = param_3;
      FUN_01a042b0(param_1,&local_a0);
      uVar1 = (**(code **)(*param_4 + 0x220))(param_4,0x1f);
      if ((uVar1 & 1) != 0) {
        uStack_6f = uStack_6f & 0xff;
        local_6b = 1;
        uStack_94 = 0;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_84 = 0;
        uStack_80 = 0;
        local_7c = 0;
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_74 = 0;
        local_48 = 0;
        uStack_70 = 1;
        local_a0 = (long *)CONCAT44(0x1f,param_2);
        uStack_68 = 0;
        local_63 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        local_98 = param_3;
        FUN_01852330(param_1,&local_a0);
      }
      uVar1 = (**(code **)(*param_4 + 0x220))(param_4,0x21);
      if ((uVar1 & 1) == 0) {
        return 1;
      }
      uStack_94 = 0;
      local_90 = 0;
      uStack_6f = uStack_6f & 0xff;
      local_6b = 1;
      uStack_8c = 0;
      uStack_88 = 0;
      local_84 = 0;
      uStack_80 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      local_48 = 0;
      uStack_70 = 1;
      local_a0 = (long *)CONCAT44(0x21,param_2);
      uStack_68 = 0;
      local_63 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      local_98 = param_3;
      FUN_01852330(param_1,&local_a0);
      return 1;
    }
  }
  return 0;
}


