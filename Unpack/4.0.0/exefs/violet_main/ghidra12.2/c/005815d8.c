/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005815d8; name: FUN_005815d8
 */


void FUN_005815d8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0021d48c();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar6 + 0x10);
    lVar2 = *(long *)(uVar6 + 0x18);
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      lVar2 = uVar6 + 9;
      uVar1 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar2,uVar1);
  }
  if (*(int *)(param_2 + 0x1c) == 2) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00580ac0(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_00585fb0(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_00580d04(uVar3,PTR_DAT_047ce238);
        return;
      }
    }
    FUN_00580d04(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (*(int *)(param_2 + 0x1c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_00580ac0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_00585ef0(puVar4);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_2 + 0x1c) != 1) {
      FUN_00580c34(uVar3,PTR_DAT_047ce348);
      return;
    }
  }
  FUN_00580c34(uVar3,*(undefined8 *)(param_2 + 0x10));
  return;
}


