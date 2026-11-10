/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001282b0; name: FUN_001282b0
 */


int FUN_001282b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong *puVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_50;
  int local_48;
  
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0xb);
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_5;
  local_48 = FUN_00126c60();
  if (local_48 == 0) {
    iVar10 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    *(undefined1 *)(param_1 + 0xb) = uVar3;
    local_50 = *(long *)(param_1 + 0x30) + param_4;
    iVar6 = FUN_00126c60(param_1,&LAB_00128290,&local_50);
    iVar10 = local_48;
    local_48 = iVar6;
    while (local_48 != 0) {
      *(undefined8 *)(param_1 + 0x20) = uVar12;
      *(undefined1 *)(param_1 + 0xb) = uVar3;
      local_50 = *(long *)(param_1 + 0x30) + param_4;
      iVar6 = FUN_00126c60(param_1,&LAB_00128290,&local_50);
      iVar10 = local_48;
      local_48 = iVar6;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + param_4);
    local_48 = iVar10;
    if (iVar10 == 0) {
      bVar7 = 0;
    }
    else if (iVar10 == 5) {
      lVar9 = FUN_0013be00(param_1,"error in error handling",0x17);
      *plVar2 = lVar9;
      bVar7 = *(byte *)(lVar9 + 8) | 0x40;
    }
    else if (iVar10 == 4) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
      *plVar2 = lVar9;
      bVar7 = *(byte *)(lVar9 + 8) | 0x40;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x10);
      *plVar2 = *(long *)(lVar9 + -0x10);
      bVar7 = *(byte *)(lVar9 + -8);
    }
    *(byte *)(plVar2 + 1) = bVar7;
    lVar9 = *(long *)(param_1 + 0x20);
    *(long **)(param_1 + 0x10) = plVar2 + 2;
    plVar2 = plVar2 + 2;
    while (plVar5 = plVar2, lVar9 != 0) {
      puVar1 = (ulong *)(lVar9 + 8);
      lVar9 = *(long *)(lVar9 + 0x10);
      plVar2 = (long *)*puVar1;
      if ((long *)*puVar1 <= plVar5) {
        plVar2 = plVar5;
      }
    }
    iVar8 = (int)((ulong)((long)plVar5 - *(long *)(param_1 + 0x30)) >> 4);
    iVar6 = 0x14;
    if (0x13 < iVar8) {
      iVar6 = iVar8 + 1;
    }
    iVar4 = iVar6 * 3;
    iVar8 = 1000000;
    if (iVar4 < 0xf4241 || iVar6 < 0x7a121) {
      iVar8 = iVar6 * 2;
    }
    if (iVar6 < 0xf4241) {
      iVar6 = 1000000;
      if (iVar4 < 0xf4241) {
        iVar6 = iVar4;
      }
      if (iVar6 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30)) >> 4)) {
        FUN_00126ce0(param_1,iVar8,0);
      }
    }
    FUN_0013af50(param_1);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  return iVar10;
}


