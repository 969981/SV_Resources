/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f13ef0; name: FUN_00f13ef0
 */


int FUN_00f13ef0(long param_1)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined *local_50;
  undefined2 local_48;
  undefined2 local_46;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar8 = FUN_00cf44f4();
    uVar9 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar10 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_00f13da0(uVar8,uVar9,uVar10);
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = FUN_00e9987c();
  }
  uVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_46 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_50 = PTR_DAT_047d8ee0 + 0x10;
  local_48 = uVar2;
  uVar4 = FUN_00dedbf4(&local_50);
  uVar11 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar11 & 1) == 0) {
    uVar5 = FUN_00e97f74(*(undefined8 *)(param_1 + 0x70));
    uVar5 = uVar5 & 0xffff;
  }
  else {
    uVar5 = 0x1f;
  }
  uVar6 = FUN_00e8fae8(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x124) {
    iVar7 = 1;
  }
  else {
    iVar7 = ((uVar5 + (uVar4 & 0xff) * 2 + (uVar6 >> 2 & 0x3fff)) * (uVar3 & 0xff)) / 100 +
            (uVar3 & 0xff) + 10;
  }
  return iVar7;
}


