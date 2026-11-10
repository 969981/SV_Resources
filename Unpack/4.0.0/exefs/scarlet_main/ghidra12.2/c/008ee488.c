/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee488; name: FUN_008ee488
 */


undefined8
FUN_008ee488(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008f0470(&local_50);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50._4_4_ = param_4;
    FUN_00fab560(&local_70);
    local_70 = CONCAT44(local_70._4_4_,0x22);
    uVar1 = FUN_008f06e0(param_2,&local_50);
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    uVar1 = FUN_00fab558(param_2,&local_70);
    lVar4 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x180) = lVar4;
    lVar2 = FUN_00fab550(param_2,&local_70);
    uVar3 = (lVar4 + lVar2) - 1U & -lVar2;
    *(ulong *)(param_1 + 0x180) = uVar3;
    local_68 = (**(code **)(*param_3 + 0x10))(param_3,uVar3,uVar1);
    *(long *)(param_1 + 0x178) = local_68;
    uVar1 = 0;
    if (local_68 != 0) {
      local_70 = CONCAT44((int)*(undefined8 *)(param_1 + 0x180),(undefined4)local_70);
      FUN_00ddef7c(param_1 + 0x58,param_2,&local_70);
      local_50 = CONCAT44(local_50._4_4_,(int)*(undefined8 *)(param_1 + 0x48));
      FUN_008f0810(param_1,param_2,&local_50,param_1 + 0x58,0,*(undefined8 *)(param_1 + 0x180));
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


