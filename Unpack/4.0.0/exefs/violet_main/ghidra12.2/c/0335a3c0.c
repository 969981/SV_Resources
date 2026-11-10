/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335a3c0; name: FUN_0335a3c0
 */


undefined4 FUN_0335a3c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_48;
  
  uVar3 = *(undefined4 *)(param_1 + 0x2d8);
  plVar1 = (long *)(param_1 + 0x3c8);
  local_48 = param_2;
  uVar5 = FUN_033572a8(plVar1,&local_48);
  if (*(uint *)(param_1 + 0x3d0) == uVar5) {
    uVar6 = uVar5;
    if ((int)(*(uint *)(param_1 + 0x3d4) & 0x7fffffff) <= (int)uVar5) {
      FUN_031d33d4(plVar1,PTR_PTR_047d1a50,(long)(int)(uVar5 + 1));
      uVar6 = *(uint *)(param_1 + 0x3d0);
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x3c8) + (long)(int)uVar6 * 0x10);
    *puVar9 = param_2;
    *(undefined4 *)(puVar9 + 1) = uVar3;
    lVar11 = *(long *)(param_1 + 0x3c8);
    *(uint *)(param_1 + 0x3d0) = uVar5 + 1;
    iVar4 = *(int *)(lVar11 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
    iVar7 = *(int *)(param_1 + 0x2d8);
    iVar2 = iVar7;
    if (iVar7 <= iVar4 + 1) {
      iVar2 = iVar4 + 1;
    }
    if ((int)(*(uint *)(param_1 + 0x2dc) & 0x7fffffff) < iVar2) {
      FUN_033277d4(param_1 + 0x2d0,PTR_PTR_047d1a50,(long)iVar2);
      iVar7 = *(int *)(param_1 + 0x2d8);
    }
    if (iVar7 < iVar2) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x2d0) + (long)iVar7 * 0x18);
      lVar8 = (long)iVar2 * 0x18 + (long)iVar7 * -0x18;
      *(int *)(param_1 + 0x2d8) = iVar2;
      do {
        *(undefined4 *)((long)puVar9 + 0x14) = 0;
        lVar8 = lVar8 + -0x18;
        *(undefined1 *)(puVar9 + 2) = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 3;
      } while (lVar8 != 0);
    }
    else if (iVar2 < iVar7) {
      *(int *)(param_1 + 0x2d8) = iVar2;
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x2d0) + (long)iVar4 * 0x18);
    uVar10 = **(undefined8 **)(param_1 + 0x2c0);
    *(undefined1 *)(puVar9 + 2) = 0;
    *puVar9 = 0;
    puVar9[1] = uVar10;
    *(undefined4 *)((long)puVar9 + 0x14) = 0;
  }
  else {
    lVar11 = *plVar1;
  }
  return *(undefined4 *)(lVar11 + (long)(int)uVar5 * 0x10 + 8);
}


