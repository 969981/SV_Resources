/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945a30; name: FUN_02945a30
 */


void FUN_02945a30(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  byte bVar4;
  undefined1 local_70 [6];
  undefined2 uStack_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar1 = FUN_02945bb0(param_1,param_2,param_4 & 1);
  if ((uVar1 & 0xff) != 4) {
    bVar4 = 0x14;
    if ((param_3 & 1) == 0) {
      bVar4 = 10;
    }
    plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),
                                  param_2 & 0xffffffff);
    local_48 = 0;
    local_60 = 0;
    _local_70 = CONCAT26(1,(uint6)bVar4 << 0x28);
    local_70._0_5_ = CONCAT14((char)uVar1,(int)param_2);
    _local_68 = CONCAT44((int)param_2,0x126);
    local_58 = 0;
    uStack_50 = 0;
    uVar2 = FUN_0107bb74(*(undefined8 *)(param_1 + 0x48));
    local_68 = CONCAT22(0x102,(undefined2)local_68);
    local_60 = CONCAT44(local_60._4_4_,uVar2) & 0xffffffff0000ffff;
    uVar2 = (**(code **)(*plVar3 + 0x730))(plVar3,uVar1);
    local_68 = CONCAT22(0x182,(undefined2)local_68);
    local_60 = CONCAT44(uVar2,(undefined4)local_60) & 0xffffffffffff;
    FUN_0293df40(param_1,local_70);
  }
  return;
}


