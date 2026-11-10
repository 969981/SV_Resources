/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e4188; name: FUN_004e4188
 */


void FUN_004e4188(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  uVar8 = *(ulong *)(param_2 + 8);
  if ((uVar8 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_00264e54();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar5,(uVar8 & 0xfffffffffffffffe) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    FUN_00531134(param_1 + 0x18,iVar3 + *(int *)(param_2 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4),*(void **)(param_2 + 0x20),
           (long)*(int *)(param_2 + 0x18) << 2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    FUN_00531134(param_1 + 0x30,iVar3 + *(int *)(param_2 + 0x30));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_2 + 0x30);
    memcpy((void *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 4),*(void **)(param_2 + 0x38),
           (long)*(int *)(param_2 + 0x30) << 2);
  }
  FUN_004e80a8(param_1 + 0x48,param_2 + 0x48);
  puVar4 = PTR_DAT_047cba80;
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      plVar1 = (long *)(param_1 + 0x60);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar1;
      }
      else {
        puVar6 = (ulong *)*puVar6;
        puVar9 = (undefined *)*plVar1;
      }
      if (puVar9 == puVar4) {
        FUN_001fcdc8(plVar1,puVar6);
      }
      else {
        FUN_001fcec0(puVar9,uVar7);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      plVar1 = (long *)(param_1 + 0x68);
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar1;
      }
      else {
        puVar6 = (ulong *)*puVar6;
        puVar9 = (undefined *)*plVar1;
      }
      if (puVar9 == puVar4) {
        FUN_001fcdc8(plVar1,puVar6);
        return;
      }
      FUN_001fcec0(puVar9,uVar7);
    }
  }
  return;
}


