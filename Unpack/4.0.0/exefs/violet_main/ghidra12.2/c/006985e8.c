/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006985e8; name: FUN_006985e8
 */


void FUN_006985e8(long param_1,long param_2)

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
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 1:
    if (*(int *)(param_1 + 0x1c) == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00696bf8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069d958(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 1) {
        FUN_00696e64(uVar3,PTR_DAT_047cf7e0);
        return;
      }
    }
    FUN_00696e64(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  case 2:
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00696bf8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069da1c(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 2) {
        FUN_00696fbc(uVar3,PTR_DAT_047cf750);
        return;
      }
    }
    FUN_00696fbc(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  case 3:
    break;
  case 4:
    if (*(int *)(param_1 + 0x1c) == 4) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00696bf8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 4;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069de28(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 4) {
        FUN_006974c8(uVar3,PTR_DAT_047cf7c8);
        return;
      }
    }
    FUN_006974c8(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  case 5:
    if (*(int *)(param_1 + 0x1c) == 5) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00696bf8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 5;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069def0(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 5) {
        FUN_006975a8(uVar3,PTR_DAT_047cf780);
        return;
      }
    }
    FUN_006975a8(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  case 6:
    if (*(int *)(param_1 + 0x1c) == 6) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_00696bf8(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 6;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      uVar3 = FUN_0069dae4(puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      if (*(int *)(param_2 + 0x1c) != 6) {
        FUN_006970f8(uVar3,PTR_DAT_047cf7b0);
        return;
      }
    }
    FUN_006970f8(uVar3,*(undefined8 *)(param_2 + 0x10));
    return;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_00696bf8(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 3;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_0069dd58(puVar4);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_2 + 0x1c) != 3) {
      FUN_006972e8(uVar3,PTR_DAT_047cf798);
      return;
    }
  }
  FUN_006972e8(uVar3,*(undefined8 *)(param_2 + 0x10));
  return;
}


