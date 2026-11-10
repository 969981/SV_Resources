/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00893228; name: FUN_00893228
 */


void FUN_00893228(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_70 = 0;
  local_68 = 0;
  FUN_008f0470(&local_70);
  local_70 = CONCAT44(8,(undefined4)local_70);
  iVar2 = FUN_008f06e0(param_2,&local_70);
  local_60 = 0;
  uStack_58 = 0;
  lVar9 = (long)(int)((iVar2 + 0x1fU & -iVar2) - 0x20);
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_4;
  }
  local_70 = 0;
  local_68 = 0;
  FUN_00fab560(&local_70);
  local_70 = CONCAT44(local_70._4_4_,0x22);
  lVar3 = FUN_00fab550(param_2,&local_70);
  local_70 = 0;
  local_68 = 0;
  FUN_008f0470(&local_70);
  local_70 = CONCAT44(4,(undefined4)local_70);
  uVar4 = FUN_008f06e0(param_2,&local_70);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_00fab560(&local_70);
  local_70 = CONCAT44(local_70._4_4_,0x22);
  uVar5 = FUN_00fab558(param_2,&local_70);
  if (param_3 == 0) {
    uVar8 = lVar9 + lVar3 + 0x2bU & -lVar3;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar6 = FUN_00896e5c(uVar8,uVar5);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_00fab560(&local_70);
    local_70 = CONCAT44((int)uVar8,0x22);
    local_68 = *(undefined8 *)(param_1 + 0x50);
    param_3 = param_1 + 0x88;
    FUN_00ddef7c(param_3,param_2,&local_70);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_008f0470(&local_70);
  lVar3 = param_1 + 0x1a8;
  local_70 = 0x400000020;
  FUN_008f0810(lVar3,param_2,&local_70,param_3,lVar1,0x20);
  FUN_008f0980(lVar3,param_1 + 0x1f0);
  puVar7 = (undefined8 *)FUN_008f0928(lVar3);
  *puVar7 = 0;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f80000000000000;
  puVar7[3] = 0x3f8000003f800000;
  FUN_008f093c(lVar3);
  local_70 = 0;
  local_68 = 0;
  FUN_008f0470(&local_70);
  lVar3 = param_1 + 0x200;
  local_70 = 0x80000000c;
  FUN_008f0810(lVar3,param_2,&local_70,param_3,lVar1 + lVar9 + 0x20,0xc);
  FUN_008f0980(lVar3,param_1 + 0x248);
  puVar7 = (undefined8 *)FUN_008f0928(lVar3);
  *puVar7 = 0x300000001;
  *(undefined4 *)(puVar7 + 1) = 0x30002;
  FUN_008f093c(lVar3);
  return;
}


