/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c778; name: FUN_0124c778
 */


void FUN_0124c778(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  char local_58 [8];
  undefined1 local_50 [16];
  
  auVar9 = (**(code **)(*param_2 + 0x240))(param_2,0x12);
  local_50 = auVar9;
  uVar5 = FUN_0107ffe0(local_50);
  uVar6 = FUN_02988a48(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar5);
  if (uVar6 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x140))(param_2);
    uVar3 = FUN_02944940(uVar2,8);
    uVar4 = (**(code **)(*param_2 + 0x108))(param_2);
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
    local_90 = CONCAT13(local_90._3_1_,0x240000);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_98 = auVar9._0_4_;
    local_90 = CONCAT22(local_90._2_2_,uVar4);
    local_88._0_7_ = CONCAT16((char)uVar5,0x4501000000);
    local_94 = uVar7;
    local_8c = local_98;
    uVar1 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar7);
    local_88 = CONCAT17(uVar1,(undefined7)local_88);
    local_80 = CONCAT44(uVar7,0x8200cb);
    uVar8 = FUN_01907994(*(undefined8 *)(param_1 + 0x78));
    FUN_01907a70(uVar8,local_58,&local_98);
    if (local_58[0] != '\0') {
      local_8c = local_8c & 0xffffff00;
      local_68 = local_68 & 0xffffffff00000000;
      local_98 = CONCAT22(local_98._2_2_,uVar4);
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_94 = uVar6;
      local_90 = uVar7;
      uVar8 = FUN_0293dd44(*(undefined8 *)(param_1 + 0x78));
      FUN_0293dd4c(uVar8,local_58,&local_98);
      local_98 = uVar6;
      uVar8 = FUN_02988a54(*(undefined8 *)(param_1 + 0x78));
      FUN_029834a8(uVar8,local_58,&local_98);
    }
  }
  return;
}


