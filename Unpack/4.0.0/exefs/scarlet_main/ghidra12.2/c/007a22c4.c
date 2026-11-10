/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a22c4; name: FUN_007a22c4
 */


void FUN_007a22c4(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  puVar7 = local_60;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_00cbd7c0(param_1,local_50);
  bVar1 = FUN_007984a4(param_3);
  if (DAT_047f9be8 == 0) {
    bVar2 = (**(code **)(*param_2 + 0x200))(param_2);
    if (bVar2 <= bVar1) goto LAB_007a2350;
LAB_007a23a4:
    local_50[0] = 0x6468;
LAB_007a23c4:
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    puVar7 = local_50;
  }
  else {
    if (bVar1 < DAT_047f9be8) goto LAB_007a23a4;
LAB_007a2350:
    bVar1 = FUN_007984a4(param_3);
    if (DAT_047f9be8 == 0) {
      bVar2 = (**(code **)(*param_2 + 0x200))(param_2);
      if (bVar1 <= bVar2) goto LAB_007a2390;
LAB_007a23c0:
      local_50[0] = 0x6467;
      goto LAB_007a23c4;
    }
    if (DAT_047f9be8 < bVar1) goto LAB_007a23c0;
LAB_007a2390:
    sVar3 = FUN_0079847c(param_3);
    if (sVar3 < *(short *)((long)param_2 + 0x5a)) goto LAB_007a23a4;
    sVar3 = FUN_0079847c(param_3);
    if (*(short *)((long)param_2 + 0x5a) < sVar3) goto LAB_007a23c0;
    uVar6 = FUN_027e97e0(param_3);
    if ((uVar6 & 1) == 0) goto LAB_007a23e8;
    FUN_007984c4(local_60,param_3,local_50,0x10);
    iVar5 = memcmp(param_2 + 0x44,local_50,0x10);
    if (iVar5 == 0) goto LAB_007a23e8;
    local_38[0] = 0;
    local_60[0] = 0x6c4d;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  }
  FUN_018ff39c(param_1,puVar7);
LAB_007a23e8:
  if ((param_4 & 1) != 0) {
    sVar3 = (**(code **)(*param_3 + 0x18))(param_3);
    sVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (sVar3 == sVar4) {
      local_50[0] = 0x6c1d;
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
      if ((uVar6 & 1) != 0) {
        return;
      }
      local_50[0] = 0x6c4f;
    }
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_018ff39c(param_1,local_50);
  }
  return;
}


