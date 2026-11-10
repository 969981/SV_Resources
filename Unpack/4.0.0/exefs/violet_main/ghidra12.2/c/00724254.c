/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00724254; name: FUN_00724254
 */


void FUN_00724254(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = FUN_0021d48c();
    }
    else {
      lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar7,lVar2,uVar1);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 3) {
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00723960(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 3;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar5 = FUN_006ffab4(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      if (*(int *)(param_2 + 0x1c) != 3) {
        FUN_006ff9b4(uVar5,PTR_DAT_047d0040);
        return;
      }
    }
    FUN_006ff9b4(uVar5,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (iVar3 == 2) {
    uVar4 = *(undefined1 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 2) {
      FUN_00723960(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
    }
    *(undefined1 *)(param_1 + 0x10) = uVar4;
  }
  else if (iVar3 == 1) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00723960(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar5 = FUN_0071d248(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      if (*(int *)(param_2 + 0x1c) != 1) {
        FUN_0071c630(uVar5,PTR_DAT_047cffc8);
        return;
      }
    }
    FUN_0071c630(uVar5,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  return;
}


