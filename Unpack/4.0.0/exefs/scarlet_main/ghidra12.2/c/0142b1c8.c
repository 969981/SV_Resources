/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142b1c8; name: FUN_0142b1c8
 */


undefined1 FUN_0142b1c8(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined *local_50;
  undefined2 local_48;
  undefined2 local_46;
  
  uVar3 = (**(code **)(*param_1 + 0x28))();
  uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_50 = puVar1;
  local_48 = uVar3;
  local_46 = uVar4;
  sVar5 = FUN_00ff43a0(&local_50);
  local_50 = puVar1;
  local_48 = uVar3;
  local_46 = uVar4;
  sVar6 = FUN_00ff54e4(&local_50);
  local_50 = puVar1;
  local_48 = uVar3;
  local_46 = uVar4;
  sVar7 = FUN_0143b840(&local_50);
  uVar2 = sVar5 != sVar7;
  if (sVar5 != sVar6) {
    uVar2 = 2;
  }
  return uVar2;
}


