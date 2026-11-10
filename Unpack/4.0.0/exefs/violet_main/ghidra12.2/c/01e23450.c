/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e23450; name: FUN_01e23450
 */


undefined4 FUN_01e23450(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  uVar8 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar8 & 1) == 0) {
    iVar1 = FUN_00e97f74(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar1 = 0x1f;
  }
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 >> 1 & 1) == 0) {
    iVar3 = FUN_00e982bc(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar3 = 0x1f;
  }
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 >> 2 & 1) == 0) {
    iVar4 = FUN_00e98604(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar4 = 0x1f;
  }
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 >> 3 & 1) == 0) {
    iVar5 = FUN_00e9894c(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar5 = 0x1f;
  }
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 >> 4 & 1) == 0) {
    iVar6 = FUN_00e98fdc(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar6 = 0x1f;
  }
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 >> 5 & 1) == 0) {
    iVar7 = FUN_00e98c94(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    iVar7 = 0x1f;
  }
  iVar7 = iVar3 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7;
  if (iVar7 < 0x5b) {
    uVar9 = 0;
  }
  else if (iVar7 < 0x79) {
    uVar9 = 1;
  }
  else {
    uVar9 = 2;
    if (0x96 < iVar7) {
      uVar9 = 3;
    }
  }
  return uVar9;
}


