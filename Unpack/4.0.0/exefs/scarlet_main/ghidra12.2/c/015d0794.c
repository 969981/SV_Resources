/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d0794; name: FUN_015d0794
 */


bool FUN_015d0794(undefined8 param_1,uint *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)(param_2 + 6);
  local_a0 = &PTR_LAB_04580b98;
  uStack_34 = *param_2;
  local_38 = 0;
  local_48 = &PTR_LAB_04580c08;
  local_40 = 0;
  if (uStack_34 != 0) {
    uVar3 = (ulong)uStack_34 - ((ulong)(uStack_34 >> 1) & 0x5555555555555555);
    uStack_34 = uStack_34 ^ uStack_34 << 2;
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uStack_34 = uStack_34 ^ uStack_34 >> 0xf;
    uStack_34 = uStack_34 ^ uStack_34 << 0xd;
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar3 != 1) &&
        (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
        uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar3 != 2)) &&
       (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
       uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar3 != 3)) {
      FUN_00f83090(&local_48);
      for (lVar1 = uVar3 - 4; lVar1 != 0; lVar1 = lVar1 + -1) {
        (*(code *)local_48[2])(&local_48);
      }
    }
  }
  local_90 = 0;
  ppuStack_88 = &PTR_LAB_04580c30;
  local_58 = CONCAT44(uStack_34,uStack_34);
  local_70 = 0;
  local_68 = &PTR_LAB_04580c08;
  local_98 = &PTR_LAB_04580bc8;
  uStack_50 = 0;
  local_80 = uVar4;
  uStack_78 = uVar5;
  uStack_60 = local_40;
  local_38 = uStack_34;
  uVar3 = FUN_015d1064(&local_a0);
  bVar2 = false;
  if (((uint)uVar3 & 0xff) == 4) {
    bVar2 = uVar3 >> 0x20 == 0 || (uVar3 & 0xff0000) == 0;
  }
  return bVar2;
}


