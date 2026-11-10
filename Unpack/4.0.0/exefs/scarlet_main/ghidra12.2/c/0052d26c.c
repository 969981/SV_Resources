/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052d26c; name: FUN_0052d26c
 */


uint FUN_0052d26c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_1 + 0x28))();
  local_38 = *(undefined4 *)PTR_DAT_047cdbc8;
  local_40 = 0x7fffffff00000000;
  local_30 = 0;
  uStack_28 = 0;
  uStack_34 = 0x80000000;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uVar2 = FUN_0052e0d8(auStack_90,param_2);
  lVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar2,auStack_90);
  uVar1 = 0;
  if (lVar3 != 0) {
    if ((int)local_40 == 1) {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 1;
}


