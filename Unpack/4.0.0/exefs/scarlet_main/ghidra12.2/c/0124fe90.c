/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124fe90; name: FUN_0124fe90
 */


void FUN_0124fe90(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 auStack_38 [8];
  
  uVar6 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar6 & 1) == 0) {
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    auVar11 = (**(code **)(*param_2 + 0x240))(param_2,8);
    local_60 = auVar11;
    uVar5 = FUN_0107ffe0(local_60);
    uVar1 = uVar5 & 0xffff;
    uVar9 = 0xffff;
    bVar10 = true;
    if (uVar1 < 0x148) {
      if (uVar1 < 0x53) {
        if (uVar1 == 0x14) {
          bVar10 = false;
          uVar9 = 0x46;
        }
        else if (uVar1 == 0x23) {
          bVar10 = false;
          uVar9 = 0x47;
        }
      }
      else if (uVar1 == 0x53) {
        bVar10 = false;
        uVar9 = 0x48;
      }
      else if (uVar1 == 0x80) {
        bVar10 = false;
        uVar9 = 0x4a;
      }
      else if (uVar1 == 0xfa) {
        bVar10 = false;
        uVar9 = 0x4b;
      }
    }
    else if (uVar1 < 0x30b) {
      if (uVar1 == 0x148) {
        bVar10 = false;
        uVar9 = 0x4c;
      }
      else if (uVar1 == 0x1cf) {
        bVar10 = false;
        uVar9 = 0x49;
      }
      else if (uVar1 == 0x263) {
        bVar10 = false;
        uVar9 = 0x4e;
      }
    }
    else if (uVar1 == 0x30b) {
      bVar10 = false;
      uVar9 = 0x7f;
    }
    else if (uVar1 == 0x333) {
      bVar10 = false;
      uVar9 = 0x8e;
    }
    else if (uVar1 == 0x360) {
      bVar10 = false;
      uVar9 = 0x98;
    }
    local_90 = 0xa0a000000000000;
    local_88 = 0;
    local_98 = 0;
    local_70 = 0;
    local_68 = 0;
    local_a0 = auVar11._0_4_;
    local_96 = 0x25;
    local_80 = 0;
    uStack_78 = 0;
    uStack_9c = uVar4;
    local_94 = local_a0;
    uVar6 = FUN_0124bd20(local_60);
    uVar3 = (**(code **)(*param_2 + 0x140))(param_2);
    uVar8 = 6;
    if ((uVar6 & 1) == 0) {
      uVar8 = 8;
    }
    local_98 = FUN_02944940(uVar3,uVar8);
    uVar7 = local_90;
    if (!bVar10) {
      local_90._6_2_ = SUB82(uVar7,6);
      local_90._0_6_ = CONCAT24(uVar9,CONCAT13(1,(undefined3)local_90));
      uVar2 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar4);
      local_90 = CONCAT17(10,CONCAT16(uVar2,(undefined6)local_90));
    }
    local_88 = CONCAT44(uVar4,0x102007d);
    local_80 = CONCAT44(local_80._4_4_,uVar5) & 0xffffffff0000ffff;
    uVar7 = FUN_01907994(*(undefined8 *)(param_1 + 0x78));
    FUN_01907a70(uVar7,auStack_38,&local_a0);
  }
  return;
}


