/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e7ec4; name: FUN_030e7ec4
 */


void FUN_030e7ec4(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  if (uVar2 != (uint)lVar7) {
    lVar7 = FUN_030e7e50(param_1,*param_1 + lVar7 * 0x28);
    *(uint *)(lVar7 + 4) = uVar2;
  }
  lVar7 = *param_1 + (long)(int)uVar2 * 0x28;
  uVar6 = *(uint *)(lVar7 + 0x1c);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  if ((-1 < (int)uVar6) && (lVar5 = *(long *)(lVar7 + 0x10), lVar5 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar5,(ulong)uVar6 << 2);
  }
  *(long *)(lVar7 + 0x10) = 0;
  *(uint *)(lVar7 + 0x1c) = 0x80000000;
  lVar7 = (long)(int)param_1[1] + -1;
  uVar6 = (uint)lVar7;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar2) {
    puVar12 = (undefined4 *)(*param_1 + lVar7 * 0x28);
    puVar13 = (undefined4 *)(*param_1 + (long)(int)uVar2 * 0x28);
    *puVar13 = *puVar12;
    uVar3 = *(undefined2 *)(puVar12 + 3);
    puVar13[2] = puVar12[2];
    *(undefined2 *)(puVar13 + 3) = uVar3;
    *(undefined8 *)(puVar13 + 4) = 0;
    *(undefined8 *)(puVar13 + 6) = 0x8000000000000000;
    puVar4 = PTR_PTR_047d1a50;
    plVar1 = (long *)(puVar12 + 4);
    FUN_02ed67fc(plVar1,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar12 + 4);
    puVar8 = (undefined8 *)(puVar12 + 6);
    puVar13[6] = *(undefined4 *)puVar8;
    puVar11 = puVar12 + 7;
    puVar13[7] = *puVar11;
    *puVar8 = 0;
    *(undefined8 *)(puVar12 + 4) = 0;
    puVar13[8] = puVar12[8];
    *(undefined4 *)puVar8 = 0;
    if ((-1 < (int)*puVar11) && (*plVar1 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*plVar1,(ulong)*puVar11 << 2);
    }
    *plVar1 = 0;
    *puVar11 = 0x80000000;
  }
  lVar7 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  uVar10 = ((long)param_2 - lVar7 >> 3) + 1U & uVar9;
  while (puVar11 = (uint *)(lVar7 + uVar10 * 8), -1 < (int)puVar11[1]) {
    lVar5 = lVar7 + ((ulong)*puVar11 & uVar9 & 0xffffffff) * 8;
    uVar10 = (ulong)(int)uVar9;
    if ((uVar10 & (long)param_2 - lVar5 >> 3) < (uVar10 & (long)puVar11 - lVar5 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar11;
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar10 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar11;
    }
    uVar10 = ((ulong)((long)puVar11 - lVar7) >> 3) + 1 & uVar10;
  }
  param_2[1] = 0xffffffff;
  return;
}


