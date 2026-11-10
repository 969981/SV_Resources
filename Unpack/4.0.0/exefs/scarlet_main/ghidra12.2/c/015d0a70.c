/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d0a70; name: FUN_015d0a70
 */


undefined8 FUN_015d0a70(long *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  uVar9 = *(undefined8 *)(param_2 + 2);
  uVar10 = *(undefined8 *)(param_2 + 6);
  local_b0 = &PTR_LAB_04580b98;
  uStack_44 = *param_2;
  local_58 = &PTR_LAB_04580c08;
  local_50 = 0;
  local_48 = 0;
  if (uStack_44 != 0) {
    uVar7 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar7 != 1) &&
        (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
        uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 2)) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 3)) {
      FUN_00f83090(&local_58);
      for (lVar4 = uVar7 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
        (*(code *)local_58[2])(&local_58);
      }
    }
  }
  local_a0 = 0;
  ppuStack_98 = &PTR_LAB_04580c30;
  local_68 = CONCAT44(uStack_44,uStack_44);
  local_80 = 0;
  local_78 = &PTR_LAB_04580c08;
  local_a8 = &PTR_LAB_04580bc8;
  uStack_60 = 0;
  local_90 = uVar9;
  uStack_88 = uVar10;
  uStack_70 = local_50;
  local_48 = uStack_44;
  uVar9 = FUN_015d1064(&local_b0);
  if ((char)param_2[8] == '\0') {
    cVar2 = (char)param_2[0xb];
    iVar6 = 1;
    goto LAB_015d0bd4;
  }
  uVar5 = (uint)uVar9;
  if ((uint)(byte)param_2[9] == (uVar5 & 0xff)) {
    if ((uVar5 & 0xff) == 5) {
      bVar3 = *(byte *)((long)param_2 + 0x25);
      if (((bVar3 == 3) || ((byte)(bVar3 - 8) < 10)) &&
         ((uVar8 = (uint)((ulong)uVar9 >> 8), (uVar8 & 0xff) == 3 || (uVar8 - 8 & 0xff) < 10 &&
          ((uint)bVar3 == (uVar8 & 0xff))))) goto LAB_015d0c98;
    }
    else if (((uVar5 - 8 & 0xff) < 10) || ((uVar5 - 3 & 0xff) < 2)) {
      if ((uVar5 & 0xff) != 4) {
        return 1;
      }
LAB_015d0c98:
      if ((*(char *)((long)param_2 + 0x26) == '\0' && (uVar5 >> 0x10 & 0xff) == 0) ||
         (param_2[10] == (uint)((ulong)uVar9 >> 0x20))) {
        return 1;
      }
    }
  }
  cVar2 = (char)param_2[0xb];
  iVar6 = 2;
LAB_015d0bd4:
  iVar1 = -iVar6;
  if (cVar2 == '\0') {
    iVar1 = iVar6;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,iVar1);
  return 0;
}


