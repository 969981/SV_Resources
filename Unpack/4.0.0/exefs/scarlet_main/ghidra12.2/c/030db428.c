/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030db428; name: FUN_030db428
 */


void FUN_030db428(long *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  
  lVar5 = (long)(int)param_1[1] + -1;
  uVar1 = param_2[1];
  lVar8 = (long)(int)uVar1;
  if (uVar1 != (uint)lVar5) {
    lVar5 = FUN_030db3b4(param_1,*param_1 + lVar5 * 0x30);
    *(uint *)(lVar5 + 4) = uVar1;
  }
  lVar9 = *param_1;
  plVar11 = (long *)(lVar9 + lVar8 * 0x30 + 0x20);
  lVar5 = *plVar11;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar5,0);
    *plVar11 = (long)&DAT_03d7702c;
    *(undefined4 *)(lVar9 + lVar8 * 0x30 + 0x28) = 0;
  }
  lVar5 = lVar9 + lVar8 * 0x30;
  piVar12 = (int *)(lVar5 + 0x18);
  iVar2 = *piVar12;
  plVar11 = (long *)(lVar5 + 0x10);
  lVar5 = *plVar11;
  if (iVar2 != 0) {
    lVar15 = (long)iVar2 * 0x68;
    do {
      FUN_030d9a14(lVar5 + -0x60 + lVar15);
      lVar15 = lVar15 + -0x68;
    } while (lVar15 != 0);
  }
  *piVar12 = 0;
  puVar10 = (uint *)(lVar9 + lVar8 * 0x30 + 0x1c);
  uVar4 = *puVar10;
  if ((-1 < (int)uVar4) && (*plVar11 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*plVar11,(ulong)uVar4 * 0x68);
  }
  *plVar11 = 0;
  *puVar10 = 0x80000000;
  lVar5 = (long)(int)param_1[1] + -1;
  uVar4 = (uint)lVar5;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar1) {
    puVar13 = (undefined4 *)(*param_1 + lVar5 * 0x30);
    puVar14 = (undefined4 *)(*param_1 + lVar8 * 0x30);
    *puVar14 = *puVar13;
    puVar14[2] = puVar13[2];
    *(undefined8 *)(puVar14 + 4) = 0;
    *(undefined8 *)(puVar14 + 6) = 0x8000000000000000;
    puVar3 = PTR_PTR_047d1a50;
    plVar11 = (long *)(puVar13 + 4);
    FUN_030dad34(plVar11,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar13 + 4);
    piVar12 = puVar13 + 6;
    puVar14[6] = *piVar12;
    puVar10 = puVar13 + 7;
    puVar14[7] = *puVar10;
    piVar12[0] = 0;
    piVar12[1] = 0;
    *(undefined8 *)(puVar13 + 4) = 0;
    *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar13 + 8);
    puVar14[10] = puVar13[10];
    *(undefined **)(puVar13 + 8) = &DAT_03d7702c;
    puVar13[10] = 0;
    if (*piVar12 != 0) {
      lVar8 = *(long *)(puVar13 + 4);
      lVar5 = (long)*piVar12 * 0x68;
      do {
        FUN_030d9a14(lVar8 + -0x60 + lVar5);
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
    }
    *piVar12 = 0;
    if ((-1 < (int)*puVar10) && (*plVar11 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*plVar11,(ulong)*puVar10 * 0x68);
    }
    *plVar11 = 0;
    *puVar10 = 0x80000000;
  }
  lVar5 = param_1[2];
  uVar6 = (ulong)(int)param_1[3];
  uVar7 = ((long)param_2 - lVar5 >> 3) + 1U & uVar6;
  while (puVar10 = (uint *)(lVar5 + uVar7 * 8), -1 < (int)puVar10[1]) {
    lVar8 = lVar5 + ((ulong)*puVar10 & uVar6 & 0xffffffff) * 8;
    uVar7 = (ulong)(int)uVar6;
    if ((uVar7 & (long)param_2 - lVar8 >> 3) < (uVar7 & (long)puVar10 - lVar8 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar10;
      uVar6 = (ulong)*(uint *)(param_1 + 3);
      lVar5 = param_1[2];
      uVar7 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar10;
    }
    uVar7 = ((ulong)((long)puVar10 - lVar5) >> 3) + 1 & uVar7;
  }
  param_2[1] = 0xffffffff;
  return;
}


