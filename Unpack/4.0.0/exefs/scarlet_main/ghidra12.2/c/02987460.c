/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02987460; name: FUN_02987460
 */


undefined8 FUN_02987460(undefined8 param_1,long *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined2 local_64;
  undefined2 uStack_62;
  short sStack_60;
  uint uStack_5e;
  undefined4 local_5a;
  undefined1 auStack_54 [36];
  
  uVar5 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar5 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
    if (uVar1 < uVar2) {
      uVar3 = (**(code **)(*param_2 + 0x110))(param_2);
      param_3 = (uVar3 & 0xffff) * param_3;
      local_5a = 0x1000101;
      sStack_60 = 0;
      uStack_5e = 0;
      uStack_68 = 0;
      local_64 = 0;
      uStack_62 = 0;
      FUN_01246154(auStack_54);
      uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      local_64 = (undefined2)uVar4;
      uStack_62 = (undefined2)((uint)uVar4 >> 0x10);
      local_5a._0_3_ = CONCAT12(1,(undefined2)local_5a);
      uStack_5e = uStack_5e & 0xffffff;
      sStack_60 = (short)((ulong)((long)param_3 * 0x51eb851f) >> 0x25) - (short)(param_3 >> 0x1f);
      FUN_01461214(param_1);
      uVar6 = FUN_01637120();
      FUN_016372e8(uVar6,auStack_70,&uStack_68);
      return 1;
    }
  }
  return 0;
}


