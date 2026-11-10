/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd75a4; name: FUN_01dd75a4
 */


void FUN_01dd75a4(long param_1)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_40;
  int local_34;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 500) == '\0') {
    FUN_01dd77c4(param_1);
    goto LAB_01dd7714;
  }
  iVar3 = *(int *)(param_1 + 0x108);
  if (iVar3 == 0) {
    lVar2 = FUN_01195854();
    uVar6 = (uint)*(byte *)(lVar2 + 0x570);
    iVar5 = 0;
    iVar3 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar5 = 1;
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        uVar6 = 0xffffffff;
        iVar5 = 3;
        goto LAB_01dd75dc;
      }
      iVar5 = 2;
    }
    uVar6 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd75dc:
  local_14 = (*(int *)(param_1 + 0x1f0) << 8) >> 0x14;
  if (iVar3 == 0) {
    local_14 = local_14 * 6 + ((*(int *)(param_1 + 0x1ec) << 8) >> 0x14);
  }
  else if ((iVar3 != 1) && (iVar3 != 2)) {
    local_14 = 1;
  }
  local_18 = *(int *)(param_1 + 0x1ec) >> 0x18;
  local_34 = *(int *)(param_1 + 0x1f0) >> 0x18;
  if (iVar5 == 3) {
    return;
  }
  if (uVar6 == 0xffffffff) {
    return;
  }
  if (local_14 == -1) {
    return;
  }
  sVar1 = FUN_01dc7350(*(undefined8 *)(param_1 + 0x1a0),iVar5,uVar6,&local_14,&local_18,&local_34);
  *(short *)(param_1 + 0x1e2) = sVar1;
  if (sVar1 == 0) {
    FUN_01dd785c(param_1);
    return;
  }
  local_40 = FUN_014e2a48(iVar5,local_14);
  FUN_014e4eac(param_1,&local_40);
  FUN_01dd78b4(param_1);
  FUN_01dd7a14(param_1,iVar5,uVar6,local_14,local_18,local_34);
  FUN_01dd81d4(param_1,iVar5,1);
  FUN_01dd8818(param_1,*(undefined2 *)(param_1 + 0x1e2));
  FUN_01888a50(param_1,1);
  iVar5 = *(int *)(param_1 + 0x1d8);
  iVar4 = *(int *)(param_1 + 0x108);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    iVar3 = *(int *)(param_1 + 0x1dc) + -1;
  }
  if (iVar4 == 0) {
    lVar2 = FUN_01195854();
    uVar6 = (uint)*(byte *)(lVar2 + 0x570);
    iVar4 = *(int *)(param_1 + 0x108);
  }
  else if (iVar4 - 1U < 2) {
    uVar6 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (iVar4 == 0) {
    iVar3 = iVar5 + iVar3 * 6;
  }
  else if ((iVar4 != 1) && (iVar4 != 2)) {
    iVar3 = 1;
  }
  FUN_014e89c0(param_1,0,uVar6,iVar3);
  if (*(ushort *)(param_1 + 0x1e2) < 2) {
    *(undefined4 *)(param_1 + 0x29c) = 0;
    return;
  }
LAB_01dd7714:
  *(uint *)(param_1 + 0x29c) = (uint)(3 < *(int *)(param_1 + 0x284) - 1U) << 1;
  return;
}


