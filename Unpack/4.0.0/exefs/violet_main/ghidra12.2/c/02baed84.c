/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02baed84; name: FUN_02baed84
 */


void FUN_02baed84(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 local_a8 [16];
  ulong local_98;
  long *plStack_90;
  undefined8 local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x30);
  if (param_3 < 2) {
    local_a8._0_8_ = *(undefined8 *)(lVar5 + 8);
    if (param_5 == 0) {
      param_5 = *(long *)(lVar5 + 0x6098);
    }
    local_98 = lVar5 + 0x10;
    local_a8._8_8_ = param_5;
    local_a8 = FUN_02bc7d10(*(undefined8 *)(lVar5 + 0x6140),local_a8,param_2,param_4,0);
    local_98 = local_98 & 0xffffffffffffff00;
    FUN_00d56380(param_1 + 0x30,local_a8);
  }
  else {
    local_70 = *(undefined8 *)(param_1 + 8);
    local_58 = 0;
    local_68 = 0xaaaaaaaaaaaaaaa;
    lStack_60 = 0;
    FUN_00d566e8(local_a8,param_3,&local_70);
    uVar1 = local_a8._8_8_;
    if (local_a8._0_8_ != local_a8._8_8_) {
      pauVar6 = (undefined1 (*) [16])local_a8._0_8_;
      do {
        local_70 = *(undefined8 *)(lVar5 + 8);
        local_68 = param_5;
        if (param_5 == 0) {
          local_68 = *(long *)(lVar5 + 0x6098);
        }
        lStack_60 = lVar5 + 0x10;
        auVar7 = FUN_02bc7d10(*(undefined8 *)(lVar5 + 0x6140),&local_70,param_2,param_4,0);
        *pauVar6 = auVar7;
        pauVar6[1][0] = 0;
        pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
      } while (pauVar6 != (undefined1 (*) [16])uVar1);
    }
    FUN_00d564bc(param_1 + 0x30,local_a8);
    uVar1 = local_a8._0_8_;
    if ((undefined1 (*) [16])local_a8._0_8_ != (undefined1 (*) [16])0x0) {
      local_a8._8_8_ = local_a8._0_8_;
      lVar5 = local_98 - local_a8._0_8_;
      uVar3 = (**(code **)(*plStack_90 + 0xf8))(plStack_90);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_00c4e600();
        if (0 < *(int *)(lVar4 + 0x12c8)) {
          FUN_00c48fe8(plStack_90,uVar1,lVar5,8);
          goto LAB_02baeed4;
        }
      }
      (**(code **)(*plStack_90 + 0x18))(plStack_90,uVar1,lVar5,8);
    }
  }
LAB_02baeed4:
  uVar2 = FUN_00d56320(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}


