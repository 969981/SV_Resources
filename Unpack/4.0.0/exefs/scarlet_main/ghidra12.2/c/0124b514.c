/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124b514; name: FUN_0124b514
 */


void FUN_0124b514(long param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  
  local_40 = (**(code **)(*param_2 + 0x240))(param_2,0x17);
  uVar2 = FUN_0107ffe0(local_40);
  sVar1 = (**(code **)(*param_2 + 0x698))(param_2,uVar2);
  if (sVar1 == 0) {
    local_b0 = (**(code **)(*param_2 + 0x98))(param_2);
    local_80 = 1;
    local_7e = 0;
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_58 = 0;
    local_ac = 0x17;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_a8 = local_b0;
    uVar3 = FUN_018cdf0c(*(undefined8 *)(param_1 + 0x78));
    FUN_018cdf14(uVar3,auStack_50,&local_b0);
  }
  return;
}


