/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03357154; name: FUN_03357154
 */


undefined4 FUN_03357154(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_48;
  
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  plVar2 = (long *)(param_1 + 0xa0);
  local_48 = param_2;
  uVar6 = FUN_03335048(plVar2,&local_48);
  if (*(uint *)(param_1 + 0xa8) == uVar6) {
    uVar7 = uVar6;
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) <= (int)uVar6) {
      FUN_03335164(plVar2,PTR_PTR_047d1a50,(long)(int)(uVar6 + 1));
      uVar7 = *(uint *)(param_1 + 0xa8);
    }
    uVar5 = local_48;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar7 * 0x10);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *puVar1 = local_48;
    *(uint *)(param_1 + 0xa8) = uVar6 + 1;
    lVar9 = *(long *)(param_1 + 0xa0);
    iVar4 = *(int *)(lVar9 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8);
    uVar8 = *(uint *)(param_1 + 0x10);
    uVar7 = uVar8;
    if ((int)uVar8 <= iVar4 + 1) {
      uVar7 = iVar4 + 1;
    }
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)uVar7) {
      FUN_031d93e4(param_1 + 8,PTR_PTR_047d1a50,(long)(int)uVar7);
      uVar8 = *(uint *)(param_1 + 0x10);
    }
    if ((int)uVar8 < (int)uVar7) {
      *(uint *)(param_1 + 0x10) = uVar7;
      memset((void *)(*(long *)(param_1 + 8) + (long)(int)uVar8 * 8),0,
             (ulong)(uVar7 + ~uVar8) * 8 + 8);
    }
    else if ((int)uVar7 < (int)uVar8) {
      *(uint *)(param_1 + 0x10) = uVar7;
    }
    *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = uVar5;
    FUN_033749b8(param_1 + 0x70,iVar4,uVar5);
  }
  else {
    lVar9 = *plVar2;
  }
  return *(undefined4 *)(lVar9 + (long)(int)uVar6 * 0x10 + 8);
}


