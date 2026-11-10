/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335a1e0; name: FUN_0335a1e0
 */


int FUN_0335a1e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_44;
  long local_40;
  long lStack_38;
  
  if (param_2 == 0 && param_3 == 0) {
    return 0;
  }
  local_40 = param_2;
  lStack_38 = param_3;
  if (param_2 == 0) {
    local_44 = *(undefined4 *)(param_1 + 0x2d8);
    lVar3 = FUN_03335274(param_1 + 1000,&lStack_38,&local_44);
    lVar4 = *(long *)(param_1 + 1000);
  }
  else {
    local_44 = *(undefined4 *)(param_1 + 0x2d8);
    lVar3 = FUN_0335a328(param_1 + 0x3c8,&local_40,&local_44);
    lVar4 = *(long *)(param_1 + 0x3c8);
  }
  iVar2 = *(int *)(lVar4 + ((lVar3 << 0x20) >> 0x1c) + 8);
  if (iVar2 != *(int *)(param_1 + 0x2d8)) {
    return iVar2;
  }
  iVar1 = iVar2 + 1;
  if (iVar2 < (int)(*(uint *)(param_1 + 0x2dc) & 0x7fffffff)) {
    iVar7 = iVar2;
  }
  else {
    FUN_033277d4(param_1 + 0x2d0,PTR_PTR_047d1a50,(long)iVar1);
    iVar7 = *(int *)(param_1 + 0x2d8);
    if (iVar2 < iVar7) {
      if (iVar1 < iVar7) {
        *(int *)(param_1 + 0x2d8) = iVar1;
      }
      goto LAB_0335a2ec;
    }
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x2d0) + (long)iVar7 * 0x18);
  lVar3 = (long)iVar1 * 0x18 + (long)iVar7 * -0x18;
  *(int *)(param_1 + 0x2d8) = iVar1;
  do {
    *(undefined4 *)((long)puVar5 + 0x14) = 0;
    lVar3 = lVar3 + -0x18;
    *(undefined1 *)(puVar5 + 2) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar5 + 3;
  } while (lVar3 != 0);
LAB_0335a2ec:
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x2d0) + (long)iVar2 * 0x18);
  uVar6 = **(undefined8 **)(param_1 + 0x2c0);
  *(undefined4 *)((long)puVar5 + 0x14) = 0;
  *puVar5 = 0;
  puVar5[1] = uVar6;
  *(undefined1 *)(puVar5 + 2) = 1;
  return iVar2;
}


