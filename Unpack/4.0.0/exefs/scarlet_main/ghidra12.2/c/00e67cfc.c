/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e67cfc; name: FUN_00e67cfc
 */


void FUN_00e67cfc(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  iVar4 = FUN_01539950(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_01539c9c(*(undefined8 *)(param_1 + 0x70));
  uVar1 = uVar3 ^ uVar2;
  if ((uVar1 & 0xfff0 ^ uVar1 >> 0x10) < 0x10) {
    iVar8 = 1;
    if ((uVar1 >> 0x10 ^ uVar2 & 0xffff) == (uVar3 & 0xffff)) {
      iVar8 = 2;
    }
    if (iVar4 == 0x22 || (uVar5 & 1) != 0) {
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 0;
  }
  FUN_00ef35cc(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar2 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  iVar4 = FUN_01539950(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_01539c9c(*(undefined8 *)(param_1 + 0x70));
  uVar1 = uVar3 ^ uVar2;
  if ((uVar1 & 0xfff0 ^ uVar1 >> 0x10) < 0x10) {
    iVar9 = 1;
    if ((uVar1 >> 0x10 ^ uVar2 & 0xffff) == (uVar3 & 0xffff)) {
      iVar9 = 2;
    }
    if (iVar4 == 0x22 || (uVar5 & 1) != 0) {
      iVar9 = 2;
    }
  }
  else {
    iVar9 = 0;
  }
  if (iVar8 == iVar9) {
    return;
  }
  uVar2 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  iVar4 = FUN_01539950(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_01539c9c(*(undefined8 *)(param_1 + 0x70));
  uVar1 = uVar3 ^ uVar2;
  if ((uVar1 & 0xfff0 ^ uVar1 >> 0x10) < 0x10) {
    iVar9 = 1;
    if ((uVar1 >> 0x10 ^ uVar2 & 0xffff) == (uVar3 & 0xffff)) {
      iVar9 = 2;
    }
    if (iVar4 == 0x22 || (uVar5 & 1) != 0) {
      iVar9 = 2;
    }
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 == iVar8) {
    return;
  }
  uVar6 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar7 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_01edc7e8(uVar6,uVar7,iVar8);
  FUN_00ef3280(*(undefined8 *)(param_1 + 0x70),uVar6);
  return;
}


