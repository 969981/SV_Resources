/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078bd04; name: FUN_0078bd04
 */


undefined8 FUN_0078bd04(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort local_128 [8];
  undefined1 auStack_118 [16];
  undefined4 local_108 [37];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  int local_40 [4];
  uint local_24;
  
  local_40[0] = 0;
  local_108[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_108);
  local_24 = 0;
  memset((void *)*param_1,0,0x460);
  memset((void *)param_1[1],0,0x4a0);
  memset((void *)param_1[2],0,0x2750);
  local_68[0] = 1;
  local_58 = 0xc;
  local_48 = 0x10;
  if (param_2 != 0) {
    return 2;
  }
  FUN_00791e1c(&DAT_047f9060,0);
  memcpy(&DAT_047f9070,PTR_DAT_047d0868,0x450);
  DAT_047f9062 = DAT_047f9062 & 0xfc;
  FUN_00791eac(local_108,&DAT_047f9060,*param_1,&local_24,0x460);
  FUN_018ff39c(local_40,local_108);
  local_74 = DAT_047f9066;
  uStack_70 = DAT_047f906a;
  local_6c = 0xfa85d05b;
  local_60 = &local_74;
  local_50 = &UNK_03d0ac0a + ((ulong)DAT_047f906e & 0xf) * 0x10;
  if (local_40[0] != 0) {
    return 2;
  }
  if (local_24 < 0x11) {
    return 2;
  }
  FUN_007945f4(local_108);
  FUN_00794608(auStack_118,local_108,param_1[2],0x2750);
  FUN_018ff39c(local_40,auStack_118);
  if (local_40[0] == 0) {
    FUN_00794698(auStack_118,local_108,param_1[1],0x4a0,9,9,2);
    FUN_018ff39c(local_40,auStack_118);
    if (local_40[0] == 0) {
      FUN_007947f0(auStack_118,local_108,*param_1 + 0x10,local_24 - 0x10);
      FUN_018ff39c(local_40,auStack_118);
      if (local_40[0] != 0) goto LAB_0078beec;
      FUN_007948fc(auStack_118,local_108,local_128);
      FUN_018ff39c(local_40,auStack_118);
      uVar4 = (uint)local_128[0];
      if (local_40[0] != 0) {
        uVar4 = 0;
      }
      uVar9 = (ulong)uVar4;
    }
    else {
LAB_0078beec:
      uVar9 = 0;
    }
    FUN_007947cc(local_108);
    FUN_0079468c(local_108);
    uVar4 = (uint)uVar9;
    if (uVar4 != 0) {
      uVar2 = uVar4 + 0x10 & 0x1fff0;
      uVar8 = (ulong)uVar2;
      if (0x4b0 < uVar2) {
        uVar7 = 1;
        goto LAB_0078be68;
      }
      FUN_007938d0(*param_1 + 4,uVar9);
      if (uVar4 < uVar2) {
        bVar3 = ~*(byte *)(param_1[1] + (ulong)(uVar4 - 1));
        *(byte *)(param_1[1] + uVar9) = bVar3;
        uVar5 = uVar9 + 1;
        if (uVar5 != uVar8) {
          if ((uVar9 & 3) != 3) {
            uVar6 = uVar9 & 3 ^ 3;
            do {
              *(byte *)(param_1[1] + uVar5) = bVar3;
              uVar5 = uVar5 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (2 < (uVar8 - uVar9) - 2) {
            do {
              *(byte *)(param_1[1] + uVar5) = bVar3;
              *(byte *)(param_1[1] + uVar5 + 1) = bVar3;
              *(byte *)(param_1[1] + uVar5 + 2) = bVar3;
              lVar1 = param_1[1] + uVar5;
              uVar5 = uVar5 + 4;
              *(byte *)(lVar1 + 3) = bVar3;
            } while (uVar8 != uVar5);
          }
        }
      }
      memset((void *)(*param_1 + 0x10),0,0x450);
      FUN_0078d79c(local_128,*param_1 + 0x10,param_1[1],uVar2,auStack_118,0x10,local_68);
      FUN_018ff39c(local_40,local_128);
      if (local_40[0] == 0) {
        memcpy((void *)(*param_1 + uVar8 + 0x10),auStack_118,0x10);
        uVar7 = 0;
        *(uint *)(param_1 + 3) = uVar2 + 0x20;
        goto LAB_0078be68;
      }
    }
  }
  uVar7 = 2;
LAB_0078be68:
  FUN_00794604(local_108);
  return uVar7;
}


