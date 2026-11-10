/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a2f98; name: FUN_030a2f98
 */


void FUN_030a2f98(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 auStack_260 [448];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  if (0 < (int)uVar7) {
    uVar10 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar10 * 8) == lVar3) goto LAB_030a3074;
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  local_90 = 1;
  uStack_88 = 0;
  uStack_78 = 0;
  local_a0 = PTR_DAT_047e34b8 + 0x10;
  uStack_98 = 0xffffffff;
  local_70 = 0x1bf;
  local_68 = 0;
  local_80 = auStack_260;
  memset(auStack_260,0,0x1c0);
  FUN_0322bd4c(&local_a0,"edge not on sweep line",0x16);
  iVar6 = FUN_03226f50(0x3cbb03f2,auStack_260,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar6 != 0) {
    CallSupervisor(0x26);
  }
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar10 = 0;
LAB_030a3074:
  iVar6 = (int)uVar10;
  uVar5 = iVar6 - 1;
  if (uVar7 != 0) {
    uVar1 = uVar7;
    if ((int)uVar5 <= (int)uVar7) {
      uVar1 = uVar5;
    }
    if (iVar6 < 1) {
      uVar1 = 0;
    }
    uVar10 = (ulong)uVar1;
    uVar2 = uVar7;
    if ((int)(iVar6 + 2U) <= (int)uVar7) {
      uVar2 = iVar6 + 2U;
    }
    uVar11 = 0;
    if (-3 < iVar6) {
      uVar11 = uVar2;
    }
    if (uVar11 == uVar7) {
      uVar11 = uVar7 - 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar11 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    if ((int)uVar1 < (int)uVar11) {
      uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 0x68) + uVar12);
        if (*(int *)(lVar8 + 0x1c) == 0) {
          FUN_030a4544(param_1,uVar10);
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + uVar12);
        }
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar7;
        uVar12 = uVar12 + 8;
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      } while (uVar11 != uVar7);
    }
  }
  *(long *)(*(long *)(param_1 + 0x68) + (long)iVar6 * 8) = lVar4;
  *(long *)(*(long *)(param_1 + 0x68) + ((long)iVar6 + 1U) * 8) = lVar3;
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  if ((*(int **)(lVar4 + 0x30) != (int *)0x0) && (**(int **)(lVar4 + 0x30) != -1)) {
    FUN_030a43d4(param_1 + 0x50);
    **(undefined4 **)(lVar4 + 0x30) = 0xffffffff;
  }
  FUN_030a40e4(param_1,uVar5);
  FUN_030a40e4(param_1,(long)iVar6 + 1U & 0xffffffff);
  iVar6 = 1;
  if (*(char *)(lVar3 + 4) == '\0') {
    iVar6 = -1;
  }
  iVar9 = -1;
  if (*(char *)(lVar4 + 4) == '\0') {
    iVar9 = 1;
  }
  *(int *)(lVar3 + 0x1c) = iVar9 + *(int *)(lVar3 + 0x1c);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar6;
  return;
}


