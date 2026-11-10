/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057c8cc; name: FUN_0057c8cc
 */


void FUN_0057c8cc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0021d48c();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar7 + 0x10);
    lVar2 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar2 = uVar7 + 9;
      uVar1 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar2,uVar1);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 3) {
    if (*(int *)(param_1 + 0x1c) == 3) goto LAB_0057c998;
    FUN_0057bdc0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 3;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00585778(puVar4);
    *(long *)(param_1 + 0x10) = lVar5;
    if (*(int *)(param_2 + 0x1c) != 3) {
      uVar7 = *(ulong *)(PTR_DAT_047ce270 + 8);
      if ((uVar7 & 1) == 0) {
        return;
      }
      goto LAB_0057ca54;
    }
LAB_0057c9e4:
    uVar7 = *(ulong *)(*(long *)(param_2 + 0x10) + 8);
  }
  else {
    if (iVar3 == 2) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        FUN_0057bdc0(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        uVar6 = FUN_005857e8(puVar4);
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        if (*(int *)(param_2 + 0x1c) != 2) {
          FUN_0057bc2c(uVar6,PTR_DAT_047ce0d0);
          return;
        }
      }
      FUN_0057bc2c(uVar6,*(undefined8 *)(param_2 + 0x10));
      return;
    }
    if (iVar3 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
LAB_0057c998:
      lVar5 = *(long *)(param_1 + 0x10);
      goto LAB_0057c9e4;
    }
    FUN_0057bdc0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00585708(puVar4);
    *(long *)(param_1 + 0x10) = lVar5;
    if (*(int *)(param_2 + 0x1c) == 1) goto LAB_0057c9e4;
    uVar7 = *(ulong *)(PTR_DAT_047ce378 + 8);
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
LAB_0057ca54:
  uVar7 = uVar7 & 0xfffffffffffffffe;
  if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
    lVar5 = FUN_0021d48c();
  }
  else {
    lVar5 = (*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8;
  }
  uVar1 = *(ulong *)(uVar7 + 0x10);
  lVar2 = *(long *)(uVar7 + 0x18);
  if ((*(byte *)(uVar7 + 8) & 1) == 0) {
    lVar2 = uVar7 + 9;
    uVar1 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
  }
  FUN_0021d540(lVar5,lVar2,uVar1);
  return;
}


