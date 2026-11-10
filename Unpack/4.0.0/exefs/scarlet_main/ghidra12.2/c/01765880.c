/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01765880; name: FUN_01765880
 */


void FUN_01765880(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 local_c0 [16];
  ulong local_b0;
  long *plStack_a8;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  uVar3 = *(uint *)(param_2 + 0x78);
  lVar8 = *(long *)(*(long *)(param_1 + 0x70) + 0x30);
  if (uVar3 < 2) {
    pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x110),param_2 + 0x30)
    ;
    lVar9 = 0;
    if (*pcVar5 != '\0') {
      lVar9 = *(long *)(pcVar5 + 8);
    }
    uVar6 = FUN_00c56adc(lVar8,param_3);
    local_88 = *(undefined8 *)(lVar9 + 0x40);
    local_c0._0_8_ = *(undefined8 *)(lVar8 + 8);
    local_c0._8_8_ = *(undefined8 *)(lVar8 + 0x6098);
    local_b0 = lVar8 + 0x10;
    local_c0 = FUN_00ec13d4(*(undefined8 *)(lVar8 + 0x6140),local_c0,&local_88,param_4,uVar6);
    local_b0 = local_b0 & 0xffffffffffffff00;
    FUN_00d56380(param_1 + 0x30,local_c0);
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 8);
    local_70 = 0;
    local_80 = 0xaaaaaaaaaaaaaaa;
    local_78 = 0;
    FUN_00d566e8(local_c0,uVar3,&local_88);
    lVar9 = 0;
    uVar10 = 0;
    do {
      pcVar5 = (char *)FUN_00ccbbb0((long)(int)uVar10,param_2 + 0x30);
      lVar2 = 0;
      if (*pcVar5 != '\0') {
        lVar2 = *(long *)(pcVar5 + 8);
      }
      uVar6 = FUN_00c56adc(lVar8,param_3);
      local_68 = *(undefined8 *)(lVar2 + 0x40);
      local_88 = *(undefined8 *)(lVar8 + 8);
      local_80 = *(undefined8 *)(lVar8 + 0x6098);
      local_78 = lVar8 + 0x10;
      auVar11 = FUN_00ec13d4(*(undefined8 *)(lVar8 + 0x6140),&local_88,&local_68,param_4,uVar6);
      uVar10 = uVar10 + 1;
      pauVar1 = (undefined1 (*) [16])(local_c0._0_8_ + lVar9);
      lVar9 = lVar9 + 0x18;
      pauVar1[1][0] = 0;
      *pauVar1 = auVar11;
    } while (uVar3 != uVar10);
    FUN_00d564bc(param_1 + 0x30,local_c0);
    uVar6 = local_c0._0_8_;
    if (local_c0._0_8_ != 0) {
      local_c0._8_8_ = local_c0._0_8_;
      lVar8 = local_b0 - local_c0._0_8_;
      uVar7 = (**(code **)(*plStack_a8 + 0xf8))(plStack_a8);
      if ((uVar7 & 1) != 0) {
        lVar9 = FUN_00c4e600();
        if (0 < *(int *)(lVar9 + 0x12c8)) {
          FUN_00c48fe8(plStack_a8,uVar6,lVar8,8);
          goto LAB_01765938;
        }
      }
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,uVar6,lVar8,8);
    }
  }
LAB_01765938:
  uVar4 = FUN_00d56320(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}


