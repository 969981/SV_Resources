/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019672a0; name: FUN_019672a0
 */


void FUN_019672a0(long param_1,uint param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined4 local_78 [2];
  long *local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5e;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (param_2 < 9) {
    local_68 = (undefined1)param_2;
    local_64 = 1;
    goto LAB_01967358;
  }
  switch(param_2) {
  case 9:
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 1;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 2;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 3;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 4;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_68 = 5;
    break;
  default:
    goto switchD_019672e8_caseD_a;
  case 0xb:
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 1;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_68 = 3;
    break;
  case 0xc:
    local_50 = 0;
    local_40 = 0;
    local_5e = 0;
    local_68 = 2;
    local_64 = 1;
    local_60 = 0;
    local_48 = 1;
    local_38 = 0;
    local_78[0] = param_3;
    local_70 = param_4;
    FUN_01461214(param_1);
    uVar3 = FUN_019675d8();
    FUN_01480c5c(uVar3,auStack_80,local_78);
    local_68 = 4;
    break;
  case 0xd:
    local_68 = 1;
    local_64 = 2;
    goto LAB_01967358;
  case 0xe:
    local_68 = 3;
    local_64 = 2;
    goto LAB_01967358;
  }
  local_64 = 1;
LAB_01967358:
  local_40 = 0;
  local_48 = 1;
  local_50 = 0;
  local_5e = 0;
  local_60 = 0;
  local_38 = 0;
  local_78[0] = param_3;
  local_70 = param_4;
  FUN_01461214(param_1);
  uVar3 = FUN_019675d8();
  FUN_01480c5c(uVar3,auStack_80,local_78);
switchD_019672e8_caseD_a:
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x290);
  uVar2 = (**(code **)(*param_4 + 0x98))(param_4);
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar5 + 8) + 0x50),uVar2);
  if (puVar4 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar4;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)uVar1 * 8 + 0xa8) == 0) {
    FUN_012480f8(*(undefined8 *)(param_1 + 0x20),3);
  }
  return;
}


