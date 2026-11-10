/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03095c20; name: FUN_03095c20
 */


void FUN_03095c20(long *param_1,uint *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  
  lVar9 = (long)(int)param_1[1] + -1;
  uVar3 = param_2[1];
  lVar12 = (long)(int)uVar3;
  if (uVar3 != (uint)lVar9) {
    lVar9 = FUN_03095288(param_1,*param_1 + lVar9 * 0x38);
    *(uint *)(lVar9 + 4) = uVar3;
  }
  lVar9 = *param_1;
  lVar16 = lVar9 + lVar12 * 0x38;
  uVar8 = *(uint *)(lVar16 + 0x34);
  *(undefined4 *)(lVar16 + 0x30) = 0;
  if ((-1 < (int)uVar8) && (lVar6 = *(long *)(lVar16 + 0x28), lVar6 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar6,(ulong)uVar8 << 2);
  }
  lVar6 = lVar9 + lVar12 * 0x38;
  *(long *)(lVar16 + 0x28) = 0;
  *(uint *)(lVar16 + 0x34) = 0x80000000;
  uVar8 = *(uint *)(lVar6 + 0x24);
  *(undefined4 *)(lVar6 + 0x20) = 0;
  if ((-1 < (int)uVar8) && (lVar7 = *(long *)(lVar6 + 0x18), lVar7 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar7,(ulong)uVar8 << 2);
  }
  lVar9 = lVar9 + lVar12 * 0x38;
  *(long *)(lVar6 + 0x18) = 0;
  *(uint *)(lVar6 + 0x24) = 0x80000000;
  puVar15 = (uint *)(lVar9 + 0x14);
  uVar8 = *puVar15;
  *(undefined4 *)(lVar9 + 0x10) = 0;
  if ((-1 < (int)uVar8) && (lVar9 = *(long *)(lVar16 + 8), lVar9 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar9,(ulong)uVar8 * 0x14);
  }
  *(long *)(lVar16 + 8) = 0;
  *puVar15 = 0x80000000;
  lVar9 = (long)(int)param_1[1] + -1;
  uVar8 = (uint)lVar9;
  *(uint *)(param_1 + 1) = uVar8;
  if (uVar8 != uVar3) {
    puVar19 = (undefined4 *)(*param_1 + lVar9 * 0x38);
    puVar14 = (undefined4 *)(*param_1 + lVar12 * 0x38);
    *puVar14 = *puVar19;
    *(undefined8 *)(puVar14 + 2) = 0;
    *(undefined8 *)(puVar14 + 4) = 0x8000000000000000;
    puVar5 = PTR_PTR_047d1a50;
    plVar1 = (long *)(puVar19 + 2);
    FUN_03094dcc(plVar1,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(puVar19 + 2);
    puVar17 = (undefined8 *)(puVar19 + 4);
    puVar14[4] = *(undefined4 *)puVar17;
    plVar2 = (long *)(puVar19 + 6);
    puVar15 = puVar19 + 5;
    puVar14[5] = *puVar15;
    *(undefined8 *)(puVar19 + 2) = 0;
    *puVar17 = 0;
    *(undefined8 *)(puVar14 + 6) = 0;
    *(undefined8 *)(puVar14 + 8) = 0x8000000000000000;
    FUN_01339774(plVar2,puVar5);
    *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(puVar19 + 6);
    puVar13 = (undefined8 *)(puVar19 + 8);
    puVar14[8] = *(undefined4 *)puVar13;
    puVar18 = puVar19 + 9;
    puVar14[9] = *puVar18;
    *(undefined8 *)(puVar19 + 6) = 0;
    *puVar13 = 0;
    *(undefined8 *)(puVar14 + 10) = 0;
    *(undefined8 *)(puVar14 + 0xc) = 0x8000000000000000;
    FUN_03094e44(puVar19 + 10,puVar5);
    *(undefined8 *)(puVar14 + 10) = *(undefined8 *)(puVar19 + 10);
    uVar4 = puVar19[0xd];
    puVar14[0xc] = puVar19[0xc];
    puVar14[0xd] = uVar4;
    *(undefined8 *)(puVar19 + 0xc) = 0;
    *(undefined8 *)(puVar19 + 10) = 0;
    puVar19[0xd] = 0x80000000;
    *(undefined4 *)puVar13 = 0;
    if ((-1 < (int)*puVar18) && (*plVar2 != 0)) {
      (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*plVar2,(ulong)*puVar18 << 2);
    }
    *plVar2 = 0;
    *puVar18 = 0x80000000;
    *(undefined4 *)puVar17 = 0;
    if ((-1 < (int)*puVar15) && (*plVar1 != 0)) {
      (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*plVar1,(ulong)*puVar15 * 0x14);
    }
    *plVar1 = 0;
    *puVar15 = 0x80000000;
  }
  lVar9 = param_1[2];
  uVar10 = (ulong)(int)param_1[3];
  uVar11 = ((long)param_2 - lVar9 >> 3) + 1U & uVar10;
  while (puVar15 = (uint *)(lVar9 + uVar11 * 8), -1 < (int)puVar15[1]) {
    lVar12 = lVar9 + ((ulong)*puVar15 & uVar10 & 0xffffffff) * 8;
    uVar11 = (ulong)(int)uVar10;
    if ((uVar11 & (long)param_2 - lVar12 >> 3) < (uVar11 & (long)puVar15 - lVar12 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar15;
      uVar10 = (ulong)*(uint *)(param_1 + 3);
      lVar9 = param_1[2];
      uVar11 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar15;
    }
    uVar11 = ((ulong)((long)puVar15 - lVar9) >> 3) + 1 & uVar11;
  }
  param_2[1] = 0xffffffff;
  return;
}


