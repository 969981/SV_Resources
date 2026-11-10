/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014818f8; name: FUN_014818f8
 */


void FUN_014818f8(long param_1,undefined4 param_2,long *param_3,uint param_4,uint param_5,
                 ushort param_6,ulong param_7,char param_8)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_4 & 0xff;
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  if (uVar1 == 8) {
    if (0 < (int)param_5) {
      uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
      FUN_0298db34(param_1,uVar5,param_5);
      if (param_8 != '\x02') {
        FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x92,uVar4,8,param_5 & 0xff);
      }
      if ((param_7 & 1) != 0) {
        uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar5 = 0x150;
LAB_014819c8:
        FUN_0167ebc0(uVar6,0xcb,param_2,uVar5,uVar4,0xffff0000);
        return;
      }
    }
  }
  else if ((int)param_5 < 1) {
    bVar3 = (**(code **)(*param_3 + 0x378))(param_3,uVar1,-param_5);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xd,uVar4,uVar1,bVar3);
    if (param_8 != '\x02') {
      FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x93,uVar4,uVar1,bVar3);
    }
    if (((param_7 & 1) != 0) && ((param_4 - 1 & 0xff) < 7)) {
      if (bVar3 == 2) {
        puVar2 = &DAT_03d6a80c;
      }
      else {
        puVar2 = &DAT_03d6a810;
        if (bVar3 < 3) {
          puVar2 = &DAT_03d6a808;
        }
      }
      uVar5 = *(undefined4 *)(puVar2 + ((ulong)(param_4 - 1) & 0xff) * 0x10);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
LAB_01481bac:
      FUN_0167ebc0(uVar6,0xcb,param_2,uVar5,uVar4,param_4,0xffff0000);
      return;
    }
  }
  else {
    bVar3 = (**(code **)(*param_3 + 0x370))(param_3,uVar1,param_5);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xc,uVar4,uVar1,bVar3);
    if (param_8 != '\x02') {
      FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x92,uVar4,uVar1,bVar3);
    }
    if ((param_7 & 1) != 0) {
      param_4 = param_4 - 1;
      if (param_6 == 0) {
        if ((param_4 & 0xff) < 7) {
          if (bVar3 == 2) {
            puVar2 = &DAT_03d6a6f4;
          }
          else {
            puVar2 = &DAT_03d6a6f8;
            if (bVar3 < 3) {
              puVar2 = &DAT_03d6a6f0;
            }
          }
          uVar5 = *(undefined4 *)(puVar2 + ((ulong)param_4 & 0xff) * 0x10);
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          goto LAB_014819c8;
        }
      }
      else if ((param_4 & 0xff) < 7) {
        if (bVar3 == 2) {
          puVar2 = &DAT_03d6a764;
        }
        else {
          puVar2 = &DAT_03d6a768;
          if (bVar3 < 3) {
            puVar2 = &DAT_03d6a760;
          }
        }
        uVar5 = *(undefined4 *)(puVar2 + ((ulong)param_4 & 0xff) * 0x10);
        param_4 = (uint)param_6;
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        goto LAB_01481bac;
      }
    }
  }
  return;
}


