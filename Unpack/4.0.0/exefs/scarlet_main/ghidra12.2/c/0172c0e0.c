/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172c0e0; name: FUN_0172c0e0
 */


uint FUN_0172c0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **local_188;
  undefined **ppuStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined8 local_168;
  long lStack_160;
  undefined1 local_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [16];
  Sha256Impl aSStack_e8 [120];
  undefined *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = PTR_DAT_047d8e88 + 0x10;
  local_68 = (long *)0x0;
  uVar4 = FUN_00dc5c18(&local_70,0,param_3,0,param_2);
  if ((((uVar4 & 1) == 0) || (local_68 == (long *)0x0)) ||
     (uVar4 = FUN_0172c3c8(&local_70,local_68 + 0xe), (uVar4 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_0172c2a0(auStack_f8);
    FUN_0172c2fc(auStack_f8);
    uVar5 = (**(code **)(*local_68 + 0x70))();
    if (local_68 == (long *)0x0) {
      lVar6 = -0x20;
    }
    else {
      lVar6 = local_68[0x3b] + -0x20;
    }
    FUN_0172c2b0(auStack_f8,uVar5,lVar6,0);
    FUN_0172c354(auStack_118,auStack_f8);
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    lVar6 = (**(code **)(*local_68 + 0x70))();
    plVar2 = local_68;
    if (local_68 == (long *)0x0) {
      lVar7 = -0x20;
    }
    else {
      lVar7 = local_68[0x3b] + -0x20;
    }
    puVar1 = (undefined8 *)(lVar6 + lVar7);
    local_138 = *puVar1;
    uStack_130 = puVar1[1];
    local_128 = puVar1[2];
    uStack_120 = puVar1[3];
    uVar4 = FUN_0172c7f0(&local_138,auStack_118);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      local_168 = (**(code **)(*plVar2 + 0x70))(plVar2);
      if (local_68 == (long *)0x0) {
        lStack_160 = -0x20;
      }
      else {
        lStack_160 = local_68[0x3b] + -0x20;
      }
      local_150 = &DAT_03d626d4;
      uStack_148 = 0x7f;
      local_140 = 0;
      puStack_170 = PTR_DAT_047dcc78 + 0x10;
      local_158 = 0;
      local_178 = 0;
      local_188 = &PTR_LAB_045a7928;
      ppuStack_180 = &PTR_LAB_045a7958;
      uVar3 = FUN_0172de20(param_1,&local_188);
    }
    nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_e8);
  }
  FUN_00db239c(&local_70);
  return uVar3 & 1;
}


