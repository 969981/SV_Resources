/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03092c64; name: FUN_03092c64
 */


void FUN_03092c64(long param_1,int *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar1 = (long)*param_2;
  lVar3 = *(long *)(param_1 + 0x70);
  lVar8 = (long)*(int *)(param_1 + 200) + -1;
  iVar7 = *(int *)(lVar3 + lVar1 * 4);
  if (iVar7 != (int)lVar8) {
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0xc0) + lVar8 * 0x14);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar7 * 0x14);
    *puVar2 = *puVar5;
    puVar2[1] = puVar5[1];
    uVar4 = *(undefined8 *)(puVar5 + 2);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(puVar5 + 4);
    *(undefined8 *)(puVar2 + 2) = uVar4;
    *(undefined2 *)((long)puVar2 + 0x12) = *(undefined2 *)((long)puVar5 + 0x12);
    iVar6 = *(int *)(param_1 + 0x60);
    memcpy((void *)(*(long *)(param_1 + 0x130) + (long)(iVar6 * iVar7) * 4),
           (void *)(*(long *)(param_1 + 0x130) + (long)(iVar6 * (int)lVar8) * 4),(long)iVar6 << 2);
    iVar6 = *(int *)(*(long *)(param_1 + 0x80) + lVar8 * 4);
    *(int *)(*(long *)(param_1 + 0x80) + (long)iVar7 * 4) = iVar6;
    *(int *)(*(long *)(param_1 + 0x70) + (long)iVar6 * 4) = iVar7;
    lVar1 = (long)*param_2;
    lVar3 = *(long *)(param_1 + 0x70);
  }
  *(undefined4 *)(lVar3 + lVar1 * 4) = 0xffffffff;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  iVar7 = *(int *)(param_1 + 200);
  lVar1 = (long)iVar7 + -1;
  iVar6 = (int)lVar1;
  if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) < iVar6) {
    FUN_0309515c(param_1 + 0xc0,PTR_PTR_047d1a50,lVar1);
    if ((iVar6 <= *(int *)(param_1 + 200)) && (*(int *)(param_1 + 200) < iVar7)) goto LAB_03092d74;
  }
  *(int *)(param_1 + 200) = iVar6;
LAB_03092d74:
  lVar1 = (long)*(int *)(param_1 + 0x60) * (long)iVar6;
  iVar7 = (int)lVar1;
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar7) {
    FUN_02e9b320(param_1 + 0x130,PTR_PTR_047d1a50,lVar1);
  }
  if ((*(int *)(param_1 + 0x138) < iVar7) || (iVar7 < *(int *)(param_1 + 0x138))) {
    *(int *)(param_1 + 0x138) = iVar7;
  }
  return;
}


