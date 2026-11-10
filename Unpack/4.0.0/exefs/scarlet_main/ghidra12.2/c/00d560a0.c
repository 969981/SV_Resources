/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d560a0; name: FUN_00d560a0
 */


void FUN_00d560a0(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 local_b8 [16];
  ulong local_a8;
  long *plStack_a0;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x70) + 0x30);
  if (param_3 < 2) {
    local_b8._0_8_ = *(undefined8 *)(lVar7 + 8);
    if (param_5 == 0) {
      param_5 = *(long *)(lVar7 + 0x6098);
    }
    local_a8 = lVar7 + 0x10;
    local_b8._8_8_ = param_5;
    local_b8 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),local_b8,param_2,param_4,0);
    local_a8 = local_a8 & 0xffffffffffffff00;
    FUN_00d56380(param_1 + 0x30,local_b8);
  }
  else {
    local_80 = *(undefined8 *)(param_1 + 8);
    local_68 = 0;
    local_78 = 0xaaaaaaaaaaaaaaa;
    lStack_70 = 0;
    FUN_00d566e8(local_b8,param_3,&local_80);
    uVar3 = local_b8._8_8_;
    uVar2 = local_b8._0_8_;
    if (local_b8._0_8_ != local_b8._8_8_) {
      local_80 = *(undefined8 *)(lVar7 + 8);
      lVar6 = lVar7 + 0x10;
      local_78 = param_5;
      if (param_5 == 0) {
        local_78 = *(long *)(lVar7 + 0x6098);
      }
      lStack_70 = lVar6;
      auVar8 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),&local_80,param_2,param_4,0);
      (*(undefined1 (*) [16])(uVar2 + 0x10))[0] = 0;
      *(undefined1 (*) [16])uVar2 = auVar8;
      if ((undefined1 (*) [16])(*(undefined1 (*) [16])(uVar2 + 0x10) + 8) !=
          (undefined1 (*) [16])uVar3) {
        local_80 = *(undefined8 *)(lVar7 + 8);
        local_78 = param_5;
        if (param_5 == 0) {
          local_78 = *(long *)(lVar7 + 0x6098);
        }
        lStack_70 = lVar6;
        auVar8 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),&local_80,param_2,param_4,0);
        (*(undefined1 (*) [16])(uVar2 + 0x20))[8] = 0;
        *(undefined1 (*) [16])(*(undefined1 (*) [16])(uVar2 + 0x10) + 8) = auVar8;
        if ((undefined1 (*) [16])(uVar2 + 0x30) != (undefined1 (*) [16])uVar3) {
          local_80 = *(undefined8 *)(lVar7 + 8);
          local_78 = param_5;
          if (param_5 == 0) {
            local_78 = *(long *)(lVar7 + 0x6098);
          }
          lStack_70 = lVar6;
          auVar8 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),&local_80,param_2,param_4,0);
          pauVar1 = (undefined1 (*) [16])(uVar2 + 0x40);
          (*(undefined1 (*) [16])(uVar2 + 0x40))[0] = 0;
          *(undefined1 (*) [16])(uVar2 + 0x30) = auVar8;
          for (; pauVar1 = (undefined1 (*) [16])(*pauVar1 + 8),
              pauVar1 != (undefined1 (*) [16])uVar3; pauVar1 = pauVar1 + 1) {
            local_80 = *(undefined8 *)(lVar7 + 8);
            local_78 = param_5;
            if (param_5 == 0) {
              local_78 = *(long *)(lVar7 + 0x6098);
            }
            lStack_70 = lVar6;
            auVar8 = FUN_00d56874(*(undefined8 *)(lVar7 + 0x6140),&local_80,param_2,param_4,0);
            *pauVar1 = auVar8;
            pauVar1[1][0] = 0;
          }
        }
      }
    }
    FUN_00d564bc(param_1 + 0x30,local_b8);
    uVar2 = local_b8._0_8_;
    if ((undefined1 (*) [16])local_b8._0_8_ != (undefined1 (*) [16])0x0) {
      local_b8._8_8_ = local_b8._0_8_;
      lVar7 = local_a8 - local_b8._0_8_;
      uVar5 = (**(code **)(*plStack_a0 + 0xf8))(plStack_a0);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plStack_a0 + 0x18))(plStack_a0,uVar2,lVar7,8);
      }
      else {
        FUN_00c48fe8(plStack_a0,uVar2,lVar7,8);
      }
    }
  }
  uVar4 = FUN_00d56320(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}


